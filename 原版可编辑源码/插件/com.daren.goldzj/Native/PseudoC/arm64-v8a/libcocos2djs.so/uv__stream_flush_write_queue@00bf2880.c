
void uv__stream_flush_write_queue(long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(long **)(param_1 + 0xc0);
  while ((long *)(param_1 + 0xc0) != plVar1) {
    *(long *)plVar1[1] = *plVar1;
    *(long *)(*plVar1 + 8) = plVar1[1];
    *plVar1 = param_1 + 0xd0;
    *(undefined4 *)((long)plVar1 + 0x24) = param_2;
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    plVar1[1] = (long)puVar2;
    *puVar2 = plVar1;
    *(long **)(param_1 + 0xd8) = plVar1;
    plVar1 = *(long **)(param_1 + 0xc0);
  }
  return;
}

