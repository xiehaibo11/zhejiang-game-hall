
undefined8 FUN_0011aff0(undefined8 param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  __pid_t _Var3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  
  _Var3 = getpid();
  puVar4 = (ulong *)FUN_0011f970(1,_Var3);
  lVar5 = FUN_0011bbe4(puVar4,param_1);
  if (lVar5 == 0) {
LAB_0011b168:
    uVar9 = 0xffffffff;
  }
  else {
    puVar10 = puVar4;
    puVar6 = puVar4;
    if (param_2 == 0) {
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00176428);
      lVar5 = FUN_0011bbe4(DAT_00175e60,param_1);
      puVar1 = DAT_00175e60;
      puVar2 = DAT_00175e60;
      if (lVar5 == 0) {
joined_r0x0011b07c:
        for (; puVar10 = DAT_00175e60, puVar2 = puVar4, puVar1 != (ulong *)0x0;
            puVar1 = (ulong *)puVar1[0xf]) {
          if ((char)puVar1[0xb] != '\0') {
            if (puVar6 == (ulong *)0x0) {
LAB_0011b0fc:
              puVar6 = (ulong *)0x0;
            }
            else {
              uVar8 = *puVar1;
              uVar7 = *puVar6;
              while (uVar8 <= uVar7) {
                if ((uVar8 == uVar7) && (puVar1[1] == puVar6[1])) {
                  uVar7 = puVar1[0xc];
                  puVar6[0xb] = puVar1[0xb];
                  puVar6[0xc] = uVar7;
                  uVar7 = puVar1[0xe];
                  puVar6[0xd] = puVar1[0xd];
                  puVar6[0xe] = uVar7;
                  if (*(char *)((long)puVar6 + 0x5a) == '\0') {
                    puVar6[0xe] = (ulong)puVar6;
                  }
                  puVar6 = (ulong *)puVar6[0xf];
                  *(undefined1 *)((long)puVar1 + 0x5a) = 0;
                }
                else {
                  puVar6 = (ulong *)puVar6[0xf];
                }
                if (puVar6 == (ulong *)0x0) goto LAB_0011b0fc;
                uVar7 = *puVar6;
              }
            }
          }
        }
      }
    }
    else {
      if ((param_2 & *(uint *)(lVar5 + 0x20)) == 0) goto LAB_0011b168;
      pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00176428);
      lVar5 = FUN_0011bbe4(DAT_00175e60,param_1);
      puVar1 = DAT_00175e60;
      if ((lVar5 == 0) || (puVar2 = DAT_00175e60, (param_2 & *(uint *)(lVar5 + 0x20)) == 0))
      goto joined_r0x0011b07c;
    }
    DAT_00175e60 = puVar2;
    uVar9 = 0;
    pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00176428);
    puVar4 = puVar10;
  }
  FUN_0011bb68(puVar4);
  return uVar9;
}

