
undefined8 ossl_statem_client_post_work(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0xc:
    if ((param_2 == 3) && (iVar1 = statem_flush(param_1), iVar1 != 1)) {
      return 3;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x200) = 1;
    }
    break;
  case 0xe:
    uVar2 = tls_client_key_exchange_post_work(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    break;
  case 0x10:
    lVar5 = *(long *)(param_1 + 0x90);
    lVar3 = *(long *)(param_1 + 0x178);
    *(undefined8 *)(lVar3 + 0xd8) = *(undefined8 *)(lVar5 + 0x228);
    puVar6 = *(undefined4 **)(lVar5 + 0x280);
    uVar4 = 0;
    if (puVar6 != (undefined4 *)0x0) {
      uVar4 = *puVar6;
    }
    *(undefined4 *)(lVar3 + 0xd0) = uVar4;
    uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0x12);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
      dtls1_reset_seq_numbers(param_1,2);
    }
    break;
  case 0x12:
    iVar1 = statem_flush(param_1);
    if (iVar1 != 1) {
      return 4;
    }
  }
  return 2;
}

