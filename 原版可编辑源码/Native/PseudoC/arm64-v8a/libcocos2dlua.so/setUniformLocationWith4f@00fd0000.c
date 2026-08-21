
/* cocos2d::GLProgram::setUniformLocationWith4f(int, float, float, float, float) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith4f
          (GLProgram *this,int param_1,float param_2,float param_3,float param_4,float param_5)

{
  long lVar1;
  ulong uVar2;
  undefined4 in_register_00005004;
  undefined4 in_register_00005024;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = param_2;
  fStack_54 = param_3;
  local_50 = param_4;
  fStack_4c = param_5;
  uVar2 = updateUniformLocation(this,param_1,&local_58,0x10);
  if ((uVar2 & 1) != 0) {
    glUniform4f(CONCAT44(in_register_00005004,param_2),CONCAT44(in_register_00005024,param_3),
                CONCAT44(in_register_00005044,param_4),CONCAT44(in_register_00005064,param_5),
                param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 00fd00bc with catch @ 00fd008c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

