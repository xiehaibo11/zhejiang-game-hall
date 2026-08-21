
/* cocos2d::Director::pushScene(cocos2d::Scene*) */

void __thiscall cocos2d::Director::pushScene(Director *this,Scene *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Scene *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this[0x168] = (Director)0x0;
  puVar1 = *(undefined8 **)(this + 0x178);
  local_40 = param_1;
                    /* try { // try from 00f9a1a8 to 0109a1ab has its CatchHandler @ 00f9a23c */
  if (puVar1 == *(undefined8 **)(this + 0x180)) {
    std::__ndk1::vector<cocos2d::Scene*,std::__ndk1::allocator<cocos2d::Scene*>>::
    __push_back_slow_path<cocos2d::Scene*const&>
              ((vector<cocos2d::Scene*,std::__ndk1::allocator<cocos2d::Scene*>> *)(this + 0x170),
               &local_40);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x178) = puVar1 + 1;
  }
  Ref::retain((Ref *)local_40);
  *(Scene **)(this + 0x160) = param_1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00f9a1ec to 0109a1ef has its CatchHandler @ 00f9a250 */
                    /* try { // try from 00f9a1f0 to 0109a263 has its CatchHandler @ 00f99ef0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

