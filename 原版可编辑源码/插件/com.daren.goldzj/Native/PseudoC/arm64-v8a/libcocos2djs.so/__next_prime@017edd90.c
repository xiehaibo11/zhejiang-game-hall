
/* std::__ndk1::__next_prime(unsigned long) */

ulong std::__ndk1::__next_prime(ulong param_1)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 < 0xd4) {
    uVar6 = 0x30;
    puVar5 = &DAT_01a6439c;
    do {
      uVar7 = uVar6 >> 1;
      puVar1 = puVar5 + uVar7 + 1;
      uVar6 = uVar6 + ~uVar7;
      if (param_1 <= puVar5[uVar7]) {
        puVar1 = puVar5;
        uVar6 = uVar7;
      }
      puVar5 = puVar1;
    } while (uVar6 != 0);
    return (ulong)*puVar1;
  }
  if (0xffffffffffffffc5 < param_1) {
    uVar4 = __cxa_allocate_exception(0x10);
    FUN_017ee4ec(uVar4,"__next_prime overflow");
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar4,&overflow_error::typeinfo,overflow_error::~overflow_error);
  }
  uVar6 = param_1 / 0xd2;
  uVar7 = 0x30;
  puVar5 = &DAT_01a6445c;
  do {
    uVar9 = uVar7 >> 1;
    puVar1 = puVar5 + uVar9 + 1;
    uVar7 = uVar7 + ~uVar9;
    if (param_1 % 0xd2 <= (ulong)puVar5[uVar9]) {
      puVar1 = puVar5;
      uVar7 = uVar9;
    }
    puVar5 = puVar1;
  } while (uVar7 != 0);
  lVar3 = (long)(puVar1 + -0x699117) >> 2;
  do {
    lVar8 = lVar3;
    uVar9 = uVar6 * 0xd2 + (ulong)(uint)(&DAT_01a6445c)[lVar8];
    uVar7 = 5;
    do {
      uVar10 = (ulong)(uint)(&DAT_01a6439c)[uVar7];
      uVar2 = 0;
      if (uVar10 != 0) {
        uVar2 = uVar9 / uVar10;
      }
      if (uVar2 < uVar10) {
        return uVar9;
      }
      if (uVar9 == uVar2 * uVar10) goto LAB_017ede54;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x2f);
    uVar7 = 0xd3;
    do {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar9 / uVar7;
      }
      if (uVar2 < uVar7) {
        return uVar9;
      }
      if (uVar9 == uVar2 * uVar7) break;
      uVar2 = uVar7 + 10;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar2) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xc;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xc) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x10;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x10) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x12;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x12) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x16;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x16) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x1c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x1c) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x1e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x1e) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x24;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x24) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x28;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x28) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x2a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x2a) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x2e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x2e) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x34;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x34) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x3a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x3a) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x3c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x3c) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x42;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x42) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x46;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x46) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x48;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x48) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x4e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x4e) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x52;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x52) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x58;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x58) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x60;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x60) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 100;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 100) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x66;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x66) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x6a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x6a) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x6c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x6c) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x70;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x70) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x78;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x78) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x7e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x7e) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x82;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x82) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x88;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x88) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x8a;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x8a) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x8e;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x8e) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x94;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x94) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x96;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x96) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0x9c;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0x9c) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xa2;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xa2) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xa6;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xa6) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xa8;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xa8) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xac;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xac) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xb2;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xb2) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xb4;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xb4) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xba;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xba) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xbe;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xbe) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xc0;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xc0) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xc4;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xc4) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xc6;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xc6) {
        return uVar9;
      }
      if (uVar9 == uVar10 * uVar2) break;
      uVar2 = uVar7 + 0xd0;
      uVar10 = 0;
      if (uVar2 != 0) {
        uVar10 = uVar9 / uVar2;
      }
      if (uVar10 < uVar7 + 0xd0) {
        return uVar9;
      }
      uVar7 = uVar7 + 0xd2;
    } while (uVar9 != uVar10 * uVar2);
LAB_017ede54:
    if (lVar8 == 0x2f) {
      uVar6 = uVar6 + 1;
    }
    lVar3 = 0;
    if (lVar8 != 0x2f) {
      lVar3 = lVar8 + 1;
    }
  } while( true );
}

