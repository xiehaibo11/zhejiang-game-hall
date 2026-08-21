
/* cocos2d::VertexData::create() */

Ref * cocos2d::VertexData::create(void)

{
  Ref *this;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__VertexData_017247d8;
    *(undefined8 *)(this + 0x30) = 0;
    *(Ref **)(this + 0x28) = this + 0x30;
    Ref::autorelease(this);
  }
  return this;
}

