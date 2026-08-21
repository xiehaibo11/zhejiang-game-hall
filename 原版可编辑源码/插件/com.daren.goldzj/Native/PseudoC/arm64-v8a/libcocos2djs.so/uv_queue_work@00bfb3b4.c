
undefined8 uv_queue_work(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_3 == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    *(long *)(param_2 + 0x10) = param_1 + 0x20;
    *(undefined4 *)(param_2 + 8) = 7;
    plVar2 = *(long **)(param_1 + 0x28);
    *(long **)(param_2 + 0x18) = plVar2;
    *plVar2 = param_2 + 0x10;
    *(long *)(param_1 + 0x28) = param_2 + 0x10;
    *(long *)(param_2 + 0x40) = param_1;
    *(long *)(param_2 + 0x48) = param_3;
    *(undefined8 *)(param_2 + 0x50) = param_4;
    uv__work_submit(param_1,param_2 + 0x58,FUN_00bfaf54,FUN_00bfaf78);
    uVar1 = 0;
  }
  return uVar1;
}

