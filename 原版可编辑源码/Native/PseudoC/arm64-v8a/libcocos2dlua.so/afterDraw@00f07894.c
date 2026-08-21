
/* cocos2d::GridBase::afterDraw(cocos2d::Node*) */

void cocos2d::GridBase::afterDraw(Node *param_1)

{
  uint uVar1;
  Director *this;
  float *pfVar2;
  
  Grabber::afterRender(*(Texture2D **)(param_1 + 0x40));
  this = (Director *)Director::getInstance();
  Director::setProjection(this,*(undefined4 *)(param_1 + 0x58));
  Director::setViewport(this);
  pfVar2 = (float *)Camera::getDefaultViewport();
  glViewport((int)*pfVar2,(int)pfVar2[1],(int)pfVar2[2],(int)pfVar2[3]);
  uVar1 = Texture2D::getName(*(Texture2D **)(param_1 + 0x30));
  GL::bindTexture2D(uVar1);
  (**(code **)(*(long *)param_1 + 0x10))(param_1);
  (**(code **)(*(long *)param_1 + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00f07928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1);
  return;
}

