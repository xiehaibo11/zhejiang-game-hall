
/* cocos2d::RenderTexture::onEnd() */

void __thiscall cocos2d::RenderTexture::onEnd(RenderTexture *this)

{
  Director *this_00;
  float *pfVar1;
  
  this_00 = (Director *)Director::getInstance();
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 0x338));
                    /* catch() { ... } // from try @ 00f3bd7c with catch @ 00f3bdb0 */
  Director::setViewport(this_00);
  pfVar1 = (float *)Camera::getDefaultViewport();
  glViewport((int)*pfVar1,(int)pfVar1[1],(int)pfVar1[2],(int)pfVar1[3]);
  Director::loadMatrix(this_00,1,this + 0x600);
  Director::loadMatrix(this_00,0,this + 0x5c0);
  return;
}

