
void FUN_0114fb64(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined7 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte bVar11;
  
  if (0 < param_2) {
    puVar1 = param_1 + param_2;
    puVar4 = puVar1;
    if (puVar1 <= param_1 + 1) {
      puVar4 = param_1 + 1;
    }
    uVar2 = ((long)puVar4 + ~(ulong)param_1 >> 2) + 1;
    if ((3 < uVar2) && (uVar7 = uVar2 & 0x7ffffffffffffffc, uVar7 != 0)) {
      puVar4 = puVar1;
      if (puVar1 <= param_1 + 1) {
        puVar4 = param_1 + 1;
      }
      uVar6 = (long)puVar4 + ~(ulong)param_1 >> 2;
      if ((param_1 + uVar6 + 1 <= param_3) || ((uint *)((long)param_3 + uVar6 * 2 + 2) <= param_1))
      {
        puVar4 = param_1;
        puVar5 = param_3;
        uVar6 = uVar7;
        do {
          uVar10 = *(undefined8 *)(puVar4 + 2);
          uVar9 = *(undefined8 *)puVar4;
          uVar6 = uVar6 - 4;
          bVar11 = (byte)((ulong)uVar10 >> 0x30) & 0xf0 | (byte)(uint)((ulong)uVar10 >> 0x2c) & 0xf;
          uVar8 = CONCAT16(bVar11,(uint6)CONCAT14((byte)((ulong)uVar10 >> 0x10) & 0xf0 |
                                                  (byte)((uint)uVar10 >> 0xc) & 0xf,
                                                  (uint)((byte)((ulong)uVar9 >> 0x30) & 0xf0 |
                                                        (byte)(uint)((ulong)uVar9 >> 0x2c) & 0xf) <<
                                                  0x10));
          *(ulong *)puVar5 =
               CONCAT17((byte)((ulong)uVar10 >> 0x20) & 0xf0 | (byte)((ulong)uVar10 >> 0x3c),
                        CONCAT16(bVar11,CONCAT15((byte)uVar10 & 0xf0 |
                                                 (byte)((ulong)uVar10 >> 0x18) >> 4,
                                                 (int5)CONCAT34((int3)((uint7)uVar8 >> 0x20),
                                                                CONCAT13((byte)((ulong)uVar9 >> 0x20
                                                                               ) & 0xf0 |
                                                                         (byte)((ulong)uVar9 >> 0x3c
                                                                               ),(int3)CONCAT52((
                                                  int5)((uint7)uVar8 >> 0x10),
                                                  CONCAT11((byte)uVar9 & 0xf0 |
                                                           (byte)((ulong)uVar9 >> 0x18) >> 4,
                                                           (byte)((ulong)uVar9 >> 0x10) & 0xf0 |
                                                           (byte)((uint)uVar9 >> 0xc) & 0xf)))))));
          puVar4 = puVar4 + 4;
          puVar5 = puVar5 + 2;
        } while (uVar6 != 0);
        param_1 = param_1 + uVar7;
        param_3 = (uint *)((long)param_3 + uVar7 * 2);
        if (uVar2 == uVar7) {
          return;
        }
      }
    }
    do {
      puVar4 = param_1 + 1;
      uVar3 = *param_1;
      *(byte *)param_3 = (byte)(uVar3 >> 0x10) & 0xf0 | (byte)(uVar3 >> 0xc) & 0xf;
      *(byte *)((long)param_3 + 1) = (byte)uVar3 & 0xf0 | (byte)(uVar3 >> 0x1c);
      param_1 = puVar4;
      param_3 = (uint *)((long)param_3 + 2);
    } while (puVar4 < puVar1);
  }
  return;
}

