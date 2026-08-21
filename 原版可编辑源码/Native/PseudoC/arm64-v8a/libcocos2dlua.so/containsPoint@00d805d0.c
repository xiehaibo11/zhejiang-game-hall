
/* dragonBones::Slot::containsPoint(float, float) */

void __thiscall dragonBones::Slot::containsPoint(Slot *this,float param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (*(long **)(this + 0x160) != (long *)0x0) {
    if (this[0xfc] == (Slot)0x0) {
      fVar2 = *(float *)(this + 0x10);
      fVar3 = *(float *)(this + 0x14);
      fVar4 = *(float *)(this + 0x18);
      fVar5 = *(float *)(this + 0x1c);
      fVar6 = *(float *)(this + 0x20);
      fVar9 = *(float *)(this + 0x24);
    }
    else {
      fVar3 = *(float *)(this + 0x10c);
      fVar4 = *(float *)(this + 0x110);
      fVar5 = *(float *)(this + 0x114);
      fVar6 = *(float *)(this + 0x118);
      fVar9 = *(float *)(this + 0x11c);
      fVar7 = *(float *)(this + 0x120);
      lVar1 = *(long *)(this + 0x180);
      this[0xfc] = (Slot)0x0;
      *(float *)(this + 0x10) = fVar3;
      *(float *)(this + 0x14) = fVar4;
      *(float *)(this + 0x18) = fVar5;
      *(float *)(this + 0x1c) = fVar6;
      *(float *)(this + 0x20) = fVar9;
      *(float *)(this + 0x24) = fVar7;
      fVar8 = (float)*(undefined8 *)(lVar1 + 0x10);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
      fVar11 = (float)*(undefined8 *)(lVar1 + 0x18);
      fVar12 = (float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
      fVar2 = fVar8 * fVar3 + fVar11 * fVar4;
      fVar3 = fVar10 * fVar3 + fVar12 * fVar4;
      fVar4 = fVar8 * fVar5 + fVar11 * fVar6;
      fVar5 = fVar10 * fVar5 + fVar12 * fVar6;
      fVar6 = fVar9 * fVar8 + fVar7 * fVar11 + *(float *)(lVar1 + 0x20);
      fVar9 = fVar9 * fVar10 + fVar7 * fVar12 + *(float *)(lVar1 + 0x24);
      this[0x70] = (Slot)0x1;
      *(float *)(this + 0x20) = fVar6;
      *(float *)(this + 0x24) = fVar9;
      *(ulong *)(this + 0x18) = CONCAT44(fVar5,fVar4);
      *(ulong *)(this + 0x10) = CONCAT44(fVar3,fVar2);
    }
                    /* try { // try from 00d806c0 to 00e806f3 has its CatchHandler @ 00d812b8 */
    fVar7 = fVar2 * fVar5 - fVar3 * fVar4;
    TransformObject::_helpMatrix = fVar5 / fVar7;
    DAT_01777090 = -fVar3 / fVar7;
    DAT_01777094 = -fVar4 / fVar7;
    DAT_01777098 = fVar2 / fVar7;
    DAT_0177709c = (fVar4 * fVar9 - fVar5 * fVar6) / fVar7;
    DAT_017770a0 = -(fVar2 * fVar9 - fVar3 * fVar6) / fVar7;
                    /* try { // try from 00d8070c to 00e8073f has its CatchHandler @ 00d81328 */
    TransformObject::_helpPoint =
         DAT_0177709c + TransformObject::_helpMatrix * param_1 + DAT_01777094 * param_2;
    DAT_0178775c = DAT_017770a0 + DAT_01777090 * param_1 + DAT_01777098 * param_2;
                    /* WARNING: Could not recover jumptable at 0x00d8072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x160) + 0x20))();
    return;
  }
  return;
}

