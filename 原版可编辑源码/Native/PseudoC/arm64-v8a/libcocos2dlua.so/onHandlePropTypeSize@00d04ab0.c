
/* cocosbuilder::NodeLoader::onHandlePropTypeSize(cocos2d::Node*, cocos2d::Node*, char const*,
   cocos2d::Size, cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::onHandlePropTypeSize
               (undefined8 param_1,long *param_2,undefined8 param_3,char *param_4,undefined8 param_5
               )

{
  int iVar1;
  
  iVar1 = strcmp(param_4,"contentSize");
  if (iVar1 != 0) {
    cocos2d::log("Unexpected property: \'%s\'!\n",param_4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d04b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,param_5);
  return;
}

