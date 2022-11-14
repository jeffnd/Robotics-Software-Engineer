#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginProject1 : public WorldPlugin
  {
    public: WorldPluginProject1() : WorldPlugin()
            {
              printf("Welcome to Cheng’s World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginProject1)
}
