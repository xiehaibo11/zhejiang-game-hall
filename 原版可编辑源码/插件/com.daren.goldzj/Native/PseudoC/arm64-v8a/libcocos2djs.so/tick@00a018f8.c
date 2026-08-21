
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
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a01994 with catch @ 00a01924
                       catch(type#1 @ 00000000) { ... } // from try @ 00a019c4 with catch @ 00a01924
                       catch(type#1 @ 00000000) { ... } // from try @ 00a019f4 with catch @ 00a01924
                       catch(type#1 @ 00000000) { ... } // from try @ 00a01a1c with catch @ 00a01924
                       catch(type#1 @ 00000000) { ... } // from try @ 00a01a48 with catch @ 00a01924
                        */
                    /* try { // try from 00a01b3c to 00b01b3f has its CatchHandler @ 00a01b54 */
                    /* try { // try from 00a01b40 to 00b01b77 has its CatchHandler @ 00a01af8 */
  if (((DAT_01d38a78 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d38a78), iVar4 != 0)) {
                    /* catch() { ... } // from try @ 00a01b3c with catch @ 00a01b54 */
    DAT_01d38a60 = (undefined8 *)0x0;
    DAT_01d38a68 = (undefined8 *)0x0;
                    /* catch() { ... } // from try @ 00a01b2c with catch @ 00a01b64 */
    DAT_01d38a70 = 0;
    __cxa_atexit(FUN_00a01444,&DAT_01d38a60,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d38a78);
                    /* try { // try from 00a01b78 to 00b01baf has its CatchHandler @ 00a01b78
                       catch() { ... } // from try @ 00a01b78 with catch @ 00a01b78
                       catch() { ... } // from try @ 00a01bb8 with catch @ 00a01b78 */
  }
  JobQueue::tryPopAll((JobQueue *)(in_x0 + 0xa0),(vector *)&DAT_01d38a60);
  puVar3 = DAT_01d38a68;
  puVar12 = DAT_01d38a60;
  if (DAT_01d38a60 != DAT_01d38a68) {
    do {
      pcVar11 = (char *)*puVar12;
                    /* try { // try from 00a019b8 to 00b019c3 has its CatchHandler @ 00a01a88 */
      if (*pcVar11 == '\x02') {
                    /* try { // try from 00a019f4 to 00b01a13 has its CatchHandler @ 00a01924 */
        uVar5 = *(ulong *)(in_x0 + 0x160);
        if (uVar5 != 0) {
          uVar6 = (ulong)*(int *)(pcVar11 + 0x24);
          uVar7 = uVar5 - 1;
          if ((uVar7 & uVar5) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0198c with catch @ 00a01a88
                       catch(type#1 @ 00000000) { ... } // from try @ 00a019b8 with catch @ 00a01a88
                        */
            uVar8 = uVar7 & uVar6;
          }
          else {
                    /* try { // try from 00a01a14 to 00b01a1b has its CatchHandler @ 00a01a84 */
            uVar8 = uVar6;
            if (uVar5 <= uVar6) {
              uVar8 = 0;
              if (uVar5 != 0) {
                uVar8 = uVar6 / uVar5;
              }
                    /* try { // try from 00a01a1c to 00b01a3b has its CatchHandler @ 00a01924 */
              uVar8 = uVar6 - uVar8 * uVar5;
            }
          }
          plVar9 = *(long **)(*(long *)(in_x0 + 0x158) + uVar8 * 8);
          if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
            do {
              uVar10 = plVar9[1];
              if (uVar10 == uVar6) {
                if ((int)plVar9[2] == *(int *)(pcVar11 + 0x24)) {
                  local_4c = *(int *)(pcVar11 + 0x20);
                    /* try { // try from 00a0198c to 00b01993 has its CatchHandler @ 00a01a88 */
                  plVar9 = (long *)plVar9[8];
                  if (plVar9 == (long *)0x0) goto LAB_00a01b7c;
                    /* try { // try from 00a01994 to 00b019b7 has its CatchHandler @ 00a01924 */
                  (**(code **)(*plVar9 + 0x30))(plVar9,pcVar11 + 8,&local_4c);
                  goto LAB_00a01af4;
                }
              }
              else {
                if ((uVar7 & uVar5) == 0) {
                  uVar10 = uVar10 & uVar7;
                }
                else if (uVar5 <= uVar10) {
                  uVar1 = 0;
                  if (uVar5 != 0) {
                    uVar1 = uVar10 / uVar5;
                  }
                  if (uVar10 - uVar1 * uVar5 == uVar8) goto LAB_00a01ae8;
                  break;
                }
                if (uVar10 != uVar8) break;
              }
LAB_00a01ae8:
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
            goto LAB_00a01af0;
          }
        }
LAB_00a01af4:
                    /* try { // try from 00a01af8 to 00b01b2b has its CatchHandler @ 00a01af8
                       catch() { ... } // from try @ 00a01af8 with catch @ 00a01af8
                       catch() { ... } // from try @ 00a01b40 with catch @ 00a01af8 */
        operator_delete(pcVar11);
      }
      else {
        if (*pcVar11 == '\x01') {
                    /* try { // try from 00a019c4 to 00b019eb has its CatchHandler @ 00a01924 */
          uVar5 = *(ulong *)(in_x0 + 0x138);
          if (uVar5 != 0) {
            uVar6 = (ulong)*(int *)(pcVar11 + 200);
            uVar7 = uVar5 - 1;
            if ((uVar7 & uVar5) == 0) {
              uVar8 = uVar7 & uVar6;
            }
            else {
              uVar8 = uVar6;
              if (uVar5 <= uVar6) {
                uVar8 = 0;
                if (uVar5 != 0) {
                  uVar8 = uVar6 / uVar5;
                }
                    /* try { // try from 00a019ec to 00b019f3 has its CatchHandler @ 00a01a84 */
                uVar8 = uVar6 - uVar8 * uVar5;
              }
            }
            plVar9 = *(long **)(*(long *)(in_x0 + 0x130) + uVar8 * 8);
            if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
              do {
                    /* try { // try from 00a01a3c to 00b01a47 has its CatchHandler @ 00a01a84 */
                uVar10 = plVar9[1];
                if (uVar10 == uVar6) {
                    /* try { // try from 00a01a48 to 00b01a8b has its CatchHandler @ 00a01924 */
                  if ((int)plVar9[2] == *(int *)(pcVar11 + 200)) {
                    local_4c = (int)pcVar11[0x90];
                    plVar9 = (long *)plVar9[8];
                    if (plVar9 == (long *)0x0) {
LAB_00a01b7c:
                    /* WARNING: Subroutine does not return */
                      FUN_008589d0();
                    }
                    (**(code **)(*plVar9 + 0x30))
                              (plVar9,pcVar11 + 8,pcVar11 + 0xb0,&local_4c,pcVar11 + 0x98);
                    goto LAB_00a01af4;
                  }
                }
                else {
                  if ((uVar7 & uVar5) == 0) {
                    uVar10 = uVar10 & uVar7;
                  }
                  else if (uVar5 <= uVar10) {
                    uVar1 = 0;
                    if (uVar5 != 0) {
                      uVar1 = uVar10 / uVar5;
                    }
                    uVar10 = uVar10 - uVar1 * uVar5;
                  }
                  if (uVar10 != uVar8) break;
                }
                plVar9 = (long *)*plVar9;
              } while (plVar9 != (long *)0x0);
              goto LAB_00a01af0;
            }
          }
          goto LAB_00a01af4;
        }
LAB_00a01af0:
        if (pcVar11 != (char *)0x0) goto LAB_00a01af4;
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar3);
    DAT_01d38a68 = DAT_01d38a60;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a01b2c to 00b01b33 has its CatchHandler @ 00a01b64 */
  return;
}

