
/* cocosbuilder::ControlButtonLoader::onHandlePropTypePoint(cocos2d::Node*, cocos2d::Node*, char
   const*, cocos2d::Vec2, cocosbuilder::CCBReader*) */

void cocosbuilder::ControlButtonLoader::onHandlePropTypePoint
               (NodeLoader *param_1_00,undefined8 param_2_00,undefined8 param_1,long *param_2,
               undefined8 param_3,char *param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = SUB84(param_1_00,0);
  uStack_5c = (undefined4)param_2_00;
  iVar2 = strcmp(param_6,"labelAnchorPoint");
  if (iVar2 == 0) {
    (**(code **)(*param_2 + 0x7b0))(param_2,&local_60);
  }
  else {
    NodeLoader::onHandlePropTypePoint(param_1_00,param_2_00,param_1,param_2,param_3,param_6,param_7)
    ;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

