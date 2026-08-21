
int FUN_00e5a694(long param_1,undefined8 param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ulong local_50;
  ushort *local_48;
  int local_34;
  
  local_48 = (ushort *)0x0;
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  if (*(long *)(param_1 + 0x5b0) == 0) {
    return 3;
  }
  local_34 = (**(code **)(param_1 + 0x340))(param_1,0x434f4c52,param_2,&local_50);
  if (local_34 == 0) {
    if (local_50 < 0xe) {
      puVar8 = (ushort *)0x0;
    }
    else {
      local_34 = FUN_00e1d5c4(param_2,local_50,&local_48);
      puVar3 = local_48;
      if (local_34 != 0) goto LAB_00e5a6e0;
      puVar8 = (ushort *)FUN_00e1388c(uVar7,0x28,&local_34);
      if (local_34 != 0) goto LAB_00e5a708;
      uVar2 = *puVar3 >> 8 | *puVar3 << 8;
      *puVar8 = uVar2;
      if (uVar2 == 0) {
        uVar2 = CONCAT11((char)puVar3[1],*(undefined1 *)((long)puVar3 + 3));
        puVar8[1] = uVar2;
        uVar4 = (ulong)(byte)puVar3[2] << 0x18 | (ulong)*(byte *)((long)puVar3 + 5) << 0x10 |
                (ulong)(byte)puVar3[3] << 8 | (ulong)*(byte *)((long)puVar3 + 7);
        uVar6 = local_50 - uVar4;
        if ((uVar4 <= local_50 && uVar6 != 0) &&
           (uVar5 = (ulong)uVar2 * 6, uVar5 < uVar6 || uVar5 - uVar6 == 0)) {
          uVar1 = (uint)(puVar3[6] >> 8) | (puVar3[6] & 0xff00ff) << 8;
          uVar6 = (ulong)(byte)puVar3[4] << 0x18 | (ulong)*(byte *)((long)puVar3 + 9) << 0x10 |
                  (ulong)(byte)puVar3[5] << 8 | (ulong)*(byte *)((long)puVar3 + 0xb);
          puVar8[2] = (ushort)uVar1;
          if ((uVar6 < local_50) && ((ulong)uVar1 << 2 <= local_50 - uVar6)) {
            *(ushort **)(puVar8 + 0xc) = local_48;
            *(ulong *)(puVar8 + 0x10) = local_50;
            *(ulong *)(puVar8 + 4) = (long)local_48 + uVar4;
            *(ulong *)(puVar8 + 8) = (long)local_48 + uVar6;
            *(ushort **)(param_1 + 0x5b8) = puVar8;
            return 0;
          }
        }
      }
    }
    local_34 = 8;
  }
  else {
LAB_00e5a6e0:
    puVar8 = (ushort *)0x0;
  }
LAB_00e5a708:
  FUN_00e1d86c(param_2,&local_48);
  FUN_00e139fc(uVar7,puVar8);
  return local_34;
}

