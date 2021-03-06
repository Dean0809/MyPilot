#pragma once

#include "runtime/function/physics/physics_shape_base.h"

namespace Pilot
{
    class PhysicsSphereShape : public PhysicsShapeBase
    {
    public:
        PhysicsSphereShape(Transform* transform, float radius) : PhysicsShapeBase(transform), m_radius(radius)
        {
            // PhysicsShapeBase::PhysicsShapeBase(transform);
        }
        ~PhysicsSphereShape() override {}

        float getRadius() const { return m_radius; }

    private:
        float m_radius {0.f};
    };
} // namespace Pilot
