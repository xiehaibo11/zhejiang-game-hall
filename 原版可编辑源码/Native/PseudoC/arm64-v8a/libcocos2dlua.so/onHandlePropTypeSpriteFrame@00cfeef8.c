
/* cocosbuilder::SpriteLoader::onHandlePropTypeSpriteFrame(cocos2d::Node*, cocos2d::Node*, char
   const*, cocos2d::SpriteFrame*, cocosbuilder::CCBReader*) */

void cocosbuilder::SpriteLoader::onHandlePropTypeSpriteFrame
               (Node *param_1,Node *param_2,char *param_3,SpriteFrame *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"displayFrame");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeSpriteFrame(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (param_5 != (CCBReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cfef88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 0x598))(param_2,param_5);
    return;
  }
  return;
}

