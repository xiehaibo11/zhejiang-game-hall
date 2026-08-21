
/* cocos2d::ProtectedNode::insertProtectedChild(cocos2d::Node*, int) */

void __thiscall
cocos2d::ProtectedNode::insertProtectedChild(ProtectedNode *this,Node *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  Node *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f39130 with catch @ 00f39104 */
  this[0x310] = (ProtectedNode)0x1;
  puVar2 = *(undefined8 **)(this + 0x300);
  local_40 = param_1;
                    /* try { // try from 00f39128 to 0103912f has its CatchHandler @ 00f39148 */
  if (puVar2 == *(undefined8 **)(this + 0x308)) {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x2f8),
               &local_40);
  }
  else {
    *puVar2 = param_1;
                    /* try { // try from 00f39130 to 01039163 has its CatchHandler @ 00f39104 */
    *(undefined8 **)(this + 0x300) = puVar2 + 1;
  }
                    /* catch() { ... } // from try @ 00f39128 with catch @ 00f39148 */
  Ref::retain((Ref *)local_40);
  (**(code **)(*(long *)param_1 + 0x18))(param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

