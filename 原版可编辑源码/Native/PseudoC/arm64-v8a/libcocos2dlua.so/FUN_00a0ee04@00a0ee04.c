
undefined8 FUN_00a0ee04(long param_1,long *param_2,ulong *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long local_88;
  ulong uStack_80;
  int local_78;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
    uVar11 = 0;
  }
  else {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      uVar6 = *(undefined4 *)(param_1 + 0x28);
      iVar3 = (**(code **)(param_1 + 0x20))(param_1,&local_6c);
      if (iVar3 == 0) goto LAB_00a0ef00;
      lVar9 = *param_2;
      uVar10 = *param_3;
      iVar3 = (**(code **)(param_1 + 0x30))(param_1,lVar9,local_6c,uVar10);
      if (iVar3 != -1) {
        uVar11 = 0;
        if (-1 < iVar3) {
LAB_00a0ee98:
          pcVar7 = *(code **)(param_1 + 0x78);
joined_r0x00a0efc4:
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(local_6c,*(undefined8 *)(param_1 + 0x88));
          }
          uVar8 = (ulong)iVar3;
          bVar2 = uVar10 < uVar8;
          uVar10 = uVar10 - uVar8;
          if (bVar2) goto LAB_00a0f04c;
          lVar9 = lVar9 + uVar8;
          goto LAB_00a0ef24;
        }
LAB_00a0ef98:
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        goto LAB_00a0ef9c;
      }
      if ((local_6c & 0xffffff80) == 0xe0000) {
        uVar11 = 0;
LAB_00a0ef24:
        *param_2 = lVar9;
        *param_3 = uVar10;
        pcVar7 = *(code **)(param_1 + 0x38);
        if (pcVar7 == (code *)0x0) goto LAB_00a0eec4;
        goto LAB_00a0ef34;
      }
      if ((*(int *)(param_1 + 0x48) != 0) &&
         (iVar3 = FUN_00a22010(param_1,local_6c,lVar9,uVar10), iVar3 != -1)) {
LAB_00a0ef8c:
        uVar11 = 1;
        if (iVar3 < 0) goto LAB_00a0ef98;
        goto LAB_00a0ee98;
      }
      if (*(int *)(param_1 + 0x4c) != 0) {
LAB_00a0efb8:
        iVar3 = 0;
        uVar11 = 1;
        pcVar7 = *(code **)(param_1 + 0x78);
        goto joined_r0x00a0efc4;
      }
      if (*(code **)(param_1 + 0x58) != (code *)0x0) {
        local_78 = 0;
        local_88 = lVar9;
        uStack_80 = uVar10;
        (**(code **)(param_1 + 0x58))
                  (local_6c,FUN_00a2282c,&local_88,*(undefined8 *)(param_1 + 0x70));
        iVar3 = local_78;
        lVar9 = local_88;
        uVar10 = uStack_80;
        if (local_78 != 0) {
          *(undefined4 *)(param_1 + 0x28) = uVar6;
          piVar5 = (int *)__errno();
          *piVar5 = iVar3;
          uVar11 = 0xffffffffffffffff;
          goto LAB_00a0eecc;
        }
        goto LAB_00a0efb8;
      }
      iVar3 = (**(code **)(param_1 + 0x30))(param_1,lVar9,0xfffd,uVar10);
                    /* try { // try from 00a0f028 to 00b0f0eb has its CatchHandler @ 00a0ef04 */
      if (iVar3 != -1) goto LAB_00a0ef8c;
      *(undefined4 *)(param_1 + 0x28) = uVar6;
      puVar4 = (undefined4 *)__errno();
      uVar6 = 0x54;
LAB_00a0efa4:
      *puVar4 = uVar6;
      uVar11 = 0xffffffffffffffff;
      goto LAB_00a0eecc;
    }
LAB_00a0ef00:
    uVar11 = 0;
                    /* try { // try from 00a0ef04 to 00b0ef4f has its CatchHandler @ 00a0ef04
                       catch() { ... } // from try @ 00a0ef04 with catch @ 00a0ef04
                       catch() { ... } // from try @ 00a0f028 with catch @ 00a0ef04
                       catch() { ... } // from try @ 00a0f1f8 with catch @ 00a0ef04 */
    pcVar7 = *(code **)(param_1 + 0x38);
    if (pcVar7 != (code *)0x0) {
LAB_00a0ef34:
      lVar9 = *param_2;
      uVar10 = *param_3;
      iVar3 = (*pcVar7)(param_1,lVar9,uVar10);
      if (iVar3 < 0) {
LAB_00a0ef9c:
        puVar4 = (undefined4 *)__errno();
        uVar6 = 7;
        goto LAB_00a0efa4;
      }
                    /* try { // try from 00a0ef50 to 00b0f027 has its CatchHandler @ 00a0f234 */
      uVar8 = (ulong)iVar3;
      if (uVar10 < uVar8) {
LAB_00a0f04c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *param_2 = lVar9 + uVar8;
      *param_3 = uVar10 - uVar8;
    }
  }
LAB_00a0eec4:
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
LAB_00a0eecc:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

