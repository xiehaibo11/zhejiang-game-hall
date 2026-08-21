
/* WARNING: Removing unreachable block (ram,0x00e5b6c0) */

void FUN_00e5b52c(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long local_1a0;
  undefined4 local_194;
  __jmp_buf_tag _Stack_190;
  int local_7c;
  uint local_78;
  undefined *local_70;
  undefined **local_68;
  undefined1 *local_60;
  long local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined1 *local_48;
  
  puVar6 = *(undefined1 **)(param_1 + 0x330);
  if (((puVar6 != (undefined1 *)0x0) &&
      (puVar1 = puVar6 + *(long *)(param_1 + 0x338), puVar6 + 4 <= puVar1)) &&
     (CONCAT11(*puVar6,puVar6[1]) == 0)) {
    uVar2 = (uint)CONCAT11(puVar6[2],puVar6[3]);
    puVar3 = puVar6 + 4;
    while ((uVar2 != 0 && (puVar3 + 8 <= puVar1))) {
      local_4c = CONCAT11(*puVar3,puVar3[1]);
      local_50 = 0;
      local_4a = CONCAT11(puVar3[2],puVar3[3]);
      local_48 = puVar3 + 8;
      uVar5 = (ulong)(byte)puVar3[4] << 0x18 | (ulong)(byte)puVar3[5] << 0x10 |
              (ulong)(byte)puVar3[6] << 8 | (ulong)(byte)puVar3[7];
      if (((int)uVar5 != 0) && (uVar5 <= *(long *)(param_1 + 0x338) - 2U)) {
        local_60 = puVar6 + uVar5;
        local_68 = &PTR_DAT_01c96610;
        do {
          local_70 = *local_68;
          if (*(uint *)(local_70 + 0x50) == (uint)CONCAT11(*local_60,local_60[1])) {
            local_194 = 0;
            local_58 = param_1;
            FUN_00e14b00(&_Stack_190,local_60,puVar1,0);
            local_78 = (uint)*(ushort *)(param_1 + 0x1d0);
            iVar4 = setjmp(&_Stack_190);
            if (iVar4 == 0) {
              local_194 = (**(code **)(local_70 + 0x58))(local_60,&_Stack_190);
            }
            if ((local_7c == 0) &&
               (iVar4 = FUN_00e17cf8(local_70,local_60,&local_58,&local_1a0), iVar4 == 0)) {
              *(undefined4 *)(local_1a0 + 0x20) = local_194;
            }
            break;
          }
          local_68 = local_68 + 1;
        } while (*local_68 != (undefined *)0x0);
      }
      uVar2 = uVar2 - 1;
      puVar3 = local_48;
    }
  }
  return;
}

