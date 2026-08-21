
/* cocosbuilder::ControlButtonLoader::onHandlePropTypeFloatScale(cocos2d::Node*, cocos2d::Node*,
   char const*, float, cocosbuilder::CCBReader*) */

void cocosbuilder::ControlButtonLoader::onHandlePropTypeFloatScale
               (Node *param_1,Node *param_2,char *param_3,float param_4,CCBReader *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 in_register_00005004;
  
  iVar1 = strcmp((char *)param_5,"titleTTFSize|1");
  if (iVar1 == 0) {
    lVar3 = *(long *)param_2;
    uVar2 = 1;
  }
  else {
    iVar1 = strcmp((char *)param_5,"titleTTFSize|2");
    if (iVar1 == 0) {
      lVar3 = *(long *)param_2;
      uVar2 = 2;
    }
    else {
      iVar1 = strcmp((char *)param_5,"titleTTFSize|3");
      if (iVar1 != 0) {
        NodeLoader::onHandlePropTypeFloatScale(param_1,param_2,param_3,param_4,param_5);
        return;
      }
      lVar3 = *(long *)param_2;
      uVar2 = 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00cff770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x6f8))(CONCAT44(in_register_00005004,param_4),param_2,uVar2);
  return;
}

