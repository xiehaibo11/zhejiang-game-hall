
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort * FUN_012511cc(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01795948);
  if (DAT_01795970 == (ushort *)0x0) {
    DAT_01795970 = &DAT_01795980;
    _DAT_01795980 = 0x800080;
  }
  puVar5 = (ushort *)0x0;
  if ((DAT_01795970 != (ushort *)0x0) && (DAT_01795970 != (ushort *)&DAT_01795b80)) {
    uVar1 = (param_1 + 3U >> 2) + 1;
    puVar5 = DAT_01795970;
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
        goto LAB_012512a0;
      }
      if (uVar1 == uVar2) {
        if (puVar4 == (ushort *)0x0) {
          DAT_01795970 = &DAT_01795980 + (ulong)*puVar3 * 2;
        }
        else {
          *puVar4 = *puVar3;
        }
        puVar5 = puVar3 + 2;
        *puVar3 = 0;
        goto LAB_012512a0;
      }
      puVar5 = &DAT_01795980 + (ulong)*puVar3 * 2;
      puVar4 = puVar3;
    } while ((ulong)*puVar3 != 0x80);
    puVar5 = (ushort *)0x0;
  }
LAB_012512a0:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_01795948);
  return puVar5;
}

