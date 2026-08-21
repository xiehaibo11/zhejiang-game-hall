
/* cocos2d::Sprite::sortAllChildren() */

void __thiscall cocos2d::Sprite::sortAllChildren(Sprite *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  _lambda_cocos2d__Node__cocos2d__Node___1_ a_Stack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[0x1fb] != (Sprite)0x0) {
                    /* try { // try from 00f40774 to 0104077b has its CatchHandler @ 00f407ec */
                    /* try { // try from 00f4077c to 010407d7 has its CatchHandler @ 00f403fc */
    std::__ndk1::
    __sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (*(Node ***)(this + 0x178),*(Node ***)(this + 0x180),a_Stack_40);
    if (*(int *)(this + 0x42c) == 3) {
      puVar1 = *(undefined8 **)(this + 0x180);
      for (puVar3 = *(undefined8 **)(this + 0x178); puVar3 != puVar1; puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 0x2b0))();
      }
    }
    this[0x1fb] = (Sprite)0x0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f407d8 to 010407e7 has its CatchHandler @ 00f407e8 */
    __stack_chk_fail();
  }
  return;
}

