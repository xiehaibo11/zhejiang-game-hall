
/* fairygui::GLoader::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void fairygui::GLoader::hitTest(Vec2 *param_1,Camera *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  Vec2 *pVVar5;
  undefined4 local_50 [2];
  Rect aRStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1[0xf5] == '\0') ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x178))(), (uVar2 & 1) == 0)) {
    pVVar5 = (Vec2 *)0x0;
  }
  else {
    lVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x260))();
    pVVar5 = (Vec2 *)0x0;
    if ((lVar3 != 0) &&
       ((plVar4 = *(long **)(param_1 + 0x228), plVar4 == (long *)0x0 ||
        (pVVar5 = (Vec2 *)(**(code **)(*plVar4 + 0x48))(plVar4,param_2), pVVar5 == (Vec2 *)0x0)))) {
      cocos2d::Rect::Rect(aRStack_48);
      cocos2d::Size::operator=(aSStack_40,(Size *)(param_1 + 200));
      local_50[0] = cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),param_2);
      uVar2 = cocos2d::Rect::containsPoint(aRStack_48,(Vec2 *)local_50);
      pVVar5 = param_1;
      if ((uVar2 & 1) == 0) {
        pVVar5 = (Vec2 *)0x0;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pVVar5);
  }
  return;
}

