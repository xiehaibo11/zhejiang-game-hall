
/* cocos2d::kmGLRotatef(float, float, float, float) */

void cocos2d::kmGLRotatef(float param_1,float param_2,float param_3,float param_4)

{
  long lVar1;
  Director *pDVar2;
  Vec3 aVStack_98 [16];
  Mat4 aMStack_88 [64];
  long local_48;
  
                    /* try { // try from 00ff9430 to 010f943f has its CatchHandler @ 00ff9934 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Mat4::Mat4(aMStack_88);
                    /* try { // try from 00ff9460 to 010f947b has its CatchHandler @ 00ff9938 */
  Vec3::Vec3(aVStack_98,param_2,param_3,param_4);
  Mat4::createRotation(aVStack_98,param_1,aMStack_88);
  pDVar2 = (Director *)Director::getInstance();
  Director::multiplyMatrix(pDVar2,currentActiveStackType,aMStack_88);
  Mat4::~Mat4(aMStack_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

