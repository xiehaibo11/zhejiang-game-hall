
void cryptor_aes_dec_ctx(long param_1,undefined8 *param_2,int param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  bVar2 = true;
  if ((param_1 != 0) && (param_3 == 0x10)) {
    local_50 = 0;
    puVar4 = (undefined8 *)thunk_EXT_FUN_00002bb0(0x10);
    uVar5 = *param_2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar5;
    iVar3 = thunk_EXT_FUN_00002bb0(param_1,0,param_5,&local_50,puVar4,param_4,param_6);
    thunk_EXT_FUN_00002bb0(puVar4);
    bVar2 = iVar3 != 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
  thunk_EXT_FUN_00002bb0(bVar2);
  return;
}

