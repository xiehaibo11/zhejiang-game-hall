
void FUN_00c1cb88(long param_1,uint param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = (long *)FUN_00c1a2b4(param_1,0,0,(ulong)param_2 + 0x30);
  lVar4 = *(long *)(param_1 + 0x10);
  bVar1 = *(byte *)(lVar4 + 0x30);
  *(undefined1 *)((long)plVar2 + 9) = 0xc;
  *(undefined1 *)((long)plVar2 + 10) = 0;
  *(byte *)(plVar2 + 1) = bVar1 & 3;
  *(uint *)(plVar2 + 3) = param_2;
  plVar3 = *(long **)(lVar4 + 200);
  plVar2[4] = 0;
  plVar2[2] = param_3;
  *plVar2 = *plVar3;
  *plVar3 = (long)plVar2;
  return;
}

