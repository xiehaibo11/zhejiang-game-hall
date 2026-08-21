
/* cocos2d::MenuItemAtlasFont::initWithString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, char, cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

undefined8
cocos2d::MenuItemAtlasFont::initWithString
          (basic_string *param_1,basic_string *param_2,int param_3,int param_4,char param_5,
          Ref *param_6,_func_void_Ref_ptr *param_7)

{
  long lVar1;
  LabelAtlas *this;
  code *pcVar2;
  undefined **local_a0 [3];
  _func_void_Ref_ptr *p_Stack_88;
  long *local_80;
  long local_68;
  
  local_80 = (long *)local_a0;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_a0[0] = &PTR_FUN_016d1d18;
  p_Stack_88 = param_7;
  this = (LabelAtlas *)LabelAtlas::create();
  LabelAtlas::initWithString
            (this,param_2,(basic_string *)(ulong)(uint)param_3,param_4,(uint)(byte)param_5,
             (int)(char)param_6);
  MenuItemLabel::initWithLabel((MenuItemLabel *)param_1,(Node *)this,(function *)local_a0);
  if (local_a0 == (undefined ***)local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f1e1b4;
    pcVar2 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar2)();
LAB_00f1e1b4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

