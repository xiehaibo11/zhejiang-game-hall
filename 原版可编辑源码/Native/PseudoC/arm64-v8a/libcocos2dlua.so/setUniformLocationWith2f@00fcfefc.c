
/* cocos2d::GLProgram::setUniformLocationWith2f(int, float, float) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith2f
          (GLProgram *this,int param_1,float param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  fStack_3c = param_3;
                    /* catch() { ... } // from try @ 00fcff5c with catch @ 00fcff2c */
  uVar2 = updateUniformLocation(this,param_1,&local_40,8);
  if ((uVar2 & 1) != 0) {
    glUniform2f(CONCAT44(in_register_00005004,param_2),CONCAT44(in_register_00005024,param_3),
                param_1);
  }
                    /* try { // try from 00fcff54 to 010cff5b has its CatchHandler @ 00fcffc4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00fcff5c to 010cffdf has its CatchHandler @ 00fcff2c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

