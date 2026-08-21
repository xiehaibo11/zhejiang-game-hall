
void memcpy_to_u8_from_i16(byte *param_1,byte *param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_3 != 0) {
    if ((0xf < param_3) && ((param_2 + param_3 * 2 <= param_1 || (param_1 + param_3 <= param_2)))) {
      uVar2 = param_3 & 0xfffffffffffffff0;
      puVar3 = (ulong *)(param_1 + 8);
      pbVar4 = param_2 + 0x10;
      param_2 = param_2 + uVar2 * 2;
      param_1 = param_1 + uVar2;
      uVar5 = uVar2;
      do {
        uVar7 = *(undefined8 *)(pbVar4 + -8);
        uVar6 = *(undefined8 *)(pbVar4 + -0x10);
        uVar9 = *(undefined8 *)(pbVar4 + 8);
        uVar8 = *(undefined8 *)pbVar4;
        uVar5 = uVar5 - 0x10;
        pbVar4 = pbVar4 + 0x20;
        puVar3[-1] = CONCAT17((char)((ulong)uVar7 >> 0x38),
                              CONCAT16((char)((ulong)uVar7 >> 0x28),
                                       CONCAT15((char)((ulong)uVar7 >> 0x18),
                                                CONCAT14((char)((ulong)uVar7 >> 8),
                                                         CONCAT13((char)((ulong)uVar6 >> 0x38),
                                                                  CONCAT12((char)((ulong)uVar6 >>
                                                                                 0x28),
                                                                           CONCAT11((char)((ulong)
                                                  uVar6 >> 0x18),(char)((ulong)uVar6 >> 8)))))))) ^
                     0x8080808080808080;
        *puVar3 = CONCAT17((char)((ulong)uVar9 >> 0x38),
                           CONCAT16((char)((ulong)uVar9 >> 0x28),
                                    CONCAT15((char)((ulong)uVar9 >> 0x18),
                                             CONCAT14((char)((ulong)uVar9 >> 8),
                                                      CONCAT13((char)((ulong)uVar8 >> 0x38),
                                                               CONCAT12((char)((ulong)uVar8 >> 0x28)
                                                                        ,CONCAT11((char)((ulong)
                                                  uVar8 >> 0x18),(char)((ulong)uVar8 >> 8)))))))) ^
                  0x8080808080808080;
        puVar3 = puVar3 + 2;
      } while (uVar5 != 0);
      bVar1 = uVar2 == param_3;
      param_3 = param_3 - uVar2;
      if (bVar1) {
        return;
      }
    }
    do {
      pbVar4 = param_2 + 1;
      param_3 = param_3 - 1;
      param_2 = param_2 + 2;
      *param_1 = *pbVar4 ^ 0x80;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
  }
  return;
}

