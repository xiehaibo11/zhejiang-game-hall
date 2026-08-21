
/* cocostudio::Armature::getBoundingBox() const */

void cocostudio::Armature::getBoundingBox(void)

{
  Rect *pRVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  long *in_x0;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  Rect *pRVar9;
  Mat4 *in_x2;
  Rect *this;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Rect aRStack_a8 [16];
  Rect aRStack_98 [16];
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  cocos2d::Rect::Rect(aRStack_98,0.0,0.0,0.0,0.0);
  plVar2 = (long *)in_x0[0x2f];
  plVar3 = (long *)in_x0[0x30];
  if (plVar2 != plVar3) {
    bVar5 = true;
    lVar6 = *plVar2;
    while( true ) {
      if ((lVar6 != 0) &&
         (in_x2 = (Mat4 *)&Bone::typeinfo,
         plVar7 = (long *)__dynamic_cast(lVar6,&cocos2d::Node::typeinfo,&Bone::typeinfo,0),
         plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x588))();
        DisplayManager::getBoundingBox();
        uVar8 = cocos2d::Rect::equals(aRStack_a8,(Rect *)cocos2d::Rect::ZERO);
        if ((uVar8 & 1) == 0) {
          fVar10 = (float)cocos2d::Rect::getMinX(aRStack_a8);
          if (bVar5) {
            this = aRStack_a8;
            fVar11 = (float)cocos2d::Rect::getMinY(aRStack_a8);
            fVar12 = (float)cocos2d::Rect::getMaxX(aRStack_a8);
          }
          else {
            fVar11 = (float)cocos2d::Rect::getMinX(aRStack_98);
            this = aRStack_a8;
            pRVar1 = this;
            if (fVar11 <= fVar10) {
              pRVar1 = aRStack_98;
            }
            fVar10 = (float)cocos2d::Rect::getMinX(pRVar1);
            fVar11 = (float)cocos2d::Rect::getMinY(aRStack_a8);
            fVar12 = (float)cocos2d::Rect::getMinY(aRStack_98);
            pRVar1 = this;
            if (fVar12 <= fVar11) {
              pRVar1 = aRStack_98;
            }
            fVar11 = (float)cocos2d::Rect::getMinY(pRVar1);
            fVar12 = (float)cocos2d::Rect::getMaxX(aRStack_a8);
            fVar13 = (float)cocos2d::Rect::getMaxX(aRStack_98);
            pRVar1 = this;
            if (fVar12 <= fVar13) {
              pRVar1 = aRStack_98;
            }
            fVar12 = (float)cocos2d::Rect::getMaxX(pRVar1);
            fVar13 = (float)cocos2d::Rect::getMaxY(aRStack_a8);
            fVar14 = (float)cocos2d::Rect::getMaxY(aRStack_98);
            if (fVar13 <= fVar14) {
              this = aRStack_98;
            }
          }
          fVar13 = (float)cocos2d::Rect::getMaxY(this);
          cocos2d::Rect::setRect(aRStack_98,fVar10,fVar11,fVar12 - fVar10,fVar13 - fVar11);
          bVar5 = false;
        }
      }
      plVar2 = plVar2 + 1;
      if (plVar3 == plVar2) break;
      lVar6 = *plVar2;
    }
  }
  pRVar9 = (Rect *)(**(code **)(*in_x0 + 1000))();
  cocos2d::RectApplyTransform((cocos2d *)aRStack_98,pRVar9,in_x2);
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

