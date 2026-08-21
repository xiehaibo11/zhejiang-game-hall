
/* dragonBones::Slot::intersectsSegment(float, float, float, float, dragonBones::Point*,
   dragonBones::Point*, dragonBones::Point*) */

int __thiscall
dragonBones::Slot::intersectsSegment
          (Slot *this,float param_1,float param_2,float param_3,float param_4,Point *param_5,
          Point *param_6,Point *param_7)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  plVar2 = *(long **)(this + 0x160);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (this[0xfc] == (Slot)0x0) {
    fVar4 = *(float *)(this + 0x10);
    fVar5 = *(float *)(this + 0x14);
    fVar6 = *(float *)(this + 0x18);
    fVar7 = *(float *)(this + 0x1c);
    fVar8 = *(float *)(this + 0x20);
    fVar11 = *(float *)(this + 0x24);
  }
  else {
    fVar5 = *(float *)(this + 0x10c);
    fVar6 = *(float *)(this + 0x110);
    fVar7 = *(float *)(this + 0x114);
    fVar8 = *(float *)(this + 0x118);
    fVar11 = *(float *)(this + 0x11c);
    fVar9 = *(float *)(this + 0x120);
    lVar3 = *(long *)(this + 0x180);
    this[0xfc] = (Slot)0x0;
    *(float *)(this + 0x10) = fVar5;
    *(float *)(this + 0x14) = fVar6;
    *(float *)(this + 0x18) = fVar7;
    *(float *)(this + 0x1c) = fVar8;
    *(float *)(this + 0x20) = fVar11;
    *(float *)(this + 0x24) = fVar9;
    fVar10 = (float)*(undefined8 *)(lVar3 + 0x10);
    fVar12 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
    fVar13 = (float)*(undefined8 *)(lVar3 + 0x18);
    fVar14 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
    fVar4 = fVar10 * fVar5 + fVar13 * fVar6;
    fVar5 = fVar12 * fVar5 + fVar14 * fVar6;
    fVar6 = fVar10 * fVar7 + fVar13 * fVar8;
    fVar7 = fVar12 * fVar7 + fVar14 * fVar8;
    fVar8 = fVar11 * fVar10 + fVar9 * fVar13 + *(float *)(lVar3 + 0x20);
    fVar11 = fVar11 * fVar12 + fVar9 * fVar14 + *(float *)(lVar3 + 0x24);
    this[0x70] = (Slot)0x1;
    *(float *)(this + 0x20) = fVar8;
    *(float *)(this + 0x24) = fVar11;
    *(ulong *)(this + 0x18) = CONCAT44(fVar7,fVar6);
    *(ulong *)(this + 0x10) = CONCAT44(fVar5,fVar4);
  }
  fVar9 = fVar4 * fVar7 - fVar5 * fVar6;
  TransformObject::_helpMatrix = fVar7 / fVar9;
  DAT_01d289ec = -fVar5 / fVar9;
  DAT_01d289f0 = -fVar6 / fVar9;
  DAT_01d289f4 = fVar4 / fVar9;
  DAT_01d289f8 = (fVar6 * fVar11 - fVar7 * fVar8) / fVar9;
  DAT_01d289fc = -(fVar4 * fVar11 - fVar5 * fVar8) / fVar9;
  TransformObject::_helpPoint =
       DAT_01d289f8 + TransformObject::_helpMatrix * param_3 + DAT_01d289f0 * param_4;
  DAT_01d3df94 = DAT_01d289fc + DAT_01d289ec * param_3 + DAT_01d289f4 * param_4;
  iVar1 = (**(code **)(*plVar2 + 0x28))
                    (DAT_01d289f8 + TransformObject::_helpMatrix * param_1 + DAT_01d289f0 * param_2,
                     DAT_01d289fc + DAT_01d289ec * param_1 + DAT_01d289f4 * param_2,plVar2,param_5,
                     param_6,param_7);
  if (iVar1 < 1) {
    return iVar1;
  }
  if (iVar1 - 1U < 2) {
    if (param_5 != (Point *)0x0) {
      fVar5 = *(float *)param_5;
      fVar6 = *(float *)(this + 0x14);
      fVar7 = *(float *)(this + 0x1c);
      fVar4 = fVar5 * *(float *)(this + 0x10) + *(float *)(param_5 + 4) * *(float *)(this + 0x18) +
              *(float *)(this + 0x20);
      *(float *)param_5 = fVar4;
      fVar5 = fVar5 * fVar6 + *(float *)(param_5 + 4) * fVar7 + *(float *)(this + 0x24);
      *(float *)(param_5 + 4) = fVar5;
      if (param_6 != (Point *)0x0) {
        *(float *)param_6 = fVar4;
        *(float *)(param_6 + 4) = fVar5;
      }
      goto joined_r0x00d2d0bc;
    }
  }
  else if (param_5 != (Point *)0x0) {
    fVar4 = *(float *)param_5;
    fVar5 = *(float *)(this + 0x14);
    fVar6 = *(float *)(this + 0x1c);
    *(float *)param_5 =
         fVar4 * *(float *)(this + 0x10) + *(float *)(param_5 + 4) * *(float *)(this + 0x18) +
         *(float *)(this + 0x20);
    *(float *)(param_5 + 4) =
         fVar4 * fVar5 + *(float *)(param_5 + 4) * fVar6 + *(float *)(this + 0x24);
  }
  if (param_6 != (Point *)0x0) {
    fVar4 = *(float *)param_6;
    fVar5 = *(float *)(this + 0x14);
    fVar6 = *(float *)(this + 0x1c);
    *(float *)param_6 =
         fVar4 * *(float *)(this + 0x10) + *(float *)(param_6 + 4) * *(float *)(this + 0x18) +
         *(float *)(this + 0x20);
    *(float *)(param_6 + 4) =
         fVar4 * fVar5 + *(float *)(param_6 + 4) * fVar6 + *(float *)(this + 0x24);
  }
joined_r0x00d2d0bc:
  if (param_7 != (Point *)0x0) {
    sincosf(*(float *)param_7,&fStack_64,&local_68);
    fVar5 = *(float *)(this + 0x10);
    fVar7 = *(float *)(this + 0x14);
    fVar6 = *(float *)(this + 0x18);
    fVar8 = *(float *)(this + 0x1c);
    DAT_01d3df94 = local_68 * fVar7 + fStack_64 * fVar8;
    fVar4 = atan2f(DAT_01d3df94,fVar5 * local_68 + fStack_64 * fVar6);
    *(float *)param_7 = fVar4;
    sincosf(*(float *)(param_7 + 4),&fStack_6c,&local_70);
    TransformObject::_helpPoint = fVar5 * local_70 + fVar6 * fStack_6c;
    DAT_01d3df94 = fVar7 * local_70 + fVar8 * fStack_6c;
    fVar4 = atan2f(DAT_01d3df94,TransformObject::_helpPoint);
    *(float *)(param_7 + 4) = fVar4;
  }
  return iVar1;
}

