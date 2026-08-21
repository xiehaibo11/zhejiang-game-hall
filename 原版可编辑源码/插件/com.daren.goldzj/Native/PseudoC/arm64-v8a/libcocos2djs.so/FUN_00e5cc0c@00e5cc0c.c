
long FUN_00e5cc0c(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int local_24;
  
  uVar3 = *(ushort *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x18);
  lVar4 = FUN_00e13bcc(param_2,1,0,(ulong)uVar3 + 1,0,&local_24);
  if (local_24 != 0) {
    return 0;
  }
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      cVar2 = *(char *)(lVar6 + uVar5);
      if (cVar2 == '\0') break;
      cVar1 = '?';
      if ('\x1f' < cVar2) {
        cVar1 = cVar2;
      }
      *(char *)(lVar4 + uVar5) = cVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  *(undefined1 *)(lVar4 + (uVar5 & 0xffffffff)) = 0;
  return lVar4;
}

