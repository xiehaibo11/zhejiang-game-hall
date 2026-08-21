
ulong deflateParams(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((param_1 == 0) || (lVar8 = *(long *)(param_1 + 0x38), lVar8 == 0)) {
    uVar7 = 0xfffffffe;
  }
  else {
    uVar2 = 6;
    if (param_2 != 0xffffffff) {
      uVar2 = param_2;
    }
    uVar7 = 0xfffffffe;
    if ((param_3 < 5) && (uVar2 < 10)) {
      if (((*(uint *)(lVar8 + 0xb8) == param_3) &&
          ((&PTR_FUN_0172d360)[(long)*(int *)(lVar8 + 0xb4) * 2] ==
           (&PTR_FUN_0172d360)[(long)(int)uVar2 * 2])) || (*(long *)(param_1 + 0x10) == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = deflate(param_1,5);
        if ((int)uVar7 == -5) {
          uVar3 = 0;
          if (*(int *)(lVar8 + 0x28) != 0) {
            uVar3 = 0xfffffffb;
          }
          uVar7 = (ulong)uVar3;
        }
      }
      if (*(uint *)(lVar8 + 0xb4) != uVar2) {
        *(uint *)(lVar8 + 0xb4) = uVar2;
        lVar1 = (long)(int)uVar2 * 0x10;
        uVar4 = *(ushort *)(&DAT_0172d35a + lVar1);
        uVar5 = *(ushort *)(&DAT_0172d358 + lVar1);
        uVar6 = *(ushort *)(&DAT_0172d35c + lVar1);
        *(uint *)(lVar8 + 0xac) = (uint)*(ushort *)(&DAT_0172d35e + lVar1);
        *(uint *)(lVar8 + 0xb0) = (uint)uVar4;
        *(uint *)(lVar8 + 0xbc) = (uint)uVar5;
        *(uint *)(lVar8 + 0xc0) = (uint)uVar6;
      }
      *(uint *)(lVar8 + 0xb8) = param_3;
    }
  }
  return uVar7;
}

