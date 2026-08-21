
/* dragonBones::Slot::update(int) */

void __thiscall dragonBones::Slot::update(Slot *this,int param_1)

{
  undefined4 uVar1;
  Slot SVar2;
  undefined4 uVar3;
  DeformVertices *this_00;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined8 uVar20;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
                    /* try { // try from 00d80040 to 00e8004f has its CatchHandler @ 00d812bc */
  if (this[0xf8] == (Slot)0x0) {
LAB_00d8016c:
    SVar2 = this[0xf9];
  }
  else {
    this[0xf8] = (Slot)0x0;
    _updateDisplay(this);
    if (this[0xfc] == (Slot)0x0) goto LAB_00d8016c;
    puVar5 = *(undefined8 **)(this + 0x58);
                    /* try { // try from 00d80090 to 00e800d7 has its CatchHandler @ 00d81328 */
    if (puVar5 != (undefined8 *)0x0) {
      uVar20 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) +
                        (float)((ulong)*puVar5 >> 0x20),
                        (float)*(undefined8 *)(this + 0x40) + (float)*puVar5);
      fVar10 = (float)puVar5[1];
      fVar17 = (float)*(undefined8 *)(this + 0x48);
      fVar14 = fVar17 + fVar10;
      fVar11 = (float)((ulong)puVar5[1] >> 0x20);
      fVar15 = (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20);
      fVar16 = fVar15 + fVar11;
      fVar12 = (float)puVar5[2];
      fVar18 = (float)*(undefined8 *)(this + 0x50);
      fVar13 = (float)((ulong)puVar5[2] >> 0x20);
      fVar19 = (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20);
      auVar8._0_4_ = fVar17 * fVar10;
      auVar8._4_4_ = fVar15 * fVar11;
      auVar8._8_4_ = fVar18 * fVar12;
      auVar8._12_4_ = fVar19 * fVar13;
      *(undefined8 *)(this + 0x28) = uVar20;
      auVar9._4_4_ = fVar16;
      auVar9._0_4_ = fVar14;
      auVar9._8_4_ = fVar18 + fVar12;
      auVar9._12_4_ = fVar19 + fVar13;
      auVar9 = NEON_ext(auVar8,auVar9,8,1);
      auVar9 = NEON_ext(auVar9,auVar9,8,1);
      *(long *)(this + 0x38) = auVar9._8_8_;
      *(long *)(this + 0x30) = auVar9._0_8_;
      sincosf(fVar16,&fStack_74,&local_78);
      fVar10 = 1.0;
      fVar11 = 0.0;
                    /* try { // try from 00d800e4 to 00e800eb has its CatchHandler @ 00d812bc */
      if (fVar16 != 0.0) {
                    /* try { // try from 00d800ec to 00e80117 has its CatchHandler @ 00d7f330 */
        fVar10 = local_78;
        fVar11 = fStack_74;
      }
      *(float *)(this + 0x10c) = fVar10;
      *(float *)(this + 0x110) = fVar11;
      fVar13 = fVar11;
      fVar12 = fVar10;
      if (fVar14 != 0.0) {
        sincosf(fVar14 + fVar16,&fStack_7c,&local_80);
                    /* try { // try from 00d80118 to 00e80123 has its CatchHandler @ 00d812c0 */
        fVar13 = fStack_7c;
        fVar12 = local_80;
      }
      *(float *)(this + 0x118) = fVar12;
      *(float *)(this + 0x114) = -fVar13;
      if (auVar8._8_4_ != 1.0) {
        *(float *)(this + 0x10c) = fVar10 * auVar8._8_4_;
        *(float *)(this + 0x110) = fVar11 * auVar8._8_4_;
      }
      if (auVar8._12_4_ != 1.0) {
                    /* try { // try from 00d80154 to 00e801cf has its CatchHandler @ 00d81328 */
        *(float *)(this + 0x114) = auVar8._12_4_ * -fVar13;
        *(float *)(this + 0x118) = auVar8._12_4_ * fVar12;
      }
      *(undefined8 *)(this + 0x11c) = uVar20;
      goto LAB_00d8016c;
    }
    fVar10 = *(float *)(this + 0x48);
    fVar12 = *(float *)(this + 0x4c);
    uVar3 = *(undefined4 *)(this + 0x40);
    uVar1 = *(undefined4 *)(this + 0x44);
    fVar11 = *(float *)(this + 0x50);
    fVar13 = *(float *)(this + 0x54);
    *(undefined4 *)(this + 0x28) = uVar3;
    *(undefined4 *)(this + 0x2c) = uVar1;
    *(float *)(this + 0x30) = fVar10;
    *(float *)(this + 0x34) = fVar12;
    *(float *)(this + 0x38) = fVar11;
    *(float *)(this + 0x3c) = fVar13;
    sincosf(fVar12,&fStack_84,&local_88);
    fVar14 = 0.0;
    fVar16 = 1.0;
    if (fVar12 != 0.0) {
      fVar14 = fStack_84;
      fVar16 = local_88;
    }
    *(float *)(this + 0x10c) = fVar16;
    *(float *)(this + 0x110) = fVar14;
    fVar15 = fVar14;
    fVar17 = fVar16;
    if (fVar10 != 0.0) {
      sincosf(fVar12 + fVar10,&fStack_8c,&local_90);
      fVar15 = fStack_8c;
      fVar17 = local_90;
    }
    *(float *)(this + 0x118) = fVar17;
    *(float *)(this + 0x114) = -fVar15;
    if (fVar11 != 1.0) {
      *(float *)(this + 0x10c) = fVar16 * fVar11;
      *(float *)(this + 0x110) = fVar14 * fVar11;
    }
    if (fVar13 != 1.0) {
      *(float *)(this + 0x114) = fVar13 * -fVar15;
      *(float *)(this + 0x118) = fVar17 * fVar13;
    }
    *(undefined4 *)(this + 0x11c) = uVar3;
    *(undefined4 *)(this + 0x120) = uVar1;
    SVar2 = this[0xf9];
  }
  if (SVar2 != (Slot)0x0) {
    this[0xf9] = (Slot)0x0;
    (**(code **)(*(long *)this + 0x50))(this);
  }
  if ((param_1 < 0) || (*(long **)(this + 0xf0) == (long *)0x0)) {
    if ((this[0xfc] != (Slot)0x0) || (*(char *)(*(long *)(this + 0x180) + 0x91) != '\0')) {
                    /* try { // try from 00d801d4 to 00e801df has its CatchHandler @ 00d812a8 */
      param_1 = -1;
      this[0xfc] = (Slot)0x1;
      *(undefined4 *)(this + 0x108) = 0xffffffff;
    }
    lVar6 = *(long *)(this + 0x170);
  }
  else {
    lVar6 = **(long **)(this + 0xf0);
    iVar7 = *(int *)(lVar6 + (long)param_1 * 4);
    if (iVar7 < 0) {
      if (((this[0xfc] != (Slot)0x0) || (*(char *)(*(long *)(this + 0x180) + 0x91) != '\0')) ||
         (*(int *)(this + 0x108) < 0)) {
        iVar7 = -1;
        goto LAB_00d803e8;
      }
      this[0xfc] = (Slot)0x0;
      *(int *)(lVar6 + (long)param_1 * 4) = *(int *)(this + 0x108);
      lVar6 = *(long *)(this + 0x170);
    }
    else if (*(int *)(this + 0x108) == iVar7) {
      this[0xfc] = (Slot)0x0;
      lVar6 = *(long *)(this + 0x170);
    }
    else {
LAB_00d803e8:
      this[0xfc] = (Slot)0x1;
      *(int *)(this + 0x108) = iVar7;
      lVar6 = *(long *)(this + 0x170);
    }
  }
                    /* try { // try from 00d801e4 to 00e801eb has its CatchHandler @ 00d812b4 */
  if (lVar6 == 0) {
    return;
  }
                    /* try { // try from 00d801ec to 00e801f3 has its CatchHandler @ 00d812b0 */
  if (this[0xfa] != (Slot)0x0) {
                    /* try { // try from 00d801f4 to 00e801fb has its CatchHandler @ 00d812ac */
    this[0xfa] = (Slot)0x0;
    (**(code **)(*(long *)this + 0x78))(this);
  }
  if (this[0xfb] != (Slot)0x0) {
                    /* try { // try from 00d80210 to 00e80217 has its CatchHandler @ 00d812d0 */
    this[0xfb] = (Slot)0x0;
    (**(code **)(*(long *)this + 0x80))(this);
  }
                    /* try { // try from 00d80220 to 00e80237 has its CatchHandler @ 00d81324 */
  if (this[0x90] != (Slot)0x0) {
    this[0x90] = (Slot)0x0;
                    /* try { // try from 00d80238 to 00e80257 has its CatchHandler @ 00d812f4 */
    (**(code **)(*(long *)this + 0x88))(this);
  }
  this_00 = *(DeformVertices **)(this + 0xd8);
  if (((this_00 != (DeformVertices *)0x0) && (*(long *)(this_00 + 0x40) != 0)) &&
     (*(long *)(this + 0x170) == *(long *)(this + 0xe8))) {
    lVar6 = *(long *)(*(long *)(this_00 + 0x40) + 0x10);
    if (this_00[0xd] == (DeformVertices)0x0) {
      if (lVar6 == 0) goto LAB_00d8025c;
      uVar4 = DeformVertices::isBonesUpdate(this_00);
      if ((uVar4 & 1) == 0) {
        return;
      }
      this_00 = *(DeformVertices **)(this + 0xd8);
    }
    this_00[0xd] = (DeformVertices)0x0;
    (**(code **)(*(long *)this + 0x60))(this);
    if (lVar6 != 0) {
      return;
    }
  }
LAB_00d8025c:
  if (this[0xfc] == (Slot)0x0) {
    return;
  }
  this[0xfc] = (Slot)0x0;
  if ((int)*(uint *)(this + 0x108) < 0) {
    _updateGlobalTransformMatrix(this,(bool)((byte)~(byte)((uint)param_1 >> 0x18) >> 7));
    if ((-1 < param_1) && (*(long *)(this + 0xf0) != 0)) {
      uVar3 = ArmatureData::setCacheFrame
                        (*(ArmatureData **)(*(long *)(this + 0x68) + 0x20),(Matrix *)(this + 0x10),
                         (Transform *)(this + 0x28));
      *(undefined4 *)(**(long **)(this + 0xf0) + (long)param_1 * 4) = uVar3;
      *(undefined4 *)(this + 0x108) = uVar3;
    }
  }
  else {
    ArmatureData::getCacheFrame
              (*(ArmatureData **)(*(long *)(this + 0x68) + 0x20),(Matrix *)(this + 0x10),
               (Transform *)(this + 0x28),*(uint *)(this + 0x108));
  }
                    /* WARNING: Could not recover jumptable at 0x00d802b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x68))(this);
  return;
}

