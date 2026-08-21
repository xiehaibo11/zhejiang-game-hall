
/* cocos2d::GLProgram::setUniformLocationWith1i(int, int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith1i(GLProgram *this,int param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  uVar2 = updateUniformLocation(this,param_1,&local_2c,4);
  if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 00fcf87c with catch @ 00fcf84c */
    glUniform1i(param_1,local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00fcf874 to 010cf87b has its CatchHandler @ 00fcf8e4 */
  __stack_chk_fail();
}

