
/* cocosbuilder::NodeLoader::onHandlePropTypeScaleLock(cocos2d::Node*, cocos2d::Node*, char const*,
   float*, cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::onHandlePropTypeScaleLock
               (Node *param_1,Node *param_2,char *param_3,float *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"scale");
  if (iVar1 != 0) {
    cocos2d::log("Unexpected property: \'%s\'!\n",param_4);
    return;
  }
  (**(code **)(*(long *)param_2 + 0x50))(*(undefined4 *)param_5,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d04c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x60))(*(undefined4 *)(param_5 + 4),param_2);
  return;
}

