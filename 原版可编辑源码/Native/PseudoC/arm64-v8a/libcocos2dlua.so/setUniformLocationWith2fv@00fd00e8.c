
/* cocos2d::GLProgram::setUniformLocationWith2fv(int, float const*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith2fv
          (GLProgram *this,int param_1,float *param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 << 3);
  if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 00fd00b4 with catch @ 00fd0124 */
    glUniform2fv(param_1,param_3,param_2);
    return;
  }
  return;
}

