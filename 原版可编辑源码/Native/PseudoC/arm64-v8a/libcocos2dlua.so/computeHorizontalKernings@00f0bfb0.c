
/* cocos2d::Label::computeHorizontalKernings(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&) */

void __thiscall cocos2d::Label::computeHorizontalKernings(Label *this,basic_string *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(void **)(this + 0x430) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x430));
    *(undefined8 *)(this + 0x430) = 0;
  }
  local_3c = 0;
  lVar2 = (**(code **)(**(long **)(*(long *)(this + 0x3d0) + 0x80) + 0x18))
                    (*(long **)(*(long *)(this + 0x3d0) + 0x80),param_1,&local_3c);
  *(long *)(this + 0x430) = lVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2 != 0);
}

