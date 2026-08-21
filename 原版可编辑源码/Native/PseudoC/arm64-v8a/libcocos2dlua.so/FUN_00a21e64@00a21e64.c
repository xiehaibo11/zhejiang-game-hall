
void FUN_00a21e64(uint *param_1,long param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_80;
  ulong uStack_78;
  int local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a21e90 to 00b21ea7 has its CatchHandler @ 00a21f08 */
  if ((int)param_3[3] == 0) {
    lVar7 = param_3[1];
    uVar9 = param_3[2];
    if (param_2 != 0) {
                    /* try { // try from 00a21ea8 to 00b21ef3 has its CatchHandler @ 00a21d9c */
      lVar10 = *param_3;
      do {
        if (uVar9 == 0) {
LAB_00a21fcc:
          iVar4 = 7;
LAB_00a21fd0:
          *(int *)(param_3 + 3) = iVar4;
          break;
        }
        uVar1 = *param_1;
                    /* try { // try from 00a21ef4 to 00b21ef7 has its CatchHandler @ 00a21ef8 */
                    /* catch() { ... } // from try @ 00a21e48 with catch @ 00a21ef8
                       catch() { ... } // from try @ 00a21ef4 with catch @ 00a21ef8
                       try { // try from 00a21ef8 to 00b21f43 has its CatchHandler @ 00a21d9c */
        iVar4 = (**(code **)(lVar10 + 0x30))(lVar10,lVar7,uVar1,uVar9);
        if (iVar4 == -1) {
          if ((uVar1 & 0xffffff80) == 0xe0000) goto LAB_00a21ed0;
          if ((*(int *)(lVar10 + 0x48) != 0) &&
             (iVar4 = FUN_00a22010(lVar10,uVar1,lVar7,uVar9), iVar4 != -1)) goto LAB_00a21f08;
          lVar8 = lVar7;
          uVar5 = uVar9;
          if (*(int *)(lVar10 + 0x4c) != 0) {
LAB_00a21f90:
            iVar4 = 0;
            pcVar6 = *(code **)(lVar10 + 0x78);
            lVar7 = lVar8;
            uVar9 = uVar5;
            goto joined_r0x00a21f98;
          }
          if (*(code **)(lVar10 + 0x58) == (code *)0x0) {
                    /* try { // try from 00a21fa4 to 00b21fa7 has its CatchHandler @ 00a21fe8 */
            iVar4 = (**(code **)(lVar10 + 0x30))(lVar10,lVar7,0xfffd,uVar9);
            if (iVar4 != -1) goto LAB_00a21f08;
            iVar4 = 0x54;
          }
          else {
            local_70 = 0;
            local_80 = lVar7;
            uStack_78 = uVar9;
            (**(code **)(lVar10 + 0x58))
                      (uVar1,FUN_00a2282c,&local_80,*(undefined8 *)(lVar10 + 0x70));
            lVar8 = local_80;
            uVar5 = uStack_78;
            iVar4 = local_70;
            if (local_70 == 0) goto LAB_00a21f90;
          }
          goto LAB_00a21fd0;
        }
LAB_00a21f08:
                    /* catch() { ... } // from try @ 00a21e90 with catch @ 00a21f08 */
        if (iVar4 < 0) goto LAB_00a21fcc;
        pcVar6 = *(code **)(lVar10 + 0x78);
joined_r0x00a21f98:
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar1,*(undefined8 *)(lVar10 + 0x88));
        }
        uVar5 = (ulong)iVar4;
        bVar3 = uVar9 < uVar5;
        uVar9 = uVar9 - uVar5;
        if (bVar3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar7 = lVar7 + uVar5;
LAB_00a21ed0:
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
    }
    param_3[1] = lVar7;
    param_3[2] = uVar9;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a21fa4 with catch @ 00a21fe8
                        */
  return;
}

