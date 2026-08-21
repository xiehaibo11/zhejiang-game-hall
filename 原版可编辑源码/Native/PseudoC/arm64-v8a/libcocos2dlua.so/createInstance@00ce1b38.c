
/* cocostudio::Sprite3DReader::createInstance() */

Ref * cocostudio::Sprite3DReader::createInstance(void)

{
  Ref *this;
  
  this = DAT_01786f40;
  if ((DAT_01786f40 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__Sprite3DReader_016cec58;
    *(undefined ***)(this + 0x28) = &PTR__Sprite3DReader_016cec90;
  }
  DAT_01786f40 = this;
  return DAT_01786f40;
}

