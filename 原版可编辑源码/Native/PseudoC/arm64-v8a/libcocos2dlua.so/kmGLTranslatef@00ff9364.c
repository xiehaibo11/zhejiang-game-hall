
/* cocos2d::kmGLTranslatef(float, float, float) */

void cocos2d::kmGLTranslatef(float param_1,float param_2,float param_3)

{
  long lVar1;
  Director *pDVar2;
  Vec3 aVStack_88 [16];
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ff9398 to 010f93b3 has its CatchHandler @ 00ff993c */
  Mat4::Mat4(aMStack_78);
  Vec3::Vec3(aVStack_88,param_1,param_2,param_3);
  Mat4::createTranslation(aVStack_88,aMStack_78);
  pDVar2 = (Director *)Director::getInstance();
  Director::multiplyMatrix(pDVar2,currentActiveStackType,aMStack_78);
  Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

