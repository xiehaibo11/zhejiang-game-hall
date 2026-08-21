
/* cocostudio::timeline::BoneNode::getVisibleSkinsRect() const */

void cocostudio::timeline::BoneNode::getVisibleSkinsRect(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  ulong uVar3;
  Rect *in_x8;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Rect aRStack_88 [16];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar9 = 0.0;
  cocos2d::Rect::Rect(in_x8,0.0,0.0,0.0,0.0);
  if (((*(char *)(in_x0 + 0x358) == '\0') || (*(long *)(in_x0 + 0x3a8) == 0)) ||
     (*(char *)(*(long *)(in_x0 + 0x3a8) + 0x358) == '\0')) {
    bVar2 = true;
    fVar10 = 0.0;
  }
  else {
    bVar2 = false;
    fVar9 = (float)*(int *)(in_x0 + 0x36c);
    fVar10 = (float)*(int *)(in_x0 + 0x370);
  }
  puVar4 = *(undefined8 **)(in_x0 + 0x390);
  puVar5 = *(undefined8 **)(in_x0 + 0x398);
  if (puVar4 != puVar5) {
    fVar7 = 0.0;
    fVar8 = 0.0;
    do {
      (**(code **)(*(long *)*puVar4 + 0x370))(aRStack_88);
      uVar3 = (**(code **)(*(long *)*puVar4 + 0x178))();
      if (((uVar3 & 1) != 0) &&
         (uVar3 = cocos2d::Rect::equals(aRStack_88,(Rect *)cocos2d::Rect::ZERO), (uVar3 & 1) == 0))
      {
        fVar6 = (float)cocos2d::Rect::getMinX(aRStack_88);
        if (bVar2) {
          fVar8 = (float)cocos2d::Rect::getMinY(aRStack_88);
          fVar9 = (float)cocos2d::Rect::getMaxX(aRStack_88);
          fVar7 = fVar6;
LAB_00cb69e4:
          fVar10 = (float)cocos2d::Rect::getMaxY(aRStack_88);
        }
        else {
          if (fVar6 < fVar7) {
            fVar7 = (float)cocos2d::Rect::getMinX(aRStack_88);
          }
          fVar6 = (float)cocos2d::Rect::getMinY(aRStack_88);
          if (fVar6 < fVar8) {
            fVar8 = (float)cocos2d::Rect::getMinY(aRStack_88);
          }
          fVar6 = (float)cocos2d::Rect::getMaxX(aRStack_88);
          if (fVar9 < fVar6) {
            fVar9 = (float)cocos2d::Rect::getMaxX(aRStack_88);
          }
          fVar6 = (float)cocos2d::Rect::getMaxY(aRStack_88);
          if (fVar10 < fVar6) goto LAB_00cb69e4;
        }
        cocos2d::Rect::setRect(in_x8,fVar7,fVar8,fVar9 - fVar7,fVar10 - fVar8);
        bVar2 = false;
      }
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

