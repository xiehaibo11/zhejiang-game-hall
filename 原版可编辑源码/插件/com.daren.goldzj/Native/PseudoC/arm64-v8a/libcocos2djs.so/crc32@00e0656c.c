
uint crc32(uint param_1,long param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  
  if (param_2 == 0) {
    return 0;
  }
  param_1 = ~param_1;
  if (param_3 != 0) {
    lVar7 = 0;
    uVar5 = param_3 - 0x20;
    do {
      puVar1 = (uint *)(param_2 + lVar7);
      if (((ulong)puVar1 & 3) == 0) {
        uVar6 = (ulong)param_3 - lVar7;
        uVar4 = (uint)uVar6;
        if (0x1f < uVar4) {
          lVar9 = 0;
          do {
            param_1 = *(uint *)(param_2 + lVar7 + lVar9) ^ param_1;
            lVar2 = param_2 + lVar9 + lVar7;
            uVar3 = (int)uVar6 - 0x20;
            uVar6 = (ulong)uVar3;
            uVar4 = *(uint *)(&DAT_01972510 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972910 + (ulong)(param_1 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972110 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01971d10 + (ulong)(param_1 >> 0x18) * 4) ^ *(uint *)(lVar2 + 4);
            uVar4 = *(uint *)(&DAT_01972510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972910 + (ulong)(uVar4 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01971d10 + (ulong)(uVar4 >> 0x18) * 4) ^ *(uint *)(lVar2 + 8);
            uVar4 = *(uint *)(&DAT_01972510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972910 + (ulong)(uVar4 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01971d10 + (ulong)(uVar4 >> 0x18) * 4) ^ *(uint *)(lVar2 + 0xc);
            uVar4 = *(uint *)(&DAT_01972510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972910 + (ulong)(uVar4 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01971d10 + (ulong)(uVar4 >> 0x18) * 4) ^
                    *(uint *)(param_2 + lVar7 + lVar9 + 0x10);
            uVar4 = *(uint *)(&DAT_01972510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972910 + (ulong)(uVar4 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01971d10 + (ulong)(uVar4 >> 0x18) * 4) ^ *(uint *)(lVar2 + 0x14);
            uVar4 = *(uint *)(&DAT_01972510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972910 + (ulong)(uVar4 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01971d10 + (ulong)(uVar4 >> 0x18) * 4) ^ *(uint *)(lVar2 + 0x18);
            lVar9 = lVar9 + 0x20;
            uVar4 = *(uint *)(&DAT_01972510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972910 + (ulong)(uVar4 & 0xff) * 4) ^
                    *(uint *)(&DAT_01972110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_01971d10 + (ulong)(uVar4 >> 0x18) * 4) ^ *(uint *)(lVar2 + 0x1c);
            param_1 = *(uint *)(&DAT_01972510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_01972910 + (ulong)(uVar4 & 0xff) * 4) ^
                      *(uint *)(&DAT_01972110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_01971d10 + (ulong)(uVar4 >> 0x18) * 4);
          } while (0x1f < uVar3);
          puVar1 = (uint *)(param_2 + (ulong)(uVar5 & 0xffffffe0) + lVar7 + 0x20);
          uVar4 = (param_3 - 0x20) - (int)lVar7 & 0x1f;
          uVar6 = (ulong)uVar4;
        }
        if (uVar4 < 4) {
          uVar5 = (uint)uVar6;
        }
        else {
          puVar8 = puVar1;
          do {
            uVar5 = (int)uVar6 - 4;
            uVar6 = (ulong)uVar5;
            param_1 = *puVar8 ^ param_1;
            param_1 = *(uint *)(&DAT_01972510 + (ulong)(param_1 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_01972910 + (ulong)(param_1 & 0xff) * 4) ^
                      *(uint *)(&DAT_01972110 + (ulong)(param_1 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_01971d10 + (ulong)(param_1 >> 0x18) * 4);
            puVar8 = puVar8 + 1;
          } while (3 < uVar5);
          puVar1 = puVar1 + ((uVar4 - 4 >> 2) + 1);
          uVar5 = uVar4 - 4 & 3;
          uVar6 = (ulong)uVar5;
        }
        while (uVar5 != 0) {
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulong)uVar5;
          param_1 = *(uint *)(&DAT_01971d10 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar1) * 4) ^
                    param_1 >> 8;
          puVar1 = (uint *)((long)puVar1 + 1);
        }
        break;
      }
      lVar7 = lVar7 + 1;
      uVar5 = uVar5 - 1;
      param_1 = *(uint *)(&DAT_01971d10 + (ulong)(param_1 & 0xff ^ (uint)(byte)*puVar1) * 4) ^
                param_1 >> 8;
    } while (param_3 != (uint)lVar7);
  }
  return ~param_1;
}

