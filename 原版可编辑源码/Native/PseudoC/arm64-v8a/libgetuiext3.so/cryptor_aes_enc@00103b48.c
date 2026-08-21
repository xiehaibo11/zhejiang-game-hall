
ulong cryptor_aes_enc(long param_1,undefined4 param_2,undefined8 *param_3,int param_4,long param_5,
                     undefined8 param_6,long param_7)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_190;
  undefined1 auStack_188 [288];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar4 = 1;
  if ((((param_1 != 0) && (param_3 != (undefined8 *)0x0)) && (param_5 != 0)) && (param_7 != 0)) {
    thunk_EXT_FUN_00002bb0(auStack_188);
    thunk_EXT_FUN_00002bb0(auStack_188);
    iVar2 = thunk_EXT_FUN_00002bb0(auStack_188,param_1,param_2);
    if (iVar2 == 0) {
      if (param_4 == 0x10) {
        local_190 = 0;
        puVar3 = (undefined8 *)thunk_EXT_FUN_00002bb0(0x10);
        uVar5 = *param_3;
        puVar3[1] = param_3[1];
        *puVar3 = uVar5;
        iVar2 = thunk_EXT_FUN_00002bb0(auStack_188,1,param_6,&local_190,puVar3,param_5,param_7);
        thunk_EXT_FUN_00002bb0(puVar3);
        uVar4 = (ulong)(iVar2 != 0);
      }
      else {
        uVar4 = 1;
      }
      thunk_EXT_FUN_00002bb0(auStack_188);
    }
    else {
      thunk_EXT_FUN_00002bb0(auStack_188);
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4;
  }
  uVar4 = thunk_EXT_FUN_00002bb0();
  return uVar4;
}

