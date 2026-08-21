
/* cocos2d::GLProgram::setUniformLocationWith4iv(int, int*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith4iv(GLProgram *this,int param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00fcfdf4 with catch @ 00fcfe64 */
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 << 4);
  if ((uVar1 & 1) != 0) {
    glUniform4iv(param_1,param_3,param_2);
    return;
  }
  return;
}

