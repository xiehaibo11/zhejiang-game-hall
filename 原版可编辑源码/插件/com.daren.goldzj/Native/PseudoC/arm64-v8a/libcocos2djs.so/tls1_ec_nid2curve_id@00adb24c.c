
ulong tls1_ec_nid2curve_id(int param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = 0;
  piVar3 = &DAT_018a5170;
  do {
    if (0x1c < uVar2) {
      return 0;
    }
    iVar1 = *piVar3;
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar1 != param_1);
  return uVar2;
}

