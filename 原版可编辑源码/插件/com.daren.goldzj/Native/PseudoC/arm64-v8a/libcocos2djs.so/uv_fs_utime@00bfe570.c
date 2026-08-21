
undefined4
uv_fs_utime(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
           long param_6)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined4 *)(param_4 + 8) = 6;
  if (param_6 != 0) {
    *(long *)(param_4 + 0x10) = param_3 + 0x20;
    plVar3 = *(long **)(param_3 + 0x28);
    *(long **)(param_4 + 0x18) = plVar3;
    *plVar3 = param_4 + 0x10;
    *(long *)(param_3 + 0x28) = param_4 + 0x10;
    *(undefined8 *)(param_4 + 0x58) = 0;
    *(undefined4 *)(param_4 + 0x40) = 10;
    *(undefined8 *)(param_4 + 0x60) = 0;
    *(long *)(param_4 + 0x48) = param_3;
    *(undefined8 *)(param_4 + 0x68) = 0;
    *(undefined8 *)(param_4 + 0x110) = 0;
    *(long *)(param_4 + 0x50) = param_6;
    lVar2 = uv__strdup(param_5);
    *(long *)(param_4 + 0x68) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0xfffffff4;
      **(undefined8 **)(param_4 + 0x18) = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(*(long *)(param_4 + 0x10) + 8) = *(undefined8 *)(param_4 + 0x18);
    }
    else {
      *(undefined8 *)(param_4 + 0x140) = param_1;
      *(undefined8 *)(param_4 + 0x148) = param_2;
      uv__work_submit(param_3,param_4 + 0x150,FUN_00bfc728,FUN_00bfbb90);
      uVar1 = 0;
    }
    return uVar1;
  }
  *(long *)(param_4 + 0x48) = param_3;
  *(undefined4 *)(param_4 + 0x40) = 10;
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(undefined8 *)(param_4 + 0x110) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(undefined8 *)(param_4 + 0x68) = param_5;
  *(undefined8 *)(param_4 + 0x140) = param_1;
  *(undefined8 *)(param_4 + 0x148) = param_2;
  FUN_00bfc728(param_4 + 0x150);
  return *(undefined4 *)(param_4 + 0x58);
}

