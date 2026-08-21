
void FUN_001080a0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar2 = param_1 + 5;
  lVar4 = 0xf;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  do {
    if (lVar4 + 1 < 1) break;
    cVar1 = *(char *)((long)param_1 + lVar4) + '\x01';
    *(char *)((long)param_1 + lVar4) = cVar1;
    lVar4 = lVar4 + -1;
  } while (cVar1 == '\0');
  thunk_EXT_FUN_00002bb0(puVar2,1,param_1,&local_80);
  lVar4 = 0xf;
  do {
    if (lVar4 + 1 < 1) break;
    cVar1 = *(char *)((long)param_1 + lVar4) + '\x01';
    *(char *)((long)param_1 + lVar4) = cVar1;
    lVar4 = lVar4 + -1;
  } while (cVar1 == '\0');
  thunk_EXT_FUN_00002bb0(puVar2,1,param_1,&local_70);
  lVar4 = 0xf;
  do {
    if (lVar4 + 1 < 1) break;
    cVar1 = *(char *)((long)param_1 + lVar4) + '\x01';
    *(char *)((long)param_1 + lVar4) = cVar1;
    lVar4 = lVar4 + -1;
  } while (cVar1 == '\0');
  thunk_EXT_FUN_00002bb0(puVar2,1,param_1,&local_60);
  uVar6 = param_2[1];
  uVar5 = *param_2;
  local_80 = CONCAT17((byte)((ulong)local_80 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                      CONCAT16((byte)((ulong)local_80 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                               CONCAT15((byte)((ulong)local_80 >> 0x28) ^
                                        (byte)((ulong)uVar5 >> 0x28),
                                        CONCAT14((byte)((ulong)local_80 >> 0x20) ^
                                                 (byte)((ulong)uVar5 >> 0x20),
                                                 CONCAT13((byte)((ulong)local_80 >> 0x18) ^
                                                          (byte)((ulong)uVar5 >> 0x18),
                                                          CONCAT12((byte)((ulong)local_80 >> 0x10) ^
                                                                   (byte)((ulong)uVar5 >> 0x10),
                                                                   CONCAT11((byte)((ulong)local_80
                                                                                  >> 8) ^
                                                                            (byte)((ulong)uVar5 >> 8
                                                                                  ),(byte)local_80 ^
                                                                                    (byte)uVar5)))))
                              ));
  uStack_78 = CONCAT17((byte)((ulong)uStack_78 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                       CONCAT16((byte)((ulong)uStack_78 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                CONCAT15((byte)((ulong)uStack_78 >> 0x28) ^
                                         (byte)((ulong)uVar6 >> 0x28),
                                         CONCAT14((byte)((ulong)uStack_78 >> 0x20) ^
                                                  (byte)((ulong)uVar6 >> 0x20),
                                                  CONCAT13((byte)((ulong)uStack_78 >> 0x18) ^
                                                           (byte)((ulong)uVar6 >> 0x18),
                                                           CONCAT12((byte)((ulong)uStack_78 >> 0x10)
                                                                    ^ (byte)((ulong)uVar6 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uStack_78
                                                                                   >> 8) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   8),(byte)
                                                  uStack_78 ^ (byte)uVar6)))))));
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  local_70 = CONCAT17((byte)((ulong)local_70 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                      CONCAT16((byte)((ulong)local_70 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                               CONCAT15((byte)((ulong)local_70 >> 0x28) ^
                                        (byte)((ulong)uVar5 >> 0x28),
                                        CONCAT14((byte)((ulong)local_70 >> 0x20) ^
                                                 (byte)((ulong)uVar5 >> 0x20),
                                                 CONCAT13((byte)((ulong)local_70 >> 0x18) ^
                                                          (byte)((ulong)uVar5 >> 0x18),
                                                          CONCAT12((byte)((ulong)local_70 >> 0x10) ^
                                                                   (byte)((ulong)uVar5 >> 0x10),
                                                                   CONCAT11((byte)((ulong)local_70
                                                                                  >> 8) ^
                                                                            (byte)((ulong)uVar5 >> 8
                                                                                  ),(byte)local_70 ^
                                                                                    (byte)uVar5)))))
                              ));
  uStack_68 = CONCAT17((byte)((ulong)uStack_68 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                       CONCAT16((byte)((ulong)uStack_68 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                CONCAT15((byte)((ulong)uStack_68 >> 0x28) ^
                                         (byte)((ulong)uVar6 >> 0x28),
                                         CONCAT14((byte)((ulong)uStack_68 >> 0x20) ^
                                                  (byte)((ulong)uVar6 >> 0x20),
                                                  CONCAT13((byte)((ulong)uStack_68 >> 0x18) ^
                                                           (byte)((ulong)uVar6 >> 0x18),
                                                           CONCAT12((byte)((ulong)uStack_68 >> 0x10)
                                                                    ^ (byte)((ulong)uVar6 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uStack_68
                                                                                   >> 8) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   8),(byte)
                                                  uStack_68 ^ (byte)uVar6)))))));
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  local_60 = CONCAT17((byte)((ulong)local_60 >> 0x38) ^ (byte)((ulong)uVar5 >> 0x38),
                      CONCAT16((byte)((ulong)local_60 >> 0x30) ^ (byte)((ulong)uVar5 >> 0x30),
                               CONCAT15((byte)((ulong)local_60 >> 0x28) ^
                                        (byte)((ulong)uVar5 >> 0x28),
                                        CONCAT14((byte)((ulong)local_60 >> 0x20) ^
                                                 (byte)((ulong)uVar5 >> 0x20),
                                                 CONCAT13((byte)((ulong)local_60 >> 0x18) ^
                                                          (byte)((ulong)uVar5 >> 0x18),
                                                          CONCAT12((byte)((ulong)local_60 >> 0x10) ^
                                                                   (byte)((ulong)uVar5 >> 0x10),
                                                                   CONCAT11((byte)((ulong)local_60
                                                                                  >> 8) ^
                                                                            (byte)((ulong)uVar5 >> 8
                                                                                  ),(byte)local_60 ^
                                                                                    (byte)uVar5)))))
                              ));
  uStack_58 = CONCAT17((byte)((ulong)uStack_58 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                       CONCAT16((byte)((ulong)uStack_58 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                CONCAT15((byte)((ulong)uStack_58 >> 0x28) ^
                                         (byte)((ulong)uVar6 >> 0x28),
                                         CONCAT14((byte)((ulong)uStack_58 >> 0x20) ^
                                                  (byte)((ulong)uVar6 >> 0x20),
                                                  CONCAT13((byte)((ulong)uStack_58 >> 0x18) ^
                                                           (byte)((ulong)uVar6 >> 0x18),
                                                           CONCAT12((byte)((ulong)uStack_58 >> 0x10)
                                                                    ^ (byte)((ulong)uVar6 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uStack_58
                                                                                   >> 8) ^
                                                                             (byte)((ulong)uVar6 >>
                                                                                   8),(byte)
                                                  uStack_58 ^ (byte)uVar6)))))));
  thunk_EXT_FUN_00002bb0(puVar2,&local_80,0x100);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
  thunk_EXT_FUN_00002bb0();
  return;
}

