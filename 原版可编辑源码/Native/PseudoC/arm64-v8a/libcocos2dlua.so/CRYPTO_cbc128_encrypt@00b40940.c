
void CRYPTO_cbc128_encrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               code *param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar15 = param_3 - 0x10;
  puVar9 = param_5;
  if (0xf < param_3) {
    uVar12 = uVar15 & 0xfffffffffffffff0;
    puVar9 = (ulong *)((long)param_2 + uVar12);
    puVar1 = (ulong *)((long)param_1 + uVar12 + 0x10);
    puVar4 = param_5;
    puVar10 = param_2;
    do {
      *puVar10 = *puVar4 ^ *param_1;
      puVar10[1] = puVar4[1] ^ param_1[1];
      (*param_6)(puVar10,puVar10,param_4);
      param_3 = param_3 - 0x10;
      param_1 = param_1 + 2;
      puVar4 = puVar10;
      puVar10 = puVar10 + 2;
    } while (0xf < param_3);
    param_3 = uVar15 - uVar12;
    param_2 = (ulong *)((long)param_2 + uVar12 + 0x10);
    param_1 = puVar1;
  }
  if (param_3 != 0) {
    lVar11 = 0;
    puVar13 = (undefined8 *)((long)param_2 + 0x11);
    puVar1 = param_2;
    puVar4 = puVar9;
    do {
      puVar9 = puVar1;
      uVar12 = 0x10;
      uVar15 = 0;
      puVar2 = (undefined8 *)((long)puVar4 + 0x11);
      puVar3 = puVar13;
      do {
        puVar7 = puVar3;
        puVar6 = puVar2;
        uVar5 = uVar15;
        uVar15 = uVar5 + 1;
        uVar12 = uVar12 - 1;
        *(byte *)((long)puVar9 + uVar5) =
             *(byte *)((long)puVar4 + uVar5) ^ *(byte *)((long)param_1 + uVar5);
        if (0xf < uVar15) break;
        puVar2 = (undefined8 *)((long)puVar6 + 1);
        puVar3 = (undefined8 *)((long)puVar7 + 1);
      } while (uVar15 < param_3);
      if (uVar15 < 0x10) {
        uVar8 = 0x10 - uVar15;
        if (((0x1f < uVar8) && ((uVar8 & 0xffffffffffffffe0) != 0)) &&
           ((puVar4 + 2 <= (ulong *)((long)puVar9 + uVar15) ||
            (param_2 + lVar11 * 2 + 2 <= (ulong *)((long)puVar4 + uVar15))))) {
          uVar15 = (uVar12 & 0xffffffffffffffe0) + uVar15;
          uVar12 = 0xf - uVar5 & 0xffffffffffffffe0;
          do {
            puVar2 = puVar6 + -1;
            uVar14 = puVar6[-2];
            uVar17 = puVar6[1];
            uVar16 = *puVar6;
            puVar6 = puVar6 + 4;
            uVar12 = uVar12 - 0x20;
            puVar7[-1] = *puVar2;
            puVar7[-2] = uVar14;
            puVar7[1] = uVar17;
            *puVar7 = uVar16;
            puVar7 = puVar7 + 4;
          } while (uVar12 != 0);
          if (uVar8 == (uVar8 & 0xffffffffffffffe0)) goto LAB_00b40adc;
        }
        do {
          *(undefined1 *)((long)puVar9 + uVar15) = *(undefined1 *)((long)puVar4 + uVar15);
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0x10);
      }
LAB_00b40adc:
      (*param_6)(puVar9,puVar9,param_4);
      if (param_3 < 0x11) break;
      param_3 = param_3 - 0x10;
      param_1 = param_1 + 2;
      lVar11 = lVar11 + 1;
      puVar13 = puVar13 + 2;
      puVar1 = puVar9 + 2;
      puVar4 = puVar9;
    } while (param_3 != 0);
  }
  uVar15 = *puVar9;
  param_5[1] = puVar9[1];
  *param_5 = uVar15;
  return;
}

