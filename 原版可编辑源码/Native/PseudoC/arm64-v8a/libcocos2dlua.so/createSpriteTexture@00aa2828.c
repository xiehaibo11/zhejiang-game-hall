
/* fairygui::UIPackage::createSpriteTexture(fairygui::AtlasSprite*) */

SpriteFrame * __thiscall
fairygui::UIPackage::createSpriteTexture(UIPackage *this,AtlasSprite *param_1)

{
  long lVar1;
  SpriteFrame *this_00;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getItemAsset(this,*(PackageItem **)param_1);
  this_00 = operator_new(0xf8);
  cocos2d::SpriteFrame::SpriteFrame(this_00);
  local_40 = *(float *)(param_1 + 0x20) -
             (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x10)) * 0.5;
  fStack_3c = -(*(float *)(param_1 + 0x24) -
               (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x14)) * 0.5);
  cocos2d::SpriteFrame::initWithTexture
            (this_00,*(Texture2D **)(*(long *)param_1 + 0xa0),param_1 + 8,(bool)param_1[0x28],
             (Vec2 *)&local_40,(Size *)(param_1 + 0x18));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

