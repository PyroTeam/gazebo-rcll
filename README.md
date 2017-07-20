# RoboCup-Logistics Gazebo Simulation

This repository includes the models, worlds and plugins to simulate the RoboCup Logistics League with Gazebo.

## Gazebo
[Installing Gazebo](http://gazebosim.org)


Clone this repository and then set the following environmental variables by adding them to your ~/.bashrc.
You may have to change the path depending on where you cloned the repository.

```bash
source /usr/share/gazebo/setup.sh
export GAZEBO_RCLL=~/gazebo-rcll
export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:$GAZEBO_RCLL/plugins/lib/gazebo
export GAZEBO_MODEL_PATH=$GAZEBO_RCLL/models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:$GAZEBO_RCLL/models/carologistics
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:$GAZEBO_RCLL/models/pyro
```

Optional:
If you want to bypass the models dowload from the online database, you MUST download the few community models used in `gazebo_rcll` into a choosen directory and add some environmental variables to your ~/.bashrc.

```bash
# Get the needed models
MODELS_DIR="${HOME}/.gazebo/models"
mkdir -p ${MODELS_DIR}
wget -q -O - http://models.gazebosim.org/ground_plane/model.tar.gz | tar xvzf - -C ${MODELS_DIR}
wget -q -O - http://models.gazebosim.org/sun/model.tar.gz | tar xvzf - -C ${MODELS_DIR}
wget -q -O - http://models.gazebosim.org/hokuyo/model.tar.gz | tar xvzf - -C ${MODELS_DIR}
```

```bash
# Add this to your ~/.bashrc
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:${HOME}/.gazebo/
# For gazebo_ros users, the following env var MUST be added to /usr/share/gazebo/setup.sh rather than your ~/.bashrc
# gazebo_ros scripts (like gzserver) source /usr/share/gazebo/setup.sh and thus would erase your var GAZEBO_MODEL_DATABASE_URI
export GAZEBO_MODEL_DATABASE_URI=""
```

NOTE:
When you want to start Gazebo as a ROS node you need to add those changes in the /usr/share/gazebo/setup.sh.

Then you can start gazebo from the terminal.

## References
The work is based on [this project](http://www.fawkesrobotics.org/projects/llsf-sim/) where you can find more information and an example how to interface the simulation.


