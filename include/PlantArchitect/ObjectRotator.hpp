#pragma once
#include <Application.hpp>
using namespace UniEngine;
namespace PlantArchitect {
class ObjectRotator : public IPrivateComponent {
public:
  float m_rotateSpeed;
  glm::vec3 m_rotation = glm::vec3(0, 0, 0);
  void OnGui() override;
  void FixedUpdate() override;

  void Serialize(YAML::Emitter &out) override;
  void Deserialize(const YAML::Node &in) override;
  void Clone(const std::shared_ptr<IPrivateComponent> &target) override;
};
} // namespace PlantFactory
