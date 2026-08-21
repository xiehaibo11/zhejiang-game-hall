
/* cocostudio::NodeReader::createInstance() */

Ref * cocostudio::NodeReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01786bb0;
  if ((DAT_01786bb0 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__NodeReader_016ce468;
    *(undefined ***)(this + 0x28) = &PTR__NodeReader_016ce4a0;
  }
  DAT_01786bb0 = this;
  return DAT_01786bb0;
}

