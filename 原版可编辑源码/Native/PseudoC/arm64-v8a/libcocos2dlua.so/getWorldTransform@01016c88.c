
/* btDefaultMotionState::getWorldTransform(btTransform&) const */

void __thiscall
btDefaultMotionState::getWorldTransform(btDefaultMotionState *this,btTransform *param_1)

{
  float fVar1;
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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
                    /* try { // try from 01016c88 to 01116c8f has its CatchHandler @ 01016d28 */
  fVar11 = *(float *)(this + 0x7c);
  fVar12 = *(float *)(this + 0x80);
                    /* try { // try from 01016cac to 01116cc7 has its CatchHandler @ 01016d30 */
  fVar5 = *(float *)(this + 0x50);
  fVar9 = *(float *)(this + 0x60);
  fVar8 = *(float *)(this + 0x70);
  fVar19 = *(float *)(this + 0x10);
                    /* try { // try from 01016cc8 to 01116d73 has its CatchHandler @ 01016c64 */
  fVar20 = *(float *)(this + 0x20);
  fVar21 = *(float *)(this + 0x30);
  fVar22 = *(float *)(this + 0x38);
  fVar23 = *(float *)(this + 0x3c);
  fVar24 = *(float *)(this + 0x40);
  fVar10 = -*(float *)(this + 0x78);
  fVar25 = -fVar11;
  fVar26 = -fVar12;
  fVar1 = (float)*(undefined8 *)(this + 0x48);
  fVar13 = (float)*(undefined8 *)(this + 8);
  fVar14 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  fVar6 = (float)*(undefined8 *)(this + 0x58);
  fVar15 = (float)*(undefined8 *)(this + 0x18);
  fVar16 = (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
  fVar3 = (float)*(undefined8 *)(this + 0x68);
  fVar17 = (float)*(undefined8 *)(this + 0x28);
  fVar18 = (float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20);
  fVar2 = (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20);
  fVar7 = (float)((ulong)*(undefined8 *)(this + 0x58) >> 0x20);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
                    /* catch() { ... } // from try @ 01016c88 with catch @ 01016d28 */
                    /* catch() { ... } // from try @ 01016cac with catch @ 01016d30 */
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(ulong *)param_1 =
       CONCAT44(fVar14 * fVar1 + fVar16 * fVar6 + fVar18 * fVar3,
                fVar13 * fVar1 + fVar15 * fVar6 + fVar17 * fVar3);
  *(float *)(param_1 + 8) = fVar19 * fVar1 + fVar20 * fVar6 + fVar21 * fVar3;
  *(ulong *)(param_1 + 0x10) =
       CONCAT44(fVar14 * fVar2 + fVar16 * fVar7 + fVar18 * fVar4,
                fVar13 * fVar2 + fVar15 * fVar7 + fVar17 * fVar4);
  *(float *)(param_1 + 0x18) = fVar19 * fVar2 + fVar20 * fVar7 + fVar21 * fVar4;
  *(ulong *)(param_1 + 0x20) =
       CONCAT44(fVar14 * fVar5 + fVar16 * fVar9 + fVar18 * fVar8,
                fVar13 * fVar5 + fVar15 * fVar9 + fVar17 * fVar8);
  *(float *)(param_1 + 0x28) = fVar5 * fVar19 + fVar9 * fVar20 + fVar8 * fVar21;
  *(ulong *)(param_1 + 0x30) =
       CONCAT44(fVar2 * fVar10 + fVar7 * fVar25 + fVar4 * fVar26 +
                fVar2 * fVar22 + fVar7 * fVar23 + fVar4 * fVar24,
                fVar1 * fVar10 + fVar6 * fVar25 + fVar3 * fVar26 +
                fVar1 * fVar22 + fVar6 * fVar23 + fVar3 * fVar24);
  *(float *)(param_1 + 0x38) =
       ((fVar5 * fVar10 - fVar9 * fVar11) - fVar8 * fVar12) +
       fVar5 * fVar22 + fVar9 * fVar23 + fVar8 * fVar24;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

