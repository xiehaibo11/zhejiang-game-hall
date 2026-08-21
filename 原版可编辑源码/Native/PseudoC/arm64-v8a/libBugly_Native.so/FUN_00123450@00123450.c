
int FUN_00123450(long param_1,ulong param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  void *__ptr;
  ulong uVar6;
  void *__ptr_00;
  long lVar7;
  ulong uVar8;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long local_80;
  undefined1 auStack_78 [8];
  ulong local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar5 = _Uaarch64_get_accessors();
  lVar2 = *(long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x58) == 0) {
    iVar3 = (**(code **)(lVar5 + 0x10))(param_1,&local_80,param_5);
    if (iVar3 < 0) {
LAB_001238d0:
      iVar3 = -10;
      goto LAB_001238d4;
    }
    lVar2 = local_80;
    if (*(int *)(param_1 + 0x44) != 0) {
      *(long *)(param_1 + 0x58) = local_80;
    }
  }
  local_80 = lVar2;
  __ptr_00 = (void *)0x0;
  do {
    lVar2 = local_80;
    iVar3 = (**(code **)(lVar5 + 0x18))(param_1,local_80,&lStack_90,0,param_5);
    if ((iVar3 < 0) ||
       (iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar2 + 8,&local_88,0,param_5), iVar3 < 0))
    goto LAB_001238d0;
    do {
      lVar2 = local_88;
      if ((((local_88 == 0) ||
           (iVar3 = (**(code **)(lVar5 + 0x18))(param_1,local_88,&local_88,0,param_5), iVar3 < 0))
          || (iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar2 + 0x10,&local_a0,0,param_5),
             iVar3 < 0)) ||
         (iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar2 + 0x18,&local_a8,0,param_5),
         uVar8 = local_a0, uVar6 = local_a8, iVar3 < 0)) goto LAB_00123860;
    } while ((param_2 < local_a0) || (local_a8 <= param_2));
    if (__ptr_00 == (void *)0x0) {
      __ptr_00 = calloc(1,0x50);
    }
    *(ulong *)((long)__ptr_00 + 0x10) = uVar8;
    *(ulong *)((long)__ptr_00 + 0x18) = uVar6;
    iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar2 + 0x20,(long)__ptr_00 + 0x20,0,param_5);
    if (iVar3 < 0) {
LAB_00123860:
      iVar3 = -10;
    }
    else {
      uVar6 = lVar2 + 0x28U & 0xfffffffffffffff8;
      iVar4 = (**(code **)(lVar5 + 0x18))(param_1,uVar6,&local_70,0,param_5);
      iVar3 = (int)(local_70 >> (((lVar2 + 0x28U) - uVar6) * 8 & 0x3f));
      *(int *)((long)__ptr_00 + 0x28) = iVar3;
      if (iVar4 < 0) goto LAB_00123860;
      if (param_4 != 0) {
        lVar7 = lVar2 + 0x30;
        if (iVar3 == 2) {
          iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar7,(long)__ptr_00 + 0x30,0,param_5);
          if (((iVar3 < 0) ||
              (iVar3 = (**(code **)(lVar5 + 0x18))
                                 (param_1,lVar2 + 0x38,(long)__ptr_00 + 0x38,0,param_5), iVar3 < 0))
             || ((iVar3 = (**(code **)(lVar5 + 0x18))
                                    (param_1,lVar2 + 0x40,(long)__ptr_00 + 0x40,0,param_5),
                 iVar3 < 0 ||
                 (iVar3 = (**(code **)(lVar5 + 0x18))
                                    (param_1,lVar2 + 0x48,(long)__ptr_00 + 0x48,0,param_5),
                 iVar3 < 0)))) goto LAB_001237f4;
          goto LAB_00123820;
        }
        if (iVar3 == 1) {
          iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar7,(long)__ptr_00 + 0x30,0,param_5);
          if (((-1 < iVar3) &&
              (iVar3 = (**(code **)(lVar5 + 0x18))
                                 (param_1,lVar2 + 0x38,(long)__ptr_00 + 0x38,0,param_5), -1 < iVar3)
              ) && (iVar3 = (**(code **)(lVar5 + 0x18))
                                      (param_1,lVar2 + 0x40,(long)__ptr_00 + 0x40,0,param_5),
                   -1 < iVar3)) {
            uVar6 = *(ulong *)((long)__ptr_00 + 0x40);
            __ptr = calloc(uVar6,8);
            if (__ptr != (void *)0x0) {
              if (uVar6 != 0) {
                lVar7 = 0;
                uVar8 = 0;
                do {
                  iVar3 = (**(code **)(lVar5 + 0x18))
                                    (param_1,lVar2 + 0x48 + lVar7,(long)__ptr + lVar7,0,param_5);
                  if (iVar3 < 0) {
                    free(__ptr);
                    goto LAB_00123820;
                  }
                  uVar8 = uVar8 + 1;
                  lVar7 = lVar7 + 8;
                } while (uVar8 < uVar6);
              }
              *(void **)((long)__ptr_00 + 0x48) = __ptr;
              goto LAB_00123820;
            }
          }
LAB_001237f4:
          iVar3 = *(int *)((long)__ptr_00 + 0x28);
        }
        else if (iVar3 == 0) {
          iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar7,(long)__ptr_00 + 0x30,0,param_5);
          if ((-1 < iVar3) &&
             (iVar3 = (**(code **)(lVar5 + 0x18))
                                (param_1,lVar2 + 0x38,(long)__ptr_00 + 0x38,0,param_5), -1 < iVar3))
          {
            uVar6 = lVar2 + 0x40U & 0xfffffffffffffff8;
            iVar3 = (**(code **)(lVar5 + 0x18))(param_1,uVar6,&local_70,0,param_5);
            *(int *)((long)__ptr_00 + 0x40) =
                 (int)(local_70 >> (((lVar2 + 0x40U) - uVar6) * 8 & 0x3f));
            if ((-1 < iVar3) &&
               ((iVar3 = (**(code **)(lVar5 + 0x18))(param_1,lVar2 + 0x48,auStack_78,0,param_5),
                -1 < iVar3 &&
                (iVar3 = FUN_00123a24(param_1,lVar5,auStack_78,(long)__ptr_00 + 0x48,param_5),
                -1 < iVar3)))) goto LAB_00123820;
          }
          goto LAB_001237f4;
        }
joined_r0x0012384c:
        if (iVar3 == 1) {
          if (*(void **)((long)__ptr_00 + 0x48) != (void *)0x0) {
            free(*(void **)((long)__ptr_00 + 0x48));
            goto LAB_0012385c;
          }
        }
        else if ((iVar3 == 0) && (*(long *)((long)__ptr_00 + 0x48) != 0)) {
          FUN_00123d1c();
LAB_0012385c:
          *(undefined8 *)((long)__ptr_00 + 0x48) = 0;
        }
        goto LAB_00123860;
      }
LAB_00123820:
      iVar3 = FUN_001233e4(param_1,param_2,param_3,__ptr_00,param_4,param_5);
      if (iVar3 < 0) {
        iVar3 = *(int *)((long)__ptr_00 + 0x28);
        goto joined_r0x0012384c;
      }
      iVar3 = 0;
    }
    iVar4 = (**(code **)(lVar5 + 0x18))(param_1,local_80,&local_98,0,param_5);
    if (iVar4 < 0) goto LAB_001238d4;
  } while (lStack_90 != local_98);
  if ((__ptr_00 != (void *)0x0) && (iVar3 < 0)) {
    free(__ptr_00);
  }
LAB_001238d4:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

