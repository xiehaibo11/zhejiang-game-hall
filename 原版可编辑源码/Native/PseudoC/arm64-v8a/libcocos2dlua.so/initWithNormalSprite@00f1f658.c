
/* cocos2d::MenuItemSprite::initWithNormalSprite(cocos2d::Node*, cocos2d::Node*, cocos2d::Node*,
   cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*)) */

undefined8
cocos2d::MenuItemSprite::initWithNormalSprite
          (Node *param_1,Node *param_2,Node *param_3,Ref *param_4,_func_void_Ref_ptr *param_5)

{
  long lVar1;
  code *pcVar2;
  undefined **local_60 [3];
  _func_void_Ref_ptr *p_Stack_48;
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_016d1d18;
  p_Stack_48 = param_5;
  initWithNormalSprite
            ((MenuItemSprite *)param_1,param_2,param_3,(Node *)param_4,(function *)local_60);
  if (local_60 == (undefined ***)local_40) {
    pcVar2 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_00f1f6c0;
    pcVar2 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar2)();
LAB_00f1f6c0:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

