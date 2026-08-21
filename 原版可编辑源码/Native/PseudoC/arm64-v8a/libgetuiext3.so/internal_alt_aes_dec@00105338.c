
void internal_alt_aes_dec
               (long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = 1;
  if (((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) {
    uStack_68 = 0x9d9a9b9ccf9e9e99;
    local_70 = 0xcbc8c99d9a99c69e;
    uStack_58 = 0xc9c7ce999cc9c7cf;
    uStack_60 = 0xcbc9c9ca9ccf9ec8;
    iVar2 = thunk_EXT_FUN_00002bb0(&local_70,0x20,auStack_80);
    if (iVar2 == 0) {
      uVar3 = thunk_EXT_FUN_00002bb0(param_3,param_4,&local_70);
      if ((int)uVar3 == 0) {
        uVar3 = thunk_EXT_FUN_00002bb0(auStack_80,0x80,&local_70,0x10,param_1,param_2,param_5);
      }
    }
    else {
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
  thunk_EXT_FUN_00002bb0(uVar3);
  return;
}

