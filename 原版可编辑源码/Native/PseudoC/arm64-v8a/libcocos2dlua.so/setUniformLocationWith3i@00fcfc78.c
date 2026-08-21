
/* cocos2d::GLProgram::setUniformLocationWith3i(int, int, int, int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith3i
          (GLProgram *this,int param_1,int param_2,int param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  int local_54;
  int iStack_50;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00fcfc94 to 010cfc9b has its CatchHandler @ 00fcfd04 */
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00fcfc9c to 010cfd1f has its CatchHandler @ 00fcfc6c */
  local_54 = param_2;
  iStack_50 = param_3;
  local_4c = param_4;
  uVar2 = updateUniformLocation(this,param_1,&local_54,0xc);
  if ((uVar2 & 1) != 0) {
    glUniform3i(param_1,param_2,param_3,param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

