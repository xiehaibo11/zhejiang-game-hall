
/* spine::Skeleton::sortPathConstraint(spine::PathConstraint*) */

void __thiscall spine::Skeleton::sortPathConstraint(Skeleton *this,PathConstraint *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  Slot *this_00;
  SlotData *this_01;
  Bone *pBVar4;
  Attachment *pAVar5;
  RTTI *this_02;
  long *plVar6;
  Vector *pVVar7;
  Skin *pSVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 0x95) != '\0') {
    uVar3 = ConstraintData::isSkinRequired(*(ConstraintData **)(param_1 + 8));
    if ((uVar3 & 1) == 0) {
      param_1[0x108] = (PathConstraint)0x1;
LAB_00cf23a8:
      this_00 = (Slot *)PathConstraint::getTarget(param_1);
      this_01 = (SlotData *)Slot::getData(this_00);
      iVar2 = SlotData::getIndex(this_01);
      pBVar4 = (Bone *)Slot::getBone(this_00);
      pSVar8 = *(Skin **)(this + 0x110);
      if (pSVar8 != (Skin *)0x0) {
        sortPathConstraintAttachment(this,pSVar8,(long)iVar2,pBVar4);
      }
      lVar12 = *(long *)(this + 8);
      pSVar8 = *(Skin **)(lVar12 + 0x80);
      if ((pSVar8 != (Skin *)0x0) && (pSVar8 != *(Skin **)(this + 0x110))) {
        sortPathConstraintAttachment(this,pSVar8,(long)iVar2,pBVar4);
        lVar12 = *(long *)(this + 8);
      }
      lVar15 = *(long *)(lVar12 + 0x68);
      if (lVar15 != 0) {
        sortPathConstraintAttachment
                  (this,(Skin *)**(undefined8 **)(lVar12 + 0x78),(long)iVar2,pBVar4);
        if (lVar15 != 1) {
          lVar12 = 1;
          do {
            sortPathConstraintAttachment
                      (this,*(Skin **)(*(long *)(*(long *)(this + 8) + 0x78) + lVar12 * 8),
                       (long)iVar2,pBVar4);
            lVar12 = lVar12 + 1;
          } while (lVar15 != lVar12);
        }
      }
      pAVar5 = (Attachment *)Slot::getAttachment(this_00);
      if (pAVar5 != (Attachment *)0x0) {
        this_02 = (RTTI *)(**(code **)(*(long *)pAVar5 + 0x10))();
        uVar3 = RTTI::instanceOf(this_02,(RTTI *)PathAttachment::rtti);
        if ((uVar3 & 1) != 0) {
          sortPathConstraintAttachment(this,pAVar5,pBVar4);
        }
      }
      lVar12 = PathConstraint::getBones(param_1);
      uVar3 = *(ulong *)(lVar12 + 8);
      if (uVar3 != 0) {
        uVar13 = 0;
        do {
          sortBone(this,*(Bone **)(*(long *)(lVar12 + 0x18) + uVar13 * 8));
          uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
      }
      uVar13 = *(ulong *)(this + 0xd8);
      if (uVar13 == *(ulong *)(this + 0xe0)) {
        uVar10 = (uint)((float)uVar13 * 1.75);
        uVar14 = *(undefined8 *)(this + 0xe8);
        if (uVar10 < 9) {
          uVar10 = 8;
        }
        *(long *)(this + 0xe0) = (long)(int)uVar10;
        plVar6 = (long *)SpineExtension::getInstance();
        lVar15 = (**(code **)(*plVar6 + 0x20))
                           (plVar6,uVar14,
                            -(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
        lVar9 = *(long *)(this + 0xd8);
        *(long *)(this + 0xe8) = lVar15;
        *(long *)(this + 0xd8) = lVar9 + 1;
        *(PathConstraint **)(lVar15 + lVar9 * 8) = param_1;
      }
      else {
        *(ulong *)(this + 0xd8) = uVar13 + 1;
        *(PathConstraint **)(*(long *)(this + 0xe8) + uVar13 * 8) = param_1;
      }
      if (uVar3 == 0) {
        return;
      }
      uVar13 = 0;
      do {
        pVVar7 = (Vector *)Bone::getChildren(*(Bone **)(*(long *)(lVar12 + 0x18) + uVar13 * 8));
        sortReset(pVVar7);
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar13);
      if (uVar3 == 0) {
        return;
      }
      lVar12 = *(long *)(lVar12 + 0x18);
      if (uVar3 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar3 & 0xfffffffffffffffe;
        plVar6 = (long *)(lVar12 + 8);
        uVar13 = uVar11;
        do {
          plVar1 = plVar6 + -1;
          lVar15 = *plVar6;
          uVar13 = uVar13 - 2;
          plVar6 = plVar6 + 2;
          *(undefined1 *)(*plVar1 + 0x94) = 1;
          *(undefined1 *)(lVar15 + 0x94) = 1;
        } while (uVar13 != 0);
        if (uVar3 == uVar11) {
          return;
        }
      }
      lVar15 = uVar3 - uVar11;
      plVar6 = (long *)(lVar12 + uVar11 * 8);
      do {
        lVar15 = lVar15 + -1;
        *(undefined1 *)(*plVar6 + 0x94) = 1;
        plVar6 = plVar6 + 1;
      } while (lVar15 != 0);
      return;
    }
    lVar12 = *(long *)(this + 0x110);
    if ((lVar12 != 0) && (*(ulong *)(lVar12 + 0x70) != 0)) {
      uVar3 = 0;
      do {
        if (*(long *)(*(long *)(lVar12 + 0x80) + uVar3 * 8) == *(long *)(param_1 + 8)) {
          param_1[0x108] = (PathConstraint)0x1;
          goto LAB_00cf23a8;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ulong *)(lVar12 + 0x70));
    }
  }
  param_1[0x108] = (PathConstraint)0x0;
  return;
}

