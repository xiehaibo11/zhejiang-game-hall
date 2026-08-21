
/* cocosbuilder::NodeLoader::onHandlePropTypeDegrees(cocos2d::Node*, cocos2d::Node*, char const*,
   float, cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::onHandlePropTypeDegrees
               (Node *param_1,Node *param_2,char *param_3,float param_4,CCBReader *param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_register_00005004;
  
  iVar1 = strcmp((char *)param_5,"rotation");
  if (iVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x180);
  }
  else {
    iVar1 = strcmp((char *)param_5,"rotationX");
    if (iVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x1b0);
    }
    else {
      iVar1 = strcmp((char *)param_5,"rotationY");
      if (iVar1 != 0) {
        cocos2d::log("Unexpected property: \'%s\'!\n",param_5);
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_2 + 0x1d0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00d04d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(CONCAT44(in_register_00005004,param_4),param_2);
  return;
}

