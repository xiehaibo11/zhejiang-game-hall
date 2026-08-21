
void asn1_template_free(undefined8 ***param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 **ppuVar5;
  undefined8 local_48;
  undefined8 **local_38;
  
  uVar4 = (uint)*param_2;
  uVar1 = uVar4 & 0x1000;
  if ((uVar4 >> 0xc & 1) != 0) {
    local_38 = param_1;
    param_1 = &local_38;
  }
  if ((*param_2 & 6) == 0) {
    FUN_00b001b4(param_1,param_2[4],uVar1);
  }
  else {
    ppuVar5 = *param_1;
    iVar2 = OPENSSL_sk_num(ppuVar5);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        local_48 = OPENSSL_sk_value(ppuVar5,iVar2);
        FUN_00b001b4(&local_48,param_2[4],uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = OPENSSL_sk_num(ppuVar5);
      } while (iVar2 < iVar3);
    }
    OPENSSL_sk_free(ppuVar5);
    *param_1 = (undefined8 **)0x0;
  }
  return;
}

