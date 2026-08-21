
/* dragonBones::CCArmatureDisplay::getBoundingBox() const */

void dragonBones::CCArmatureDisplay::getBoundingBox(void)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *in_x0;
  long *plVar4;
  Rect *pRVar5;
  Mat4 *in_x2;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Rect aRStack_88 [16];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar6 = *(long **)(in_x0[0x60] + 0x78);
  plVar1 = *(long **)(in_x0[0x60] + 0x80);
  if (plVar6 == plVar1) {
    fVar13 = 0.0;
    fVar11 = 0.0;
    fVar10 = 0.0;
    fVar14 = 0.0;
  }
  else {
    bVar3 = true;
    fVar13 = 0.0;
    fVar11 = 0.0;
    fVar10 = 0.0;
    fVar14 = 0.0;
    do {
      if ((*(char *)(*plVar6 + 0xfd) != '\0') &&
         (plVar4 = *(long **)(*plVar6 + 0x170), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x370))(aRStack_88);
        fVar9 = (float)cocos2d::Rect::getMinX(aRStack_88);
        if (bVar3) {
          fVar10 = (float)cocos2d::Rect::getMinY(aRStack_88);
          fVar11 = (float)cocos2d::Rect::getMaxX(aRStack_88);
          fVar12 = (float)cocos2d::Rect::getMaxY(aRStack_88);
          fVar14 = fVar9;
        }
        else {
          if (fVar14 <= fVar9) {
            fVar9 = fVar14;
          }
          fVar7 = (float)cocos2d::Rect::getMinY(aRStack_88);
          if (fVar10 <= fVar7) {
            fVar7 = fVar10;
          }
          fVar8 = (float)cocos2d::Rect::getMaxX(aRStack_88);
          if (fVar8 <= fVar11) {
            fVar8 = fVar11;
          }
          fVar12 = (float)cocos2d::Rect::getMaxY(aRStack_88);
          fVar14 = fVar9;
          fVar10 = fVar7;
          fVar11 = fVar8;
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
        }
        bVar3 = false;
        fVar13 = fVar12;
      }
      plVar6 = plVar6 + 1;
    } while (plVar1 != plVar6);
  }
  cocos2d::Rect::Rect(aRStack_88,fVar14,fVar10,fVar11 - fVar14,fVar13 - fVar10);
  pRVar5 = (Rect *)(**(code **)(*in_x0 + 1000))();
  cocos2d::RectApplyTransform((cocos2d *)aRStack_88,pRVar5,in_x2);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

