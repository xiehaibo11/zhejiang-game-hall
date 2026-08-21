
/* fairygui::ScrollPane::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void fairygui::ScrollPane::hitTest(Vec2 *param_1,Camera *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  Rect aRStack_50 [8];
  Size aSStack_48 [8];
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 0x118);
                    /* try { // try from 00a954f4 to 00b9572f has its CatchHandler @ 00a954f4
                       catch() { ... } // from try @ 00a954f4 with catch @ 00a954f4
                       catch() { ... } // from try @ 00a957e8 with catch @ 00a954f4
                       catch() { ... } // from try @ 00a95880 with catch @ 00a954f4
                       catch() { ... } // from try @ 00a9594c with catch @ 00a954f4
                       catch() { ... } // from try @ 00a95a04 with catch @ 00a954f4
                       catch() { ... } // from try @ 00a95c40 with catch @ 00a954f4
                       catch() { ... } // from try @ 00a95d9c with catch @ 00a954f4 */
  if (((((plVar2 == (long *)0x0) ||
        (lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2), lVar3 == 0)) &&
       ((plVar2 = *(long **)(param_1 + 0x110), plVar2 == (long *)0x0 ||
        (lVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2), lVar3 == 0)))) &&
      (((*(long *)(param_1 + 0x120) == 0 ||
        (lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x120) + 0xa8) + 0x260))(), lVar3 == 0
        )) || (lVar3 = (**(code **)(**(long **)(param_1 + 0x120) + 0x48))
                                 (*(long **)(param_1 + 0x120),param_2), lVar3 == 0)))) &&
     (((*(long *)(param_1 + 0x128) == 0 ||
       (lVar3 = (**(code **)(**(long **)(*(long *)(param_1 + 0x128) + 0xa8) + 0x260))(), lVar3 == 0)
       ) || (lVar3 = (**(code **)(**(long **)(param_1 + 0x128) + 0x48))
                               (*(long **)(param_1 + 0x128),param_2), lVar3 == 0)))) {
    uVar4 = FUIContainer::isClippingEnabled(*(FUIContainer **)(param_1 + 0x100));
    if ((uVar4 & 1) != 0) {
      local_40[0] = cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0x100),param_2);
      cocos2d::Rect::Rect(aRStack_50);
      lVar3 = FUIContainer::getClippingRegion(*(FUIContainer **)(param_1 + 0x100));
      cocos2d::Size::operator=(aSStack_48,(Size *)(lVar3 + 8));
      uVar4 = cocos2d::Rect::containsPoint(aRStack_50,(Vec2 *)local_40);
      if ((uVar4 & 1) == 0) {
        lVar3 = 0;
        goto LAB_00a955f4;
      }
    }
    lVar3 = *(long *)(param_1 + 0xf8);
  }
LAB_00a955f4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}

