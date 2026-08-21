
/* cocos2d::ui::Scale9Sprite::initWithBatchNode(cocos2d::SpriteBatchNode*, cocos2d::Rect const&,
   bool, cocos2d::Rect const&) */

void __thiscall
cocos2d::ui::Scale9Sprite::initWithBatchNode
          (Scale9Sprite *this,SpriteBatchNode *param_1,Rect *param_2,bool param_3,Rect *param_4)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  
  pTVar1 = (Texture2D *)(**(code **)(*(long *)param_1 + 0x530))(param_1);
  uVar2 = Sprite::createWithTexture(pTVar1);
                    /* catch() { ... } // from try @ 00de2ef0 with catch @ 00de2e64 */
                    /* WARNING: Could not recover jumptable at 0x00de2e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x690))(this,uVar2,param_2,param_3,param_4);
  return;
}

