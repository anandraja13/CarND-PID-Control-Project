# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---
## Effect of Parameters
This section describes the effect of each of the three parameters.
### Proportional Gain
The proportional gain `Kp` is responsible for getting closest to the set point. Too much proportional gain leads to oscillations.

### Derivative Gain
The derivative gain `Kd` is responsible for correcting for the oscillatory behavior brought on by proportional controllers using derivatives. This comes with the downside of amplifying noise in the incoming signal.

### Integral Gain
The integral gain `Ki` integrates error over time to correct for the derivative component. 


## Choosing Parameters
Manual tuning is used to choose parameters.

## Recordings
Two recordings are part of the [recordings folder](https://github.com/anandraja13/CarND-PID-Control-Project/tree/master/recordings). The [initial_params.mov](https://github.com/anandraja13/CarND-PID-Control-Project/blob/master/recordings/initial_params.mov) shows a recording with an initial set of tuning parameters and [updated_params.mov](https://github.com/anandraja13/CarND-PID-Control-Project/blob/master/recordings/updated_params.mov) shows a recording with an updated set. Both sets are reasonable choices and drive safely through the track.

__Note:__ The recordings were done on a not-so-new MAC using the QuickTime player screen recording feature. This adds significant compute overhead to the gaming engine simulator and slows down the rate of messages coming in. This leads to behavior that is more oscillatory than when QuickTime is not used.



