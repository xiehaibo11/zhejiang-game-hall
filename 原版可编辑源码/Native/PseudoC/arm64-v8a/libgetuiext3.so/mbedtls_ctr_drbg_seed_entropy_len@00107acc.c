
void mbedtls_ctr_drbg_seed_entropy_len
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
               undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [384];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uStack_1f0 = 0;
  local_1f8 = 0;
  uStack_200 = 0;
  local_208 = 0;
  thunk_EXT_FUN_00002bb0(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x148) = param_2;
  *(undefined8 *)(param_1 + 0x150) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_6;
  *(undefined4 *)(param_1 + 0x20) = 10000;
  thunk_EXT_FUN_00002bb0(param_1 + 0x28,&local_208,0x100);
  lVar4 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar4 + param_5) < 0x181) {
    thunk_EXT_FUN_00002bb0(auStack_1e8,0,0x180);
    iVar2 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x150),auStack_1e8,lVar4);
    if (iVar2 == 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if ((param_4 != 0) && (param_5 != 0)) {
        thunk_EXT_FUN_00002bb0(auStack_1e8 + lVar4,param_4,param_5);
        lVar4 = lVar4 + param_5;
      }
      FUN_00107dd0(auStack_1e8,auStack_1e8,lVar4);
      FUN_001080a0(param_1,auStack_1e8);
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      uVar3 = 0xffffffcc;
    }
  }
  else {
    uVar3 = 0xffffffc8;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
  thunk_EXT_FUN_00002bb0(uVar3);
  return;
}

