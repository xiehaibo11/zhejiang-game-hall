
/* cocos2d::Node::insertChild(cocos2d::Node*, int) */

void __thiscall cocos2d::Node::insertChild(Node *this,Node *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  Node *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this[0x161] = (Node)0x1;
  this[0x1fb] = (Node)0x1;
  puVar1 = *(undefined8 **)(this + 0x180);
  local_40 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x188)) {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x178),
               &local_40);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x180) = puVar1 + 1;
  }
  Ref::retain((Ref *)local_40);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,param_2);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00f254e0 to 010254e7 has its CatchHandler @ 00f25778 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f254e8 to 01025573 has its CatchHandler @ 00f2528c */
  __stack_chk_fail();
}

