
/* cocos2d::PointArray::create(long) */

Ref * cocos2d::PointArray::create(long param_1)

{
  Ref *this;
  
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined ***)this = &PTR__PointArray_016f5788;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f57b0;
    *(undefined8 *)(this + 0x30) = 0;
    std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::reserve
              ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0x30),param_1)
    ;
    Ref::autorelease(this);
  }
  return this;
}

