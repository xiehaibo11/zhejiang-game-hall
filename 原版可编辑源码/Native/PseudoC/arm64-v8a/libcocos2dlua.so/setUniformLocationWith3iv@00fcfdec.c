
/* cocos2d::GLProgram::setUniformLocationWith3iv(int, int*, unsigned int) */

void __thiscall
cocos2d::GLProgram::setUniformLocationWith3iv(GLProgram *this,int param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  
                    /* try { // try from 00fcfdf4 to 010cfdfb has its CatchHandler @ 00fcfe64 */
                    /* try { // try from 00fcfdfc to 010cfe7f has its CatchHandler @ 00fcfdcc */
  uVar1 = updateUniformLocation(this,param_1,param_2,param_3 * 0xc);
  if ((uVar1 & 1) != 0) {
    glUniform3iv(param_1,param_3,param_2);
    return;
  }
  return;
}

