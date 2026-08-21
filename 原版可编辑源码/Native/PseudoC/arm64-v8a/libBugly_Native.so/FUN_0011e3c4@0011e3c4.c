
undefined4 FUN_0011e3c4(undefined8 param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  __pid_t _Var4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _Var4 = getpid();
  puVar5 = (ulong *)FUN_00122428(1,_Var4);
  lVar6 = FUN_0011eab4(puVar5,param_1);
  if ((lVar6 == 0) || ((param_2 != 0 && ((*(uint *)(lVar6 + 0x20) & param_2) == 0)))) {
    uVar8 = 0xffffffff;
  }
  else {
    pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_001774d8);
    lVar6 = FUN_0011eab4(DAT_00176ec8,param_1);
    puVar7 = puVar5;
    puVar1 = DAT_00176ec8;
    if ((lVar6 == 0) ||
       ((puVar2 = puVar5, puVar3 = DAT_00176ec8, param_2 != 0 &&
        ((*(uint *)(lVar6 + 0x20) & param_2) == 0)))) {
      for (; puVar2 = DAT_00176ec8, puVar3 = puVar5, puVar1 != (ulong *)0x0;
          puVar1 = (ulong *)puVar1[0xf]) {
        if ((char)puVar1[0xb] != '\0') {
          for (; (puVar7 != (ulong *)0x0 && (*puVar1 <= *puVar7)); puVar7 = (ulong *)puVar7[0xf]) {
            if ((*puVar1 == *puVar7) && (puVar1[1] == puVar7[1])) {
              uVar9 = puVar1[0xb];
              uVar11 = puVar1[0xe];
              uVar10 = puVar1[0xd];
              puVar7[0xc] = puVar1[0xc];
              puVar7[0xb] = uVar9;
              puVar7[0xe] = uVar11;
              puVar7[0xd] = uVar10;
              if (*(char *)((long)puVar7 + 0x5a) == '\0') {
                puVar7[0xe] = (ulong)puVar7;
              }
              *(undefined1 *)((long)puVar1 + 0x5a) = 0;
            }
          }
        }
      }
    }
    DAT_00176ec8 = puVar3;
    puVar5 = puVar2;
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_001774d8);
    uVar8 = 0;
  }
  FUN_0011e968(puVar5);
  return uVar8;
}

