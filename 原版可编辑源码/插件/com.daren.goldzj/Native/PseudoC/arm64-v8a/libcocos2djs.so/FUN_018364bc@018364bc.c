
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_018364bc(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01d53ed4);
  if (DAT_01d53f00 == (ushort *)0x0) {
    DAT_01d53f00 = &DAT_01d53f10;
    _DAT_01d53f10 = 0x800080;
  }
  puVar5 = (ushort *)0x0;
  if ((DAT_01d53f00 != (ushort *)0x0) && (DAT_01d53f00 != (ushort *)&DAT_01d54110)) {
    uVar1 = (param_1 + 3U >> 2) + 1;
    puVar5 = DAT_01d53f00;
    puVar4 = (ushort *)0x0;
    do {
      puVar3 = puVar5;
      uVar2 = puVar3[1];
      if (uVar1 < uVar2) {
        uVar2 = uVar2 - (ushort)uVar1;
        puVar3[1] = uVar2;
        puVar3 = puVar3 + (ulong)uVar2 * 2;
        *puVar3 = 0;
        puVar3[1] = (ushort)uVar1;
        puVar5 = puVar3 + 2;
        goto LAB_01836594;
      }
      if (uVar1 == uVar2) {
        if (puVar4 == (ushort *)0x0) {
          DAT_01d53f00 = &DAT_01d53f10 + (ulong)*puVar3 * 2;
        }
        else {
          *puVar4 = *puVar3;
        }
        puVar5 = puVar3 + 2;
        *puVar3 = 0;
        goto LAB_01836594;
      }
      puVar5 = &DAT_01d53f10 + (ulong)*puVar3 * 2;
      puVar4 = puVar3;
    } while ((ulong)*puVar3 != 0x80);
    puVar5 = (ushort *)0x0;
  }
LAB_01836594:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d53ed4);
  return puVar5;
}

