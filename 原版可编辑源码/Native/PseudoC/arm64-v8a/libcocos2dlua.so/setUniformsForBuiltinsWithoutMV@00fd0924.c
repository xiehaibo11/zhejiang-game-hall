
/* cocos2d::GLProgram::setUniformsForBuiltinsWithoutMV() */

void __thiscall cocos2d::GLProgram::setUniformsForBuiltinsWithoutMV(GLProgram *this)

{
  int iVar1;
  GLProgram GVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pvVar8 = (void *)Director::getMatrix(*(Director **)(this + 0xe8),1);
                    /* catch() { ... } // from try @ 00fd08f4 with catch @ 00fd0964 */
  if (((byte)this[0xf0] >> 5 & 1) != 0) {
    iVar1 = *(int *)(this + 0x34);
    uVar9 = updateUniformLocation(this,iVar1,pvVar8,0x40);
    if ((uVar9 & 1) != 0) {
      glUniformMatrix4fv(iVar1,1,0,pvVar8);
    }
  }
  GVar2 = this[0xf0];
  if (((byte)GVar2 & 1) != 0) {
    iVar1 = *(int *)(this + 0x4c);
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(this + 0xe8) + 0x14c));
    fVar10 = *(float *)(*(long *)(this + 0xe8) + 0x118) * fVar10;
    local_78 = fVar10 / 10.0;
    fStack_74 = fVar10;
    local_70 = fVar10 + fVar10;
    fStack_6c = fVar10 * 4.0;
    uVar9 = updateUniformLocation(this,iVar1,&local_78,0x10);
    if ((uVar9 & 1) != 0) {
      glUniform4f(fVar10 / 10.0,fVar10,fVar10 + fVar10,fVar10 * 4.0,iVar1);
    }
    iVar1 = *(int *)(this + 0x50);
    fVar13 = fVar10 * 0.125;
    fVar14 = fVar10 * 0.5;
    fVar12 = fVar10 * 0.25;
    fVar11 = sinf(fVar10);
                    /* catch() { ... } // from try @ 00fd0a5c with catch @ 00fd0a2c */
    local_78 = fVar13;
    fStack_74 = fVar12;
    local_70 = fVar14;
    fStack_6c = fVar11;
    uVar9 = updateUniformLocation(this,iVar1,&local_78,0x10);
    if ((uVar9 & 1) != 0) {
                    /* try { // try from 00fd0a54 to 010d0a5b has its CatchHandler @ 00fd0ac4 */
                    /* try { // try from 00fd0a5c to 010d0adf has its CatchHandler @ 00fd0a2c */
      glUniform4f(fVar13,fVar12,fVar14,fVar11,iVar1);
    }
    iVar1 = *(int *)(this + 0x54);
    fVar10 = cosf(fVar10);
    local_78 = fVar13;
    fStack_74 = fVar12;
    local_70 = fVar14;
    fStack_6c = fVar10;
    uVar9 = updateUniformLocation(this,iVar1,&local_78,0x10);
    if ((uVar9 & 1) != 0) {
      glUniform4f(fVar13,fVar12,fVar14,fVar10,iVar1);
    }
    GVar2 = this[0xf0];
  }
  if ((char)GVar2 < '\0') {
    iVar1 = *(int *)(this + 0x58);
    iVar4 = rand();
                    /* catch() { ... } // from try @ 00fd0a54 with catch @ 00fd0ac4 */
    iVar5 = rand();
    iVar6 = rand();
    iVar7 = rand();
    local_78 = (float)iVar4 * 4.656613e-10;
    fStack_74 = (float)iVar5 * 4.656613e-10;
    local_70 = (float)iVar6 * 4.656613e-10;
    fStack_6c = (float)iVar7 * 4.656613e-10;
    uVar9 = updateUniformLocation(this,iVar1,&local_78,0x10);
    if ((uVar9 & 1) != 0) {
      glUniform4f((float)iVar4 * 4.656613e-10,(float)iVar5 * 4.656613e-10,
                  (float)iVar6 * 4.656613e-10,(float)iVar7 * 4.656613e-10,iVar1);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

