
long FUN_010a0228(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int local_24;
  
  uVar3 = *(ushort *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x18);
  lVar4 = ft_mem_realloc(param_2,1,0,(ulong)uVar3 + 1,0,&local_24);
  lVar5 = 0;
  if (local_24 == 0) {
    if (uVar3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      do {
        cVar2 = *(char *)(lVar7 + uVar6);
        if (cVar2 == '\0') break;
        cVar1 = '?';
        if ('\x1f' < cVar2) {
          cVar1 = cVar2;
        }
        *(char *)(lVar4 + uVar6) = cVar1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
    *(undefined1 *)(lVar4 + (uVar6 & 0xffffffff)) = 0;
    lVar5 = lVar4;
  }
  return lVar5;
}

