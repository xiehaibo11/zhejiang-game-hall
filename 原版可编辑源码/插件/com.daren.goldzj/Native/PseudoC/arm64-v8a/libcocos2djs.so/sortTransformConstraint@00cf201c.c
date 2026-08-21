
/* spine::Skeleton::sortTransformConstraint(spine::TransformConstraint*) */

void __thiscall
spine::Skeleton::sortTransformConstraint(Skeleton *this,TransformConstraint *param_1)

{
  long *plVar1;
  ulong uVar2;
  Bone *pBVar3;
  long *plVar4;
  long lVar5;
  Vector *pVVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  Bone *this_00;
  undefined8 uVar12;
  ulong uVar13;
  
  if (*(char *)(*(long *)(param_1 + 0x30) + 0x95) != '\0') {
    uVar2 = ConstraintData::isSkinRequired(*(ConstraintData **)(param_1 + 8));
    if ((uVar2 & 1) == 0) {
LAB_00cf20b4:
      param_1[0x48] = (TransformConstraint)0x1;
      pBVar3 = (Bone *)TransformConstraint::getTarget(param_1);
      sortBone(this,pBVar3);
      lVar10 = TransformConstraint::getBones(param_1);
      uVar13 = *(ulong *)(lVar10 + 8);
      uVar2 = TransformConstraintData::isLocal(*(TransformConstraintData **)(param_1 + 8));
      if ((uVar2 & 1) == 0) {
        if (uVar13 != 0) {
          uVar2 = 0;
          do {
            sortBone(this,*(Bone **)(*(long *)(lVar10 + 0x18) + uVar2 * 8));
            uVar2 = uVar2 + 1;
          } while (uVar13 != uVar2);
        }
      }
      else if (uVar13 != 0) {
        uVar2 = 0;
        do {
          this_00 = *(Bone **)(*(long *)(lVar10 + 0x18) + uVar2 * 8);
          pBVar3 = (Bone *)Bone::getParent(this_00);
          sortBone(this,pBVar3);
          if (*(ulong *)(this + 0xd8) != 0) {
            uVar11 = 0;
            do {
              if (*(Bone **)(*(long *)(this + 0xe8) + uVar11 * 8) == this_00) goto LAB_00cf21c0;
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ulong *)(this + 0xd8));
          }
          uVar11 = *(ulong *)(this + 0xf8);
          if (uVar11 == *(ulong *)(this + 0x100)) {
            uVar7 = (uint)((float)uVar11 * 1.75);
            uVar12 = *(undefined8 *)(this + 0x108);
            if (uVar7 < 9) {
              uVar7 = 8;
            }
            *(long *)(this + 0x100) = (long)(int)uVar7;
            plVar4 = (long *)SpineExtension::getInstance();
            lVar5 = (**(code **)(*plVar4 + 0x20))
                              (plVar4,uVar12,
                               -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                               ,0x6a);
            lVar8 = *(long *)(this + 0xf8);
            *(long *)(this + 0x108) = lVar5;
            *(long *)(this + 0xf8) = lVar8 + 1;
            puVar9 = (undefined8 *)(lVar5 + lVar8 * 8);
          }
          else {
            *(ulong *)(this + 0xf8) = uVar11 + 1;
            puVar9 = (undefined8 *)(*(long *)(this + 0x108) + uVar11 * 8);
          }
          *puVar9 = this_00;
LAB_00cf21c0:
          uVar2 = uVar2 + 1;
        } while (uVar2 != uVar13);
      }
      uVar2 = *(ulong *)(this + 0xd8);
      if (uVar2 == *(ulong *)(this + 0xe0)) {
        uVar7 = (uint)((float)uVar2 * 1.75);
        uVar12 = *(undefined8 *)(this + 0xe8);
        if (uVar7 < 9) {
          uVar7 = 8;
        }
        *(long *)(this + 0xe0) = (long)(int)uVar7;
        plVar4 = (long *)SpineExtension::getInstance();
        lVar5 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,uVar12,
                           -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar8 = *(long *)(this + 0xd8);
        *(long *)(this + 0xe8) = lVar5;
        *(long *)(this + 0xd8) = lVar8 + 1;
        *(TransformConstraint **)(lVar5 + lVar8 * 8) = param_1;
      }
      else {
        *(ulong *)(this + 0xd8) = uVar2 + 1;
        *(TransformConstraint **)(*(long *)(this + 0xe8) + uVar2 * 8) = param_1;
      }
      if (uVar13 == 0) {
        return;
      }
      uVar2 = 0;
      do {
        pVVar6 = (Vector *)Bone::getChildren(*(Bone **)(*(long *)(lVar10 + 0x18) + uVar2 * 8));
        sortReset(pVVar6);
        uVar2 = uVar2 + 1;
      } while (uVar13 != uVar2);
      if (uVar13 == 0) {
        return;
      }
      lVar10 = *(long *)(lVar10 + 0x18);
      if (uVar13 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = uVar13 & 0xfffffffffffffffe;
        plVar4 = (long *)(lVar10 + 8);
        uVar2 = uVar11;
        do {
          plVar1 = plVar4 + -1;
          lVar5 = *plVar4;
          uVar2 = uVar2 - 2;
          plVar4 = plVar4 + 2;
          *(undefined1 *)(*plVar1 + 0x94) = 1;
          *(undefined1 *)(lVar5 + 0x94) = 1;
        } while (uVar2 != 0);
        if (uVar13 == uVar11) {
          return;
        }
      }
      lVar5 = uVar13 - uVar11;
      plVar4 = (long *)(lVar10 + uVar11 * 8);
      do {
        lVar5 = lVar5 + -1;
        *(undefined1 *)(*plVar4 + 0x94) = 1;
        plVar4 = plVar4 + 1;
      } while (lVar5 != 0);
      return;
    }
    lVar10 = *(long *)(this + 0x110);
    if ((lVar10 != 0) && (*(ulong *)(lVar10 + 0x70) != 0)) {
      uVar2 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0x80) + uVar2 * 8) == *(long *)(param_1 + 8))
        goto LAB_00cf20b4;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ulong *)(lVar10 + 0x70));
    }
  }
  param_1[0x48] = (TransformConstraint)0x0;
  return;
}

