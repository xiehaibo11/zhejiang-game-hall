
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_0015f2d8(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0016baa8);
  if (DAT_0016bad0 == (ushort *)0x0) {
    DAT_0016bad0 = &DAT_0016bae0;
    _DAT_0016bae0 = 0x800080;
  }
  if (DAT_0016bad0 != &DAT_0016bce0) {
    uVar1 = (param_1 + 3U >> 2) + 1;
    puVar4 = (ushort *)0x0;
    puVar3 = DAT_0016bad0;
    do {
      uVar2 = puVar3[1];
      if (uVar1 < uVar2) {
        uVar2 = uVar2 - (ushort)uVar1;
        puVar3[1] = uVar2;
        puVar3 = puVar3 + (ulong)uVar2 * 2;
        *puVar3 = 0;
        puVar3[1] = (ushort)uVar1;
        puVar4 = puVar3 + 2;
        goto LAB_0015f3a8;
      }
      if (uVar1 == uVar2) {
        if (puVar4 == (ushort *)0x0) {
          DAT_0016bad0 = &DAT_0016bae0 + (ulong)*puVar3 * 2;
        }
        else {
          *puVar4 = *puVar3;
        }
        puVar4 = puVar3 + 2;
        *puVar3 = 0;
        goto LAB_0015f3a8;
      }
      uVar2 = *puVar3;
      puVar4 = puVar3;
      puVar3 = &DAT_0016bae0 + (ulong)uVar2 * 2;
    } while ((ulong)uVar2 != 0x80);
  }
  puVar4 = (ushort *)0x0;
LAB_0015f3a8:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0016baa8);
  return puVar4;
}

