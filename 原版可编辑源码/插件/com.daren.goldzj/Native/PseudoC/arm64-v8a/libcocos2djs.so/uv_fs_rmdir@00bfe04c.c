
undefined4 uv_fs_rmdir(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined4 *)(param_2 + 8) = 6;
  if (param_4 != 0) {
    *(long *)(param_2 + 0x10) = param_1 + 0x20;
    plVar3 = *(long **)(param_1 + 0x28);
    *(long **)(param_2 + 0x18) = plVar3;
    *plVar3 = param_2 + 0x10;
    *(long *)(param_1 + 0x28) = param_2 + 0x10;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0x12;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(long *)(param_2 + 0x48) = param_1;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(long *)(param_2 + 0x50) = param_4;
    lVar2 = uv__strdup(param_3);
    *(long *)(param_2 + 0x68) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xfffffff4;
      **(undefined8 **)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(*(long *)(param_2 + 0x10) + 8) = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      uv__work_submit(param_1,param_2 + 0x150,FUN_00bfc728,FUN_00bfbb90);
      uVar1 = 0;
    }
    return uVar1;
  }
  *(long *)(param_2 + 0x48) = param_1;
  *(undefined4 *)(param_2 + 0x40) = 0x12;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x68) = param_3;
  FUN_00bfc728(param_2 + 0x150);
  return *(undefined4 *)(param_2 + 0x58);
}

