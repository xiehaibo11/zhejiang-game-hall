
undefined8 ogg_sync_wrote(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  if ((plVar1 != (long *)0x0) && (param_2 <= (*(long *)(*plVar1 + 8) - plVar1[2]) - plVar1[1])) {
    plVar1[2] = plVar1[2] + param_2;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + param_2;
    return 0;
  }
  return 0xfffffff2;
}

