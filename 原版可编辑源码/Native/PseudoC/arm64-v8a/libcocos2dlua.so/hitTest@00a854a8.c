
/* fairygui::GObject::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void fairygui::GObject::hitTest(Vec2 *param_1,Camera *param_2)

{
  long lVar1;
  Vec2 *pVVar2;
  ulong uVar3;
  long lVar4;
  Size *pSVar5;
  undefined4 local_50 [2];
  Rect aRStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((param_1[0xbc] == '\0') && (param_1[0xf5] != '\0')) &&
     (uVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x178))(), (uVar3 & 1) != 0)) {
    lVar4 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x260))();
    pVVar2 = (Vec2 *)0x0;
    if (lVar4 != 0) {
      cocos2d::Rect::Rect(aRStack_48);
      pSVar5 = (Size *)(**(code **)(**(long **)(param_1 + 0xa8) + 0x168))();
      cocos2d::Size::operator=(aSStack_40,pSVar5);
      local_50[0] = cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),param_2);
      uVar3 = cocos2d::Rect::containsPoint(aRStack_48,(Vec2 *)local_50);
      pVVar2 = param_1;
      if ((uVar3 & 1) == 0) {
        pVVar2 = (Vec2 *)0x0;
      }
    }
  }
  else {
    pVVar2 = (Vec2 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pVVar2);
  }
  return;
}

