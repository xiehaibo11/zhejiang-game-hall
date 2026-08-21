
int FUN_01251344(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar6 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_01795948);
  if ((DAT_01795970 != (ushort *)0x0) && (DAT_01795970 != (ushort *)&DAT_01795b80)) {
    uVar2 = *(ushort *)(param_1 + -2);
    puVar4 = (ushort *)0x0;
    puVar5 = DAT_01795970;
    do {
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar6) {
        puVar5[1] = uVar2 + uVar1;
        goto LAB_01251424;
      }
      if (puVar6 + (ulong)uVar2 * 2 == puVar5) {
        *(ushort *)(param_1 + -2) = uVar2 + uVar1;
        if (puVar4 == (ushort *)0x0) {
          DAT_01795970 = puVar6;
          *puVar6 = puVar6[(ulong)uVar2 * 2];
        }
        else {
          *puVar4 = (ushort)((int)puVar6 + 0xfe86a680U >> 2);
        }
        goto LAB_01251424;
      }
      uVar1 = *puVar5;
      puVar4 = puVar5;
      puVar5 = &DAT_01795980 + (ulong)uVar1 * 2;
    } while ((ulong)uVar1 != 0x80);
  }
  *puVar6 = (ushort)((int)DAT_01795970 + 0xfe86a680U >> 2);
  DAT_01795970 = puVar6;
LAB_01251424:
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_01795948);
  return iVar3;
}

