
/* cocos2d::CameraBackgroundSkyBoxBrush::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

CameraBackgroundSkyBoxBrush *
cocos2d::CameraBackgroundSkyBoxBrush::create
          (basic_string *param_1,basic_string *param_2,basic_string *param_3,basic_string *param_4,
          basic_string *param_5,basic_string *param_6)

{
  long lVar1;
  bool bVar2;
  TextureCube *this;
  CameraBackgroundSkyBoxBrush *this_00;
  ulong uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TextureCube *)TextureCube::create(param_1,param_2,param_3,param_4,param_5,param_6);
  if (this != (TextureCube *)0x0) {
    uStack_48 = 0x812f0000812f;
    local_50 = 0x260100002601;
    TextureCube::setTexParameters(this,(_TexParams *)&local_50);
    this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
    if (this_00 == (CameraBackgroundSkyBoxBrush *)0x0) {
      bVar2 = true;
    }
    else {
      CameraBackgroundSkyBoxBrush(this_00);
      uVar3 = (**(code **)(*(long *)this_00 + 0x28))(this_00);
      if ((uVar3 & 1) != 0) {
        setTexture(this_00,this);
        Ref::autorelease((Ref *)this_00);
        goto LAB_00ef0a20;
      }
      bVar2 = false;
    }
    (**(code **)(*(long *)this + 8))(this);
    if (!bVar2) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
    }
  }
  this_00 = (CameraBackgroundSkyBoxBrush *)0x0;
LAB_00ef0a20:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

