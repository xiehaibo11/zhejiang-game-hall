
/* cocostudio::ProjectNodeReader::getInstance() */

Ref * cocostudio::ProjectNodeReader::getInstance(void)

{
  Ref *this;
  
  this = DAT_01786db8;
  if ((DAT_01786db8 == (Ref *)0x0) &&
     (this = operator_new(0x30,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__ProjectNodeReader_016ce7b0;
    *(undefined ***)(this + 0x28) = &PTR__ProjectNodeReader_016ce7e8;
  }
  DAT_01786db8 = this;
  return DAT_01786db8;
}

