
/* cocos2d::GLProgram::setUniformLocationWith3f(int, float, float, float) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith3f
          (GLProgram *this,int param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  float local_54;
  float fStack_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_54 = param_2;
  fStack_50 = param_3;
  local_4c = param_4;
  uVar2 = updateUniformLocation(this,param_1,&local_54,0xc);
  if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00fcff54 with catch @ 00fcffc4 */
    glUniform3f(CONCAT44(in_register_00005004,param_2),CONCAT44(in_register_00005024,param_3),
                CONCAT44(in_register_00005044,param_4),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

