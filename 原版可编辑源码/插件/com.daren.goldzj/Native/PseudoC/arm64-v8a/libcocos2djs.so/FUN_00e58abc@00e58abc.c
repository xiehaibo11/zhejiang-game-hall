
ulong FUN_00e58abc(long param_1,long param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint local_34;
  
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = (**(code **)(param_1 + 0x340))(param_1,0x67617370,param_2,0);
  local_34 = (uint)uVar3;
  if (local_34 == 0) {
    uVar3 = FUN_00e1d718(param_2,4);
    local_34 = (uint)uVar3;
    if (local_34 == 0) {
      uVar2 = FUN_00e1d970(param_2);
      *(undefined2 *)(param_1 + 0x398) = uVar2;
      uVar2 = FUN_00e1d970(param_2);
      *(undefined2 *)(param_1 + 0x39a) = uVar2;
      FUN_00e1d90c(param_2);
      if (*(ushort *)(param_1 + 0x398) < 2) {
        uVar1 = *(ushort *)(param_1 + 0x39a);
        uVar5 = (ulong)uVar1;
        uVar6 = FUN_00e13bcc(uVar6,4,0,uVar5,0,&local_34);
        *(undefined8 *)(param_1 + 0x3a0) = uVar6;
        uVar3 = (ulong)local_34;
        if (local_34 == 0) {
          uVar3 = FUN_00e1d718(param_2,uVar5 << 2);
          if ((int)uVar3 == 0) {
            local_34 = 0;
            if (uVar1 != 0) {
              puVar4 = (undefined2 *)(*(long *)(param_1 + 0x3a0) + 2);
              do {
                uVar2 = FUN_00e1d970(param_2);
                puVar4[-1] = uVar2;
                uVar2 = FUN_00e1d970(param_2);
                *puVar4 = uVar2;
                uVar5 = uVar5 - 1;
                puVar4 = puVar4 + 2;
              } while (uVar5 != 0);
            }
            FUN_00e1d90c(param_2);
            uVar3 = (ulong)local_34;
          }
        }
      }
      else {
        uVar3 = 8;
        *(undefined2 *)(param_1 + 0x39a) = 0;
      }
    }
  }
  return uVar3;
}

