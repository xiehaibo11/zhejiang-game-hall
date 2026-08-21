
/* cocos2d::SpriteBatchNode::sortAllChildren() */

void __thiscall cocos2d::SpriteBatchNode::sortAllChildren(SpriteBatchNode *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar4;
  long local_40;
  long local_38;
  undefined8 *puVar3;
  
                    /* try { // try from 00f42510 to 01042667 has its CatchHandler @ 00f42390 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x1fb] != (SpriteBatchNode)0x0) {
    std::__ndk1::
    __sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (*(Node ***)(this + 0x178),*(Node ***)(this + 0x180),
               (_lambda_cocos2d__Node__cocos2d__Node___1_ *)&local_40);
    puVar4 = *(undefined8 **)(this + 0x180);
    puVar2 = *(undefined8 **)(this + 0x178);
    if (*(undefined8 **)(this + 0x178) != puVar4) {
      do {
        puVar3 = puVar2 + 1;
        (**(code **)(*(long *)*puVar2 + 0x2b0))();
        puVar2 = puVar3;
      } while (puVar4 != puVar3);
      puVar4 = *(undefined8 **)(this + 0x178);
      puVar2 = *(undefined8 **)(this + 0x180);
      local_40 = 0;
      for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
        updateAtlasIndex(this,(Sprite *)*puVar4,&local_40);
      }
    }
    this[0x1fb] = (SpriteBatchNode)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

