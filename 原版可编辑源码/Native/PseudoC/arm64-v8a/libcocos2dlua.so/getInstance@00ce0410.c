
/* cocostudio::Node3DReader::getInstance() */

Ref * cocostudio::Node3DReader::getInstance(void)

{
  Ref *this;
  
  this = DAT_01786ec0;
  if ((DAT_01786ec0 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__Node3DReader_016cebb0;
    *(undefined ***)(this + 0x28) = &PTR__Node3DReader_016cebe8;
  }
  DAT_01786ec0 = this;
  return DAT_01786ec0;
}

