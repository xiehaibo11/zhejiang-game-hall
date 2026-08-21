
/* cocos2d::ui::RichText::pushToContainer(cocos2d::Node*) */

void __thiscall cocos2d::ui::RichText::pushToContainer(RichText *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  Node *local_30;
  long local_28;
  
                    /* try { // try from 00dd77e8 to 00ed77fb has its CatchHandler @ 00dd7b78 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dd7800 to 00ed782f has its CatchHandler @ 00dd7c00 */
  lVar2 = *(long *)(this + 0x510);
  if (*(long *)(this + 0x518) - lVar2 != 0) {
    lVar3 = (*(long *)(this + 0x518) - lVar2 >> 3) * -0x5555555555555555 + -1;
    lVar4 = lVar2 + lVar3 * 0x18;
    puVar5 = (undefined8 *)(lVar4 + 8);
    puVar6 = (undefined8 *)*puVar5;
    local_30 = param_1;
                    /* try { // try from 00dd7840 to 00ed7853 has its CatchHandler @ 00dd7b68 */
    if (puVar6 == *(undefined8 **)(lVar4 + 0x10)) {
                    /* try { // try from 00dd7858 to 00ed787f has its CatchHandler @ 00dd7b88 */
      std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
      __push_back_slow_path<cocos2d::Node*const&>
                ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                 (lVar2 + lVar3 * 0x18),&local_30);
    }
    else {
      *puVar6 = param_1;
      *puVar5 = puVar6 + 1;
    }
    Ref::retain((Ref *)local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

