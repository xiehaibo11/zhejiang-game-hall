
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
  undefined8 uVar4;
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
  float fVar15;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
                    /* try { // try from 00d80750 to 00e8075b has its CatchHandler @ 00d812b8 */
  plVar2 = *(long **)(this + 0x160);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (this[0xfc] == (Slot)0x0) {
    fVar5 = *(float *)(this + 0x10);
    fVar6 = *(float *)(this + 0x14);
    fVar7 = *(float *)(this + 0x18);
    fVar8 = *(float *)(this + 0x1c);
    fVar9 = *(float *)(this + 0x20);
    fVar12 = *(float *)(this + 0x24);
  }
  else {
    fVar6 = *(float *)(this + 0x10c);
                    /* try { // try from 00d80774 to 00e80c07 has its CatchHandler @ 00d81328 */
    fVar7 = *(float *)(this + 0x110);
    fVar8 = *(float *)(this + 0x114);
    fVar9 = *(float *)(this + 0x118);
    fVar12 = *(float *)(this + 0x11c);
    fVar10 = *(float *)(this + 0x120);
    lVar3 = *(long *)(this + 0x180);
    this[0xfc] = (Slot)0x0;
    *(float *)(this + 0x10) = fVar6;
    *(float *)(this + 0x14) = fVar7;
    *(float *)(this + 0x18) = fVar8;
    *(float *)(this + 0x1c) = fVar9;
    *(float *)(this + 0x20) = fVar12;
    *(float *)(this + 0x24) = fVar10;
    fVar11 = (float)*(undefined8 *)(lVar3 + 0x10);
    fVar13 = (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20);
    fVar14 = (float)*(undefined8 *)(lVar3 + 0x18);
    fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x18) >> 0x20);
    fVar5 = fVar11 * fVar6 + fVar14 * fVar7;
    fVar6 = fVar13 * fVar6 + fVar15 * fVar7;
    fVar7 = fVar11 * fVar8 + fVar14 * fVar9;
    fVar8 = fVar13 * fVar8 + fVar15 * fVar9;
    fVar9 = fVar12 * fVar11 + fVar10 * fVar14 + *(float *)(lVar3 + 0x20);
    fVar12 = fVar12 * fVar13 + fVar10 * fVar15 + *(float *)(lVar3 + 0x24);
    this[0x70] = (Slot)0x1;
    *(float *)(this + 0x20) = fVar9;
    *(float *)(this + 0x24) = fVar12;
    *(ulong *)(this + 0x18) = CONCAT44(fVar8,fVar7);
    *(ulong *)(this + 0x10) = CONCAT44(fVar6,fVar5);
  }
  fVar10 = fVar5 * fVar8 - fVar6 * fVar7;
  TransformObject::_helpMatrix = fVar8 / fVar10;
  DAT_01777090 = -fVar6 / fVar10;
  DAT_01777094 = -fVar7 / fVar10;
  DAT_01777098 = fVar5 / fVar10;
  DAT_0177709c = (fVar7 * fVar12 - fVar8 * fVar9) / fVar10;
  DAT_017770a0 = -(fVar5 * fVar12 - fVar6 * fVar9) / fVar10;
  TransformObject::_helpPoint =
       DAT_0177709c + TransformObject::_helpMatrix * param_3 + DAT_01777094 * param_4;
  DAT_0178775c = DAT_017770a0 + DAT_01777090 * param_3 + DAT_01777098 * param_4;
  iVar1 = (**(code **)(*plVar2 + 0x28))
                    (DAT_0177709c + TransformObject::_helpMatrix * param_1 + DAT_01777094 * param_2,
                     DAT_017770a0 + DAT_01777090 * param_1 + DAT_01777098 * param_2,plVar2,param_5,
                     param_6,param_7);
  if (iVar1 < 1) {
    return iVar1;
  }
  if (iVar1 - 1U < 2) {
    if (param_5 == (Point *)0x0) goto LAB_00d80960;
    uVar4 = CONCAT44(*(float *)param_5 * (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) * *(float *)(param_5 + 4)
                     + (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20),
                     *(float *)param_5 * (float)*(undefined8 *)(this + 0x10) +
                     (float)*(undefined8 *)(this + 0x18) * *(float *)(param_5 + 4) +
                     (float)*(undefined8 *)(this + 0x20));
    *(undefined8 *)param_5 = uVar4;
    if (param_6 == (Point *)0x0) goto LAB_00d8098c;
  }
  else {
    if (param_5 != (Point *)0x0) {
      *(ulong *)param_5 =
           CONCAT44(*(float *)param_5 * (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) * *(float *)(param_5 + 4) +
                    (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20),
                    *(float *)param_5 * (float)*(undefined8 *)(this + 0x10) +
                    (float)*(undefined8 *)(this + 0x18) * *(float *)(param_5 + 4) +
                    (float)*(undefined8 *)(this + 0x20));
    }
LAB_00d80960:
    if (param_6 == (Point *)0x0) goto LAB_00d8098c;
    uVar4 = CONCAT44(*(float *)param_6 * (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) * *(float *)(param_6 + 4)
                     + (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20),
                     *(float *)param_6 * (float)*(undefined8 *)(this + 0x10) +
                     (float)*(undefined8 *)(this + 0x18) * *(float *)(param_6 + 4) +
                     (float)*(undefined8 *)(this + 0x20));
  }
  *(undefined8 *)param_6 = uVar4;
LAB_00d8098c:
  if (param_7 != (Point *)0x0) {
    sincosf(*(float *)param_7,&fStack_64,&local_68);
    fVar6 = *(float *)(this + 0x10);
    fVar8 = *(float *)(this + 0x14);
    fVar7 = *(float *)(this + 0x18);
    fVar9 = *(float *)(this + 0x1c);
    DAT_0178775c = local_68 * fVar8 + fStack_64 * fVar9;
    fVar5 = atan2f(DAT_0178775c,fVar6 * local_68 + fStack_64 * fVar7);
    *(float *)param_7 = fVar5;
    sincosf(*(float *)(param_7 + 4),&fStack_6c,&local_70);
    TransformObject::_helpPoint = fVar6 * local_70 + fVar7 * fStack_6c;
    DAT_0178775c = fVar8 * local_70 + fVar9 * fStack_6c;
    fVar5 = atan2f(DAT_0178775c,TransformObject::_helpPoint);
    *(float *)(param_7 + 4) = fVar5;
  }
  return iVar1;
}

