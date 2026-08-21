
int FUN_001179c4(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar6 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013a0d0);
  if ((DAT_0013a0f8 != (ushort *)0x0) && (DAT_0013a0f8 != (ushort *)&DAT_0013a300)) {
    uVar2 = *(ushort *)(param_1 + -2);
    puVar4 = (ushort *)0x0;
    puVar5 = DAT_0013a0f8;
    do {
      uVar1 = puVar5[1];
      if (puVar5 + (ulong)uVar1 * 2 == puVar6) {
        puVar5[1] = uVar2 + uVar1;
        goto LAB_00117aa4;
      }
      if (puVar6 + (ulong)uVar2 * 2 == puVar5) {
        *(ushort *)(param_1 + -2) = uVar2 + uVar1;
        if (puVar4 == (ushort *)0x0) {
          DAT_0013a0f8 = puVar6;
          *puVar6 = puVar6[(ulong)uVar2 * 2];
        }
        else {
          *puVar4 = (ushort)((int)puVar6 - 0x13a100U >> 2);
        }
        goto LAB_00117aa4;
      }
      uVar1 = *puVar5;
      puVar4 = puVar5;
      puVar5 = &DAT_0013a100 + (ulong)uVar1 * 2;
    } while ((ulong)uVar1 != 0x80);
  }
  *puVar6 = (ushort)((int)DAT_0013a0f8 - 0x13a100U >> 2);
  DAT_0013a0f8 = puVar6;
LAB_00117aa4:
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013a0d0);
  return iVar3;
}

