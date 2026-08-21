
/* btCollisionWorld::ClosestConvexResultCallback::addSingleResult(btCollisionWorld::LocalConvexResult&,
   bool) */

undefined4 __thiscall
btCollisionWorld::ClosestConvexResultCallback::addSingleResult
          (ClosestConvexResultCallback *this,LocalConvexResult *param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* try { // try from 01010c74 to 01110c7b has its CatchHandler @ 01010fb8 */
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x30);
                    /* try { // try from 01010c7c to 01110c9f has its CatchHandler @ 01010b9c */
  lVar1 = *(long *)param_1;
  *(long *)(this + 0x50) = lVar1;
  if (param_2) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x30) = uVar2;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar6 = *(float *)(lVar1 + 0x18);
    fVar7 = *(float *)(lVar1 + 0x1c);
                    /* try { // try from 01010ca0 to 01110cb3 has its CatchHandler @ 01011004 */
    fVar9 = *(float *)(lVar1 + 0x28);
    fVar11 = *(float *)(lVar1 + 0x2c);
    fVar5 = *(float *)(param_1 + 0x18);
    fVar8 = *(float *)(lVar1 + 0x20);
    fVar10 = *(float *)(lVar1 + 0x30);
                    /* try { // try from 01010cdc to 01110cf3 has its CatchHandler @ 01011030 */
    *(float *)(this + 0x30) =
         *(float *)(lVar1 + 8) * fVar3 + *(float *)(lVar1 + 0xc) * fVar4 +
         *(float *)(lVar1 + 0x10) * fVar5;
    *(float *)(this + 0x34) = fVar3 * fVar6 + fVar4 * fVar7 + fVar5 * fVar8;
                    /* try { // try from 01010cf4 to 01110d07 has its CatchHandler @ 01010ff4 */
    *(float *)(this + 0x38) = fVar3 * fVar9 + fVar4 * fVar11 + fVar5 * fVar10;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x40) = uVar2;
  return *(undefined4 *)(param_1 + 0x30);
}

