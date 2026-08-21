
void FUN_00c08724(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0xffffffff) {
    lVar2 = *(long *)(param_1 + 0x48);
    do {
      lVar3 = 0;
      if (param_2 != 0) {
        lVar3 = (ulong)(param_2 - 1) << 3;
      }
      uVar1 = *(uint *)(lVar2 + lVar3);
      lVar4 = lVar2 + (ulong)param_2 * 8;
      if ((uVar1 & 0xff) - 0xc < 2) {
        *(char *)(lVar2 + lVar3) = (char)uVar1 + '\x02';
        *(undefined1 *)(lVar2 + lVar3 + 1) = 0;
        lVar2 = *(long *)(param_1 + 0x48);
        lVar4 = lVar2 + (ulong)param_2 * 8;
      }
      else if ((uVar1 >> 8 & 0xff) == 0xff) {
        lVar4 = lVar2 + (ulong)param_2 * 8;
        *(uint *)(lVar2 + lVar3) = *(uint *)(lVar2 + (ulong)param_2 * 8) & 0xff00 | 0x80000058;
      }
      param_2 = param_2 + (*(ushort *)(lVar4 + 2) - 0x7fff);
    } while ((*(ushort *)(lVar4 + 2) != 0x7fff) && (param_2 != 0xffffffff));
  }
  return;
}

