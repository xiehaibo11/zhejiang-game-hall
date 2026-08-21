
void mbedtls_ctr_drbg_reseed(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_1c8 [384];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x18);
  if ((ulong)(lVar4 + param_3) < 0x181) {
    thunk_EXT_FUN_00002bb0(auStack_1c8,0,0x180);
    iVar2 = (**(code **)(param_1 + 0x148))(*(undefined8 *)(param_1 + 0x150),auStack_1c8,lVar4);
    if (iVar2 == 0) {
      lVar4 = *(long *)(param_1 + 0x18);
      if ((param_2 != 0) && (param_3 != 0)) {
        thunk_EXT_FUN_00002bb0(auStack_1c8 + lVar4,param_2,param_3);
        lVar4 = lVar4 + param_3;
      }
      FUN_00107dd0(auStack_1c8,auStack_1c8,lVar4);
      FUN_001080a0(param_1,auStack_1c8);
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
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
  thunk_EXT_FUN_00002bb0(uVar3);
  return;
}

