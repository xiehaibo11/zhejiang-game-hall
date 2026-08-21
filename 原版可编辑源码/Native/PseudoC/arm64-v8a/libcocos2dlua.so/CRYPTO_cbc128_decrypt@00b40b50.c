
void CRYPTO_cbc128_decrypt
               (ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,ulong *param_5,
               code *param_6)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_70;
  ulong local_68;
  
  if (param_1 == param_2) {
    uVar6 = param_3 - 0x10;
    param_2 = param_1;
    if (0xf < param_3) {
      uVar14 = uVar6 & 0xfffffffffffffff0;
      param_2 = (ulong *)((long)param_1 + uVar14 + 0x10);
      do {
        (*param_6)(param_1,&local_70,param_4);
        uVar8 = *param_1;
        param_3 = param_3 - 0x10;
        *param_1 = *param_5 ^ local_70;
        *param_5 = uVar8;
        uVar8 = param_1[1];
        param_1[1] = param_5[1] ^ local_68;
        param_1 = param_1 + 2;
        param_5[1] = uVar8;
      } while (0xf < param_3);
      param_3 = uVar6 - uVar14;
      param_1 = param_2;
    }
  }
  else {
    uVar6 = param_3 - 0x10;
    puVar5 = param_5;
    if (0xf < param_3) {
      uVar14 = uVar6 & 0xfffffffffffffff0;
      puVar3 = param_1;
      puVar5 = param_2;
      puVar13 = param_5;
      do {
        puVar12 = puVar3;
        (*param_6)(puVar12,puVar5,param_4);
        param_3 = param_3 - 0x10;
        *puVar5 = *puVar5 ^ *puVar13;
        puVar5[1] = puVar5[1] ^ puVar13[1];
        puVar5 = puVar5 + 2;
        puVar3 = puVar12 + 2;
        puVar13 = puVar12;
      } while (0xf < param_3);
      param_3 = uVar6 - uVar14;
      param_2 = (ulong *)((long)param_2 + uVar14 + 0x10);
      puVar5 = (ulong *)((long)param_1 + uVar14);
      param_1 = (ulong *)((long)param_1 + uVar14 + 0x10);
    }
    uVar6 = *puVar5;
    param_5[1] = puVar5[1];
    *param_5 = uVar6;
  }
  do {
    if (param_3 == 0) {
      return;
    }
    (*param_6)(param_1,&local_70,param_4);
    uVar14 = 0x10;
    uVar6 = 0;
    do {
      uVar8 = uVar6;
      uVar1 = *(undefined1 *)((long)param_1 + uVar8);
      uVar14 = uVar14 - 1;
      *(byte *)((long)param_2 + uVar8) =
           *(byte *)((long)param_5 + uVar8) ^ *(byte *)((long)&local_70 + uVar8);
      *(undefined1 *)((long)param_5 + uVar8) = uVar1;
      uVar6 = uVar8 + 1;
      if (0xf < uVar6) break;
    } while (uVar6 < param_3);
    bVar4 = param_3 < 0x10;
    param_3 = param_3 - 0x10;
    if (bVar4 || param_3 == 0) {
      if (0xf < uVar6) {
        return;
      }
      uVar9 = 0x10 - uVar6;
      uVar7 = uVar6;
      if (((0x1f < uVar9) && ((uVar9 & 0xffffffffffffffe0) != 0)) &&
         ((param_1 + 2 <= (ulong *)((long)param_5 + uVar6) ||
          (param_5 + 2 <= (ulong *)((long)param_1 + uVar6))))) {
        uVar7 = (uVar14 & 0xffffffffffffffe0) + uVar6;
        puVar10 = (undefined8 *)((long)param_1 + uVar8 + 0x11);
        puVar11 = (undefined8 *)((long)param_5 + uVar8 + 0x11);
        uVar6 = 0x10 - uVar6 & 0xffffffffffffffe0;
        do {
          puVar2 = puVar10 + -1;
          uVar15 = puVar10[-2];
          uVar17 = puVar10[1];
          uVar16 = *puVar10;
          uVar6 = uVar6 - 0x20;
          puVar10 = puVar10 + 4;
          puVar11[-1] = *puVar2;
          puVar11[-2] = uVar15;
          puVar11[1] = uVar17;
          *puVar11 = uVar16;
          puVar11 = puVar11 + 4;
        } while (uVar6 != 0);
        if (uVar9 == (uVar9 & 0xffffffffffffffe0)) {
          return;
        }
      }
      do {
        *(undefined1 *)((long)param_5 + uVar7) = *(undefined1 *)((long)param_1 + uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x10);
      return;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  } while( true );
}

