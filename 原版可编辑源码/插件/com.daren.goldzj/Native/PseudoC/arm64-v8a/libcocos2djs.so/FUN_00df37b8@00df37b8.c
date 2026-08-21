
void FUN_00df37b8(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  ulong uVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined7 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  byte bVar14;
  
  if (0 < param_2) {
    puVar1 = param_1 + param_2;
    puVar3 = puVar1;
    if (puVar1 <= param_1 + 1) {
      puVar3 = param_1 + 1;
    }
    uVar2 = ((long)puVar3 + ~(ulong)param_1 >> 2) + 1;
    if ((3 < uVar2) && (uVar6 = uVar2 & 0x7ffffffffffffffc, uVar6 != 0)) {
      puVar3 = puVar1;
      if (puVar1 <= param_1 + 1) {
        puVar3 = param_1 + 1;
      }
      uVar5 = (long)puVar3 + ~(ulong)param_1 >> 2;
      if ((param_1 + uVar5 + 1 <= param_3) || ((uint *)((long)param_3 + uVar5 * 2 + 2) <= param_1))
      {
        puVar3 = param_1;
        puVar4 = param_3;
        uVar5 = uVar6;
        do {
          uVar12 = *(undefined8 *)(puVar3 + 2);
          uVar9 = *(undefined8 *)puVar3;
          uVar5 = uVar5 - 4;
          uVar7 = (uint)uVar9;
          uVar10 = (uint)((ulong)uVar9 >> 0x20);
          uVar11 = (uint)uVar12;
          uVar13 = (uint)((ulong)uVar12 >> 0x20);
          bVar14 = (byte)((ulong)uVar12 >> 0x30) & 0xf8 | (byte)(uVar13 >> 0xd) & 7;
          uVar8 = CONCAT16(bVar14,(uint6)CONCAT14((byte)((ulong)uVar12 >> 0x10) & 0xf8 |
                                                  (byte)(uVar11 >> 0xd) & 7,
                                                  (uint)((byte)((ulong)uVar9 >> 0x30) & 0xf8 |
                                                        (byte)(uVar10 >> 0xd) & 7) << 0x10));
          *(ulong *)puVar4 =
               CONCAT17((byte)(uVar13 >> 5) & 0xe0 | (byte)(uVar13 >> 3) & 0x1f,
                        CONCAT16(bVar14,CONCAT15((byte)(uVar11 >> 5) & 0xe0 |
                                                 (byte)(uVar11 >> 3) & 0x1f,
                                                 (int5)CONCAT34((int3)((uint7)uVar8 >> 0x20),
                                                                CONCAT13((byte)(uVar10 >> 5) & 0xe0
                                                                         | (byte)(uVar10 >> 3) &
                                                                           0x1f,(int3)CONCAT52((int5
                                                  )((uint7)uVar8 >> 0x10),
                                                  CONCAT11((byte)(uVar7 >> 5) & 0xe0 |
                                                           (byte)(uVar7 >> 3) & 0x1f,
                                                           (byte)((ulong)uVar9 >> 0x10) & 0xf8 |
                                                           (byte)(uVar7 >> 0xd) & 7)))))));
          puVar3 = puVar3 + 4;
          puVar4 = puVar4 + 2;
        } while (uVar5 != 0);
        param_1 = param_1 + uVar6;
        param_3 = (uint *)((long)param_3 + uVar6 * 2);
        if (uVar2 == uVar6) {
          return;
        }
      }
    }
    do {
      puVar3 = param_1 + 1;
      uVar7 = *param_1;
      *(byte *)param_3 = (byte)(uVar7 >> 0x10) & 0xf8 | (byte)(uVar7 >> 0xd) & 7;
      *(byte *)((long)param_3 + 1) = (byte)(uVar7 >> 5) & 0xe0 | (byte)(uVar7 >> 3) & 0x1f;
      param_1 = puVar3;
      param_3 = (uint *)((long)param_3 + 2);
    } while (puVar3 < puVar1);
  }
  return;
}

