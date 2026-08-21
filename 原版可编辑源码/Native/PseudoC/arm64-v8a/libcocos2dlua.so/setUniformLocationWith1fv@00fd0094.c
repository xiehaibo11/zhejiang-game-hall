
/* cocos2d::GLProgram::setUniformLocationWith1fv(int, float const*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith1fv
          (GLProgram *this,int param_1,float *param_2,uint param_3)

{
  ulong uVar1;
  
                    /* try { // try from 00fd00b4 to 010d00bb has its CatchHandler @ 00fd0124 */
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 << 2);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00fd00bc to 010d013f has its CatchHandler @ 00fd008c */
    glUniform1fv(param_1,param_3,param_2);
    return;
  }
  return;
}

