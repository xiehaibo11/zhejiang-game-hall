
/* BoneNodeReader::getInstance() */

Ref * BoneNodeReader::getInstance(void)

{
  Ref *this;
  
  this = DAT_017870c0;
  if ((DAT_017870c0 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__BoneNodeReader_016cee50;
    *(undefined ***)(this + 0x28) = &PTR__BoneNodeReader_016cee88;
  }
  DAT_017870c0 = this;
  return DAT_017870c0;
}

