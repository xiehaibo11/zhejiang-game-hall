
/* cocos2d::Layer::setAccelerometerInterval(double) */

void __thiscall cocos2d::Layer::setAccelerometerInterval(Layer *this,double param_1)

{
  if ((this[0x2f9] != (Layer)0x0) && (this[0x1f8] != (Layer)0x0)) {
    Device::setAccelerometerInterval((float)param_1);
    return;
  }
  return;
}

