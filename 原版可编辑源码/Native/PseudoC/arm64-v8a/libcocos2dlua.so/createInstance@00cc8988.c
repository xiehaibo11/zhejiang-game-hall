
/* ArmatureNodeReader::createInstance() */

Ref * ArmatureNodeReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01786a00;
  if ((DAT_01786a00 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__ArmatureNodeReader_016cdf60;
    *(undefined ***)(this + 0x28) = &PTR__ArmatureNodeReader_016cdf98;
  }
  DAT_01786a00 = this;
  return DAT_01786a00;
}

