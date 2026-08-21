
/* cocos2d::GLProgram::setUniformLocationWithMatrix3fv(int, float const*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWithMatrix3fv
          (GLProgram *this,int param_1,float *param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 * 0x24);
  if ((uVar1 & 1) != 0) {
                    /* catch() { ... } // from try @ 00fd0214 with catch @ 00fd0284 */
    glUniformMatrix3fv(param_1,param_3,0,param_2);
    return;
  }
  return;
}

