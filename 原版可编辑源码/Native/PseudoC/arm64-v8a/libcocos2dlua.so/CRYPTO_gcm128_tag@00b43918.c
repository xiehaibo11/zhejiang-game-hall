
void CRYPTO_gcm128_tag(long param_1,void *param_2,size_t param_3)

{
  ulong *__src;
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x160);
  uVar3 = *(long *)(param_1 + 0x30) << 3;
  uVar2 = *(long *)(param_1 + 0x38) << 3;
  if ((*(int *)(param_1 + 0x170) != 0) || (*(int *)(param_1 + 0x174) != 0)) {
    (*pcVar1)(param_1 + 0x40,param_1 + 0x60);
  }
  __src = (ulong *)(param_1 + 0x40);
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  *__src = *__src ^ (uVar3 >> 0x20 | uVar3 << 0x20);
  *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x48) ^ (uVar2 >> 0x20 | uVar2 << 0x20);
  (*pcVar1)(__src,param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *__src;
  if (0xf < param_3) {
    param_3 = 0x10;
  }
  *(ulong *)(param_1 + 0x48) =
       CONCAT17((byte)((ulong)uVar6 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)((ulong)uVar6 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)((ulong)uVar6 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar6 >> 0x20) ^
                                           (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar6 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar6 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar6 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar6 ^ (byte)uVar5)))))
                        ));
  *__src = CONCAT17((byte)(uVar2 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                    CONCAT16((byte)(uVar2 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                             CONCAT15((byte)(uVar2 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                      CONCAT14((byte)(uVar2 >> 0x20) ^ (byte)((ulong)uVar4 >> 0x20),
                                               CONCAT13((byte)(uVar2 >> 0x18) ^
                                                        (byte)((ulong)uVar4 >> 0x18),
                                                        CONCAT12((byte)(uVar2 >> 0x10) ^
                                                                 (byte)((ulong)uVar4 >> 0x10),
                                                                 CONCAT11((byte)(uVar2 >> 8) ^
                                                                          (byte)((ulong)uVar4 >> 8),
                                                                          (byte)uVar2 ^ (byte)uVar4)
                                                                ))))));
  memcpy(param_2,__src,param_3);
  return;
}

