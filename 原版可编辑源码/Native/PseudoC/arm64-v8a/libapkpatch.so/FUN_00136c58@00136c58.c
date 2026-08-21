
void FUN_00136c58(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
    lVar8 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(lVar2 + 0x20);
    if (((*(long *)(lVar2 + 0x28) != lVar7) ||
        ((iVar5 = FUN_00135af4(lVar2), iVar5 != 0 &&
         (lVar7 = *(long *)(lVar2 + 0x20), *(long *)(lVar2 + 0x28) != lVar7)))) &&
       (*(long *)(lVar2 + 0x18) != 0)) {
      cVar3 = *(char *)(*(long *)(lVar2 + 0x18) + lVar7);
      iVar5 = FUN_00135b90(*(undefined8 *)(param_1 + 0x38),&local_60,1);
      if (iVar5 != 0) {
        lVar7 = -local_60;
        if (-1 < cVar3) {
          lVar7 = local_60;
        }
        iVar5 = FUN_00135b90(*(undefined8 *)(param_1 + 0x40),&lStack_50,0);
        if ((iVar5 != 0) &&
           (iVar5 = FUN_00135b90(*(undefined8 *)(param_1 + 0x48),&local_58,0), iVar5 != 0)) {
          lVar7 = lVar7 + lVar8;
          uVar6 = 1;
          lStack_50 = lStack_50 + lVar1;
          lVar1 = 0;
          if (*(int *)(param_1 + 0x50) != 0) {
            lVar1 = local_58;
          }
          param_2[1] = lStack_50;
          param_2[2] = local_58;
          *param_2 = lVar7;
          *(long *)(param_1 + 0x28) = lVar1 + lVar7;
          *(long *)(param_1 + 0x30) = local_58 + lStack_50;
          goto LAB_00136d4c;
        }
      }
    }
  }
  uVar6 = 0;
LAB_00136d4c:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

