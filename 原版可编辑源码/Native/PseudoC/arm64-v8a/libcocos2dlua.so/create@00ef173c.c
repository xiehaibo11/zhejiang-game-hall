
/* cocos2d::CameraBackgroundSkyBoxBrush::create() */

CameraBackgroundSkyBoxBrush * cocos2d::CameraBackgroundSkyBoxBrush::create(void)

{
  CameraBackgroundSkyBoxBrush *this;
  ulong uVar1;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (CameraBackgroundSkyBoxBrush *)0x0) {
    CameraBackgroundSkyBoxBrush(this);
    uVar1 = (**(code **)(*(long *)this + 0x28))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (CameraBackgroundSkyBoxBrush *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ef17a4 to 00ff17af has its CatchHandler @ 00ef18ac */
  return this;
}

