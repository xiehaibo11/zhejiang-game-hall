
void uv__udp_finish_close(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  while ((long *)(param_1 + 0xb8) != plVar2) {
    *(long *)plVar2[1] = *plVar2;
    *(long *)(*plVar2 + 8) = plVar2[1];
    *plVar2 = param_1 + 200;
    plVar2[0x14] = -0x7d;
    puVar1 = *(undefined8 **)(param_1 + 0xd0);
    plVar2[1] = (long)puVar1;
    *puVar1 = plVar2;
    *(long **)(param_1 + 0xd0) = plVar2;
    plVar2 = *(long **)(param_1 + 0xb8);
  }
  FUN_00bf4b1c(param_1);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}

