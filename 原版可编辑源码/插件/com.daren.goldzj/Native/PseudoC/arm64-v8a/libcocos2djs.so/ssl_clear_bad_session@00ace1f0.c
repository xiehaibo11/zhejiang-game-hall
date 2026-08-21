
undefined4 ssl_clear_bad_session(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(long *)(param_1 + 0x178) == 0) || ((*(byte *)(param_1 + 0x44) & 1) != 0)) ||
      (iVar1 = SSL_in_init(param_1), iVar1 != 0)) || (iVar1 = SSL_in_before(param_1), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    FUN_00ace01c(*(undefined8 *)(param_1 + 0x2d0),*(undefined8 *)(param_1 + 0x178),1);
  }
  return uVar2;
}

