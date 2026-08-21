
/* WARNING: Removing unreachable block (ram,0x0012e1f4) */

long FUN_0012e050(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  long local_10;
  undefined4 local_8;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0013a508);
  for (puVar8 = DAT_0013a538; puVar8 != (ulong *)0x0; puVar8 = (ulong *)puVar8[5]) {
    if (*puVar8 <= param_1) {
      lVar4 = FUN_0012d804(puVar8,param_1);
      if (lVar4 != 0) goto LAB_0012e12c;
      break;
    }
  }
  do {
    puVar8 = DAT_0013a530;
    if (DAT_0013a530 == (ulong *)0x0) {
      lVar4 = 0;
      break;
    }
    DAT_0013a530 = (ulong *)DAT_0013a530[5];
    lVar4 = FUN_0012d804(puVar8,param_1);
    puVar7 = (ulong *)&DAT_0013a538;
    for (puVar6 = DAT_0013a538; (puVar6 != (ulong *)0x0 && (*puVar8 <= *puVar6));
        puVar6 = (ulong *)puVar6[5]) {
      puVar7 = puVar6 + 5;
    }
    puVar8[5] = (ulong)puVar6;
    *puVar7 = (ulong)puVar8;
  } while (lVar4 == 0);
LAB_0012e12c:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0013a508);
  if (lVar4 == 0) {
    local_8 = 1;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_30 = param_1;
    iVar3 = dl_iterate_phdr(FUN_0012d0b8,&local_30);
    if (iVar3 < 0) {
      return 0;
    }
    if (local_10 == 0) {
      return 0;
    }
    *param_2 = local_28;
    param_2[1] = local_20;
    local_30 = local_18;
  }
  else {
    *param_2 = puVar8[1];
    uVar1 = puVar8[4];
    param_2[1] = puVar8[2];
    uVar2 = (undefined1)((ushort)puVar8[4] >> 3);
    if (((byte)uVar1 >> 2 & 1) != 0) {
      uVar2 = FUN_0012d0a8(lVar4);
    }
    uVar5 = FUN_0012cc0c(uVar2,puVar8);
    FUN_0012cccc(uVar2,uVar5,lVar4 + 8,&local_30);
    local_10 = lVar4;
  }
  param_2[2] = local_30;
  return local_10;
}

