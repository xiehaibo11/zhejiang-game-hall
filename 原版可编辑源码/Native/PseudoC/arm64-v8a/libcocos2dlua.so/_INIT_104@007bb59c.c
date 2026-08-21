
void _INIT_104(void)

{
  DAT_01788de8 = 0;
  DAT_01788df0 = 0;
  DAT_01788df8 = 0x3f0000003dcccccd;
  DAT_01788e00 = 0x3f000000;
  cocos2d::Vec3::Vec3((Vec3 *)cocos2d::PUEmitter::DEFAULT_POSITION,0.0,0.0,0.0);
  cocos2d::Vec3::Vec3((Vec3 *)&cocos2d::PUEmitter::DEFAULT_DIRECTION,0.0,1.0,0.0);
  cocos2d::Quaternion::Quaternion
            ((Quaternion *)cocos2d::PUEmitter::DEFAULT_ORIENTATION,1.0,0.0,0.0,0.0);
  __cxa_atexit(cocos2d::Quaternion::~Quaternion,cocos2d::PUEmitter::DEFAULT_ORIENTATION,
               &PTR_LOOP_016979c0);
  cocos2d::Quaternion::Quaternion
            ((Quaternion *)cocos2d::PUEmitter::DEFAULT_ORIENTATION_RANGE_START,1.0,0.0,0.0,0.0);
  __cxa_atexit(cocos2d::Quaternion::~Quaternion,cocos2d::PUEmitter::DEFAULT_ORIENTATION_RANGE_START,
               &PTR_LOOP_016979c0);
  cocos2d::Quaternion::Quaternion
            ((Quaternion *)cocos2d::PUEmitter::DEFAULT_ORIENTATION_RANGE_END,1.0,0.0,0.0,0.0);
  __cxa_atexit(cocos2d::Quaternion::~Quaternion,cocos2d::PUEmitter::DEFAULT_ORIENTATION_RANGE_END,
               &PTR_LOOP_016979c0);
  cocos2d::Vec4::Vec4((Vec4 *)cocos2d::PUEmitter::DEFAULT_START_COLOUR_RANGE,0.0,0.0,0.0,1.0);
  __cxa_atexit(cocos2d::Vec4::~Vec4,cocos2d::PUEmitter::DEFAULT_START_COLOUR_RANGE,
               &PTR_LOOP_016979c0);
  cocos2d::Vec4::Vec4((Vec4 *)cocos2d::PUEmitter::DEFAULT_END_COLOUR_RANGE,1.0,1.0,1.0,1.0);
  __cxa_atexit(cocos2d::Vec4::~Vec4,cocos2d::PUEmitter::DEFAULT_END_COLOUR_RANGE,&PTR_LOOP_016979c0)
  ;
  cocos2d::Vec4::Vec4((Vec4 *)cocos2d::PUEmitter::DEFAULT_COLOUR,1.0,1.0,1.0,1.0);
  __cxa_atexit(cocos2d::Vec4::~Vec4,cocos2d::PUEmitter::DEFAULT_COLOUR,&PTR_LOOP_016979c0);
  return;
}

