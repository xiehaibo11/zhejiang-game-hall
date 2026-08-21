
/* cocosbuilder::SpriteLoader::onHandlePropTypeByte(cocos2d::Node*, cocos2d::Node*, char const*,
   unsigned char, cocosbuilder::CCBReader*) */

void cocosbuilder::SpriteLoader::onHandlePropTypeByte
               (Node *param_1,Node *param_2,char *param_3,uchar param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)(ulong)param_4,"opacity");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeByte
              (param_1,param_2,param_3,param_4,(CCBReader *)((ulong)param_5 & 0xffffffff));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cff184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x490))(param_2,(CCBReader *)((ulong)param_5 & 0xffffffff));
  return;
}

