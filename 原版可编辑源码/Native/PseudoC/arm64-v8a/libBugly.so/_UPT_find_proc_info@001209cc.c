
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _UPT_find_proc_info(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                        undefined4 *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  void *local_30;
  undefined1 auStack_28 [32];
  long local_8;
  
  puVar1 = (undefined8 *)(param_5 + 2);
  iVar3 = param_5[0xc];
  local_8 = ___stack_chk_guard;
  local_30 = (void *)0x0;
  if (((iVar3 == -1) || (param_2 < *(ulong *)(param_5 + 6))) || (*(ulong *)(param_5 + 8) <= param_2)
     ) {
    if (((param_5[0x20] == -1) || (param_2 < *(ulong *)(param_5 + 0x1a))) ||
       (*(ulong *)(param_5 + 0x1c) <= param_2)) {
      *(undefined8 *)(param_5 + 10) = 0;
      *(undefined8 *)(param_5 + 0xc) = 0;
      *(undefined8 *)(param_5 + 0x1e) = 0;
      *(undefined8 *)(param_5 + 0x20) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_5 + 4) = 0;
      *(undefined8 *)(param_5 + 6) = 0;
      *(undefined8 *)(param_5 + 8) = 0;
      *(undefined8 *)(param_5 + 0xe) = 0;
      *(undefined8 *)(param_5 + 0x10) = 0;
      *(undefined8 *)(param_5 + 0x12) = 0;
      *(undefined8 *)(param_5 + 0x14) = 0;
      *(undefined8 *)(param_5 + 0x16) = 0;
      *(undefined8 *)(param_5 + 0x18) = 0;
      *(undefined8 *)(param_5 + 0x1a) = 0;
      *(undefined8 *)(param_5 + 0x1c) = 0;
      *(undefined8 *)(param_5 + 0x22) = 0;
      *(undefined8 *)(param_5 + 0x24) = 0;
      *(undefined8 *)(param_5 + 0x26) = 0;
      *(undefined8 *)(param_5 + 0x28) = 0;
      param_5[0xc] = 0xffffffff;
      param_5[0x20] = 0xffffffff;
      iVar3 = _Uaarch64_get_elf_image
                        (param_1,auStack_28,*param_5,param_2,&local_40,&local_38,&local_30,param_5);
      if (-1 < iVar3) {
        iVar3 = _Uaarch64_dwarf_find_unwind_table
                          (puVar1,auStack_28,param_1,local_30,local_40,local_38,param_2);
        free(local_30);
        if (-1 < iVar3) {
          iVar3 = param_5[0xc];
          if (iVar3 == -1) {
            iVar2 = param_5[0x20];
joined_r0x00120c04:
            if (iVar2 == -1) goto LAB_00120b68;
          }
          else {
            if (param_2 < *(ulong *)(param_5 + 6)) {
              iVar2 = param_5[0x20];
              param_5[0xc] = 0xffffffff;
              iVar3 = -1;
              goto joined_r0x00120c04;
            }
            iVar2 = param_5[0x20];
            if (*(ulong *)(param_5 + 8) <= param_2) {
              param_5[0xc] = 0xffffffff;
              iVar3 = -1;
              goto joined_r0x00120c04;
            }
            if (iVar2 == -1) goto LAB_00120bb8;
          }
          if ((*(ulong *)(param_5 + 0x1a) <= param_2) && (param_2 < *(ulong *)(param_5 + 0x1c)))
          goto LAB_00120b24;
          param_5[0x20] = 0xffffffff;
          if (iVar3 != -1) goto LAB_00120bb8;
        }
      }
LAB_00120b68:
      uVar4 = 0xfffffff6;
      goto LAB_00120b6c;
    }
LAB_00120b24:
    if (iVar3 != -1) goto LAB_00120bb8;
  }
  else {
LAB_00120bb8:
    uVar4 = _Uaarch64_dwarf_search_unwind_table(param_1,param_2,puVar1,param_3,param_4,param_5);
    if ((int)uVar4 != -10) goto LAB_00120b6c;
  }
  uVar4 = 0xfffffff6;
  if (param_5[0x20] != -1) {
    uVar4 = _Uaarch64_dwarf_search_unwind_table
                      (param_1,param_2,param_5 + 0x16,param_3,param_4,param_5);
  }
LAB_00120b6c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

