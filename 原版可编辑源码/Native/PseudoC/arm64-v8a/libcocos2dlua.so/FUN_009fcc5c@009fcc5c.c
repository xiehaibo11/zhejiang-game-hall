
void FUN_009fcc5c(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long local_5e0;
  int local_5d8;
  int local_5d4;
  ulong local_5d0;
  ulong uStack_5c8;
  ulong local_5b8;
  undefined4 local_5ac;
  __jmp_buf_tag _Stack_5a8;
  ulong local_4a8;
  ulong uStack_4a0;
  ulong local_498;
  undefined8 uStack_490;
  undefined1 *local_488;
  undefined1 auStack_480 [1024];
  undefined4 local_80;
  long local_78;
  
                    /* catch() { ... } // from try @ 009fca00 with catch @ 009fcc68 */
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 009fca9c with catch @ 009fcc88
                       catch() { ... } // from try @ 009fcb34 with catch @ 009fcc88 */
                    /* catch() { ... } // from try @ 009fca80 with catch @ 009fcc8c */
                    /* catch() { ... } // from try @ 009fc9dc with catch @ 009fcc90 */
  local_5ac = 1;
  local_5e0 = 0;
  iVar4 = setjmp(&_Stack_5a8);
  if (iVar4 == 0) {
    uStack_4a0 = param_2[1];
    local_4a8 = *param_2;
    local_80 = 0;
    local_488 = auStack_480;
    uStack_490 = 0x400;
    local_498 = 0;
    lVar5 = FUN_009fd24c(&local_4a8,&local_5d8);
    if (lVar5 != 0) {
      lVar5 = 0;
      do {
        if (local_5d8 == 10) {
          FUN_009fd3c8(&_Stack_5a8,&local_5e0,0x38);
          uVar3 = local_4a8;
          lVar5 = local_5e0;
          lVar9 = *(long *)(local_5e0 + -8);
          *(long *)(local_5e0 + -8) = lVar9 + 1;
          lVar6 = FUN_009fb4dc(&local_4a8,&local_5d0);
          uVar1 = uVar3;
          if (((lVar6 == 0) || (uStack_4a0 - local_4a8 < local_5d0)) ||
             (uVar1 = local_4a8 + local_5d0, uVar1 == uVar3)) {
LAB_009fd234:
            local_4a8 = uVar1;
                    /* WARNING: Subroutine does not return */
            longjmp(&_Stack_5a8,1);
          }
          uStack_5c8 = uStack_4a0;
          local_5d0 = uVar1;
          uStack_4a0 = uVar1;
          lVar6 = FUN_009fd24c(&local_4a8,&local_5d4);
          if (lVar6 != 0) {
            lVar6 = lVar5 + lVar9 * 0x38;
            do {
              uVar3 = local_4a8;
              uVar1 = uVar3;
              switch(local_5d4 - 0x12U >> 3 | (local_5d4 - 0x12U) * 0x20000000) {
              case 0:
                lVar7 = FUN_009fb4dc(&local_4a8,&local_5b8);
                if ((lVar7 != 0) && (local_5b8 <= uStack_4a0 - local_4a8)) {
                  *(ulong *)(lVar5 + lVar9 * 0x38) = local_4a8;
                  local_4a8 = local_4a8 + local_5b8;
                  *(ulong *)(lVar6 + 8) = local_4a8;
                  goto LAB_009fcf18;
                }
                goto LAB_009fd234;
              default:
                FUN_009fd480(&local_4a8);
                break;
              case 2:
                FUN_009fd3c8(&_Stack_5a8,(long *)(lVar6 + 0x28),0x40);
                lVar7 = *(long *)(lVar6 + 0x28);
                lVar8 = *(long *)(lVar7 + -8);
                *(long *)(lVar7 + -8) = lVar8 + 1;
                FUN_009fd5c0(&_Stack_5a8,lVar7 + lVar8 * 0x40);
                break;
              case 3:
                FUN_009fd3c8(&_Stack_5a8,(long *)(lVar6 + 0x20),0x18);
                lVar7 = *(long *)(lVar6 + 0x20);
                lVar8 = *(long *)(lVar7 + -8);
                *(long *)(lVar7 + -8) = lVar8 + 1;
                FUN_009fd95c(&_Stack_5a8,lVar7 + lVar8 * 0x18);
                break;
              case 5:
                FUN_009fd3c8(&_Stack_5a8,(long *)(lVar6 + 0x30),0x58);
                lVar7 = *(long *)(lVar6 + 0x30);
                lVar8 = *(long *)(lVar7 + -8);
                *(long *)(lVar7 + -8) = lVar8 + 1;
                FUN_009fdbc8(&_Stack_5a8,lVar7 + lVar8 * 0x58);
                break;
              case 10:
                lVar7 = FUN_009fb4dc(&local_4a8,&local_5b8);
                if ((lVar7 == 0) || (uStack_4a0 - local_4a8 < local_5b8)) goto LAB_009fd234;
                *(ulong *)(lVar6 + 0x10) = local_4a8;
                local_4a8 = local_4a8 + local_5b8;
                *(ulong *)(lVar6 + 0x18) = local_4a8;
LAB_009fcf18:
                uVar1 = local_4a8;
                if (local_4a8 == uVar3) goto LAB_009fd234;
              }
              lVar7 = FUN_009fd24c(&local_4a8,&local_5d4);
            } while (lVar7 != 0);
          }
          uStack_4a0 = uStack_5c8;
          local_4a8 = local_5d0;
        }
        else {
          FUN_009fd480(&local_4a8);
        }
        lVar6 = FUN_009fd24c(&local_4a8,&local_5d8);
      } while (lVar6 != 0);
      local_5d0 = 0;
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + -8);
        if (lVar6 != 0) {
          lVar9 = 0;
          do {
            lVar7 = *(long *)(lVar5 + lVar9 * 0x38);
            if (lVar7 != 0) {
              FUN_009fdecc(&local_498,lVar7,*(undefined8 *)(lVar5 + lVar9 * 0x38 + 8),&local_5d0);
            }
            lVar7 = lVar5 + lVar9 * 0x38;
            lVar7 = FUN_009fdf6c(param_1,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18)
                                );
            lVar8 = __strlen_chk(&DAT_012f5d26,7);
            lVar8 = FUN_009fdf6c(param_1,&DAT_012f5d26,&DAT_012f5d26 + lVar8);
            if (lVar7 == lVar8) {
              local_80 = 1;
            }
            plVar10 = (long *)(lVar5 + lVar9 * 0x38 + 0x20);
            lVar7 = *plVar10;
            if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + -8), lVar8 != 0)) {
              FUN_009fe1a0(param_1,lVar7,&_Stack_5a8);
              lVar8 = lVar8 + -1;
              if (lVar8 != 0) {
                lVar7 = 0x18;
                do {
                  FUN_009fe1a0(param_1,*plVar10 + lVar7,&_Stack_5a8);
                  lVar8 = lVar8 + -1;
                  lVar7 = lVar7 + 0x18;
                } while (lVar8 != 0);
              }
            }
            plVar10 = (long *)(lVar5 + lVar9 * 0x38 + 0x28);
            lVar7 = *plVar10;
            if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + -8), lVar8 != 0)) {
              FUN_009fe280(param_1,lVar7,&_Stack_5a8);
              lVar8 = lVar8 + -1;
              if (lVar8 != 0) {
                lVar7 = 0x40;
                do {
                  FUN_009fe280(param_1,*plVar10 + lVar7,&_Stack_5a8);
                  lVar8 = lVar8 + -1;
                  lVar7 = lVar7 + 0x40;
                } while (lVar8 != 0);
              }
            }
            plVar10 = (long *)(lVar5 + lVar9 * 0x38 + 0x30);
            lVar7 = *plVar10;
            if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + -8), lVar8 != 0)) {
              FUN_009fe510(param_1,lVar7,&_Stack_5a8,0);
              lVar8 = lVar8 + -1;
              if (lVar8 != 0) {
                lVar7 = 0x58;
                do {
                  FUN_009fe510(param_1,*plVar10 + lVar7,&_Stack_5a8,0);
                  lVar8 = lVar8 + -1;
                  lVar7 = lVar7 + 0x58;
                } while (lVar8 != 0);
              }
            }
            lVar9 = lVar9 + 1;
            local_498 = local_5d0;
          } while (lVar9 != lVar6);
        }
        local_5ac = 0;
        lVar6 = *(long *)(lVar5 + -8);
        if (lVar6 != 0) {
          lVar9 = 0;
          do {
            plVar10 = (long *)(lVar5 + lVar9 * 0x38 + 0x28);
            if ((*plVar10 != 0) && (lVar7 = *(long *)(*plVar10 + -8), lVar7 != 0)) {
              FUN_009fee30();
              lVar7 = lVar7 + -1;
              if (lVar7 != 0) {
                lVar8 = 0x40;
                do {
                  FUN_009fee30(*plVar10 + lVar8);
                  lVar7 = lVar7 + -1;
                  lVar8 = lVar8 + 0x40;
                } while (lVar7 != 0);
              }
            }
            plVar11 = (long *)(lVar5 + lVar9 * 0x38 + 0x20);
            lVar7 = *plVar11;
            if ((lVar7 != 0) && (lVar8 = *(long *)(lVar7 + -8), lVar8 != 0)) {
              lVar12 = 0x10;
              lVar7 = *(long *)(lVar7 + 0x10);
              while( true ) {
                lVar8 = lVar8 + -1;
                if (lVar7 != 0) {
                  free((void *)(lVar7 + -0x10));
                }
                if (lVar8 == 0) break;
                lVar12 = lVar12 + 0x18;
                lVar7 = *(long *)(*plVar11 + lVar12);
              }
            }
            if (*plVar10 != 0) {
              free((void *)(*plVar10 + -0x10));
            }
            if (*plVar11 != 0) {
              free((void *)(*plVar11 + -0x10));
            }
            lVar7 = *(long *)(lVar5 + lVar9 * 0x38 + 0x30);
            if (lVar7 != 0) {
              free((void *)(lVar7 + -0x10));
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 != lVar6);
        }
        free((void *)(lVar5 + -0x10));
        goto LAB_009fd1c8;
      }
    }
    local_5d0 = 0;
    local_5ac = 0;
  }
LAB_009fd1c8:
  if (local_488 != auStack_480) {
    free(local_488);
  }
  uStack_490 = 0x400;
  local_498 = 0;
  *param_2 = local_4a8;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
  local_488 = auStack_480;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_5ac);
}

