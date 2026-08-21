
/* cocos2d::ProtectedNode::addProtectedChild(cocos2d::Node*, int, int) */

void __thiscall
cocos2d::ProtectedNode::addProtectedChild(ProtectedNode *this,Node *param_1,int param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  Node *local_70;
  long local_68;
  
                    /* try { // try from 00f38f08 to 01038f0f has its CatchHandler @ 00f39068 */
                    /* try { // try from 00f38f20 to 01038f23 has its CatchHandler @ 00f390ac */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(this + 0x2f8);
  puVar5 = *(undefined8 **)(this + 0x300);
  puVar6 = puVar5;
                    /* try { // try from 00f38f5c to 01038f63 has its CatchHandler @ 00f3906c */
  if ((puVar3 == puVar5) &&
     (puVar6 = puVar3, (ulong)(*(long *)(this + 0x308) - (long)puVar3 >> 3) < 4)) {
    lVar4 = (long)puVar5 - (long)puVar3;
    pvVar2 = operator_new(0x20);
    if (0 < lVar4) {
      __memcpy_chk(pvVar2,puVar3,lVar4,0x20);
      puVar3 = *(undefined8 **)(this + 0x2f8);
    }
    *(void **)(this + 0x2f8) = pvVar2;
    *(undefined8 **)(this + 0x300) = (undefined8 *)((long)pvVar2 + lVar4);
    *(long *)(this + 0x308) = (long)pvVar2 + 0x20;
    puVar6 = (undefined8 *)((long)pvVar2 + lVar4);
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete(puVar3);
      puVar6 = *(undefined8 **)(this + 0x300);
    }
  }
  this[0x310] = (ProtectedNode)0x1;
  local_70 = param_1;
  if (puVar6 == *(undefined8 **)(this + 0x308)) {
                    /* try { // try from 00f38ff0 to 01038ff7 has its CatchHandler @ 00f39064 */
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x2f8),
               &local_70);
  }
  else {
    *puVar6 = param_1;
    *(undefined8 **)(this + 0x300) = puVar6 + 1;
  }
  Ref::retain((Ref *)local_70);
                    /* try { // try from 00f39008 to 0103900b has its CatchHandler @ 00f390c8 */
                    /* try { // try from 00f3900c to 0103907f has its CatchHandler @ 00f38e94 */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,param_2);
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,param_3);
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1);
  (**(code **)(*(long *)param_1 + 600))(param_1,this);
  Node::updateOrderOfArrival(param_1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38ff0 with catch @ 00f39064
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38f08 with catch @ 00f39068
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38f5c with catch @ 00f3906c
                        */
  if ((this[0x1f8] != (ProtectedNode)0x0) &&
     ((**(code **)(*(long *)param_1 + 800))(param_1), this[0x1fc] != (ProtectedNode)0x0)) {
                    /* try { // try from 00f39080 to 01039083 has its CatchHandler @ 00f390a8 */
    (**(code **)(*(long *)param_1 + 0x328))(param_1);
  }
                    /* try { // try from 00f39084 to 010390db has its CatchHandler @ 00f38e94 */
  if (this[0x220] != (ProtectedNode)0x0) {
    (**(code **)(*(long *)this + 0x518))(this);
  }
  if (this[0x221] != (ProtectedNode)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f39080 with catch @ 00f390a8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f38f20 with catch @ 00f390ac
                        */
    (**(code **)(*(long *)this + 0x508))(this);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f39008 with catch @ 00f390c8
                        */
  return;
}

