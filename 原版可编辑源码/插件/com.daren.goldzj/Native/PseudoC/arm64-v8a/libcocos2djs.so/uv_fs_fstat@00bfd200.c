
undefined4 uv_fs_fstat(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  
  *(undefined4 *)(param_2 + 8) = 6;
  if (param_4 != 0) {
    *(long *)(param_2 + 0x10) = param_1 + 0x20;
    plVar1 = *(long **)(param_1 + 0x28);
    *(long **)(param_2 + 0x18) = plVar1;
    *plVar1 = param_2 + 0x10;
    *(long *)(param_1 + 0x28) = param_2 + 0x10;
    *(long *)(param_2 + 0x48) = param_1;
    *(undefined4 *)(param_2 + 0x40) = 8;
    *(long *)(param_2 + 0x50) = param_4;
    *(undefined4 *)(param_2 + 0x118) = param_3;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    uv__work_submit(param_1,param_2 + 0x150,FUN_00bfc728,FUN_00bfbb90);
    return 0;
  }
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x40) = 8;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(long *)(param_2 + 0x48) = param_1;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x118) = param_3;
  FUN_00bfc728(param_2 + 0x150);
  return *(undefined4 *)(param_2 + 0x58);
}

