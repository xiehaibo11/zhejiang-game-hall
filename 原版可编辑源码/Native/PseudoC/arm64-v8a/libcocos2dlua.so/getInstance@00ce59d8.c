
/* cocostudio::Particle3DReader::getInstance() */

Ref * cocostudio::Particle3DReader::getInstance(void)

{
  Ref *this;
  
  this = DAT_01787040;
  if ((DAT_01787040 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__Particle3DReader_016ceda8;
    *(undefined ***)(this + 0x28) = &PTR__Particle3DReader_016cede0;
  }
  DAT_01787040 = this;
  return DAT_01787040;
}

