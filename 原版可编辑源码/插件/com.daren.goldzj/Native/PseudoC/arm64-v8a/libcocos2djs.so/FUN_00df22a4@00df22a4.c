
void FUN_00df22a4(undefined4 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = NEON_shl(*(undefined8 *)((long)param_1 + -0x21),0x20);
  uVar2 = CONCAT17((char)((ulong)uVar1 >> 0x38),
                   CONCAT16((char)((ulong)uVar1 >> 0x30),
                            CONCAT15((char)((ulong)uVar1 >> 0x28),
                                     CONCAT14((char)((ulong)uVar1 >> 0x20),
                                              CONCAT13(*(byte *)((long)param_1 + -1) |
                                                       (byte)((ulong)uVar1 >> 0x18),
                                                       CONCAT12(*(byte *)((long)param_1 + 0x1f) |
                                                                (byte)((ulong)uVar1 >> 0x10),
                                                                CONCAT11(*(byte *)((long)param_1 +
                                                                                  0x3f) |
                                                                         (byte)((ulong)uVar1 >> 8),
                                                                         *(byte *)((long)param_1 +
                                                                                  0x5f) |
                                                                         (byte)uVar1)))))));
  uVar1 = NEON_uhadd((ulong)CONCAT16((char)((ulong)*(undefined8 *)((long)param_1 + -0x21) >> 0x20),
                                     (int6)(uVar2 >> 0x10)),uVar2,1);
  uVar1 = NEON_urhadd(uVar1,uVar2 >> 8,1);
  *param_1 = (int)((ulong)uVar1 >> 0x18);
  param_1[8] = (int)((ulong)uVar1 >> 0x10);
  param_1[0x10] = (int)((ulong)uVar1 >> 8);
  param_1[0x18] = (int)uVar1;
  return;
}

