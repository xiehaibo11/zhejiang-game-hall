
/* cocostudio::SpriteReader::createInstance() */

Ref * cocostudio::SpriteReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01786cb0;
  if ((DAT_01786cb0 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__SpriteReader_016ce5b8;
    *(undefined ***)(this + 0x28) = &PTR__SpriteReader_016ce5f0;
  }
  DAT_01786cb0 = this;
  return DAT_01786cb0;
}

