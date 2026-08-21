
/* fairygui::FUIRichText::hitTestLink(cocos2d::Vec2 const&) */

void fairygui::FUIRichText::hitTestLink(Vec2 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  Size *pSVar4;
  ulong uVar5;
  Vec2 *in_x1;
  undefined8 *puVar6;
  undefined4 local_60 [2];
  Rect aRStack_58 [8];
  Size aSStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  cocos2d::Rect::Rect(aRStack_58);
  puVar6 = *(undefined8 **)(param_1 + 0x178);
  puVar1 = *(undefined8 **)(param_1 + 0x180);
  if (puVar6 != puVar1) {
    do {
      lVar3 = (**(code **)(*(long *)*puVar6 + 0x2d8))();
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
        pSVar4 = (Size *)(**(code **)(*(long *)*puVar6 + 0x168))();
        cocos2d::Size::operator=(aSStack_50,pSVar4);
        local_60[0] = cocos2d::Node::convertToNodeSpace((Node *)*puVar6,in_x1);
        uVar5 = cocos2d::Rect::containsPoint(aRStack_58,(Vec2 *)local_60);
        if ((uVar5 & 1) != 0) {
          lVar3 = *(long *)(lVar3 + 0x80);
          if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
            lVar3 = lVar3 + 0x11;
          }
          else {
            lVar3 = *(long *)(lVar3 + 0x20);
          }
          goto LAB_00aa8b5c;
        }
      }
      puVar6 = puVar6 + 1;
    } while (puVar1 != puVar6);
  }
  lVar3 = 0;
LAB_00aa8b5c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}

