
/* cocostudio::Light3DReader::createInstance() */

Ref * cocostudio::Light3DReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01787240;
  if ((DAT_01787240 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__Light3DReader_016cf028;
    *(undefined ***)(this + 0x28) = &PTR__Light3DReader_016cf060;
  }
  DAT_01787240 = this;
  return DAT_01787240;
}

