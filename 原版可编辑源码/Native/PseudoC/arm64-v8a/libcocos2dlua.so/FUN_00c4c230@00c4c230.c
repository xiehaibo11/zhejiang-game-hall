
void FUN_00c4c230(byte *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined **local_50;
  byte *pbStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)cocos2d::FileUtils::getInstance();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((param_3 & 1) == 0) {
    (**(code **)(*plVar2 + 0x18))(&local_50,plVar2,param_2);
    if ((*param_1 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      if ((*param_1 & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x10));
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(byte **)(param_1 + 8) = pbStack_48;
    *(undefined ***)param_1 = local_50;
  }
  else {
    local_50 = &PTR__ResizableBuffer_016c9e30;
    pbStack_48 = param_1;
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2,&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

