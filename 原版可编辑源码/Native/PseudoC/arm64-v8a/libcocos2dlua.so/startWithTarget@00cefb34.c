
/* cocosbuilder::CCBRotateTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocosbuilder::CCBRotateTo::startWithTarget(CCBRotateTo *this,Node *param_1)

{
  float fVar1;
  
  cocos2d::ActionInterval::startWithTarget((ActionInterval *)this,param_1);
  fVar1 = (float)(**(code **)(**(long **)(this + 0x38) + 0x188))();
  *(float *)(this + 0x58) = fVar1;
  *(float *)(this + 0x60) = *(float *)(this + 0x5c) - fVar1;
  return;
}

