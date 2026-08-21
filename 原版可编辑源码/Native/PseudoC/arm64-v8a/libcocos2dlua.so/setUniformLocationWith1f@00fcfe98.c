
/* cocos2d::GLProgram::setUniformLocationWith1f(int, float) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith1f(GLProgram *this,int param_1,float param_2)

{
  long lVar1;
  ulong uVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  uVar2 = updateUniformLocation(this,param_1,&local_2c,4);
  if ((uVar2 & 1) != 0) {
    glUniform1f(local_2c,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

