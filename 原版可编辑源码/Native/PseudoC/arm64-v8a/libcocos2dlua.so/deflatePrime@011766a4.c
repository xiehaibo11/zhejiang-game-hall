
undefined8 deflatePrime(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_1 == 0) || (lVar4 = *(long *)(param_1 + 0x38), lVar4 == 0)) {
    uVar3 = 0xfffffffe;
  }
  else if (*(ulong *)(lVar4 + 0x1700) < *(long *)(lVar4 + 0x20) + 2U) {
    uVar3 = 0xfffffffb;
  }
  else {
    do {
      uVar2 = *(uint *)(lVar4 + 0x1724);
      uVar1 = param_2;
      if ((int)(0x10 - uVar2) <= (int)param_2) {
        uVar1 = 0x10 - uVar2;
      }
      *(ushort *)(lVar4 + 0x1720) =
           (ushort)(((1 << (ulong)(uVar1 & 0x1f)) - 1U & param_3) << (ulong)(uVar2 & 0x1f)) |
           *(ushort *)(lVar4 + 0x1720);
      *(uint *)(lVar4 + 0x1724) = uVar2 + uVar1;
      FUN_0117c078(lVar4);
      param_2 = param_2 - uVar1;
      param_3 = (int)param_3 >> (uVar1 & 0x1f);
    } while (param_2 != 0);
    uVar3 = 0;
  }
  return uVar3;
}

