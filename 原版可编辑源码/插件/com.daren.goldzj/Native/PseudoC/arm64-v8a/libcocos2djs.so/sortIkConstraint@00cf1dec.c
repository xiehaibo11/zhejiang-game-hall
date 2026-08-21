
/* spine::Skeleton::sortIkConstraint(spine::IkConstraint*) */

void __thiscall spine::Skeleton::sortIkConstraint(Skeleton *this,IkConstraint *param_1)

{
  ulong uVar1;
  Bone *pBVar2;
  long *plVar3;
  long lVar4;
  Vector *pVVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  if (*(char *)(*(long *)(param_1 + 0x40) + 0x95) != '\0') {
    uVar1 = ConstraintData::isSkinRequired(*(ConstraintData **)(param_1 + 8));
    if ((uVar1 & 1) == 0) {
LAB_00cf1e60:
      param_1[0x48] = (IkConstraint)0x1;
      pBVar2 = (Bone *)IkConstraint::getTarget(param_1);
      sortBone(this,pBVar2);
      lVar9 = IkConstraint::getBones(param_1);
      pBVar2 = (Bone *)**(undefined8 **)(lVar9 + 0x18);
      sortBone(this,pBVar2);
      if (1 < *(ulong *)(lVar9 + 8)) {
        lVar11 = *(long *)(*(long *)(lVar9 + 0x18) + *(ulong *)(lVar9 + 8) * 8 + -8);
        if (*(ulong *)(this + 0xd8) != 0) {
          uVar1 = 0;
          do {
            if (*(long *)(*(long *)(this + 0xe8) + uVar1 * 8) == lVar11) goto LAB_00cf1f5c;
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(ulong *)(this + 0xd8));
        }
        uVar1 = *(ulong *)(this + 0xf8);
        if (uVar1 == *(ulong *)(this + 0x100)) {
          uVar8 = (uint)((float)uVar1 * 1.75);
          uVar10 = *(undefined8 *)(this + 0x108);
          if (uVar8 < 9) {
            uVar8 = 8;
          }
          *(long *)(this + 0x100) = (long)(int)uVar8;
          plVar3 = (long *)SpineExtension::getInstance();
          lVar4 = (**(code **)(*plVar3 + 0x20))
                            (plVar3,uVar10,
                             -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar6 = *(long *)(this + 0xf8);
          *(long *)(this + 0x108) = lVar4;
          *(long *)(this + 0xf8) = lVar6 + 1;
          *(long *)(lVar4 + lVar6 * 8) = lVar11;
        }
        else {
          *(ulong *)(this + 0xf8) = uVar1 + 1;
          *(long *)(*(long *)(this + 0x108) + uVar1 * 8) = lVar11;
        }
      }
LAB_00cf1f5c:
      uVar1 = *(ulong *)(this + 0xd8);
      if (uVar1 == *(ulong *)(this + 0xe0)) {
        uVar8 = (uint)((float)uVar1 * 1.75);
        uVar10 = *(undefined8 *)(this + 0xe8);
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        *(long *)(this + 0xe0) = (long)(int)uVar8;
        plVar3 = (long *)SpineExtension::getInstance();
        lVar11 = (**(code **)(*plVar3 + 0x20))
                           (plVar3,uVar10,
                            -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x6a);
        lVar4 = *(long *)(this + 0xd8);
        *(long *)(this + 0xe8) = lVar11;
        *(long *)(this + 0xd8) = lVar4 + 1;
        puVar7 = (undefined8 *)(lVar11 + lVar4 * 8);
      }
      else {
        *(ulong *)(this + 0xd8) = uVar1 + 1;
        puVar7 = (undefined8 *)(*(long *)(this + 0xe8) + uVar1 * 8);
      }
      *puVar7 = param_1;
      pVVar5 = (Vector *)Bone::getChildren(pBVar2);
      sortReset(pVVar5);
      *(undefined1 *)(*(long *)(*(long *)(lVar9 + 0x18) + *(long *)(lVar9 + 8) * 8 + -8) + 0x94) = 1
      ;
      return;
    }
    lVar9 = *(long *)(this + 0x110);
    if ((lVar9 != 0) && (*(ulong *)(lVar9 + 0x70) != 0)) {
      uVar1 = 0;
      do {
        if (*(long *)(*(long *)(lVar9 + 0x80) + uVar1 * 8) == *(long *)(param_1 + 8))
        goto LAB_00cf1e60;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulong *)(lVar9 + 0x70));
    }
  }
  param_1[0x48] = (IkConstraint)0x0;
  return;
}

