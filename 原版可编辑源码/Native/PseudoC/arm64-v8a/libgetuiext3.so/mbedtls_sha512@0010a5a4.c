
void mbedtls_sha512(long param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  long lVar12;
  ulong uVar13;
  ulong local_140 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  int local_70;
  long local_68;
  
  bVar11 = param_4 != 0;
  uVar1 = 0xbb67ae8584caa73b;
  uVar8 = 0x6a09e667f3bcc908;
  if (bVar11) {
    uVar1 = 0x629a292a367cd507;
    uVar8 = 0xcbbb9d5dc1059ed8;
  }
  lVar7 = tpidr_el0;
  uVar2 = 0x510e527fade682d1;
  if (bVar11) {
    uVar2 = 0x67332667ffc00b31;
  }
  local_68 = *(long *)(lVar7 + 0x28);
  uVar3 = 0x9b05688c2b3e6c1f;
  if (bVar11) {
    uVar3 = 0x8eb44a8768581511;
  }
  uVar4 = 0x1f83d9abfb41bd6b;
  if (bVar11) {
    uVar4 = 0xdb0c2e0d64f98fa7;
  }
  uVar5 = 0x5be0cd19137e2179;
  uVar9 = 0xa54ff53a5f1d36f1;
  uVar10 = 0x3c6ef372fe94f82b;
  if (bVar11) {
    uVar5 = 0x47b5481dbefa4fa4;
    uVar9 = 0x152fecd8f70e5939;
    uVar10 = 0x9159015a3070dd17;
  }
  thunk_EXT_FUN_00002bb0(local_140,0,0xd8);
  local_130 = uVar8;
  uStack_128 = uVar1;
  local_120 = uVar10;
  uStack_118 = uVar9;
  local_110 = uVar2;
  uStack_108 = uVar3;
  local_100 = uVar4;
  uStack_f8 = uVar5;
  local_70 = param_4;
  if (param_2 != 0) {
    uVar6 = param_2 - 0x80;
    local_140[0] = param_2;
    if (0x7f < param_2) {
      uVar13 = uVar6 & 0xffffffffffffff80;
      lVar12 = param_1;
      do {
        thunk_EXT_FUN_00002bb0(local_140,lVar12);
        param_2 = param_2 - 0x80;
        lVar12 = lVar12 + 0x80;
      } while (0x7f < param_2);
      param_2 = uVar6 - uVar13;
      if (param_2 == 0) goto LAB_0010a794;
      param_1 = param_1 + uVar13 + 0x80;
    }
    thunk_EXT_FUN_00002bb0(auStack_f0,param_1,param_2);
  }
LAB_0010a794:
  thunk_EXT_FUN_00002bb0(local_140,param_3);
  lVar12 = 0;
  do {
    *(undefined1 *)((long)local_140 + lVar12) = 0;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0xd8);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

