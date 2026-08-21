
/* cocos2d::GLProgram::setUniformsForBuiltins(cocos2d::Mat4 const&) */

void __thiscall cocos2d::GLProgram::setUniformsForBuiltins(GLProgram *this,Mat4 *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  Mat4 *pMVar7;
  ulong uVar8;
  undefined8 *puVar9;
  GLProgram GVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  float local_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  Mat4 aMStack_148 [64];
  Mat4 aMStack_108 [64];
  Mat4 aMStack_c8 [64];
  long local_88;
  
                    /* catch() { ... } // from try @ 00fd037c with catch @ 00fd034c */
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  pMVar7 = (Mat4 *)Director::getMatrix(*(Director **)(this + 0xe8),1);
                    /* try { // try from 00fd0374 to 010d037b has its CatchHandler @ 00fd03e4 */
  if (((byte)this[0xf0] >> 5 & 1) != 0) {
    iVar1 = *(int *)(this + 0x34);
                    /* try { // try from 00fd037c to 010d03ff has its CatchHandler @ 00fd034c */
    uVar8 = updateUniformLocation(this,iVar1,pMVar7,0x40);
    if ((uVar8 & 1) != 0) {
      glUniformMatrix4fv(iVar1,1,0,pMVar7);
    }
  }
  GVar10 = this[0xf0];
  if (((byte)GVar10 >> 6 & 1) != 0) {
    Mat4::Mat4((Mat4 *)&local_188);
    Mat4::Mat4(aMStack_148);
    Mat4::Mat4(aMStack_108);
    Mat4::Mat4(aMStack_c8);
                    /* catch() { ... } // from try @ 00fd0374 with catch @ 00fd03e4 */
    uVar8 = Director::getProjectionMatrixStackSize(*(Director **)(this + 0xe8));
    if (3 < uVar8) {
      uVar8 = 4;
    }
    if (uVar8 != 0) {
      uVar11 = 0;
      pfVar12 = &local_188;
      do {
        puVar9 = (undefined8 *)Director::getProjectionMatrix(*(Director **)(this + 0xe8),uVar11);
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        uVar18 = puVar9[3];
        uVar17 = puVar9[2];
        uVar19 = puVar9[4];
        uVar21 = puVar9[7];
        uVar20 = puVar9[6];
        uVar11 = uVar11 + 1;
        *(undefined8 *)(pfVar12 + 10) = puVar9[5];
        *(undefined8 *)(pfVar12 + 8) = uVar19;
        *(undefined8 *)(pfVar12 + 0xe) = uVar21;
        *(undefined8 *)(pfVar12 + 0xc) = uVar20;
        *(undefined8 *)(pfVar12 + 2) = uVar16;
        *(undefined8 *)pfVar12 = uVar15;
        *(undefined8 *)(pfVar12 + 6) = uVar18;
        *(undefined8 *)(pfVar12 + 4) = uVar17;
        pfVar12 = pfVar12 + 0x10;
      } while (uVar11 < uVar8);
    }
    iVar1 = *(int *)(this + 0x38);
    uVar8 = updateUniformLocation(this,iVar1,&local_188,0x100);
    if ((uVar8 & 1) != 0) {
      glUniformMatrix4fv(iVar1,4,0,&local_188);
    }
    Mat4::~Mat4(aMStack_c8);
    Mat4::~Mat4(aMStack_108);
    Mat4::~Mat4(aMStack_148);
    Mat4::~Mat4((Mat4 *)&local_188);
    GVar10 = this[0xf0];
  }
  if (((byte)GVar10 >> 4 & 1) != 0) {
    iVar1 = *(int *)(this + 0x3c);
    uVar8 = updateUniformLocation(this,iVar1,param_1,0x40);
    if ((uVar8 & 1) != 0) {
                    /* catch() { ... } // from try @ 00fd04dc with catch @ 00fd04ac */
      glUniformMatrix4fv(iVar1,1,0,param_1);
    }
  }
  GVar10 = this[0xf0];
  if (((byte)GVar10 >> 2 & 1) != 0) {
    Mat4::Mat4((Mat4 *)&local_188,pMVar7);
                    /* try { // try from 00fd04d4 to 010d04db has its CatchHandler @ 00fd0544 */
    Mat4::multiply((Mat4 *)&local_188,param_1);
    iVar1 = *(int *)(this + 0x40);
                    /* try { // try from 00fd04dc to 010d055f has its CatchHandler @ 00fd04ac */
    uVar8 = updateUniformLocation(this,iVar1,&local_188,0x40);
    if ((uVar8 & 1) != 0) {
      glUniformMatrix4fv(iVar1,1,0,&local_188);
    }
    Mat4::~Mat4((Mat4 *)&local_188);
    GVar10 = this[0xf0];
  }
  if (((byte)GVar10 >> 3 & 1) != 0) {
    Mat4::Mat4((Mat4 *)&local_188);
    Mat4::Mat4(aMStack_148);
    Mat4::Mat4(aMStack_108);
                    /* catch() { ... } // from try @ 00fd04d4 with catch @ 00fd0544 */
    Mat4::Mat4(aMStack_c8);
    uVar8 = Director::getProjectionMatrixStackSize(*(Director **)(this + 0xe8));
    if (3 < uVar8) {
      uVar8 = 4;
    }
    if (uVar8 != 0) {
      uVar11 = 0;
      pfVar12 = &local_188;
      do {
        pMVar7 = (Mat4 *)Director::getProjectionMatrix(*(Director **)(this + 0xe8),uVar11);
        Mat4::Mat4((Mat4 *)&local_1c8,pMVar7);
        Mat4::multiply((Mat4 *)&local_1c8,param_1);
        *(undefined8 *)(pfVar12 + 10) = uStack_1a0;
        *(ulong *)(pfVar12 + 8) = CONCAT44(uStack_1a4,local_1a8);
        *(undefined8 *)(pfVar12 + 0xe) = uStack_190;
        *(undefined8 *)(pfVar12 + 0xc) = local_198;
        *(ulong *)(pfVar12 + 2) = CONCAT44(uStack_1bc,fStack_1c0);
        *(undefined8 *)pfVar12 = local_1c8;
        *(undefined8 *)(pfVar12 + 6) = uStack_1b0;
        *(ulong *)(pfVar12 + 4) = CONCAT44(uStack_1b4,uStack_1b8);
        Mat4::~Mat4((Mat4 *)&local_1c8);
        uVar11 = uVar11 + 1;
        pfVar12 = pfVar12 + 0x10;
      } while (uVar11 < uVar8);
    }
    iVar1 = *(int *)(this + 0x44);
    uVar8 = updateUniformLocation(this,iVar1,&local_188,0x100);
    if ((uVar8 & 1) != 0) {
      glUniformMatrix4fv(iVar1,4,0,&local_188);
    }
    Mat4::~Mat4(aMStack_c8);
    Mat4::~Mat4(aMStack_108);
    Mat4::~Mat4(aMStack_148);
                    /* catch() { ... } // from try @ 00fd063c with catch @ 00fd060c */
    Mat4::~Mat4((Mat4 *)&local_188);
    GVar10 = this[0xf0];
  }
  if (((byte)GVar10 >> 1 & 1) != 0) {
    Mat4::Mat4((Mat4 *)&local_188,param_1);
    local_150 = 0;
    local_158 = 0;
    Mat4::inverse((Mat4 *)&local_188);
                    /* try { // try from 00fd0634 to 010d063b has its CatchHandler @ 00fd06a4 */
    Mat4::transpose((Mat4 *)&local_188);
                    /* try { // try from 00fd063c to 010d06bf has its CatchHandler @ 00fd060c */
    fStack_1c0 = local_180;
    uStack_1bc = (undefined4)local_178;
    uStack_1b8 = (undefined4)((ulong)local_178 >> 0x20);
    uStack_1b4 = local_170;
    uStack_1b0 = local_168;
    local_1a8 = uStack_160;
    iVar1 = *(int *)(this + 0x48);
    uVar8 = updateUniformLocation(this,iVar1,&local_1c8,0x24);
    if ((uVar8 & 1) != 0) {
      glUniformMatrix3fv(iVar1,1,0,&local_1c8);
    }
    Mat4::~Mat4((Mat4 *)&local_188);
                    /* catch() { ... } // from try @ 00fd0634 with catch @ 00fd06a4 */
    GVar10 = this[0xf0];
  }
  if (((byte)GVar10 & 1) != 0) {
    iVar1 = *(int *)(this + 0x4c);
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0xe8) + 0x14c));
    fVar13 = *(float *)(*(long *)(this + 0xe8) + 0x118) * fVar13;
    local_188 = fVar13 / 10.0;
    fStack_184 = fVar13;
    local_180 = fVar13 + fVar13;
    fStack_17c = fVar13 * 4.0;
    uVar8 = updateUniformLocation(this,iVar1,&local_188,0x10);
    if ((uVar8 & 1) != 0) {
      glUniform4f(fVar13 / 10.0,fVar13,fVar13 + fVar13,fVar13 * 4.0,iVar1);
    }
    iVar1 = *(int *)(this + 0x50);
    fVar23 = fVar13 * 0.125;
    fVar24 = fVar13 * 0.5;
    fVar22 = fVar13 * 0.25;
    fVar14 = sinf(fVar13);
    local_188 = fVar23;
    fStack_184 = fVar22;
    local_180 = fVar24;
    fStack_17c = fVar14;
    uVar8 = updateUniformLocation(this,iVar1,&local_188,0x10);
    if ((uVar8 & 1) != 0) {
                    /* catch() { ... } // from try @ 00fd079c with catch @ 00fd076c */
      glUniform4f(fVar23,fVar22,fVar24,fVar14,iVar1);
    }
    iVar1 = *(int *)(this + 0x54);
    fVar13 = cosf(fVar13);
    local_188 = fVar23;
    fStack_184 = fVar22;
    local_180 = fVar24;
    fStack_17c = fVar13;
                    /* try { // try from 00fd0794 to 010d079b has its CatchHandler @ 00fd0804 */
    uVar8 = updateUniformLocation(this,iVar1,&local_188,0x10);
                    /* try { // try from 00fd079c to 010d081f has its CatchHandler @ 00fd076c */
    if ((uVar8 & 1) != 0) {
      glUniform4f(fVar23,fVar22,fVar24,fVar13,iVar1);
    }
    GVar10 = this[0xf0];
  }
  if ((char)GVar10 < '\0') {
    iVar1 = *(int *)(this + 0x58);
    iVar3 = rand();
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_188 = (float)iVar3 * 4.656613e-10;
    fStack_184 = (float)iVar4 * 4.656613e-10;
    local_180 = (float)iVar5 * 4.656613e-10;
    fStack_17c = (float)iVar6 * 4.656613e-10;
                    /* catch() { ... } // from try @ 00fd0794 with catch @ 00fd0804 */
    uVar8 = updateUniformLocation(this,iVar1,&local_188,0x10);
    if ((uVar8 & 1) != 0) {
      glUniform4f((float)iVar3 * 4.656613e-10,(float)iVar4 * 4.656613e-10,
                  (float)iVar5 * 4.656613e-10,(float)iVar6 * 4.656613e-10,iVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

