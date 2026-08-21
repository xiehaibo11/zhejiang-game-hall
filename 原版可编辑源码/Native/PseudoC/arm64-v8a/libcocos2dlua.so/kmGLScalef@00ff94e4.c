
/* cocos2d::kmGLScalef(float, float, float) */

void cocos2d::kmGLScalef(float param_1,float param_2,float param_3)

{
  long lVar1;
  Director *pDVar2;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4(aMStack_78);
  Mat4::createScale(param_1,param_2,param_3,aMStack_78);
  pDVar2 = (Director *)Director::getInstance();
                    /* try { // try from 00ff9534 to 010f9547 has its CatchHandler @ 00ff9940 */
  Director::multiplyMatrix(pDVar2,currentActiveStackType,aMStack_78);
  Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

