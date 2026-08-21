
undefined8 FUN_00b18c90(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int reason;
  int line;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    reason = 0x8c;
    line = 0x152;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
    if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) {
      reason = 0x7b;
      line = 0x158;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
      if (lVar3 != 0) {
        *param_3 = 0x20;
        if ((param_2 == 0) || (uVar1 = X25519(param_2,lVar2,lVar3), (int)uVar1 != 0)) {
          uVar1 = 1;
        }
        return uVar1;
      }
      reason = 0x85;
      line = 0x15c;
    }
  }
  ERR_put_error(0x10,0x10d,reason,"crypto/ec/ecx_meth.c",line);
  return 0;
}

