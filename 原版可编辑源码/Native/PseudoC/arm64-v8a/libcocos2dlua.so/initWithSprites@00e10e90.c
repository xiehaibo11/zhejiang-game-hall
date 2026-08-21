
/* cocos2d::extension::ControlSlider::initWithSprites(cocos2d::Sprite*, cocos2d::Sprite*,
   cocos2d::Sprite*) */

void __thiscall
cocos2d::extension::ControlSlider::initWithSprites
          (ControlSlider *this,Sprite *param_1,Sprite *param_2,Sprite *param_3)

{
  Texture2D *pTVar1;
  long *plVar2;
  
  pTVar1 = (Texture2D *)(**(code **)(*(long *)param_3 + 0x550))(param_3);
  plVar2 = (long *)Sprite::createWithTexture(pTVar1,param_3 + 0x408,false);
  (**(code **)(*plVar2 + 0x4c0))(plVar2,&Color3B::GRAY);
                    /* WARNING: Could not recover jumptable at 0x00e10f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6c0))(this,param_1,param_2,param_3,plVar2);
  return;
}

