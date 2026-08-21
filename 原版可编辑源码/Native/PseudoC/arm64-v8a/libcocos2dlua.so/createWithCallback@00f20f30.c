
/* cocos2d::MenuItemToggle::createWithCallback(std::__ndk1::function<void (cocos2d::Ref*)> const&,
   cocos2d::MenuItem*, ...) */

Node * cocos2d::MenuItemToggle::createWithCallback(function *param_1,MenuItem *param_2,...)

{
  long lVar1;
  Node *this;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
                    /* catch() { ... } // from try @ 00f20e8c with catch @ 00f20f30 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  local_c0 = in_x2;
  uStack_b8 = in_x3;
  local_b0 = in_x4;
  uStack_a8 = in_x5;
  local_a0 = in_x6;
  uStack_98 = in_x7;
  this = operator_new(0x360,(nothrow_t *)&std::nothrow);
  if (this != (Node *)0x0) {
    Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined4 *)(this + 0x330) = 0;
    *(undefined ***)this = &PTR__MenuItemToggle_017060c8;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
  }
  uStack_78 = 0xffffff80ffffffd0;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_90;
  puStack_80 = &local_c0;
  initWithCallback((MenuItemToggle *)this,param_1,param_2,&local_90);
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

