
int CRYPTO_gcm128_finish(long param_1,void *param_2,ulong param_3)

{
  int iVar1;
  ulong *a;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pcVar2 = *(code **)(param_1 + 0x160);
  uVar4 = *(long *)(param_1 + 0x30) << 3;
  uVar3 = *(long *)(param_1 + 0x38) << 3;
  if ((*(int *)(param_1 + 0x170) != 0) || (*(int *)(param_1 + 0x174) != 0)) {
    (*pcVar2)(param_1 + 0x40,param_1 + 0x60);
  }
  a = (ulong *)(param_1 + 0x40);
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
  uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
  *a = *a ^ (uVar4 >> 0x20 | uVar4 << 0x20);
  *(ulong *)(param_1 + 0x48) = *(ulong *)(param_1 + 0x48) ^ (uVar3 >> 0x20 | uVar3 << 0x20);
  (*pcVar2)(a,param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *a;
  *(ulong *)(param_1 + 0x48) =
       CONCAT17((byte)((ulong)uVar7 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                CONCAT16((byte)((ulong)uVar7 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                         CONCAT15((byte)((ulong)uVar7 >> 0x28) ^ (byte)((ulong)uVar6 >> 0x28),
                                  CONCAT14((byte)((ulong)uVar7 >> 0x20) ^
                                           (byte)((ulong)uVar6 >> 0x20),
                                           CONCAT13((byte)((ulong)uVar7 >> 0x18) ^
                                                    (byte)((ulong)uVar6 >> 0x18),
                                                    CONCAT12((byte)((ulong)uVar7 >> 0x10) ^
                                                             (byte)((ulong)uVar6 >> 0x10),
                                                             CONCAT11((byte)((ulong)uVar7 >> 8) ^
                                                                      (byte)((ulong)uVar6 >> 8),
                                                                      (byte)uVar7 ^ (byte)uVar6)))))
                        ));
  *a = CONCAT17((byte)(uVar3 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16((byte)(uVar3 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15((byte)(uVar3 >> 0x28) ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14((byte)(uVar3 >> 0x20) ^ (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13((byte)(uVar3 >> 0x18) ^
                                                    (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12((byte)(uVar3 >> 0x10) ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11((byte)(uVar3 >> 8) ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      (byte)uVar3 ^ (byte)uVar5)))))
                        ));
  if ((param_2 != (void *)0x0) && (param_3 < 0x11)) {
    iVar1 = CRYPTO_memcmp(a,param_2,param_3);
    return iVar1;
  }
  return -1;
}

