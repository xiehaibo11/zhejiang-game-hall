
/* cocos2d::GLProgram::setUniformLocationWith2i(int, int, int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith2i(GLProgram *this,int param_1,int param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  int local_40;
  int iStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  iStack_3c = param_3;
  uVar2 = updateUniformLocation(this,param_1,&local_40,8);
  if ((uVar2 & 1) != 0) {
    glUniform2i(param_1,param_2,param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00fcfc9c with catch @ 00fcfc6c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

