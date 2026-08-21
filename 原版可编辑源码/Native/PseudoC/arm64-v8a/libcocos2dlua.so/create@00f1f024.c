
/* cocos2d::MenuItemSprite::create(cocos2d::Node*, cocos2d::Node*, cocos2d::Ref*, void
   (cocos2d::Ref::*)(cocos2d::Ref*)) */

Node * __thiscall
cocos2d::MenuItemSprite::create
          (MenuItemSprite *this,Node *param_1,Node *param_2,Ref *param_3,_func_void_Ref_ptr *param_4
          )

{
  long lVar1;
  Node *this_00;
  code *pcVar2;
  undefined **local_70;
  Ref *pRStack_68;
  _func_void_Ref_ptr *local_60;
  Node *pNStack_58;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &PTR_FUN_016d1d18;
  pRStack_68 = param_3;
  local_60 = param_4;
  pNStack_58 = param_2;
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
  initWithNormalSprite
            ((MenuItemSprite *)this_00,(Node *)this,param_1,(Node *)0x0,(function *)&local_70);
  Ref::autorelease((Ref *)this_00);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00f1f0f8;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00f1f0f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

