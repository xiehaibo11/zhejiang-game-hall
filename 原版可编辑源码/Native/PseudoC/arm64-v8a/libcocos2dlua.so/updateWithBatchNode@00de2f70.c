
/* cocos2d::ui::Scale9Sprite::updateWithBatchNode(cocos2d::SpriteBatchNode*, cocos2d::Rect const&,
   bool, cocos2d::Rect const&) */

void __thiscall
cocos2d::ui::Scale9Sprite::updateWithBatchNode
          (Scale9Sprite *this,SpriteBatchNode *param_1,Rect *param_2,bool param_3,Rect *param_4)

{
  Texture2D *pTVar1;
  undefined8 uVar2;
  
  pTVar1 = (Texture2D *)(**(code **)(*(long *)param_1 + 0x530))(param_1);
  uVar2 = Sprite::createWithTexture(pTVar1);
                    /* catch() { ... } // from try @ 00de2ee0 with catch @ 00de2fd0 */
                    /* catch() { ... } // from try @ 00de2ec0 with catch @ 00de2fd4 */
                    /* WARNING: Could not recover jumptable at 0x00de2fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6c0))(this,uVar2,param_2,param_3,&Vec2::ZERO,param_2 + 8,param_4);
  return;
}

