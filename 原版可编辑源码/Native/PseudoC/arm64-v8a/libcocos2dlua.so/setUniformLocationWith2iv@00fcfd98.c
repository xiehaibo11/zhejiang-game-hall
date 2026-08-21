
/* cocos2d::GLProgram::setUniformLocationWith2iv(int, int*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith2iv(GLProgram *this,int param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 << 3);
  if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 00fcfdfc with catch @ 00fcfdcc */
    glUniform2iv(param_1,param_3,param_2);
    return;
  }
  return;
}

