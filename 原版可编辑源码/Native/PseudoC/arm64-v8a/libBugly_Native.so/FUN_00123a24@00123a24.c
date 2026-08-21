
int FUN_00123a24(undefined8 param_1,long param_2,ulong *param_3,undefined8 *param_4,
                undefined8 param_5)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long local_78;
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *param_4 = 0;
  if (*param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(param_2 + 0x18))(param_1,*param_3,&local_78,0);
    uVar4 = *param_3;
    uVar5 = uVar4 + 8;
    *param_3 = uVar5;
    if (-1 < iVar2) {
      *param_3 = uVar4 + 0xc;
      iVar2 = (**(code **)(param_2 + 0x18))(param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_5);
      uVar4 = local_70;
      if (-1 < iVar2) {
        uVar6 = *param_3;
        *param_3 = uVar6 + 4;
        iVar2 = (**(code **)(param_2 + 0x18))
                          (param_1,uVar6 & 0xfffffffffffffff8,&local_70,0,param_5);
        if (-1 < iVar2) {
          uVar6 = local_70 >> ((uVar6 - (uVar6 & 0xfffffffffffffff8)) * 8 & 0x3f);
          pvVar3 = calloc(1,(uVar6 & 0xffffffff) * 0x10 + 0x10);
          if (pvVar3 == (void *)0x0) {
            iVar2 = -2;
          }
          else {
            *(int *)((long)pvVar3 + 8) =
                 (int)(uVar4 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f));
            *(int *)((long)pvVar3 + 0xc) = (int)uVar6;
            if ((int)uVar6 != 0) {
              uVar5 = *param_3;
              uVar4 = 0;
              lVar7 = (long)pvVar3 + 0x18;
              do {
                *param_3 = uVar5 + 1;
                iVar2 = (**(code **)(param_2 + 0x18))
                                  (param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_5);
                *(char *)(lVar7 + -8) =
                     (char)(local_70 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f));
                if (iVar2 < 0) goto LAB_00123d00;
                uVar5 = *param_3;
                *param_3 = uVar5 + 1;
                iVar2 = (**(code **)(param_2 + 0x18))
                                  (param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_5);
                *(char *)(lVar7 + -7) =
                     (char)(local_70 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f));
                if (iVar2 < 0) goto LAB_00123d00;
                uVar5 = *param_3;
                *param_3 = uVar5 + 2;
                iVar2 = (**(code **)(param_2 + 0x18))
                                  (param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_5);
                *(short *)(lVar7 + -6) =
                     (short)(local_70 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f));
                if (iVar2 < 0) goto LAB_00123d00;
                uVar5 = *param_3;
                *param_3 = uVar5 + 4;
                iVar2 = (**(code **)(param_2 + 0x18))
                                  (param_1,uVar5 & 0xfffffffffffffff8,&local_70,0,param_5);
                *(int *)(lVar7 + -4) =
                     (int)(local_70 >> ((uVar5 - (uVar5 & 0xfffffffffffffff8)) * 8 & 0x3f));
                if (iVar2 < 0) goto LAB_00123d00;
                iVar2 = (**(code **)(param_2 + 0x18))(param_1,*param_3,lVar7,0,param_5);
                uVar5 = *param_3 + 8;
                *param_3 = uVar5;
                if (iVar2 < 0) goto LAB_00123d00;
                uVar4 = uVar4 + 1;
                lVar7 = lVar7 + 0x10;
              } while (uVar4 < (uVar6 & 0xffffffff));
            }
            if ((local_78 == 0) ||
               (iVar2 = FUN_00123a24(param_1,param_2,&local_78,pvVar3,param_5), -1 < iVar2)) {
              iVar2 = 0;
              *param_4 = pvVar3;
            }
            else {
LAB_00123d00:
              FUN_00123d1c(pvVar3);
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}

