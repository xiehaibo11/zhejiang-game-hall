
/* cocosbuilder::ControlLoader::onHandlePropTypeBlockControl(cocos2d::Node*, cocos2d::Node*, char
   const*, cocosbuilder::BlockControlData*, cocosbuilder::CCBReader*) */

void cocosbuilder::ControlLoader::onHandlePropTypeBlockControl
               (Node *param_1,Node *param_2,char *param_3,BlockControlData *param_4,
               CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"ccControl");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeBlockControl(param_1,param_2,param_3,param_4,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cffc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x690))
            (param_2,*(undefined8 *)(param_5 + 0x10),*(undefined8 *)param_5,
             *(undefined8 *)(param_5 + 8),*(undefined4 *)(param_5 + 0x18));
  return;
}

