
/* cocosbuilder::Scale9SpriteLoader::onHandlePropTypeSpriteFrame(cocos2d::Node*, cocos2d::Node*,
   char const*, cocos2d::SpriteFrame*, cocosbuilder::CCBReader*) */

void cocosbuilder::Scale9SpriteLoader::onHandlePropTypeSpriteFrame
               (Node *param_1,Node *param_2,char *param_3,SpriteFrame *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"spriteFrame");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeSpriteFrame(param_1,param_2,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cfe7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x598))(param_2,param_5);
  return;
}

