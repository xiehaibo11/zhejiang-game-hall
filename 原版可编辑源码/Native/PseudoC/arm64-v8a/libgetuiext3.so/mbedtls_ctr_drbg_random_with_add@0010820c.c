
void mbedtls_ctr_drbg_random_with_add
               (long param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [384];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (0x400 < param_3) {
    uVar5 = 0xffffffca;
    goto LAB_0010829c;
  }
  if (param_5 < 0x101) {
    uStack_1e0 = 0;
    local_1e8 = 0;
    uStack_1f0 = 0;
    local_1f8 = 0;
    uStack_200 = 0;
    local_208 = 0;
    if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x10)) || (*(int *)(param_1 + 0x14) != 0)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (0x180 < lVar6 + param_5) goto LAB_00108298;
      thunk_EXT_FUN_00002bb0(auStack_1d8,0,0x180);
      iVar4 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x150),auStack_1d8,lVar6);
      if (iVar4 != 0) {
        uVar5 = 0xffffffcc;
        goto LAB_0010829c;
      }
      lVar6 = *(long *)(param_1 + 0x18);
      if ((param_4 != 0) && (param_5 != 0)) {
        thunk_EXT_FUN_00002bb0(auStack_1d8 + lVar6,param_4,param_5);
        lVar6 = lVar6 + param_5;
      }
      FUN_00107dd0(auStack_1d8,auStack_1d8,lVar6);
      FUN_001080a0(param_1,auStack_1d8);
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else if (param_5 != 0) {
      FUN_00107dd0(&local_208,param_4,param_5);
      FUN_001080a0(param_1,&local_208);
    }
    if (param_3 != 0) {
      do {
        lVar6 = 0xf;
        do {
          if (lVar6 + 1 < 1) break;
          cVar1 = *(char *)(param_1 + lVar6) + '\x01';
          *(char *)(param_1 + lVar6) = cVar1;
          lVar6 = lVar6 + -1;
        } while (cVar1 == '\0');
        thunk_EXT_FUN_00002bb0(param_1 + 0x28,1,param_1,auStack_1d8);
        uVar2 = param_3;
        if (0xf < param_3) {
          uVar2 = 0x10;
        }
        thunk_EXT_FUN_00002bb0(param_2,auStack_1d8,uVar2);
        param_3 = param_3 - uVar2;
        param_2 = param_2 + uVar2;
      } while (param_3 != 0);
    }
    FUN_001080a0(param_1,&local_208);
    uVar5 = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
LAB_00108298:
    uVar5 = 0xffffffc8;
  }
LAB_0010829c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
    thunk_EXT_FUN_00002bb0(uVar5);
    return;
  }
  return;
}

