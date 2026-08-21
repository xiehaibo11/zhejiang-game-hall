
/* cocosbuilder::NodeLoader::onHandlePropTypeFloatXY(cocos2d::Node*, cocos2d::Node*, char const*,
   float*, cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::onHandlePropTypeFloatXY
               (Node *param_1,Node *param_2,char *param_3,float *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"skew");
  if (iVar1 != 0) {
    cocos2d::log("Unexpected property: \'%s\'!\n",param_4);
    return;
  }
  (**(code **)(*(long *)param_2 + 0x128))(*(undefined4 *)param_5,param_2);
                    /* WARNING: Could not recover jumptable at 0x00d04b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x138))(*(undefined4 *)(param_5 + 4),param_2);
  return;
}

