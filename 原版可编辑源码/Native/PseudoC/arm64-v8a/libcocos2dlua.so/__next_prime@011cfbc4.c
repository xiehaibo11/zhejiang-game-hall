
/* std::__ndk1::__next_prime(unsigned long) */

ulong std::__ndk1::__next_prime(ulong param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 < 0xd4) {
    uVar4 = 0x30;
    puVar3 = &DAT_014a1b78;
    do {
      uVar5 = uVar4 >> 1;
      puVar1 = puVar3 + uVar5 + 1;
      uVar4 = uVar4 + ~uVar5;
      if (param_1 <= puVar3[uVar5]) {
        puVar1 = puVar3;
        uVar4 = uVar5;
      }
      puVar3 = puVar1;
    } while (uVar4 != 0);
    return (ulong)*puVar1;
  }
  if (0xffffffffffffffc5 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_011d02dc("__next_prime overflow");
  }
  uVar4 = param_1 / 0xd2;
  uVar5 = 0x30;
  puVar3 = &DAT_014a1c38;
  do {
    uVar8 = uVar5 >> 1;
    puVar1 = puVar3 + uVar8 + 1;
    uVar5 = uVar5 + ~uVar8;
    if (param_1 % 0xd2 <= (ulong)puVar3[uVar8]) {
      puVar1 = puVar3;
      uVar5 = uVar8;
    }
    puVar3 = puVar1;
  } while (uVar5 != 0);
  lVar7 = (long)(puVar1 + -0x52870e) >> 2;
  do {
    lVar6 = lVar7;
    uVar5 = uVar4 * 0xd2 + (ulong)(uint)(&DAT_014a1c38)[lVar6];
    lVar7 = 0x14;
    do {
      uVar9 = (ulong)*(uint *)((long)&DAT_014a1b78 + lVar7);
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar5 / uVar9;
      }
      if (uVar8 < uVar9) {
        return uVar5;
      }
      if (uVar5 == uVar8 * uVar9) goto LAB_011d02b0;
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0xbc);
    uVar8 = 0xd3;
    do {
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar5 / uVar8;
      }
      if (uVar9 < uVar8) {
        return uVar5;
      }
      if (uVar5 == uVar9 * uVar8) break;
      uVar9 = uVar8 + 10;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar9) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xc;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xc) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x10;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x10) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x12;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x12) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x16;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x16) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x1c;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x1c) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x1e;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x1e) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x24;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x24) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x28;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x28) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x2a;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x2a) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x2e;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x2e) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x34;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x34) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x3a;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x3a) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x3c;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x3c) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x42;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x42) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x46;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x46) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x48;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x48) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x4e;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x4e) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x52;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x52) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x58;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x58) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x60;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x60) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 100;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 100) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x66;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x66) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x6a;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x6a) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x6c;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x6c) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x70;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x70) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x78;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x78) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x7e;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x7e) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x82;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x82) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x88;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x88) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x8a;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x8a) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x8e;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x8e) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x94;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x94) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x96;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x96) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0x9c;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0x9c) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xa2;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xa2) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xa6;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xa6) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xa8;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xa8) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xac;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xac) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xb2;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xb2) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xb4;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xb4) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xba;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xba) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xbe;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xbe) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xc0;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xc0) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xc4;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xc4) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xc6;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xc6) {
        return uVar5;
      }
      if (uVar5 == uVar2 * uVar9) break;
      uVar9 = uVar8 + 0xd0;
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar5 / uVar9;
      }
      if (uVar2 < uVar8 + 0xd0) {
        return uVar5;
      }
      uVar8 = uVar8 + 0xd2;
    } while (uVar5 != uVar2 * uVar9);
LAB_011d02b0:
    if (lVar6 == 0x2f) {
      uVar4 = uVar4 + 1;
    }
    lVar7 = 0;
    if (lVar6 != 0x2f) {
      lVar7 = lVar6 + 1;
    }
  } while( true );
}

