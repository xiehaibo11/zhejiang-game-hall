
long CRYPTO_128_wrap_pad(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,void *param_4,
                        size_t param_5,code *param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  
  if (param_5 - 1 < 0x7fffffff) {
    uVar3 = param_5 + 7 & 0xfffffffffffffff8;
    if (param_2 == (undefined4 *)0x0) {
      local_48 = 0xa65959a6;
    }
    else {
      local_48 = *param_2;
    }
    uStack_44 = (undefined1)(param_5 >> 0x18);
    uStack_43 = (undefined1)(param_5 >> 0x10);
    uStack_42 = (undefined1)(param_5 >> 8);
    uStack_41 = (undefined1)param_5;
    if (uVar3 == 8) {
      memmove(param_3 + 1,param_4,param_5);
      *param_3 = CONCAT17(uStack_41,
                          CONCAT16(uStack_42,CONCAT15(uStack_43,CONCAT14(uStack_44,local_48))));
      memset((void *)((long)(param_3 + 1) + param_5),0,uVar3 - param_5);
      (*param_6)(param_3,param_3,param_1);
      lVar2 = 0x10;
    }
    else {
      memmove(param_3,param_4,param_5);
      memset((void *)((long)param_3 + param_5),0,uVar3 - param_5);
      iVar1 = CRYPTO_128_wrap(param_1,&local_48,param_3,param_3,uVar3,param_6);
      lVar2 = (long)iVar1;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

