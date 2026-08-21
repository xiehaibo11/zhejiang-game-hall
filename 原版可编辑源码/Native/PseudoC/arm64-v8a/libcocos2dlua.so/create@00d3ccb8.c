
/* cocos2d::Sprite3D::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Sprite3D * cocos2d::Sprite3D::create(basic_string *param_1)

{
  long lVar1;
  Sprite3D *this;
  ulong uVar2;
  undefined1 auStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x460,(nothrow_t *)&std::nothrow);
  if (this != (Sprite3D *)0x0) {
    Sprite3D(this);
    uVar2 = initWithFile(this,param_1);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Sprite3D *)0x0;
    }
    else {
      (**(code **)(*(long *)this + 0x370))(auStack_48,this);
      Size::operator=((Size *)(this + 0x80),aSStack_40);
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

