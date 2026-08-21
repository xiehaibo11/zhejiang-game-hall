
void CRYPTO_cfb128_8_encrypt
               (byte *param_1,byte *param_2,long param_3,undefined8 param_4,byte *param_5,
               undefined8 param_6,int param_7,code *param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  
  if (param_3 != 0) {
    puVar1 = (undefined8 *)((ulong)&local_80 | 1);
    if (param_7 == 0) {
      do {
        uStack_78 = *(undefined8 *)(param_5 + 8);
        local_80 = *(undefined8 *)param_5;
        (*param_8)(param_5,param_5,param_4);
        local_70 = *param_1;
        param_3 = param_3 + -1;
        *param_2 = *param_5 ^ local_70;
        uVar2 = *puVar1;
        *(undefined8 *)(param_5 + 8) = puVar1[1];
        *(undefined8 *)param_5 = uVar2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
    else {
      do {
        uStack_78 = *(undefined8 *)(param_5 + 8);
        local_80 = *(undefined8 *)param_5;
        (*param_8)(param_5,param_5,param_4);
        param_3 = param_3 + -1;
        local_70 = *param_5 ^ *param_1;
        *param_2 = local_70;
        uVar2 = *puVar1;
        *(undefined8 *)(param_5 + 8) = puVar1[1];
        *(undefined8 *)param_5 = uVar2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_3 != 0);
    }
  }
  return;
}

