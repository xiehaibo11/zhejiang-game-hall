
/* spine::Skeleton::updateCache() */

void __thiscall spine::Skeleton::updateCache(Skeleton *this)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  ConstraintData *pCVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  IkConstraint *this_00;
  TransformConstraint *this_01;
  PathConstraint *this_02;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  lVar7 = *(long *)(this + 0x18);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      lVar10 = *(long *)(*(long *)(this + 0x28) + lVar8 * 8);
      bVar2 = BoneData::isSkinRequired(*(BoneData **)(lVar10 + 8));
      lVar8 = lVar8 + 1;
      *(byte *)(lVar10 + 0x94) = bVar2 & 1;
      *(byte *)(lVar10 + 0x95) = ~bVar2 & 1;
    } while (lVar7 != lVar8);
  }
  if (*(Skin **)(this + 0x110) != (Skin *)0x0) {
    lVar7 = Skin::getBones(*(Skin **)(this + 0x110));
    lVar8 = *(long *)(lVar7 + 8);
    if (lVar8 != 0) {
      lVar10 = 0;
      do {
        iVar3 = BoneData::getIndex(*(BoneData **)(*(long *)(lVar7 + 0x18) + lVar10 * 8));
        lVar6 = *(long *)(*(long *)(this + 0x28) + (long)iVar3 * 8);
        do {
          *(undefined2 *)(lVar6 + 0x94) = 0x100;
          lVar6 = *(long *)(lVar6 + 0x18);
        } while (lVar6 != 0);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar8);
    }
  }
  uVar9 = *(ulong *)(this + 0x78);
  uVar11 = *(ulong *)(this + 0x98);
  uVar12 = *(ulong *)(this + 0xb8);
  uVar1 = uVar11 + uVar9 + uVar12;
  if (uVar1 != 0) {
    uVar13 = 0;
    do {
      if (uVar9 != 0) {
        uVar14 = 0;
        do {
          this_00 = *(IkConstraint **)(*(long *)(this + 0x88) + uVar14 * 8);
          pCVar4 = (ConstraintData *)IkConstraint::getData(this_00);
          uVar5 = ConstraintData::getOrder(pCVar4);
          if (uVar5 == uVar13) {
            sortIkConstraint(this,this_00);
            goto LAB_00cf18c4;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar9);
      }
      if (uVar11 != 0) {
        uVar14 = 0;
        do {
          this_01 = *(TransformConstraint **)(*(long *)(this + 0xa8) + uVar14 * 8);
          pCVar4 = (ConstraintData *)TransformConstraint::getData(this_01);
          uVar5 = ConstraintData::getOrder(pCVar4);
          if (uVar5 == uVar13) {
            sortTransformConstraint(this,this_01);
            goto LAB_00cf18c4;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar11);
      }
      if (uVar12 != 0) {
        uVar14 = 0;
        do {
          this_02 = *(PathConstraint **)(*(long *)(this + 200) + uVar14 * 8);
          pCVar4 = (ConstraintData *)PathConstraint::getData(this_02);
          uVar5 = ConstraintData::getOrder(pCVar4);
          if (uVar5 == uVar13) {
            sortPathConstraint(this,this_02);
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar12);
      }
LAB_00cf18c4:
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar1);
  }
  lVar7 = *(long *)(this + 0x18);
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      sortBone(this,*(Bone **)(*(long *)(this + 0x28) + lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
  }
  return;
}

