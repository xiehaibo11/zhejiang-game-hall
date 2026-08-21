
/* cocos2d::GLProgram::setUniformLocationWithMatrix2fv(int, float const*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWithMatrix2fv
          (GLProgram *this,int param_1,float *param_2,uint param_3)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00fd021c with catch @ 00fd01ec */
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 << 4);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00fd0214 to 010d021b has its CatchHandler @ 00fd0284 */
                    /* try { // try from 00fd021c to 010d029f has its CatchHandler @ 00fd01ec */
    glUniformMatrix2fv(param_1,param_3,0,param_2);
    return;
  }
  return;
}

