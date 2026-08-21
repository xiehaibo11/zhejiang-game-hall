
/* cocos2d::GL::bindVAO(unsigned int) */

void cocos2d::GL::bindVAO(uint param_1)

{
  Configuration *this;
  ulong uVar1;
  
  this = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this);
  if ((DAT_01792aa0 != param_1) && ((uVar1 & 1) != 0)) {
    DAT_01792aa0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00ff6b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*glBindVertexArrayOESEXT)(param_1);
    return;
  }
  return;
}

