
/* cocos2d::GLProgram::updateUniforms() */

void __thiscall cocos2d::GLProgram::updateUniforms(GLProgram *this)

{
  GLProgram GVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00fce0e4 with catch @ 00fce17c */
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_AMBIENT_COLOR);
  *(undefined4 *)(this + 0x30) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_P_MATRIX);
  *(undefined4 *)(this + 0x34) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_MULTIVIEW_P_MATRIX);
  *(undefined4 *)(this + 0x38) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_MV_MATRIX);
  *(undefined4 *)(this + 0x3c) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_MVP_MATRIX);
  *(undefined4 *)(this + 0x40) = uVar5;
                    /* catch() { ... } // from try @ 00fce23c with catch @ 00fce1f0 */
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_MULTIVIEW_MVP_MATRIX);
  *(undefined4 *)(this + 0x44) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_NORMAL_MATRIX);
  *(undefined4 *)(this + 0x48) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_TIME);
  *(undefined4 *)(this + 0x4c) = uVar5;
                    /* try { // try from 00fce234 to 010ce23b has its CatchHandler @ 00fce2cc */
                    /* try { // try from 00fce23c to 010ce2e7 has its CatchHandler @ 00fce1f0 */
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_SIN_TIME);
  *(undefined4 *)(this + 0x50) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_COS_TIME);
  *(undefined4 *)(this + 0x54) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_RANDOM01);
  *(undefined4 *)(this + 0x58) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_SAMPLER0);
  *(undefined4 *)(this + 0x5c) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_SAMPLER1);
  *(undefined4 *)(this + 0x60) = uVar5;
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_SAMPLER2);
  *(undefined4 *)(this + 100) = uVar5;
                    /* catch() { ... } // from try @ 00fce234 with catch @ 00fce2cc */
  uVar5 = glGetUniformLocation(*(undefined4 *)(this + 0x24),UNIFORM_NAME_SAMPLER3);
  *(undefined4 *)(this + 0x68) = uVar5;
  GVar1 = (GLProgram)
          ((byte)this[0xf0] & 0x80 |
           (*(int *)(this + 0x34) != -1) << 5 | (*(int *)(this + 0x38) != -1) << 6 |
           (*(int *)(this + 0x3c) != -1) << 4 |
           (*(int *)(this + 0x40) != -1) << 2 | (*(int *)(this + 0x44) != -1) << 3 |
          (byte)this[0xf0] & 1 | (*(int *)(this + 0x48) != -1) << 1);
                    /* catch() { ... } // from try @ 00fce384 with catch @ 00fce334 */
  this[0xf0] = GVar1;
  if ((*(int *)(this + 0x4c) == -1) && (*(int *)(this + 0x50) == -1)) {
    bVar4 = *(int *)(this + 0x54) != -1;
  }
  else {
    bVar4 = true;
  }
  this[0xf0] = (GLProgram)(bVar4 | (byte)GVar1 & 0x7e | (*(int *)(this + 0x58) != -1) << 7);
  GL::useProgram(*(uint *)(this + 0x24));
  iVar2 = *(int *)(this + 0x5c);
                    /* try { // try from 00fce37c to 010ce383 has its CatchHandler @ 00fce418 */
  if (iVar2 != -1) {
                    /* try { // try from 00fce384 to 010ce433 has its CatchHandler @ 00fce334 */
    local_3c = 0;
    uVar6 = updateUniformLocation(this,iVar2,&local_3c,4);
    if ((uVar6 & 1) != 0) {
      glUniform1i(iVar2,local_3c);
    }
  }
  iVar2 = *(int *)(this + 0x60);
  if (iVar2 != -1) {
    local_3c = 1;
    uVar6 = updateUniformLocation(this,iVar2,&local_3c,4);
    if ((uVar6 & 1) != 0) {
      glUniform1i(iVar2,local_3c);
    }
  }
  iVar2 = *(int *)(this + 100);
  if (iVar2 != -1) {
    local_3c = 2;
    uVar6 = updateUniformLocation(this,iVar2,&local_3c,4);
    if ((uVar6 & 1) != 0) {
      glUniform1i(iVar2,local_3c);
    }
  }
                    /* catch() { ... } // from try @ 00fce37c with catch @ 00fce418 */
  iVar2 = *(int *)(this + 0x68);
  if (iVar2 != -1) {
    local_3c = 3;
    uVar6 = updateUniformLocation(this,iVar2,&local_3c,4);
    if ((uVar6 & 1) != 0) {
      glUniform1i(iVar2,local_3c);
    }
  }
  glGetError();
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

