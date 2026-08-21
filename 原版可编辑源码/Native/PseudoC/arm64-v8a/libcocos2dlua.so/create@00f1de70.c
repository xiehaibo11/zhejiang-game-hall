
/* cocos2d::MenuItemAtlasFont::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int, char, cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

Node * __thiscall
cocos2d::MenuItemAtlasFont::create
          (MenuItemAtlasFont *this,basic_string *param_1,basic_string *param_2,int param_3,
          int param_4,char param_5,Ref *param_6,_func_void_Ref_ptr *param_7)

{
  long lVar1;
  Node *this_00;
  LabelAtlas *this_01;
  code *pcVar2;
  undefined **local_a0;
  Ref *local_98;
  _func_void_Ref_ptr *p_Stack_90;
  ulong local_88;
  long *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this_00 != (Node *)0x0) {
    Node::Node(this_00);
    *(undefined2 *)(this_00 + 0x2f8) = 0;
    *(undefined8 *)(this_00 + 800) = 0;
    *(undefined ***)this_00 = &PTR__MenuItem_01705020;
    Color3B::Color3B((Color3B *)(this_00 + 0x330));
    *(undefined4 *)(this_00 + 0x334) = 0;
    Color3B::Color3B((Color3B *)(this_00 + 0x338));
    *(undefined8 *)(this_00 + 0x340) = 0;
    *(undefined ***)this_00 = &PTR__MenuItem_01698b68;
  }
  local_a0 = &PTR_FUN_016d1d18;
  local_98 = param_6;
  p_Stack_90 = param_7;
  local_88 = (ulong)(byte)param_5;
  local_80 = (long *)&local_a0;
  this_01 = (LabelAtlas *)LabelAtlas::create();
  LabelAtlas::initWithString
            (this_01,(basic_string *)this,param_1,(int)param_2,param_3,(int)(char)param_4);
  MenuItemLabel::initWithLabel((MenuItemLabel *)this_00,(Node *)this_01,(function *)&local_a0);
  if (&local_a0 == (undefined ***)local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_00f1df94;
    pcVar2 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar2)();
LAB_00f1df94:
  Ref::autorelease((Ref *)this_00);
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00f1dfb4 to 0101dfe7 has its CatchHandler @ 00f1dfb4
                       catch() { ... } // from try @ 00f1dfb4 with catch @ 00f1dfb4
                       catch() { ... } // from try @ 00f1e02c with catch @ 00f1dfb4 */
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

