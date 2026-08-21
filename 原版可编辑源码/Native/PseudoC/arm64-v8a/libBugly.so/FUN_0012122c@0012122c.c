
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012122c(long param_1,ulong param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *__ptr;
  code *pcVar7;
  size_t __nmemb;
  ulong uVar8;
  size_t sVar9;
  void *pvVar10;
  long lVar11;
  void *local_50;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  ulong local_20;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = _Uaarch64_get_accessors();
  lVar11 = *(long *)(param_1 + 0x58);
  if (*(long *)(param_1 + 0x58) == 0) {
    iVar3 = (**(code **)(lVar6 + 0x10))(param_1,&local_40,param_5);
    if (iVar3 < 0) {
LAB_00121464:
      iVar3 = -10;
      goto LAB_00121468;
    }
    lVar11 = local_40;
    if (*(int *)(param_1 + 0x44) != 0) {
      *(long *)(param_1 + 0x58) = local_40;
    }
  }
  local_40 = lVar11;
  local_50 = (void *)0x0;
  do {
    lVar11 = local_40;
    iVar3 = (**(code **)(lVar6 + 0x18))(param_1,local_40,&local_30,0,param_5);
    if ((iVar3 < 0) ||
       (iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar11 + 8,&local_38,0,param_5), iVar3 < 0))
    goto LAB_00121464;
    do {
      lVar11 = local_38;
      if ((local_38 == 0) ||
         (iVar3 = (**(code **)(lVar6 + 0x18))(param_1,local_38,&local_38,0,param_5), iVar3 < 0))
      goto LAB_00121428;
      iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar11 + 0x10,&local_20,0,param_5);
      if ((iVar3 < 0) ||
         (iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar11 + 0x18,&local_18,0,param_5),
         uVar2 = local_18, uVar8 = local_20, iVar3 < 0)) goto LAB_00121428;
    } while ((param_2 < local_20) || (local_18 <= param_2));
    if (local_50 == (void *)0x0) {
      local_50 = calloc(1,0x50);
    }
    pcVar7 = *(code **)(lVar6 + 0x18);
    *(ulong *)((long)local_50 + 0x10) = uVar8;
    iVar3 = -10;
    *(ulong *)((long)local_50 + 0x18) = uVar2;
    iVar4 = (*pcVar7)(param_1,lVar11 + 0x20,(long)local_50 + 0x20,0,param_5);
    if (-1 < iVar4) {
      uVar8 = lVar11 + 0x28U & 0xfffffffffffffff8;
      iVar5 = (**(code **)(lVar6 + 0x18))(param_1,uVar8,&local_10,0,param_5);
      iVar4 = (int)(local_10 >> ((ulong)(uint)(((int)(lVar11 + 0x28U) - (int)uVar8) * 8) & 0x3f));
      *(int *)((long)local_50 + 0x28) = iVar4;
      if (-1 < iVar5) {
        if (param_4 == 0) {
LAB_001214c0:
          iVar3 = 0;
          iVar4 = FUN_00120da4(param_1,param_2,param_3,local_50,param_4,param_5);
          if (iVar4 < 0) {
            if (*(int *)((long)local_50 + 0x28) != 0) {
              if (*(int *)((long)local_50 + 0x28) == 1) {
                iVar3 = -10;
                if (*(void **)((long)local_50 + 0x48) != (void *)0x0) {
                  free(*(void **)((long)local_50 + 0x48));
                  *(undefined8 *)((long)local_50 + 0x48) = 0;
                }
                goto LAB_0012142c;
              }
              goto LAB_00121428;
            }
            iVar3 = -10;
            if (*(long *)((long)local_50 + 0x48) != 0) {
              FUN_00120e20();
              *(undefined8 *)((long)local_50 + 0x48) = 0;
            }
          }
        }
        else {
          lVar1 = lVar11 + 0x30;
          if (iVar4 == 1) {
            iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar1,(long)local_50 + 0x30,0,param_5);
            if ((-1 < iVar3) &&
               (iVar3 = (**(code **)(lVar6 + 0x18))
                                  (param_1,lVar11 + 0x38,(long)local_50 + 0x38,0,param_5),
               -1 < iVar3)) {
              iVar3 = (**(code **)(lVar6 + 0x18))
                                (param_1,lVar11 + 0x40,(long)local_50 + 0x40,0,param_5);
              if (-1 < iVar3) {
                __nmemb = *(size_t *)((long)local_50 + 0x40);
                __ptr = calloc(__nmemb,8);
                if (__ptr != (void *)0x0) {
                  sVar9 = 0;
                  pvVar10 = __ptr;
                  lVar11 = lVar11 + 0x48;
                  if (__nmemb != 0) {
                    do {
                      iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar11,pvVar10,0,param_5);
                      if (iVar3 < 0) {
                        free(__ptr);
                        goto LAB_001214c0;
                      }
                      sVar9 = sVar9 + 1;
                      pvVar10 = (void *)((long)pvVar10 + 8);
                      lVar11 = lVar11 + 8;
                    } while (sVar9 != __nmemb);
                  }
                  *(void **)((long)local_50 + 0x48) = __ptr;
                  goto LAB_001214c0;
                }
              }
            }
LAB_00121658:
            iVar4 = *(int *)((long)local_50 + 0x28);
LAB_00121660:
            if (iVar4 == 0) {
              if (*(long *)((long)local_50 + 0x48) == 0) goto LAB_00121428;
              FUN_00120e20();
              iVar3 = -10;
              *(undefined8 *)((long)local_50 + 0x48) = 0;
              goto LAB_0012142c;
            }
          }
          else {
            if (iVar4 == 2) {
              iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar1,(long)local_50 + 0x30,0,param_5);
              if ((-1 < iVar3) &&
                 (iVar3 = (**(code **)(lVar6 + 0x18))
                                    (param_1,lVar11 + 0x38,(long)local_50 + 0x38,0,param_5),
                 -1 < iVar3)) {
                iVar3 = (**(code **)(lVar6 + 0x18))
                                  (param_1,lVar11 + 0x40,(long)local_50 + 0x40,0,param_5);
                if (-1 < iVar3) {
                  iVar3 = (**(code **)(lVar6 + 0x18))
                                    (param_1,lVar11 + 0x48,(long)local_50 + 0x48,0,param_5);
joined_r0x001217d0:
                  if (-1 < iVar3) goto LAB_001214c0;
                }
              }
              goto LAB_00121658;
            }
            if (iVar4 == 0) {
              iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar1,(long)local_50 + 0x30,0,param_5);
              if ((iVar3 < 0) ||
                 (iVar3 = (**(code **)(lVar6 + 0x18))
                                    (param_1,lVar11 + 0x38,(long)local_50 + 0x38,0,param_5),
                 iVar3 < 0)) goto LAB_00121658;
              uVar8 = lVar11 + 0x40U & 0xfffffffffffffff8;
              iVar3 = (**(code **)(lVar6 + 0x18))(param_1,uVar8,&local_10,0,param_5);
              *(int *)((long)local_50 + 0x40) =
                   (int)(local_10 >>
                        ((ulong)(uint)(((int)(lVar11 + 0x40U) - (int)uVar8) * 8) & 0x3f));
              if (-1 < iVar3) {
                iVar3 = (**(code **)(lVar6 + 0x18))(param_1,lVar11 + 0x48,&local_10,0,param_5);
                if (-1 < iVar3) {
                  iVar3 = FUN_00120eec(param_1,lVar6,&local_10,(long)local_50 + 0x48,param_5);
                  goto joined_r0x001217d0;
                }
                goto LAB_00121658;
              }
              iVar4 = *(int *)((long)local_50 + 0x28);
              goto LAB_00121660;
            }
          }
          if ((iVar4 == 1) && (*(void **)((long)local_50 + 0x48) != (void *)0x0)) {
            free(*(void **)((long)local_50 + 0x48));
            *(undefined8 *)((long)local_50 + 0x48) = 0;
          }
LAB_00121428:
          iVar3 = -10;
        }
      }
    }
LAB_0012142c:
    iVar4 = (**(code **)(lVar6 + 0x18))(param_1,local_40,&local_28,0,param_5);
    if (iVar4 < 0) goto LAB_00121468;
  } while (local_30 != local_28);
  if ((local_50 != (void *)0x0) && (iVar3 < 0)) {
    free(local_50);
  }
LAB_00121468:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}

