
/* cocostudio::SingleNodeReader::createInstance() */

Ref * cocostudio::SingleNodeReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01786c30;
  if ((DAT_01786c30 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__SingleNodeReader_016ce510;
    *(undefined ***)(this + 0x28) = &PTR__SingleNodeReader_016ce548;
  }
  DAT_01786c30 = this;
  return DAT_01786c30;
}

