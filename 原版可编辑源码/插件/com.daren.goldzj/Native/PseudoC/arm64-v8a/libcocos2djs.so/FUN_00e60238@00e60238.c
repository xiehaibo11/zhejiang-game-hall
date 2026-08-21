
undefined8 FUN_00e60238(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint local_84;
  ulong local_80;
  long local_78;
  char local_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  *(uint *)(param_1 + 0x48) = (uint)*(ushort *)(param_2 + 0x88);
  iVar4 = FT_Select_Charmap(param_2,0x756e6963);
  if (iVar4 == 0) {
    FUN_00e62308(param_1,param_2);
    bVar2 = false;
    pcVar5 = local_70;
    local_78 = 0;
    builtin_strncpy(local_70 + 0x10,"8 9",4);
    builtin_strncpy(local_70,"0 1 2 3 4 5 6 7 ",0x10);
    lVar8 = 0;
LAB_00e602c8:
    do {
      pcVar5 = (char *)FUN_00e62148(pcVar5,param_1,&local_80,&local_84);
      uVar3 = local_80;
      if ((local_84 < 2) &&
         (FT_Get_Advance(**(undefined8 **)(param_1 + 0x40),local_80 & 0xffffffff,0x803,&local_78),
         uVar3 != 0)) {
        if (!bVar2) {
          bVar2 = true;
          lVar8 = local_78;
          if (*pcVar5 == '\0') break;
          goto LAB_00e602c8;
        }
        if (local_78 != lVar8) {
          uVar6 = 0;
          goto LAB_00e60340;
        }
      }
    } while (*pcVar5 != '\0');
    uVar6 = 1;
LAB_00e60340:
    *(undefined1 *)(param_1 + 0x38) = uVar6;
  }
  else {
    *(undefined8 *)(param_2 + 0xa8) = 0;
  }
  FT_Set_Charmap(param_2,uVar7);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

