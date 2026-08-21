
/* cocos2d::GLProgram::setUniformLocationWithMatrix4fv(int, float const*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWithMatrix4fv
          (GLProgram *this,int param_1,float *param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 << 6);
  if ((uVar1 & 1) != 0) {
    glUniformMatrix4fv(param_1,param_3,0,param_2);
    return;
  }
  return;
}

