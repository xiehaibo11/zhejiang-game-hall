
/* cocostudio::GameMapReader::createInstance() */

Ref * cocostudio::GameMapReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01786db0;
  if ((DAT_01786db0 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__GameMapReader_016ce708;
    *(undefined ***)(this + 0x28) = &PTR__GameMapReader_016ce740;
  }
  DAT_01786db0 = this;
  return DAT_01786db0;
}

