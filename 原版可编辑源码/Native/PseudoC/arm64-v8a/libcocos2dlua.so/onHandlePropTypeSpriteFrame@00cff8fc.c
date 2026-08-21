
/* cocosbuilder::ControlButtonLoader::onHandlePropTypeSpriteFrame(cocos2d::Node*, cocos2d::Node*,
   char const*, cocos2d::SpriteFrame*, cocosbuilder::CCBReader*) */

void cocosbuilder::ControlButtonLoader::onHandlePropTypeSpriteFrame
               (Node *param_1,Node *param_2,char *param_3,SpriteFrame *param_4,CCBReader *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = strcmp((char *)param_4,"backgroundSpriteFrame|1");
  if (iVar1 == 0) {
    if (param_5 == (CCBReader *)0x0) {
      return;
    }
    lVar3 = *(long *)param_2;
    uVar2 = 1;
  }
  else {
    iVar1 = strcmp((char *)param_4,"backgroundSpriteFrame|2");
    if (iVar1 == 0) {
      if (param_5 == (CCBReader *)0x0) {
        return;
      }
      lVar3 = *(long *)param_2;
      uVar2 = 2;
    }
    else {
      iVar1 = strcmp((char *)param_4,"backgroundSpriteFrame|3");
      if (iVar1 != 0) {
        NodeLoader::onHandlePropTypeSpriteFrame(param_1,param_2,param_3,param_4,param_5);
        return;
      }
      if (param_5 == (CCBReader *)0x0) {
        return;
      }
      lVar3 = *(long *)param_2;
      uVar2 = 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cff9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x728))(param_2,param_5,uVar2);
  return;
}

