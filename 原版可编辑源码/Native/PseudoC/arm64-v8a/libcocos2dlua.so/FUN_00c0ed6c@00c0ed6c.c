
long * FUN_00c0ed6c(long *param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  
  uVar2 = param_2 & 0xffffffff;
  while( true ) {
    uVar1 = *(uint *)(*param_1 + uVar2 * 0x18);
    if ((uVar1 >> 0x1c != 8) && ((uVar1 & 0xf0800000) != 0x20800000)) break;
    param_2 = (ulong)(uVar1 & 0xffff);
    uVar2 = param_2;
  }
  if ((uVar1 >> 0x1c == 2) && (*(uint *)(*param_1 + (ulong)(ushort)uVar1 * 0x18) >> 0x1c == 6)) {
    puVar3 = (ulong *)FUN_00c1bc28(param_1[5],param_1[3] + 0xa8);
  }
  else {
    puVar3 = (ulong *)FUN_00c1bbc0(param_1[5],-(int)param_2);
  }
  if ((((puVar3 != (ulong *)0x0) && ((int)((long)*puVar3 >> 0x2f) == -0xc)) &&
      (plVar4 = (long *)FUN_00c1bc28(*puVar3 & 0x7fffffffffff,
                                     *(undefined8 *)
                                      (param_1[3] + (param_3 & 0xffffffff) * 8 + 0x170)),
      plVar4 != (long *)0x0)) && (*plVar4 != -1)) {
    return plVar4;
  }
  return (long *)0x0;
}

