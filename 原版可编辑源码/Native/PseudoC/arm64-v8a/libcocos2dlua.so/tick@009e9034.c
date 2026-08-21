
/* universe::Downloader2::tick(float) */

void universe::Downloader2::tick(float param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  long in_x0;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined2 uVar12;
  undefined4 in_register_00005004;
  undefined8 uVar13;
  int local_4c;
  long local_48;
  ulong uVar14;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_01782308 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(CONCAT44(in_register_00005004,param_1),&DAT_01782308), iVar4 != 0)
     ) {
    DAT_017822f0 = (undefined8 *)0x0;
    DAT_017822f8 = (undefined8 *)0x0;
    DAT_01782300 = 0;
    __cxa_atexit(FUN_009e8b58,&DAT_017822f0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01782308);
  }
  JobQueue::tryPopAll((JobQueue *)(in_x0 + 0xa0),(vector *)&DAT_017822f0);
  puVar3 = DAT_017822f8;
  puVar11 = DAT_017822f0;
  if (DAT_017822f0 != DAT_017822f8) {
    do {
      pcVar10 = (char *)*puVar11;
      if (*pcVar10 == '\x02') {
        uVar5 = *(ulong *)(in_x0 + 0x160);
        if (uVar5 != 0) {
          uVar6 = (ulong)*(int *)(pcVar10 + 0x24);
          uVar13 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar5 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar5 >> 8)),
                                                                  POPCOUNT((char)uVar5))))))));
          uVar12 = NEON_uaddlv(uVar13,1);
          uVar14 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12);
          if ((uVar14 & 0xffffffff) < 2) {
            uVar7 = uVar5 - 1 & uVar6;
          }
          else {
            uVar7 = uVar6;
            if (uVar5 <= uVar6) {
              uVar7 = 0;
              if (uVar5 != 0) {
                uVar7 = uVar6 / uVar5;
              }
              uVar7 = uVar6 - uVar7 * uVar5;
            }
          }
          plVar8 = *(long **)(*(long *)(in_x0 + 0x158) + uVar7 * 8);
          if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
            do {
              uVar9 = plVar8[1];
              if (uVar9 == uVar6) {
                    /* try { // try from 009e91cc to 00ae91f3 has its CatchHandler @ 009e90f0 */
                if ((int)plVar8[2] == *(int *)(pcVar10 + 0x24)) {
                  local_4c = *(int *)(pcVar10 + 0x20);
                  plVar8 = (long *)plVar8[8];
                    /* catch() { ... } // from try @ 009e9144 with catch @ 009e925c
                       catch() { ... } // from try @ 009e91f4 with catch @ 009e925c */
                  if (plVar8 == (long *)0x0) goto LAB_009e92e8;
                    /* catch() { ... } // from try @ 009e917c with catch @ 009e9260
                       catch() { ... } // from try @ 009e920c with catch @ 009e9260 */
                  (**(code **)(*plVar8 + 0x30))(plVar8,pcVar10 + 8,&local_4c);
                  goto LAB_009e9094;
                }
              }
              else {
                if ((uVar14 & 0xffffffff) < 2) {
                  uVar9 = uVar9 & uVar5 - 1;
                }
                else {
                    /* try { // try from 009e91f4 to 00ae9207 has its CatchHandler @ 009e925c */
                  if (uVar5 <= uVar9) {
                    uVar1 = 0;
                    if (uVar5 != 0) {
                      uVar1 = uVar9 / uVar5;
                    }
                    uVar9 = uVar9 - uVar1 * uVar5;
                  }
                }
                if (uVar9 != uVar7) break;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
            goto LAB_009e9090;
          }
        }
LAB_009e9094:
        operator_delete(pcVar10);
      }
      else {
        if (*pcVar10 == '\x01') {
          uVar5 = *(ulong *)(in_x0 + 0x138);
          if (uVar5 != 0) {
            uVar6 = (ulong)*(int *)(pcVar10 + 200);
            uVar13 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                              CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                                       CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                                CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                         CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                                  CONCAT12(POPCOUNT((char)(uVar5 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar5 >> 8)),
                                                                  POPCOUNT((char)uVar5))))))));
            uVar12 = NEON_uaddlv(uVar13,1);
            uVar14 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12);
            if ((uVar14 & 0xffffffff) < 2) {
              uVar7 = uVar5 - 1 & uVar6;
            }
            else {
              uVar7 = uVar6;
              if (uVar5 <= uVar6) {
                    /* try { // try from 009e90f0 to 00ae9143 has its CatchHandler @ 009e90f0
                       catch() { ... } // from try @ 009e90f0 with catch @ 009e90f0
                       catch() { ... } // from try @ 009e91cc with catch @ 009e90f0
                       catch() { ... } // from try @ 009e9220 with catch @ 009e90f0 */
                uVar7 = 0;
                if (uVar5 != 0) {
                  uVar7 = uVar6 / uVar5;
                }
                uVar7 = uVar6 - uVar7 * uVar5;
              }
            }
                    /* try { // try from 009e9144 to 00ae916f has its CatchHandler @ 009e925c */
            plVar8 = *(long **)(*(long *)(in_x0 + 0x130) + uVar7 * 8);
            if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
              do {
                uVar9 = plVar8[1];
                if (uVar9 == uVar6) {
                  if ((int)plVar8[2] == *(int *)(pcVar10 + 200)) {
                    /* try { // try from 009e9220 to 00ae927b has its CatchHandler @ 009e90f0 */
                    local_4c = (int)pcVar10[0x90];
                    plVar8 = (long *)plVar8[8];
                    if (plVar8 == (long *)0x0) {
LAB_009e92e8:
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    (**(code **)(*plVar8 + 0x30))
                              (plVar8,pcVar10 + 8,pcVar10 + 0xb0,&local_4c,pcVar10 + 0x98);
                    goto LAB_009e9094;
                  }
                }
                else {
                    /* try { // try from 009e917c to 00ae91cb has its CatchHandler @ 009e9260 */
                  if ((uVar14 & 0xffffffff) < 2) {
                    uVar9 = uVar9 & uVar5 - 1;
                  }
                  else if (uVar5 <= uVar9) {
                    uVar1 = 0;
                    if (uVar5 != 0) {
                      uVar1 = uVar9 / uVar5;
                    }
                    uVar9 = uVar9 - uVar1 * uVar5;
                  }
                  if (uVar9 != uVar7) break;
                }
                plVar8 = (long *)*plVar8;
              } while (plVar8 != (long *)0x0);
              goto LAB_009e9090;
            }
          }
          goto LAB_009e9094;
        }
LAB_009e9090:
        if (pcVar10 != (char *)0x0) goto LAB_009e9094;
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar3);
    DAT_017822f8 = DAT_017822f0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

