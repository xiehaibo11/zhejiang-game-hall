
/* cocos2d::PointArray::PointArray() */

void __thiscall cocos2d::PointArray::PointArray(PointArray *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__PointArray_016f5788;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f57b0;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}

