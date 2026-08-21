
void FUN_0109ff28(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
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
  
  puVar6 = *(undefined1 **)(param_1 + 800);
                    /* catch() { ... } // from try @ 0109fdc8 with catch @ 0109ff54 */
                    /* catch() { ... } // from try @ 0109fdd8 with catch @ 0109ff5c */
                    /* catch() { ... } // from try @ 0109fe48 with catch @ 0109ff60
                       catch() { ... } // from try @ 0109fec0 with catch @ 0109ff60 */
  if (((puVar6 != (undefined1 *)0x0) &&
      (puVar1 = puVar6 + *(long *)(param_1 + 0x328), puVar6 + 4 <= puVar1)) &&
     (CONCAT11(*puVar6,puVar6[1]) == 0)) {
    uVar2 = (uint)CONCAT11(puVar6[2],puVar6[3]);
    puVar4 = puVar6 + 4;
    while ((uVar2 != 0 && (puVar4 + 8 <= puVar1))) {
      local_4c = CONCAT11(*puVar4,puVar4[1]);
      local_50 = 0;
      local_4a = CONCAT11(puVar4[2],puVar4[3]);
      local_48 = puVar4 + 8;
      uVar3 = (uint)(byte)puVar4[4] << 0x18 | (uint)(byte)puVar4[5] << 0x10 |
              (uint)(byte)puVar4[6] << 8 | (uint)(byte)puVar4[7];
      if ((uVar3 != 0) && ((ulong)uVar3 <= *(long *)(param_1 + 0x328) - 2U)) {
        local_60 = puVar6 + uVar3;
        for (local_68 = &PTR_tt_cmap0_class_rec_0172b998; *local_68 != (undefined *)0x0;
            local_68 = local_68 + 1) {
          local_70 = *local_68;
          if (*(uint *)(local_70 + 0x50) == (uint)CONCAT11(*local_60,local_60[1])) {
            local_194 = 0;
            local_58 = param_1;
            ft_validator_init(&_Stack_190,local_60,puVar1,0);
            local_78 = (uint)*(ushort *)(param_1 + 0x1d0);
            iVar5 = setjmp(&_Stack_190);
            if (iVar5 == 0) {
              local_194 = (**(code **)(local_70 + 0x58))(local_60,&_Stack_190);
            }
            if ((local_7c == 0) &&
               (iVar5 = FT_CMap_New(local_70,local_60,&local_58,&local_1a0), iVar5 == 0)) {
              *(undefined4 *)(local_1a0 + 0x20) = local_194;
            }
            break;
          }
        }
      }
      uVar2 = uVar2 - 1;
      puVar4 = local_48;
    }
  }
  return;
}

