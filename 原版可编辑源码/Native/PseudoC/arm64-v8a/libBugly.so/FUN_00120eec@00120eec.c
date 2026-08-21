
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120eec(undefined8 param_1,long param_2,ulong *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long local_18;
  ulong local_10;
  long local_8;
  
  iVar1 = 0;
  local_8 = ___stack_chk_guard;
  uVar3 = *param_3;
  *param_4 = 0;
  if (uVar3 != 0) {
    iVar1 = (**(code **)(param_2 + 0x18))();
    uVar4 = *param_3;
    uVar3 = uVar4 + 8;
    *param_3 = uVar3;
    if (-1 < iVar1) {
      pcVar5 = *(code **)(param_2 + 0x18);
      *param_3 = uVar4 + 0xc;
      iVar1 = (*pcVar5)(param_1,uVar3 & 0xfffffffffffffff8,&local_10,0,param_5);
      uVar4 = local_10;
      if (-1 < iVar1) {
        uVar7 = *param_3;
        pcVar5 = *(code **)(param_2 + 0x18);
        *param_3 = uVar7 + 4;
        iVar1 = (*pcVar5)(param_1,uVar7 & 0xfffffffffffffff8,&local_10,0,param_5);
        if (-1 < iVar1) {
          uVar7 = local_10 >>
                  ((ulong)(uint)(((int)uVar7 - (int)(uVar7 & 0xfffffffffffffff8)) * 8) & 0x3f);
          pvVar2 = calloc(1,(uVar7 & 0xffffffff) * 0x10 + 0x10);
          if (pvVar2 == (void *)0x0) {
            iVar1 = -2;
          }
          else {
            iVar6 = (int)uVar7;
            *(int *)((long)pvVar2 + 0xc) = iVar6;
            *(int *)((long)pvVar2 + 8) =
                 (int)(uVar4 >> ((ulong)(uint)(((int)uVar3 - (int)(uVar3 & 0xfffffffffffffff8)) * 8)
                                & 0x3f));
            if (iVar6 != 0) {
              uVar3 = *param_3;
              lVar8 = (long)pvVar2 + 0x18;
              do {
                pcVar5 = *(code **)(param_2 + 0x18);
                *param_3 = uVar3 + 1;
                iVar1 = (*pcVar5)(param_1,uVar3 & 0xfffffffffffffff8,&local_10,0,param_5);
                *(char *)(lVar8 + -8) =
                     (char)(local_10 >>
                           ((ulong)(uint)(((int)uVar3 - (int)(uVar3 & 0xfffffffffffffff8)) * 8) &
                           0x3f));
                if (iVar1 < 0) goto LAB_00121214;
                uVar3 = *param_3;
                pcVar5 = *(code **)(param_2 + 0x18);
                *param_3 = uVar3 + 1;
                iVar1 = (*pcVar5)(param_1,uVar3 & 0xfffffffffffffff8,&local_10,0,param_5);
                *(char *)(lVar8 + -7) =
                     (char)(local_10 >>
                           ((ulong)(uint)(((int)uVar3 - (int)(uVar3 & 0xfffffffffffffff8)) * 8) &
                           0x3f));
                if (iVar1 < 0) goto LAB_00121214;
                uVar3 = *param_3;
                pcVar5 = *(code **)(param_2 + 0x18);
                *param_3 = uVar3 + 2;
                iVar1 = (*pcVar5)(param_1,uVar3 & 0xfffffffffffffff8,&local_10,0,param_5);
                *(short *)(lVar8 + -6) =
                     (short)(local_10 >>
                            ((ulong)(uint)(((int)uVar3 - (int)(uVar3 & 0xfffffffffffffff8)) * 8) &
                            0x3f));
                if (iVar1 < 0) goto LAB_00121214;
                uVar3 = *param_3;
                pcVar5 = *(code **)(param_2 + 0x18);
                *param_3 = uVar3 + 4;
                iVar1 = (*pcVar5)(param_1,uVar3 & 0xfffffffffffffff8,&local_10,0,param_5);
                *(int *)(lVar8 + -4) =
                     (int)(local_10 >>
                          ((ulong)(uint)(((int)uVar3 - (int)(uVar3 & 0xfffffffffffffff8)) * 8) &
                          0x3f));
                if (iVar1 < 0) goto LAB_00121214;
                iVar1 = (**(code **)(param_2 + 0x18))(param_1,*param_3,lVar8,0,param_5);
                uVar3 = *param_3 + 8;
                *param_3 = uVar3;
                if (iVar1 < 0) goto LAB_00121214;
                lVar8 = lVar8 + 0x10;
              } while (lVar8 != (long)pvVar2 + (ulong)(iVar6 - 1) * 0x10 + 0x28);
            }
            if ((local_18 == 0) ||
               (iVar1 = FUN_00120eec(param_1,param_2,&local_18,pvVar2,param_5), -1 < iVar1)) {
              iVar1 = 0;
              *param_4 = pvVar2;
            }
            else {
LAB_00121214:
              FUN_00120e20(pvVar2);
            }
          }
        }
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

