
/* cocosbuilder::LabelTTFLoader::onHandlePropTypeFloatScale(cocos2d::Node*, cocos2d::Node*, char
   const*, float, cocosbuilder::CCBReader*) */

void cocosbuilder::LabelTTFLoader::onHandlePropTypeFloatScale
               (Node *param_1,Node *param_2,char *param_3,float param_4,CCBReader *param_5)

{
  int iVar1;
  undefined4 in_register_00005004;
  
  iVar1 = strcmp((char *)param_5,"fontSize");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeFloatScale(param_1,param_2,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d00520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x570))(CONCAT44(in_register_00005004,param_4),param_2);
  return;
}

