
/* cocos2d::GLProgram::setUniformLocationWith4i(int, int, int, int, int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith4i
          (GLProgram *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 00fcfc94 with catch @ 00fcfd04 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  iStack_54 = param_3;
  local_50 = param_4;
  iStack_4c = param_5;
  uVar2 = updateUniformLocation(this,param_1,&local_58,0x10);
  if ((uVar2 & 1) != 0) {
    glUniform4i(param_1,param_2,param_3,param_4,param_5);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

