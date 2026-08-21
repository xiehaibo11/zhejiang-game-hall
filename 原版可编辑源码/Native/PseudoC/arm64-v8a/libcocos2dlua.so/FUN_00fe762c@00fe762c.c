
void FUN_00fe762c(long param_1)

{
  Configuration *this;
  ulong uVar1;
  Renderer *this_00;
  
  this_00 = *(Renderer **)(param_1 + 8);
  this = (Configuration *)cocos2d::Configuration::getInstance();
  uVar1 = cocos2d::Configuration::supportsShareableVAO(this);
  if ((uVar1 & 1) != 0) {
    cocos2d::Renderer::setupVBOAndVAO(this_00);
    return;
  }
  glGenBuffers(2,this_00 + 0x1b007c);
  return;
}

