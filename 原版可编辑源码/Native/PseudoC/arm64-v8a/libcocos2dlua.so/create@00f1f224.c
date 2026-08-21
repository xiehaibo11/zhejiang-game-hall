
/* cocos2d::MenuItemSprite::create(cocos2d::Node*, cocos2d::Node*, cocos2d::Node*, cocos2d::Ref*,
   void (cocos2d::Ref::*)(cocos2d::Ref*)) */

Node * __thiscall
cocos2d::MenuItemSprite::create
          (MenuItemSprite *this,Node *param_1,Node *param_2,Node *param_3,Ref *param_4,
          _func_void_Ref_ptr *param_5)

{
  long lVar1;
  Node *this_00;
  code *pcVar2;
  undefined **local_90;
  Ref *local_88;
  _func_void_Ref_ptr *p_Stack_80;
  Node *local_78;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x350,(nothrow_t *)&std::nothrow);
  if (this_00 != (Node *)0x0) {
    Node::Node(this_00);
    *(undefined2 *)(this_00 + 0x2f8) = 0;
    *(undefined8 *)(this_00 + 800) = 0;
    *(undefined8 *)(this_00 + 0x330) = 0;
    *(undefined8 *)(this_00 + 0x340) = 0;
    *(undefined8 *)(this_00 + 0x338) = 0;
    *(undefined ***)this_00 = &PTR__MenuItem_017055a8;
  }
  local_90 = &PTR_FUN_016d1d18;
  local_88 = param_4;
  p_Stack_80 = param_5;
  local_78 = param_3;
  local_70 = (long *)&local_90;
  initWithNormalSprite((MenuItemSprite *)this_00,(Node *)this,param_1,param_2,(function *)&local_90)
  ;
  if (&local_90 == (undefined ***)local_70) {
    pcVar2 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00f1f304;
    pcVar2 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar2)();
LAB_00f1f304:
  Ref::autorelease((Ref *)this_00);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

