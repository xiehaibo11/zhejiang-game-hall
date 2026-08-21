
/* cocos2d::MenuItemLabel::create(cocos2d::Node*, cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*)) */

Node * __thiscall
cocos2d::MenuItemLabel::create
          (MenuItemLabel *this,Node *param_1,Ref *param_2,_func_void_Ref_ptr *param_3)

{
  long lVar1;
  Node *this_00;
  code *pcVar2;
  undefined **local_80;
  Ref *local_78;
  _func_void_Ref_ptr *p_Stack_70;
  Node *local_68;
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
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
  }
  local_80 = &PTR_FUN_016d1d18;
  local_78 = param_2;
  p_Stack_70 = param_3;
  local_68 = param_1;
  local_60 = (long *)&local_80;
  initWithLabel((MenuItemLabel *)this_00,(Node *)this,(function *)&local_80);
  if (&local_80 == (undefined ***)local_60) {
    pcVar2 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_00f1d2f8;
    pcVar2 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar2)();
LAB_00f1d2f8:
  Ref::autorelease((Ref *)this_00);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

