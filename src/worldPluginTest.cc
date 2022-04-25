#include <ignition/math/Pose3.hh>
#include "gazebo/physics/physics.hh"
#include "gazebo/common/common.hh"
#include "gazebo/gazebo.hh"

namespace gazebo
{
    class worldPluginTest : public WorldPlugin
    {
    public: void Load(physics::WorldPtr _parent, sdf::ElementPtr /*_sdf*/)
		{
			_parent->InsertModelFile("model://box");
		}
    
	};

    // Register this plugin with the simulator
    GZ_REGISTER_WORLD_PLUGIN(worldPluginTest)
}