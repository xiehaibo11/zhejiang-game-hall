
/* ListenerComponent::onTouchesEnded(std::__ndk1::vector<cocos2d::Touch*,
   std::__ndk1::allocator<cocos2d::Touch*> > const&, cocos2d::Event*) */

void ListenerComponent::onTouchesEnded(vector *param_1,Event *param_2)

{
  long lVar1;
  long lVar2;
  Size *pSVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_60 [2];
  Rect aRStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = *(long *)param_2;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar6 != lVar1) {
    do {
                    /* try { // try from 00dd97f0 to 00ed987f has its CatchHandler @ 00dd97f0
                       catch() { ... } // from try @ 00dd97f0 with catch @ 00dd97f0
                       catch() { ... } // from try @ 00dd9ae4 with catch @ 00dd97f0
                       catch() { ... } // from try @ 00dd9c50 with catch @ 00dd97f0 */
      pSVar3 = (Size *)(**(code **)(**(long **)(param_1 + 0x50) + 0x168))();
      cocos2d::Rect::Rect(aRStack_58,(Vec2 *)&cocos2d::Vec2::ZERO,pSVar3);
      local_60[0] = cocos2d::Node::convertTouchToNodeSpace(*(Touch **)(param_1 + 0x50));
      uVar4 = cocos2d::Rect::containsPoint(aRStack_58,(Vec2 *)local_60);
      if (((uVar4 & 1) != 0) && (plVar5 = *(long **)(param_1 + 0x90), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x30))(plVar5,param_1 + 0x58);
      }
      lVar6 = lVar6 + 8;
    } while (lVar1 != lVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

