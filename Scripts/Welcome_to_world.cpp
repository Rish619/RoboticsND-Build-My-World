#include <gazebo-9/gazebo/gazebo.hh>

namespace gazebo {
    class WorldPluginMyRobo : public WorldPlugin {
        public: WorldPluginMyRobo() : WorldPlugin() {
            printf("Welcome to Rishi's World!\n");
        }
        
        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
        }
    };
    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobo)
}