
undefined8 uv_loop_close(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x20) == param_1 + 0x20) {
    for (plVar2 = *(long **)(param_1 + 0x10); (long *)(param_1 + 0x10) != plVar2;
        plVar2 = (long *)*plVar2) {
      if ((*(uint *)(plVar2 + 7) >> 0xf & 1) == 0) goto LAB_00bed308;
    }
    uv__loop_close();
    uVar1 = 0;
    if (param_1 == DAT_01d3bc58) {
      DAT_01d3bc58 = 0;
    }
  }
  else {
LAB_00bed308:
    uVar1 = 0xfffffff0;
  }
  return uVar1;
}

