
void FUN_00107dd0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined1 auStack_370 [288];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  undefined1 local_1e1;
  undefined1 auStack_1e0 [392];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (0x180 < param_3) goto LAB_00108070;
  thunk_EXT_FUN_00002bb0(&local_1f8,0,0x1a0);
  thunk_EXT_FUN_00002bb0(auStack_370);
  local_1e8 = (undefined1)(param_3 >> 0x18);
  local_1e7 = (undefined1)(param_3 >> 0x10);
  local_1e6 = (undefined1)(param_3 >> 8);
  local_1e5 = (undefined1)param_3;
  local_1e1 = 0x30;
  thunk_EXT_FUN_00002bb0(auStack_1e0,param_2,param_3);
  auStack_1e0[param_3] = 0x80;
  uStack_248 = 0xf0e0d0c0b0a0908;
  local_250 = 0x706050403020100;
  uStack_238 = 0x1f1e1d1c1b1a1918;
  uStack_240 = 0x1716151413121110;
  param_3 = param_3 + 0x19;
  thunk_EXT_FUN_00002bb0(auStack_370,&local_250,0x100);
  if (param_3 == 0) {
    local_380 = 0;
    uStack_378 = 0;
    local_1f8._3_1_ = local_1f8._3_1_ + '\x01';
    uStack_228 = 0;
    local_230 = 0;
LAB_00107f68:
    uStack_218 = uStack_378;
    local_220 = local_380;
    local_380 = 0;
    uStack_378 = 0;
    local_1f8._3_1_ = local_1f8._3_1_ + '\x01';
    if (param_3 != 0) {
      local_380 = 0;
      uStack_378 = 0;
      puVar4 = &local_1f8;
      while( true ) {
        uVar7 = puVar4[1];
        uVar6 = *puVar4;
        uVar5 = param_3;
        if (0xf < param_3) {
          uVar5 = 0x10;
        }
        local_380 = CONCAT17((byte)((ulong)local_380 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                             CONCAT16((byte)((ulong)local_380 >> 0x30) ^
                                      (byte)((ulong)uVar6 >> 0x30),
                                      CONCAT15((byte)((ulong)local_380 >> 0x28) ^
                                               (byte)((ulong)uVar6 >> 0x28),
                                               CONCAT14((byte)((ulong)local_380 >> 0x20) ^
                                                        (byte)((ulong)uVar6 >> 0x20),
                                                        CONCAT13((byte)((ulong)local_380 >> 0x18) ^
                                                                 (byte)((ulong)uVar6 >> 0x18),
                                                                 CONCAT12((byte)((ulong)local_380 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar6 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  local_380 >> 8) ^ (byte)((ulong)uVar6 >> 8),
                                                  (byte)local_380 ^ (byte)uVar6)))))));
        uStack_378 = CONCAT17((byte)((ulong)uStack_378 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                              CONCAT16((byte)((ulong)uStack_378 >> 0x30) ^
                                       (byte)((ulong)uVar7 >> 0x30),
                                       CONCAT15((byte)((ulong)uStack_378 >> 0x28) ^
                                                (byte)((ulong)uVar7 >> 0x28),
                                                CONCAT14((byte)((ulong)uStack_378 >> 0x20) ^
                                                         (byte)((ulong)uVar7 >> 0x20),
                                                         CONCAT13((byte)((ulong)uStack_378 >> 0x18)
                                                                  ^ (byte)((ulong)uVar7 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uStack_378
                                                                                 >> 0x10) ^
                                                                           (byte)((ulong)uVar7 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uStack_378 >> 8) ^ (byte)((ulong)uVar7 >> 8),
                                                  (byte)uStack_378 ^ (byte)uVar7)))))));
        param_3 = param_3 - uVar5;
        thunk_EXT_FUN_00002bb0(auStack_370,1,&local_380,&local_380);
        if (param_3 == 0) break;
        puVar4 = puVar4 + 2;
      }
    }
  }
  else {
    local_380 = 0;
    uStack_378 = 0;
    puVar4 = &local_1f8;
    uVar5 = param_3;
    while( true ) {
      uVar7 = puVar4[1];
      uVar6 = *puVar4;
      uVar1 = uVar5;
      if (0xf < uVar5) {
        uVar1 = 0x10;
      }
      local_380 = CONCAT17((byte)((ulong)local_380 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                           CONCAT16((byte)((ulong)local_380 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                    CONCAT15((byte)((ulong)local_380 >> 0x28) ^
                                             (byte)((ulong)uVar6 >> 0x28),
                                             CONCAT14((byte)((ulong)local_380 >> 0x20) ^
                                                      (byte)((ulong)uVar6 >> 0x20),
                                                      CONCAT13((byte)((ulong)local_380 >> 0x18) ^
                                                               (byte)((ulong)uVar6 >> 0x18),
                                                               CONCAT12((byte)((ulong)local_380 >>
                                                                              0x10) ^
                                                                        (byte)((ulong)uVar6 >> 0x10)
                                                                        ,CONCAT11((byte)((ulong)
                                                  local_380 >> 8) ^ (byte)((ulong)uVar6 >> 8),
                                                  (byte)local_380 ^ (byte)uVar6)))))));
      uStack_378 = CONCAT17((byte)((ulong)uStack_378 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                            CONCAT16((byte)((ulong)uStack_378 >> 0x30) ^
                                     (byte)((ulong)uVar7 >> 0x30),
                                     CONCAT15((byte)((ulong)uStack_378 >> 0x28) ^
                                              (byte)((ulong)uVar7 >> 0x28),
                                              CONCAT14((byte)((ulong)uStack_378 >> 0x20) ^
                                                       (byte)((ulong)uVar7 >> 0x20),
                                                       CONCAT13((byte)((ulong)uStack_378 >> 0x18) ^
                                                                (byte)((ulong)uVar7 >> 0x18),
                                                                CONCAT12((byte)((ulong)uStack_378 >>
                                                                               0x10) ^
                                                                         (byte)((ulong)uVar7 >> 0x10
                                                                               ),CONCAT11((byte)((
                                                  ulong)uStack_378 >> 8) ^ (byte)((ulong)uVar7 >> 8)
                                                  ,(byte)uStack_378 ^ (byte)uVar7)))))));
      uVar5 = uVar5 - uVar1;
      thunk_EXT_FUN_00002bb0(auStack_370,1,&local_380,&local_380);
      cVar3 = local_1f8._3_1_;
      if (uVar5 == 0) break;
      puVar4 = puVar4 + 2;
    }
    uStack_228 = uStack_378;
    local_230 = local_380;
    local_1f8._3_1_ = local_1f8._3_1_ + '\x01';
    if (param_3 != 0) {
      local_380 = 0;
      uStack_378 = 0;
      puVar4 = &local_1f8;
      uVar5 = param_3;
      while( true ) {
        uVar7 = puVar4[1];
        uVar6 = *puVar4;
        uVar1 = uVar5;
        if (0xf < uVar5) {
          uVar1 = 0x10;
        }
        local_380 = CONCAT17((byte)((ulong)local_380 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                             CONCAT16((byte)((ulong)local_380 >> 0x30) ^
                                      (byte)((ulong)uVar6 >> 0x30),
                                      CONCAT15((byte)((ulong)local_380 >> 0x28) ^
                                               (byte)((ulong)uVar6 >> 0x28),
                                               CONCAT14((byte)((ulong)local_380 >> 0x20) ^
                                                        (byte)((ulong)uVar6 >> 0x20),
                                                        CONCAT13((byte)((ulong)local_380 >> 0x18) ^
                                                                 (byte)((ulong)uVar6 >> 0x18),
                                                                 CONCAT12((byte)((ulong)local_380 >>
                                                                                0x10) ^
                                                                          (byte)((ulong)uVar6 >>
                                                                                0x10),
                                                                          CONCAT11((byte)((ulong)
                                                  local_380 >> 8) ^ (byte)((ulong)uVar6 >> 8),
                                                  (byte)local_380 ^ (byte)uVar6)))))));
        uStack_378 = CONCAT17((byte)((ulong)uStack_378 >> 0x38) ^ (byte)((ulong)uVar7 >> 0x38),
                              CONCAT16((byte)((ulong)uStack_378 >> 0x30) ^
                                       (byte)((ulong)uVar7 >> 0x30),
                                       CONCAT15((byte)((ulong)uStack_378 >> 0x28) ^
                                                (byte)((ulong)uVar7 >> 0x28),
                                                CONCAT14((byte)((ulong)uStack_378 >> 0x20) ^
                                                         (byte)((ulong)uVar7 >> 0x20),
                                                         CONCAT13((byte)((ulong)uStack_378 >> 0x18)
                                                                  ^ (byte)((ulong)uVar7 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uStack_378
                                                                                 >> 0x10) ^
                                                                           (byte)((ulong)uVar7 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uStack_378 >> 8) ^ (byte)((ulong)uVar7 >> 8),
                                                  (byte)uStack_378 ^ (byte)uVar7)))))));
        uVar5 = uVar5 - uVar1;
        thunk_EXT_FUN_00002bb0(auStack_370,1,&local_380,&local_380);
        if (uVar5 == 0) break;
        puVar4 = puVar4 + 2;
      }
      goto LAB_00107f68;
    }
    local_380 = 0;
    uStack_378 = 0;
    local_1f8._3_1_ = cVar3 + '\x02';
    uStack_218 = 0;
    local_220 = 0;
  }
  local_1f8._3_1_ = local_1f8._3_1_ + '\x01';
  uStack_208 = uStack_378;
  local_210 = local_380;
  thunk_EXT_FUN_00002bb0(auStack_370,&local_230,0x100);
  thunk_EXT_FUN_00002bb0(auStack_370,1,&local_210,&local_210);
  param_1[1] = uStack_208;
  *param_1 = local_210;
  thunk_EXT_FUN_00002bb0(auStack_370,1,&local_210,&local_210);
  param_1[3] = uStack_208;
  param_1[2] = local_210;
  thunk_EXT_FUN_00002bb0(auStack_370,1,&local_210,&local_210);
  param_1[5] = uStack_208;
  param_1[4] = local_210;
  thunk_EXT_FUN_00002bb0(auStack_370);
LAB_00108070:
  if (*(long *)(lVar2 + 0x28) != local_58) {
    thunk_EXT_FUN_00002bb0();
    return;
  }
  return;
}

