
/* cocostudio::timeline::SkeletonNode::getBoundingBox() const */

void cocostudio::timeline::SkeletonNode::getBoundingBox(void)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long *in_x0;
  ulong uVar5;
  undefined8 uVar6;
  AffineTransform *in_x2;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [24];
  cocos2d acStack_c0 [16];
  Rect aRStack_b0 [16];
  undefined8 *local_a0;
  undefined8 *local_98;
  Rect aRStack_88 [16];
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  (**(code **)(*in_x0 + 0x5d0))(aRStack_88);
  uVar5 = cocos2d::Rect::equals(aRStack_88,(Rect *)cocos2d::Rect::ZERO);
  bVar2 = (uVar5 & 1) == 0;
  if (bVar2) {
    fVar8 = (float)cocos2d::Rect::getMinX(aRStack_88);
    fVar9 = (float)cocos2d::Rect::getMinY(aRStack_88);
    fVar10 = (float)cocos2d::Rect::getMaxX(aRStack_88);
    fVar11 = (float)cocos2d::Rect::getMaxY(aRStack_88);
  }
  else {
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  bVar2 = !bVar2;
  BoneNode::getAllSubBones();
  puVar4 = local_98;
  for (puVar1 = local_a0; puVar1 != puVar4; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x5d0))(acStack_c0);
    plVar7 = (long *)*puVar1;
    uVar6 = (**(code **)(*plVar7 + 0x540))(plVar7);
    (**(code **)(*plVar7 + 0x400))(auStack_d8,plVar7,uVar6);
    cocos2d::RectApplyAffineTransform(acStack_c0,auStack_d8,in_x2);
    uVar5 = cocos2d::Rect::equals(aRStack_b0,(Rect *)cocos2d::Rect::ZERO);
    if ((uVar5 & 1) == 0) {
      if (bVar2) {
        fVar8 = (float)cocos2d::Rect::getMinX(aRStack_b0);
        fVar9 = (float)cocos2d::Rect::getMinY(aRStack_b0);
        fVar10 = (float)cocos2d::Rect::getMaxX(aRStack_b0);
        fVar11 = (float)cocos2d::Rect::getMaxY(aRStack_b0);
      }
      else {
        fVar12 = (float)cocos2d::Rect::getMinX(aRStack_b0);
        if (fVar12 < fVar8) {
          fVar8 = (float)cocos2d::Rect::getMinX(aRStack_b0);
        }
        fVar12 = (float)cocos2d::Rect::getMinY(aRStack_b0);
        if (fVar12 < fVar9) {
          fVar9 = (float)cocos2d::Rect::getMinY(aRStack_b0);
        }
        fVar12 = (float)cocos2d::Rect::getMaxX(aRStack_b0);
        if (fVar10 < fVar12) {
          fVar10 = (float)cocos2d::Rect::getMaxX(aRStack_b0);
        }
        fVar12 = (float)cocos2d::Rect::getMaxY(aRStack_b0);
        if (fVar11 < fVar12) {
          fVar11 = (float)cocos2d::Rect::getMaxY(aRStack_b0);
        }
      }
      bVar2 = false;
    }
  }
  cocos2d::Rect::setRect(aRStack_88,fVar8,fVar9,fVar10 - fVar8,fVar11 - fVar9);
  (**(code **)(*in_x0 + 0x3f0))(auStack_d8);
  cocos2d::RectApplyAffineTransform((cocos2d *)aRStack_88,auStack_d8,in_x2);
  for (puVar1 = local_a0; puVar1 != local_98; puVar1 = puVar1 + 1) {
    cocos2d::Ref::release((Ref *)*puVar1);
  }
  if (local_a0 != (undefined8 *)0x0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

