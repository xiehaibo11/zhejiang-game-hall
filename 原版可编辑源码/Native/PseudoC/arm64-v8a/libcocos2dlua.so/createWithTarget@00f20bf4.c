
/* cocos2d::MenuItemToggle::createWithTarget(cocos2d::Ref*, void (cocos2d::Ref::*)(cocos2d::Ref*),
   cocos2d::MenuItem*, ...) */

Node * cocos2d::MenuItemToggle::createWithTarget
                 (Ref *param_1,_func_void_Ref_ptr *param_2,MenuItem *param_3,...)

{
  long lVar1;
  Node *this;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  code *pcVar2;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined1 **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined **local_90;
  _func_void_Ref_ptr *local_88;
  MenuItem *pMStack_80;
  Ref *local_78;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_f0 = in_x4;
  uStack_e8 = in_x5;
  local_e0 = in_x6;
  uStack_d8 = in_x7;
  this = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined4 *)(this + 0x330) = 0;
                    /* try { // try from 00f20ca8 to 01020ccf has its CatchHandler @ 00f20ca8
                       catch() { ... } // from try @ 00f20ca8 with catch @ 00f20ca8
                       catch() { ... } // from try @ 00f20cf4 with catch @ 00f20ca8 */
    *(undefined ***)this = &PTR__MenuItemToggle_017060c8;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
  }
  local_90 = &PTR_FUN_016d1d18;
                    /* try { // try from 00f20cd0 to 01020cf3 has its CatchHandler @ 00f20d1c */
  uStack_b8 = 0xffffff80ffffffe0;
  local_d0 = (undefined1 *)register0x00000008;
  ppuStack_c8 = &local_d0;
  puStack_c0 = &local_f0;
  local_88 = param_2;
  pMStack_80 = param_3;
  local_78 = param_1;
  local_70 = &local_90;
  initWithCallback((MenuItemToggle *)this,&local_90,in_x3,&local_d0);
  if (&local_90 == local_70) {
    pcVar2 = (code *)(*local_70)[4];
  }
  else {
                    /* try { // try from 00f20cf4 to 01020d2f has its CatchHandler @ 00f20ca8 */
    if (local_70 == (undefined ***)0x0) goto LAB_00f20d10;
    pcVar2 = (code *)(*local_70)[5];
  }
  (*pcVar2)();
LAB_00f20d10:
  Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00f20cd0 with catch @ 00f20d1c */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

