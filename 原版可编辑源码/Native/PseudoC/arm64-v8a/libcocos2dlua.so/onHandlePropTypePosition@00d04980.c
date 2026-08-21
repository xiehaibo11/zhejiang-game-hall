
/* cocosbuilder::NodeLoader::onHandlePropTypePosition(cocos2d::Node*, cocos2d::Node*, char const*,
   cocos2d::Vec2, cocosbuilder::CCBReader*) */

void __thiscall
cocosbuilder::NodeLoader::onHandlePropTypePosition
          (undefined4 param_1_00,undefined4 param_2,undefined8 param_3_00,long *param_1,
          undefined8 param_5,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1_00;
  uStack_3c = param_2;
  iVar2 = strcmp(param_3,"position");
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 0x98))(param_1,&local_40);
  }
  else {
    cocos2d::log("Unexpected property: \'%s\'!\n",param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

