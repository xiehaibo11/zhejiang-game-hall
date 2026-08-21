
/* cocosbuilder::ControlButtonLoader::onHandlePropTypeColor3(cocos2d::Node*, cocos2d::Node*, char
   const*, cocos2d::Color3B, cocosbuilder::CCBReader*) */

void __thiscall
cocosbuilder::ControlButtonLoader::onHandlePropTypeColor3
          (ControlButtonLoader *this,long *param_1,undefined8 param_2,char *param_3,ulong param_5,
          undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined2 local_60;
  undefined1 local_5e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5e = (undefined1)(param_5 >> 0x10);
  local_60 = (undefined2)param_5;
  iVar2 = strcmp(param_3,"titleColor|1");
  if (iVar2 == 0) {
    lVar4 = *param_1;
    uVar3 = 1;
  }
  else {
    iVar2 = strcmp(param_3,"titleColor|2");
    if (iVar2 == 0) {
      lVar4 = *param_1;
      uVar3 = 2;
    }
    else {
      iVar2 = strcmp(param_3,"titleColor|3");
      if (iVar2 != 0) {
        NodeLoader::onHandlePropTypeColor3(this,param_1,param_2,param_3,param_5 & 0xffffff,param_6);
        goto LAB_00cffad0;
      }
      lVar4 = *param_1;
      uVar3 = 4;
    }
  }
  (**(code **)(lVar4 + 0x6d0))(param_1,&local_60,uVar3);
LAB_00cffad0:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

