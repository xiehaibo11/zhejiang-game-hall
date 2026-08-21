
/* cocostudio::UserCameraReader::getInstance() */

Ref * cocostudio::UserCameraReader::getInstance(void)

{
  Ref *this;
  
  this = DAT_01786fc0;
  if ((DAT_01786fc0 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__UserCameraReader_016ced00;
    *(undefined ***)(this + 0x28) = &PTR__UserCameraReader_016ced38;
  }
  DAT_01786fc0 = this;
  return DAT_01786fc0;
}

