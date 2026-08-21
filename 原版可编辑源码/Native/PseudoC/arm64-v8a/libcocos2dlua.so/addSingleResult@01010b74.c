
/* btCollisionWorld::ClosestRayResultCallback::addSingleResult(btCollisionWorld::LocalRayResult&,
   bool) */

undefined4 __thiscall
btCollisionWorld::ClosestRayResultCallback::addSingleResult
          (ClosestRayResultCallback *this,LocalRayResult *param_1,bool param_2)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x20);
  lVar1 = *(long *)param_1;
                    /* catch() { ... } // from try @ 01010b0c with catch @ 01010b80 */
  *(long *)(this + 0x10) = lVar1;
  if (param_2) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x40) = uVar3;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
                    /* try { // try from 01010b9c to 01110c73 has its CatchHandler @ 01010b9c
                       catch() { ... } // from try @ 01010b9c with catch @ 01010b9c
                       catch() { ... } // from try @ 01010c7c with catch @ 01010b9c
                       catch() { ... } // from try @ 01010fb4 with catch @ 01010b9c */
    fVar6 = *(float *)(lVar1 + 0x18);
    fVar7 = *(float *)(lVar1 + 0x1c);
    fVar9 = *(float *)(lVar1 + 0x28);
    fVar11 = *(float *)(lVar1 + 0x2c);
    fVar5 = *(float *)(param_1 + 0x18);
    fVar8 = *(float *)(lVar1 + 0x20);
    fVar10 = *(float *)(lVar1 + 0x30);
    *(float *)(this + 0x40) =
         *(float *)(lVar1 + 8) * fVar2 + *(float *)(lVar1 + 0xc) * fVar4 +
         *(float *)(lVar1 + 0x10) * fVar5;
    *(float *)(this + 0x44) = fVar2 * fVar6 + fVar4 * fVar7 + fVar5 * fVar8;
    *(float *)(this + 0x48) = fVar2 * fVar9 + fVar4 * fVar11 + fVar5 * fVar10;
    *(undefined4 *)(this + 0x4c) = 0;
  }
  fVar2 = *(float *)(param_1 + 0x20);
  fVar4 = 1.0 - fVar2;
  *(ulong *)(this + 0x50) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) * fVar4 +
                (float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) * fVar2,
                (float)*(undefined8 *)(this + 0x20) * fVar4 +
                (float)*(undefined8 *)(this + 0x30) * fVar2);
  *(float *)(this + 0x58) = fVar4 * *(float *)(this + 0x28) + fVar2 * *(float *)(this + 0x38);
  return *(undefined4 *)(param_1 + 0x20);
}

