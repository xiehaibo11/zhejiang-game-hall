
void FUN_017ec5ac(long param_1,uint param_2,char *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  
  cVar3 = *param_3;
  if (cVar3 == '\x02') {
    uVar2 = *(uint *)(param_3 + 4);
    uVar5 = 0x100;
    if (param_3[1] != '\x01') {
      uVar5 = 0x200;
    }
    *(ulong *)(param_1 + 0x348) = *(ulong *)(param_1 + 0x348) | 1L << ((ulong)param_2 & 0x3f);
    *(ulong *)(param_1 + (ulong)(byte)param_2 * 8 + 0x78) = uVar5 | (ulong)uVar2 << 0x20;
    return;
  }
  if (cVar3 == '\x01') {
    bVar4 = param_3[4];
    if ((uint)bVar4 != (param_2 & 0xff)) {
      cVar3 = param_3[1];
      uVar5 = 1L << ((ulong)param_2 & 0x3f);
      if ((*(ulong *)(param_1 + 0x340) & uVar5) == 0) {
        lVar1 = param_1 + (ulong)bVar4 * 4;
        *(ulong *)(param_1 + 0x340) = *(ulong *)(param_1 + 0x340) | uVar5;
        *(int *)(lVar1 + 0x250) = *(int *)(lVar1 + 0x250) + 1;
        *(ushort *)(param_1 + ((ulong)param_2 & 0xff) * 2) = CONCAT11(cVar3,bVar4);
        return;
      }
      if (cVar3 == '\x04') {
        *(undefined1 *)(param_1 + ((ulong)param_2 & 0xff) * 2 + 1) = 4;
      }
    }
  }
  else if (cVar3 == '\0') {
    uVar5 = 1L << ((ulong)param_2 & 0x3f);
    if ((*(ulong *)(param_1 + 0x348) & uVar5) == 0) {
      bVar4 = param_3[1];
      *(ulong *)(param_1 + 0x348) = *(ulong *)(param_1 + 0x348) | uVar5;
      *(ulong *)(param_1 + ((ulong)param_2 & 0xff) * 8 + 0x78) =
           (ulong)bVar4 << 8 | param_4 << 0x20 | 1;
      return;
    }
  }
  return;
}

