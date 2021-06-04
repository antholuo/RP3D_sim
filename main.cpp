#include <iostream>
#include <reactphysics3d/reactphysics3d.h>
#include <iostream>

using namespace reactphysics3d;

int main(int argc, char** argv) {
    PhysicsCommon physicsCommon;

    PhysicsWorld* world = physicsCommon.createPhysicsWorld();

    Vector3 position(0, 20, 0);
    Quaternion orientation = Quaternion::identity();
    Transform transform(position, orientation);
    RigidBody* body = world->createRigidBody(transform);

    const decimal timeStep = 1.0f / 60.0f;

    for (int i=0; i < 20; i++) {
        world->update(timeStep);

        const Transform& transform = body->getTransform();
        const Vector3& position = transform.getPosition();

        std::cout <<"Body Position: (" << position.x <<"," << position.y <<","<<position.z<<")" <<std::endl;
    }
    std::cout << "Hello World";
    return 0;
}