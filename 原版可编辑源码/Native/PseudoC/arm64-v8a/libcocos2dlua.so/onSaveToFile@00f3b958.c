
/* cocos2d::RenderTexture::onSaveToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool) */

void __thiscall
cocos2d::RenderTexture::onSaveToFile(RenderTexture *this,basic_string *param_1,bool param_2)

{
  long lVar1;
  Image *this_00;
  long *plVar2;
  RenderTexture *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (Image *)newImage(this,true);
  if (this_00 != (Image *)0x0) {
    Image::saveToFile(this_00,param_1,(bool)(~param_2 & 1));
  }
  plVar2 = *(long **)(this + 0x5b0);
  if (plVar2 != (long *)0x0) {
    local_50 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_50,param_1);
  }
  if (this_00 != (Image *)0x0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

