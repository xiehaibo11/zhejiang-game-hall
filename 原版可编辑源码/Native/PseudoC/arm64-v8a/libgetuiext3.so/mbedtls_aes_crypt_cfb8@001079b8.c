
undefined8
mbedtls_aes_crypt_cfb8
          (undefined8 param_1,int param_2,long param_3,byte *param_4,byte *param_5,byte *param_6)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  byte unaff_w27;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_3 != 0) {
    do {
      uStack_78 = *(undefined8 *)(param_4 + 8);
      local_80 = *(undefined8 *)param_4;
      param_3 = param_3 + -1;
      thunk_EXT_FUN_00002bb0(param_1,param_4,param_4);
      bVar1 = *param_5;
      bVar3 = bVar1 ^ *param_4;
      *param_6 = bVar3;
      if (param_2 != 0) {
        bVar1 = unaff_w27;
      }
      unaff_w27 = bVar3;
      if (param_2 != 1) {
        unaff_w27 = bVar1;
      }
      *(undefined8 *)(param_4 + 7) = *(undefined8 *)((long)((ulong)&local_80 | 1) + 7);
      uVar4 = *(undefined8 *)((ulong)&local_80 | 1);
      param_4[0xf] = unaff_w27;
      *(undefined8 *)param_4 = uVar4;
      param_6 = param_6 + 1;
      param_5 = param_5 + 1;
    } while (param_3 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 0;
  }
  uVar4 = thunk_EXT_FUN_00002bb0();
  return uVar4;
}

