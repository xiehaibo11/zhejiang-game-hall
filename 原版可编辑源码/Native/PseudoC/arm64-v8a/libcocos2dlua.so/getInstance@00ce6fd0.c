
/* cocostudio::GameNode3DReader::getInstance() */

Ref * cocostudio::GameNode3DReader::getInstance(void)

{
  Ref *this;
  
  this = DAT_017871c0;
  if ((DAT_017871c0 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__GameNode3DReader_016cef80;
    *(undefined ***)(this + 0x28) = &PTR__GameNode3DReader_016cefb8;
  }
  DAT_017871c0 = this;
  return DAT_017871c0;
}

