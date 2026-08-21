
undefined4
uv_fs_futime(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5,
            long param_6)

{
  long *plVar1;
  
  *(undefined4 *)(param_4 + 8) = 6;
  if (param_6 != 0) {
    *(long *)(param_4 + 0x10) = param_3 + 0x20;
    plVar1 = *(long **)(param_3 + 0x28);
    *(long **)(param_4 + 0x18) = plVar1;
    *plVar1 = param_4 + 0x10;
    *(long *)(param_3 + 0x28) = param_4 + 0x10;
    *(long *)(param_4 + 0x48) = param_3;
    *(undefined4 *)(param_4 + 0x40) = 0xb;
    *(long *)(param_4 + 0x50) = param_6;
    *(undefined4 *)(param_4 + 0x118) = param_5;
    *(undefined8 *)(param_4 + 0x58) = 0;
    *(undefined8 *)(param_4 + 0x60) = 0;
    *(undefined8 *)(param_4 + 0x68) = 0;
    *(undefined8 *)(param_4 + 0x110) = 0;
    *(undefined8 *)(param_4 + 0x140) = param_1;
    *(undefined8 *)(param_4 + 0x148) = param_2;
    uv__work_submit(param_3,param_4 + 0x150,FUN_00bfc728,FUN_00bfbb90);
    return 0;
  }
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined4 *)(param_4 + 0x40) = 0xb;
  *(undefined8 *)(param_4 + 0x60) = 0;
  *(long *)(param_4 + 0x48) = param_3;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x110) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0;
  *(undefined4 *)(param_4 + 0x118) = param_5;
  *(undefined8 *)(param_4 + 0x140) = param_1;
  *(undefined8 *)(param_4 + 0x148) = param_2;
  FUN_00bfc728(param_4 + 0x150);
  return *(undefined4 *)(param_4 + 0x58);
}

