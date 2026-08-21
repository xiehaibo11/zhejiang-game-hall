
void CRYPTO_gcm128_init(void *param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  memset(param_1,0,0x178);
  lVar1 = (long)param_1 + 0x50;
  *(code **)((long)param_1 + 0x178) = param_3;
  *(undefined8 *)((long)param_1 + 0x180) = param_2;
  (*param_3)(lVar1,lVar1,param_2);
  uVar4 = (*(ulong *)((long)param_1 + 0x50) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)((long)param_1 + 0x50) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar5 = uVar4 >> 0x20;
  uVar2 = uVar5 | uVar4 << 0x20;
  uVar4 = (*(ulong *)((long)param_1 + 0x58) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)((long)param_1 + 0x58) & 0xff00ff00ff00ff) << 8;
  uVar6 = (uVar4 & 0xffff0000ffff0000) >> 0x10;
  uVar4 = uVar6 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  *(ulong *)((long)param_1 + 0x50) = uVar2;
  *(ulong *)((long)param_1 + 0x58) = uVar4;
  if (((byte)OPENSSL_armcap_P >> 5 & 1) == 0) {
    uVar5 = uVar4 >> 1 | uVar5 << 0x3f;
    uVar7 = -((uVar6 & 0x100000000) >> 0x20) & 0xe100000000000000 ^ uVar2 >> 1;
    uVar11 = uVar5 >> 1 | (uVar2 >> 1) << 0x3f;
    uVar9 = uVar7 >> 1 ^ -((uVar6 & 0x200000000) >> 0x21) & 0xe100000000000000;
    uVar13 = uVar11 >> 1 | (uVar7 >> 1) << 0x3f;
    uVar6 = -((uVar6 & 0x400000000) >> 0x22) & 0xe100000000000000 ^ uVar9 >> 1;
    *(undefined8 *)((long)param_1 + 0x60) = 0;
    *(undefined8 *)((long)param_1 + 0x68) = 0;
    *(ulong *)((long)param_1 + 0x120) = uVar7 ^ uVar2;
    *(ulong *)((long)param_1 + 0x128) = uVar5 ^ uVar4;
    *(ulong *)((long)param_1 + 0x80) = uVar9;
    *(ulong *)((long)param_1 + 0x88) = uVar11;
    uVar12 = uVar13 ^ uVar11;
    uVar10 = uVar6 ^ uVar9;
    *(ulong *)((long)param_1 + 0xa0) = uVar7;
    *(ulong *)((long)param_1 + 0xa8) = uVar5;
    *(ulong *)((long)param_1 + 0x70) = uVar6;
    *(ulong *)((long)param_1 + 0x78) = uVar13;
    *(ulong *)((long)param_1 + 0xe0) = uVar2;
    *(ulong *)((long)param_1 + 0xe8) = uVar4;
    *(ulong *)((long)param_1 + 0xc0) = uVar9 ^ uVar7;
    *(ulong *)((long)param_1 + 200) = uVar11 ^ uVar5;
    *(ulong *)((long)param_1 + 0x100) = uVar9 ^ uVar2;
    *(ulong *)((long)param_1 + 0x108) = uVar11 ^ uVar4;
    *(ulong *)((long)param_1 + 0x90) = uVar10;
    *(ulong *)((long)param_1 + 0x98) = uVar12;
    *(ulong *)((long)param_1 + 0xf0) = uVar6 ^ uVar2;
    *(ulong *)((long)param_1 + 0xf8) = uVar13 ^ uVar4;
    *(ulong *)((long)param_1 + 0x150) = uVar10 ^ uVar7 ^ uVar2;
    *(ulong *)((long)param_1 + 0x158) = uVar12 ^ uVar5 ^ uVar4;
    pcVar8 = (code *)&LAB_00b428b0;
    pcVar3 = (code *)&LAB_00b42824;
    *(ulong *)((long)param_1 + 0xb0) = uVar6 ^ uVar7;
    *(ulong *)((long)param_1 + 0xb8) = uVar13 ^ uVar5;
    *(ulong *)((long)param_1 + 0x140) = uVar9 ^ uVar7 ^ uVar2;
    *(ulong *)((long)param_1 + 0x148) = uVar11 ^ uVar5 ^ uVar4;
    *(ulong *)((long)param_1 + 0xd0) = uVar10 ^ uVar7;
    *(ulong *)((long)param_1 + 0xd8) = uVar12 ^ uVar5;
    *(ulong *)((long)param_1 + 0x110) = uVar10 ^ uVar2;
    *(ulong *)((long)param_1 + 0x118) = uVar12 ^ uVar4;
    *(ulong *)((long)param_1 + 0x130) = uVar6 ^ uVar7 ^ uVar2;
    *(ulong *)((long)param_1 + 0x138) = uVar13 ^ uVar5 ^ uVar4;
  }
  else {
    gcm_init_v8((undefined8 *)((long)param_1 + 0x60),lVar1);
    pcVar8 = gcm_ghash_v8;
    pcVar3 = gcm_gmult_v8;
  }
  *(code **)((long)param_1 + 0x160) = pcVar3;
  *(code **)((long)param_1 + 0x168) = pcVar8;
  return;
}

