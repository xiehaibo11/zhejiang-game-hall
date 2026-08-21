
int FUN_0015f3f8(long param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)(param_1 + -4);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0016baa8);
  if ((DAT_0016bad0 != (ushort *)0x0) && (DAT_0016bad0 != &DAT_0016bce0)) {
    puVar3 = (ushort *)0x0;
    puVar4 = DAT_0016bad0;
    do {
      uVar1 = puVar4[1];
      if (puVar4 + (ulong)uVar1 * 2 == puVar5) {
        puVar4[1] = *(short *)(param_1 + -2) + uVar1;
        goto LAB_0015f4e0;
      }
      if (puVar5 + (ulong)*(ushort *)(param_1 + -2) * 2 == puVar4) {
        *(ushort *)(param_1 + -2) = *(ushort *)(param_1 + -2) + uVar1;
        if (puVar3 == (ushort *)0x0) {
          DAT_0016bad0 = puVar5;
          *puVar5 = *puVar4;
        }
        else {
          *puVar3 = (ushort)((int)puVar5 - 0x16bae0U >> 2);
        }
        goto LAB_0015f4e0;
      }
      uVar1 = *puVar4;
      puVar3 = puVar4;
      puVar4 = &DAT_0016bae0 + (ulong)uVar1 * 2;
    } while ((ulong)uVar1 != 0x80);
  }
  *puVar5 = (ushort)((int)DAT_0016bad0 - 0x16bae0U >> 2);
  DAT_0016bad0 = puVar5;
LAB_0015f4e0:
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0016baa8);
  return iVar2;
}

