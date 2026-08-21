
/* cocos2d::GridBase::set2DProjection() */

void cocos2d::GridBase::set2DProjection(void)

{
  long lVar1;
  Director *pDVar2;
  float local_70;
  float fStack_6c;
  Mat4 aMStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pDVar2 = (Director *)Director::getInstance();
  Director::getWinSizeInPixels();
  Director::loadIdentityMatrix(pDVar2,1);
  Mat4::Mat4(aMStack_68);
  Mat4::createOrthographicOffCenter(0.0,local_70,0.0,fStack_6c,-1.0,1.0,aMStack_68);
  Director::multiplyMatrix(pDVar2,1,aMStack_68);
  Director::loadIdentityMatrix(pDVar2,0);
  GL::setProjectionMatrixDirty();
  Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f0783c with catch @ 00f077e0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f07a08 with catch @ 00f077e0
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

