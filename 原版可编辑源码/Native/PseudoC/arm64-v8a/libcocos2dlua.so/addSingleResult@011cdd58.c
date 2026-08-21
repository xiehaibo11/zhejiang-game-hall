
/* btClosestNotMeConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult&, bool)
    */

undefined4 __thiscall
btClosestNotMeConvexResultCallback::addSingleResult
          (btClosestNotMeConvexResultCallback *this,LocalConvexResult *param_1,bool param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar1 = *(long *)param_1;
  uVar2 = 0x3f800000;
  if (((lVar1 != *(long *)(this + 0x58)) && ((*(byte *)(lVar1 + 0xe0) >> 2 & 1) == 0)) &&
     ((*(float *)(this + 0x20) - *(float *)(this + 0x10)) * *(float *)(param_1 + 0x10) +
      ((float)*(undefined8 *)(this + 0x24) - (float)*(undefined8 *)(this + 0x14)) *
      (float)*(undefined8 *)(param_1 + 0x14) +
      ((float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20) -
      (float)((ulong)*(undefined8 *)(this + 0x14) >> 0x20)) *
      (float)((ulong)*(undefined8 *)(param_1 + 0x14) >> 0x20) < -*(float *)(this + 0x60))) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(long *)(this + 0x50) = lVar1;
    *(undefined4 *)(this + 8) = uVar2;
    if (param_2) {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(this + 0x30) = uVar3;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x10);
      fVar5 = *(float *)(param_1 + 0x14);
      fVar7 = *(float *)(lVar1 + 0x18);
      fVar8 = *(float *)(lVar1 + 0x1c);
      fVar10 = *(float *)(lVar1 + 0x28);
      fVar12 = *(float *)(lVar1 + 0x2c);
      fVar6 = *(float *)(param_1 + 0x18);
      fVar9 = *(float *)(lVar1 + 0x20);
      fVar11 = *(float *)(lVar1 + 0x30);
      *(float *)(this + 0x30) =
           *(float *)(lVar1 + 8) * fVar4 + *(float *)(lVar1 + 0xc) * fVar5 +
           *(float *)(lVar1 + 0x10) * fVar6;
      *(float *)(this + 0x34) = fVar4 * fVar7 + fVar5 * fVar8 + fVar6 * fVar9;
      *(float *)(this + 0x38) = fVar4 * fVar10 + fVar5 * fVar12 + fVar6 * fVar11;
      *(undefined4 *)(this + 0x3c) = 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x40) = uVar3;
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  return uVar2;
}

