
/* WARNING: Removing unreachable block (ram,0x00123118) */

void _UPT_find_proc_info(undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
                        undefined4 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  void *local_90;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_90 = (void *)0x0;
  puVar1 = (undefined8 *)(param_5 + 2);
  if ((((param_5[0xc] == -1) || (param_2 < *(ulong *)(param_5 + 6))) ||
      (*(ulong *)(param_5 + 8) <= param_2)) &&
     (((param_5[0x20] == -1 || (param_2 < *(ulong *)(param_5 + 0x1a))) ||
      (*(ulong *)(param_5 + 0x1c) <= param_2)))) {
    *(undefined8 *)(param_5 + 0x24) = 0;
    *(undefined8 *)(param_5 + 0x22) = 0;
    *(undefined8 *)(param_5 + 0x28) = 0;
    *(undefined8 *)(param_5 + 0x26) = 0;
    *(undefined8 *)(param_5 + 0x1c) = 0;
    *(undefined8 *)(param_5 + 0x1a) = 0;
    *(undefined8 *)(param_5 + 0x20) = 0;
    *(undefined8 *)(param_5 + 0x1e) = 0;
    *(undefined8 *)(param_5 + 0x14) = 0;
    *(undefined8 *)(param_5 + 0x12) = 0;
    *(undefined8 *)(param_5 + 0x18) = 0;
    *(undefined8 *)(param_5 + 0x16) = 0;
    *(undefined8 *)(param_5 + 0xc) = 0;
    *(undefined8 *)(param_5 + 10) = 0;
    *(undefined8 *)(param_5 + 0x10) = 0;
    *(undefined8 *)(param_5 + 0xe) = 0;
    *(undefined8 *)(param_5 + 4) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_5 + 8) = 0;
    *(undefined8 *)(param_5 + 6) = 0;
    param_5[0xc] = 0xffffffff;
    param_5[0x20] = 0xffffffff;
    iVar3 = _Uaarch64_get_elf_image
                      (param_1,auStack_88,*param_5,param_2,&local_60,&local_68,&local_90,param_5);
    if (-1 < iVar3) {
      iVar3 = _Uaarch64_dwarf_find_unwind_table
                        (puVar1,auStack_88,param_1,local_90,local_60,local_68,param_2);
      free(local_90);
      if (-1 < iVar3) {
        uVar5 = param_5[0xc];
        if ((uVar5 != 0xffffffff) &&
           ((param_2 < *(ulong *)(param_5 + 6) || (*(ulong *)(param_5 + 8) <= param_2)))) {
          uVar5 = 0xffffffff;
          param_5[0xc] = 0xffffffff;
        }
        uVar6 = param_5[0x20];
        if ((uVar6 != 0xffffffff) &&
           ((param_2 < *(ulong *)(param_5 + 0x1a) || (*(ulong *)(param_5 + 0x1c) <= param_2)))) {
          uVar6 = 0xffffffff;
          param_5[0x20] = 0xffffffff;
        }
        iVar3 = -10;
        if ((uVar6 & uVar5) != 0xffffffff) {
          iVar3 = 0;
        }
      }
      if (-1 < iVar3) goto LAB_0012320c;
    }
  }
  else {
LAB_0012320c:
    if ((param_5[0xc] != -1) &&
       (uVar4 = _Uaarch64_dwarf_search_unwind_table(param_1,param_2,puVar1,param_3,param_4,param_5),
       (int)uVar4 != -10)) goto LAB_0012326c;
    if (param_5[0x20] != -1) {
      uVar4 = _Uaarch64_dwarf_search_unwind_table
                        (param_1,param_2,param_5 + 0x16,param_3,param_4,param_5);
      goto LAB_0012326c;
    }
  }
  uVar4 = 0xfffffff6;
LAB_0012326c:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

