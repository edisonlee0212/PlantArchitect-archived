#pragma once
#include <Volume.hpp>
using namespace UniEngine;
namespace PlantArchitect {
class CubeVolume : public Volume {
public:
  void ApplyMeshRendererBounds();
  void OnCreate() override;
  bool m_displayPoints = false;
  bool m_displayBounds = false;
  Bound m_minMaxBound;
  void OnGui() override;
  bool InVolume(const GlobalTransform& globalTransform, const glm::vec3 &position) override;
  bool InVolume(const glm::vec3 &position) override;
  glm::vec3 GetRandomPoint() override;
  void Serialize(YAML::Emitter &out) override;
  void Deserialize(const YAML::Node &in) override;

  void CollectAssetRef(std::vector<AssetRef> &list) override;
  void Clone(const std::shared_ptr<IPrivateComponent> &target) override;
};
} // namespace PlantFactory