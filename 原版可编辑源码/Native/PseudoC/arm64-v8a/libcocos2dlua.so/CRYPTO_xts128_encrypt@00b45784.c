
undefined8
CRYPTO_xts128_encrypt
          (undefined8 *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5,
          int param_6)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x9;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 uStack_58;
  
  if (param_5 < 0x10) {
    uVar3 = 0xffffffff;
  }
  else {
    uStack_58 = param_2[1];
    local_60 = *param_2;
    (*(code *)param_1[3])(&local_60,&local_60,param_1[1]);
    uVar4 = extraout_x8;
    uVar5 = extraout_x9;
    uVar6 = local_70;
    uVar7 = uStack_68;
    if ((param_5 & 0xf) != 0 && param_6 == 0) {
      param_5 = param_5 - 0x10;
      uVar4 = extraout_x8;
      uVar5 = extraout_x9;
    }
    while (uStack_68 = uVar5, local_70 = uVar4, 0xf < param_5) {
      local_70 = local_60 ^ *param_3;
      uStack_68 = uStack_58 ^ param_3[1];
      (*(code *)param_1[2])(&local_70,&local_70,*param_1);
      local_70 = local_70 ^ local_60;
      *param_4 = local_70;
      uStack_68 = uStack_68 ^ uStack_58;
      param_4[1] = uStack_68;
      if (param_5 - 0x10 == 0) {
        return 0;
      }
      param_4 = param_4 + 2;
      param_3 = param_3 + 2;
      uVar6 = local_60 >> 0x3f;
      local_60 = (ulong)(uStack_58._4_4_ >> 0x1f & 0x87) ^ local_60 << 1;
      uStack_58 = uVar6 | uStack_58 << 1;
      param_5 = param_5 - 0x10;
      uVar4 = local_70;
      uVar5 = uStack_68;
      uVar6 = local_70;
      uVar7 = uStack_68;
    }
    if (param_6 == 0) {
      uVar6 = (ulong)((uint)((long)uStack_58 >> 0x3f) & 0x87) ^ local_60 << 1;
      local_70 = uVar6 ^ *param_3;
      uVar7 = local_60 >> 0x3f | uStack_58 << 1;
      uStack_68 = param_3[1] ^ uVar7;
      (*(code *)param_1[2])(&local_70,&local_70,*param_1);
      local_70 = local_70 ^ uVar6;
      uStack_68 = uStack_68 ^ uVar7;
      if (param_5 != 0) {
        uVar6 = 0;
        uVar7 = 0x10;
        do {
          uVar2 = *(undefined1 *)((long)param_3 + uVar7);
          *(undefined1 *)((long)param_4 + uVar7) = *(undefined1 *)((long)&local_70 + uVar6);
          *(undefined1 *)((long)&local_70 + uVar6) = uVar2;
          uVar6 = (ulong)((int)uVar7 - 0xf);
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (uVar6 < param_5);
      }
      local_70 = local_70 ^ local_60;
      uStack_68 = uStack_68 ^ uStack_58;
      (*(code *)param_1[2])(&local_70,&local_70,*param_1);
      uVar3 = 0;
      param_4[1] = CONCAT17((byte)(uStack_58 >> 0x38) ^ (byte)(uStack_68 >> 0x38),
                            CONCAT16((byte)(uStack_58 >> 0x30) ^ (byte)(uStack_68 >> 0x30),
                                     CONCAT15((byte)(uStack_58 >> 0x28) ^ (byte)(uStack_68 >> 0x28),
                                              CONCAT14((byte)(uStack_58 >> 0x20) ^
                                                       (byte)(uStack_68 >> 0x20),
                                                       CONCAT13((byte)(uStack_58 >> 0x18) ^
                                                                (byte)(uStack_68 >> 0x18),
                                                                CONCAT12((byte)(uStack_58 >> 0x10) ^
                                                                         (byte)(uStack_68 >> 0x10),
                                                                         CONCAT11((byte)(uStack_58
                                                                                        >> 8) ^
                                                                                  (byte)(uStack_68
                                                                                        >> 8),
                                                                                  (byte)uStack_58 ^
                                                                                  (byte)uStack_68)))
                                                      ))));
      *param_4 = CONCAT17((byte)(local_60 >> 0x38) ^ (byte)(local_70 >> 0x38),
                          CONCAT16((byte)(local_60 >> 0x30) ^ (byte)(local_70 >> 0x30),
                                   CONCAT15((byte)(local_60 >> 0x28) ^ (byte)(local_70 >> 0x28),
                                            CONCAT14((byte)(local_60 >> 0x20) ^
                                                     (byte)(local_70 >> 0x20),
                                                     CONCAT13((byte)(local_60 >> 0x18) ^
                                                              (byte)(local_70 >> 0x18),
                                                              CONCAT12((byte)(local_60 >> 0x10) ^
                                                                       (byte)(local_70 >> 0x10),
                                                                       CONCAT11((byte)(local_60 >> 8
                                                                                      ) ^ (byte)(
                                                  local_70 >> 8),(byte)local_60 ^ (byte)local_70))))
                                           )));
    }
    else {
      if (param_5 != 0) {
        uVar4 = 0;
        uVar5 = 1;
        local_70 = uVar6;
        uStack_68 = uVar7;
        do {
          uVar2 = *(undefined1 *)((long)param_3 + uVar4);
          *(undefined1 *)((long)param_4 + uVar4) = *(undefined1 *)((long)&local_70 + uVar4);
          *(undefined1 *)((long)&local_70 + uVar4) = uVar2;
          bVar1 = uVar5 < param_5;
          uVar4 = uVar5;
          uVar5 = (ulong)((int)uVar5 + 1);
        } while (bVar1);
      }
      local_70 = local_70 ^ local_60;
      uStack_68 = uStack_68 ^ uStack_58;
      (*(code *)param_1[2])(&local_70,&local_70,*param_1);
      uVar3 = 0;
      param_4[-1] = uStack_68 ^ uStack_58;
      param_4[-2] = local_70 ^ local_60;
    }
  }
  return uVar3;
}

