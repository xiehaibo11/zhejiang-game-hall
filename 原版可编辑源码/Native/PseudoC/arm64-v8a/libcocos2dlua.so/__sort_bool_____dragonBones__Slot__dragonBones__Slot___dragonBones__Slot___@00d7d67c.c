
/* void std::__ndk1::__sort<bool (*&)(dragonBones::Slot*, dragonBones::Slot*),
   dragonBones::Slot**>(dragonBones::Slot**, dragonBones::Slot**, bool (*&)(dragonBones::Slot*,
   dragonBones::Slot*)) */

void std::__ndk1::__sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
               (Slot **param_1,Slot **param_2,_func_bool_Slot_ptr_Slot_ptr *param_3)

{
  undefined1 (*pauVar1) [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 auVar14 [16];
  
                    /* try { // try from 00d7d680 to 00e7d687 has its CatchHandler @ 00d7d85c */
                    /* try { // try from 00d7d688 to 00e7d68f has its CatchHandler @ 00d7d858 */
                    /* try { // try from 00d7d690 to 00e7d697 has its CatchHandler @ 00d7d854 */
                    /* try { // try from 00d7d698 to 00e7d69f has its CatchHandler @ 00d7d850 */
                    /* try { // try from 00d7d6a0 to 00e7d6a7 has its CatchHandler @ 00d7d84c */
LAB_00d7d6a8:
                    /* try { // try from 00d7d6a8 to 00e7d6af has its CatchHandler @ 00d7d848 */
  pauVar11 = (undefined1 (*) [16])(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
  pauVar12 = (undefined1 (*) [16])param_1;
                    /* try { // try from 00d7d6b0 to 00e7d6b7 has its CatchHandler @ 00d7d844 */
LAB_00d7d6bc:
  param_1 = (Slot **)pauVar12;
  lVar7 = (long)param_2 - (long)param_1;
                    /* try { // try from 00d7d6c0 to 00e7d6cb has its CatchHandler @ 00d7d88c */
  uVar6 = lVar7 >> 3;
                    /* try { // try from 00d7d6cc to 00e7d6cf has its CatchHandler @ 00d7d83c */
  switch(uVar6) {
  case 0:
  case 1:
    goto switchD_00d7da20_caseD_0;
  case 2:
    uVar6 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8),
                       *(undefined8 *)*(undefined1 (*) [16])param_1);
                    /* try { // try from 00d7da78 to 00e7da8b has its CatchHandler @ 00d7dc64 */
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
    *(undefined8 *)*(undefined1 (*) [16])param_1 =
         *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
    return;
  case 3:
                    /* try { // try from 00d7da90 to 00e7dabf has its CatchHandler @ 00d7dc68 */
    uVar6 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])param_1 + 8),
                       *(undefined8 *)*(undefined1 (*) [16])param_1);
    uVar5 = (**(code **)param_3)
                      (*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8),
                       *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8));
    if ((uVar6 & 1) == 0) {
      if ((uVar5 & 1) == 0) {
        return;
      }
      uVar8 = *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
                    /* try { // try from 00d7db40 to 00e7db57 has its CatchHandler @ 00d7dc50 */
      *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)(*(undefined1 (*) [16])param_1 + 8),
                         *(undefined8 *)*(undefined1 (*) [16])param_1);
      if ((uVar6 & 1) == 0) {
        return;
      }
                    /* try { // try from 00d7db5c to 00e7db73 has its CatchHandler @ 00d7dc4c */
      auVar14 = NEON_ext(*(undefined1 (*) [16])param_1,*(undefined1 (*) [16])param_1,8,1);
      *(long *)(*(undefined1 (*) [16])param_1 + 8) = auVar14._8_8_;
      *(long *)*(undefined1 (*) [16])param_1 = auVar14._0_8_;
      return;
    }
    uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
    if ((uVar5 & 1) != 0) {
                    /* try { // try from 00d7dac4 to 00e7dadf has its CatchHandler @ 00d7dc60 */
      *(undefined8 *)*(undefined1 (*) [16])param_1 =
           *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
      *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
      return;
    }
    *(undefined8 *)*(undefined1 (*) [16])param_1 =
         *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) = uVar8;
                    /* try { // try from 00d7db78 to 00e7db8f has its CatchHandler @ 00d7dc48 */
    uVar6 = (**(code **)param_3)(*(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8))
    ;
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar8 = *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8);
    *(undefined8 *)(*(undefined1 (*) [16])param_1 + 8) =
         *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8);
    *(undefined8 *)(*(undefined1 (*) [16])((long)param_2 + -0x10) + 8) = uVar8;
    return;
  case 4:
                    /* try { // try from 00d7dae4 to 00e7daff has its CatchHandler @ 00d7dc5c */
    __sort4<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
              (param_1,(Slot **)(*(undefined1 (*) [16])param_1 + 8),(Slot **)((long)param_1 + 0x10),
               (Slot **)pauVar11,param_3);
    return;
  case 5:
                    /* try { // try from 00d7db04 to 00e7db23 has its CatchHandler @ 00d7dc58 */
                    /* try { // try from 00d7db24 to 00e7db3b has its CatchHandler @ 00d7dc54 */
    FUN_00d7dd18(param_1,*(undefined1 (*) [16])param_1 + 8,
                 (undefined1 (*) [16])((long)param_1 + 0x10),
                 *(undefined1 (*) [16])((long)param_1 + 0x10) + 8,pauVar11,param_3);
    return;
  default:
                    /* try { // try from 00d7d6d0 to 00e7d6d7 has its CatchHandler @ 00d7d838 */
    if (lVar7 < 0xf8) {
                    /* try { // try from 00d7da58 to 00e7da67 has its CatchHandler @ 00d7dc0c */
      __insertion_sort_3<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                (param_1,param_2,param_3);
      return;
    }
                    /* try { // try from 00d7d6d8 to 00e7d6df has its CatchHandler @ 00d7d834 */
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
                    /* try { // try from 00d7d6e0 to 00e7d6e7 has its CatchHandler @ 00d7d830 */
                    /* try { // try from 00d7d6e8 to 00e7d6ef has its CatchHandler @ 00d7d82c */
    pauVar12 = (undefined1 (*) [16])
               (*(undefined1 (*) [16])param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
                    /* try { // try from 00d7d6f0 to 00e7d703 has its CatchHandler @ 00d7d88c */
    if (lVar7 < 0x1f39) {
                    /* try { // try from 00d7d744 to 00e7d74b has its CatchHandler @ 00d7d810 */
                    /* try { // try from 00d7d74c to 00e7d753 has its CatchHandler @ 00d7d80c */
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)*pauVar12,*(undefined8 *)*(undefined1 (*) [16])param_1);
                    /* try { // try from 00d7d754 to 00e7d757 has its CatchHandler @ 00d7d884 */
                    /* try { // try from 00d7d758 to 00e7d75f has its CatchHandler @ 00d7d88c */
                    /* try { // try from 00d7d760 to 00e7d767 has its CatchHandler @ 00d7d808 */
                    /* try { // try from 00d7d768 to 00e7d76f has its CatchHandler @ 00d7d804 */
      uVar5 = (**(code **)param_3)(*(undefined8 *)*pauVar11,*(undefined8 *)*pauVar12);
      if ((uVar6 & 1) == 0) {
        if ((uVar5 & 1) == 0) {
          iVar4 = 0;
        }
        else {
          uVar8 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = uVar8;
          uVar6 = (**(code **)param_3)
                            (*(undefined8 *)*pauVar12,*(undefined8 *)*(undefined1 (*) [16])param_1);
          if ((uVar6 & 1) == 0) goto LAB_00d7d978;
                    /* catch() { ... } // from try @ 00d7cc94 with catch @ 00d7d928 */
                    /* catch() { ... } // from try @ 00d7c7e0 with catch @ 00d7d92c
                       catch() { ... } // from try @ 00d7cb08 with catch @ 00d7d92c
                       catch() { ... } // from try @ 00d7cbcc with catch @ 00d7d92c
                       catch() { ... } // from try @ 00d7d170 with catch @ 00d7d92c
                       catch() { ... } // from try @ 00d7d1d0 with catch @ 00d7d92c
                       catch() { ... } // from try @ 00d7d430 with catch @ 00d7d92c */
          uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
          *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = uVar8;
LAB_00d7d968:
          iVar4 = 2;
                    /* try { // try from 00d7d96c to 00e7da27 has its CatchHandler @ 00d7d96c
                       catch() { ... } // from try @ 00d7d96c with catch @ 00d7d96c
                       catch() { ... } // from try @ 00d7dbc4 with catch @ 00d7d96c */
        }
      }
      else {
                    /* try { // try from 00d7d770 to 00e7d777 has its CatchHandler @ 00d7d800 */
        uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
        if ((uVar5 & 1) == 0) {
          *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar12;
          *(undefined8 *)*pauVar12 = uVar8;
                    /* catch() { ... } // from try @ 00d7bf14 with catch @ 00d7d948 */
          uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar11);
          if ((uVar6 & 1) != 0) {
            uVar8 = *(undefined8 *)*pauVar12;
            *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar11;
            *(undefined8 *)*pauVar11 = uVar8;
            goto LAB_00d7d968;
          }
LAB_00d7d978:
          iVar4 = 1;
        }
        else {
                    /* try { // try from 00d7d778 to 00e7d77f has its CatchHandler @ 00d7d7fc */
          iVar4 = 1;
                    /* try { // try from 00d7d780 to 00e7d787 has its CatchHandler @ 00d7d7f8 */
          *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar11;
          *(undefined8 *)*pauVar11 = uVar8;
                    /* try { // try from 00d7d788 to 00e7d78f has its CatchHandler @ 00d7d7f4 */
        }
      }
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
                    /* try { // try from 00d7d704 to 00e7d70b has its CatchHandler @ 00d7d828 */
      lVar7 = (uVar5 & 0x7ffffffffffffffc) * 2;
                    /* try { // try from 00d7d70c to 00e7d713 has its CatchHandler @ 00d7d824 */
                    /* try { // try from 00d7d714 to 00e7d717 has its CatchHandler @ 00d7d884 */
                    /* try { // try from 00d7d718 to 00e7d71b has its CatchHandler @ 00d7d88c */
                    /* try { // try from 00d7d71c to 00e7d71f has its CatchHandler @ 00d7d820 */
                    /* try { // try from 00d7d720 to 00e7d727 has its CatchHandler @ 00d7d81c */
      iVar4 = FUN_00d7dd18(param_1,*(undefined1 (*) [16])param_1 + lVar7,pauVar12,*pauVar12 + lVar7,
                           pauVar11,param_3);
    }
                    /* try { // try from 00d7d728 to 00e7d72f has its CatchHandler @ 00d7d818 */
                    /* try { // try from 00d7d730 to 00e7d737 has its CatchHandler @ 00d7d814 */
    uVar6 = (**(code **)param_3)
                      (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar12);
                    /* try { // try from 00d7d738 to 00e7d743 has its CatchHandler @ 00d7d88c */
    pauVar13 = pauVar11;
    pauVar10 = (undefined1 (*) [16])((long)param_2 + -0x10);
    if ((uVar6 & 1) == 0) break;
    goto LAB_00d7d7c0;
  }
                    /* try { // try from 00d7d790 to 00e7d797 has its CatchHandler @ 00d7d7f0 */
  while (pauVar13 = pauVar10, (undefined1 (*) [16])param_1 != pauVar13) {
                    /* try { // try from 00d7d798 to 00e7d7a3 has its CatchHandler @ 00d7d88c */
                    /* try { // try from 00d7d7a4 to 00e7d7ab has its CatchHandler @ 00d7d7ec */
    uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar13,*(undefined8 *)*pauVar12);
    pauVar10 = (undefined1 (*) [16])(pauVar13[-1] + 8);
    if ((uVar6 & 1) != 0) goto LAB_00d7d7ac;
  }
  pauVar13 = (undefined1 (*) [16])(*(undefined1 (*) [16])param_1 + 8);
                    /* catch() { ... } // from try @ 00d7cc48 with catch @ 00d7d8b8 */
                    /* catch() { ... } // from try @ 00d7d128 with catch @ 00d7d8bc
                       catch() { ... } // from try @ 00d7d1b0 with catch @ 00d7d8bc */
                    /* catch() { ... } // from try @ 00d7cab8 with catch @ 00d7d8c0
                       catch() { ... } // from try @ 00d7cb5c with catch @ 00d7d8c0 */
                    /* catch() { ... } // from try @ 00d7cb90 with catch @ 00d7d8c4 */
  uVar6 = (**(code **)param_3)
                    (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar11);
  if ((uVar6 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d7cc84 with catch @ 00d7d8d4 */
    if (pauVar13 == pauVar11) {
      return;
    }
                    /* catch() { ... } // from try @ 00d7cf8c with catch @ 00d7d8d8 */
    pauVar13 = (undefined1 (*) [16])((long)param_1 + 0x10);
    while (uVar6 = (**(code **)param_3)
                             (*(undefined8 *)*(undefined1 (*) [16])param_1,
                              *(undefined8 *)(pauVar13[-1] + 8)), (uVar6 & 1) == 0) {
      pauVar13 = (undefined1 (*) [16])(*pauVar13 + 8);
                    /* catch() { ... } // from try @ 00d7ccac with catch @ 00d7d8f8 */
      if ((undefined1 (*) [16])param_2 == pauVar13) {
        return;
      }
    }
    uVar8 = *(undefined8 *)(pauVar13[-1] + 8);
    *(undefined8 *)(pauVar13[-1] + 8) = *(undefined8 *)*pauVar11;
    *(undefined8 *)*pauVar11 = uVar8;
  }
  pauVar10 = pauVar11;
  if (pauVar13 == pauVar11) {
    return;
  }
  while( true ) {
    pauVar12 = (undefined1 (*) [16])(pauVar13[-1] + 8);
    do {
      pauVar13 = pauVar12;
      pauVar12 = (undefined1 (*) [16])(*pauVar13 + 8);
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar12);
    } while ((uVar6 & 1) == 0);
    pauVar13 = pauVar13 + 1;
    do {
      pauVar10 = (undefined1 (*) [16])(pauVar10[-1] + 8);
      uVar6 = (**(code **)param_3)
                        (*(undefined8 *)*(undefined1 (*) [16])param_1,*(undefined8 *)*pauVar10);
    } while ((uVar6 & 1) != 0);
    if (pauVar10 <= pauVar12) break;
    uVar8 = *(undefined8 *)*pauVar12;
    *(undefined8 *)*pauVar12 = *(undefined8 *)*pauVar10;
    *(undefined8 *)*pauVar10 = uVar8;
  }
  goto LAB_00d7d6bc;
LAB_00d7d7ac:
                    /* try { // try from 00d7d7ac to 00e7d7af has its CatchHandler @ 00d7d88c */
  uVar8 = *(undefined8 *)*(undefined1 (*) [16])param_1;
                    /* try { // try from 00d7d7b0 to 00e7d7b7 has its CatchHandler @ 00d7d7e8 */
  iVar4 = iVar4 + 1;
                    /* try { // try from 00d7d7b8 to 00e7d7bf has its CatchHandler @ 00d7d7e4 */
  *(undefined8 *)*(undefined1 (*) [16])param_1 = *(undefined8 *)*pauVar13;
  *(undefined8 *)*pauVar13 = uVar8;
LAB_00d7d7c0:
                    /* try { // try from 00d7d7c0 to 00e7d7c7 has its CatchHandler @ 00d7d884 */
  pauVar10 = (undefined1 (*) [16])(*(undefined1 (*) [16])param_1 + 8);
  pauVar9 = pauVar10;
  pauVar1 = pauVar12;
                    /* try { // try from 00d7d7c8 to 00e7d7d7 has its CatchHandler @ 00d7d88c */
  if (pauVar10 < pauVar13) {
    while( true ) {
      pauVar12 = pauVar1;
      pauVar10 = (undefined1 (*) [16])(pauVar9[-1] + 8);
      do {
        pauVar9 = pauVar10;
        pauVar10 = (undefined1 (*) [16])(*pauVar9 + 8);
                    /* try { // try from 00d7d7d8 to 00e7d7db has its CatchHandler @ 00d7d7e0 */
                    /* try { // try from 00d7d7dc to 00e7d963 has its CatchHandler @ 00d7be30 */
        uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar10,*(undefined8 *)*pauVar12);
                    /* catch() { ... } // from try @ 00d7d7d8 with catch @ 00d7d7e0 */
      } while ((uVar6 & 1) != 0);
                    /* catch() { ... } // from try @ 00d7d7b8 with catch @ 00d7d7e4 */
      pauVar9 = pauVar9 + 1;
      do {
                    /* catch() { ... } // from try @ 00d7d7b0 with catch @ 00d7d7e8 */
        pauVar13 = (undefined1 (*) [16])(pauVar13[-1] + 8);
                    /* catch() { ... } // from try @ 00d7d7a4 with catch @ 00d7d7ec */
                    /* catch() { ... } // from try @ 00d7d790 with catch @ 00d7d7f0 */
                    /* catch() { ... } // from try @ 00d7d788 with catch @ 00d7d7f4 */
        uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar13,*(undefined8 *)*pauVar12);
                    /* catch() { ... } // from try @ 00d7d780 with catch @ 00d7d7f8 */
      } while ((uVar6 & 1) == 0);
                    /* catch() { ... } // from try @ 00d7d778 with catch @ 00d7d7fc */
                    /* catch() { ... } // from try @ 00d7d770 with catch @ 00d7d800 */
      if (pauVar13 < pauVar10) break;
                    /* catch() { ... } // from try @ 00d7d768 with catch @ 00d7d804 */
                    /* catch() { ... } // from try @ 00d7d760 with catch @ 00d7d808 */
      uVar8 = *(undefined8 *)*pauVar10;
                    /* catch() { ... } // from try @ 00d7d74c with catch @ 00d7d80c */
                    /* catch() { ... } // from try @ 00d7d744 with catch @ 00d7d810 */
      iVar4 = iVar4 + 1;
                    /* catch() { ... } // from try @ 00d7d730 with catch @ 00d7d814 */
      *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar13;
                    /* catch() { ... } // from try @ 00d7d728 with catch @ 00d7d818 */
      *(undefined8 *)*pauVar13 = uVar8;
      pauVar1 = pauVar13;
                    /* catch() { ... } // from try @ 00d7d720 with catch @ 00d7d81c */
      if (pauVar12 != pauVar10) {
        pauVar1 = pauVar12;
      }
    }
  }
                    /* catch() { ... } // from try @ 00d7d6e8 with catch @ 00d7d82c */
                    /* catch() { ... } // from try @ 00d7d6e0 with catch @ 00d7d830 */
                    /* catch() { ... } // from try @ 00d7d6d8 with catch @ 00d7d834 */
                    /* catch() { ... } // from try @ 00d7d6d0 with catch @ 00d7d838 */
                    /* catch() { ... } // from try @ 00d7d6cc with catch @ 00d7d83c */
                    /* catch() { ... } // from try @ 00d7d6b8 with catch @ 00d7d840 */
                    /* catch() { ... } // from try @ 00d7d6b0 with catch @ 00d7d844 */
  if ((pauVar10 != pauVar12) &&
     (uVar6 = (**(code **)param_3)(*(undefined8 *)*pauVar12,*(undefined8 *)*pauVar10),
     (uVar6 & 1) != 0)) {
                    /* catch() { ... } // from try @ 00d7d6a8 with catch @ 00d7d848 */
                    /* catch() { ... } // from try @ 00d7d6a0 with catch @ 00d7d84c */
    uVar8 = *(undefined8 *)*pauVar10;
                    /* catch() { ... } // from try @ 00d7d698 with catch @ 00d7d850 */
    iVar4 = iVar4 + 1;
                    /* catch() { ... } // from try @ 00d7d690 with catch @ 00d7d854 */
    *(undefined8 *)*pauVar10 = *(undefined8 *)*pauVar12;
                    /* catch() { ... } // from try @ 00d7d688 with catch @ 00d7d858 */
    *(undefined8 *)*pauVar12 = uVar8;
  }
                    /* catch() { ... } // from try @ 00d7d680 with catch @ 00d7d85c */
  if (iVar4 == 0) {
                    /* catch() { ... } // from try @ 00d7d66c with catch @ 00d7d860 */
                    /* catch() { ... } // from try @ 00d7d664 with catch @ 00d7d864 */
                    /* catch() { ... } // from try @ 00d7d650 with catch @ 00d7d868 */
                    /* catch() { ... } // from try @ 00d7d640 with catch @ 00d7d86c */
    bVar2 = __insertion_sort_incomplete<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                      (param_1,(Slot **)pauVar10,param_3);
                    /* catch() { ... } // from try @ 00d7d638 with catch @ 00d7d870 */
                    /* catch() { ... } // from try @ 00d7d630 with catch @ 00d7d874 */
                    /* catch() { ... } // from try @ 00d7d61c with catch @ 00d7d878 */
                    /* catch() { ... } // from try @ 00d7d614 with catch @ 00d7d87c */
                    /* catch() { ... } // from try @ 00d7d604 with catch @ 00d7d880 */
                    /* catch() { ... } // from try @ 00d7d62c with catch @ 00d7d884
                       catch() { ... } // from try @ 00d7d658 with catch @ 00d7d884
                       catch() { ... } // from try @ 00d7d674 with catch @ 00d7d884
                       catch() { ... } // from try @ 00d7d714 with catch @ 00d7d884
                       catch() { ... } // from try @ 00d7d754 with catch @ 00d7d884
                       catch() { ... } // from try @ 00d7d7c0 with catch @ 00d7d884 */
    bVar3 = __insertion_sort_incomplete<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
                      ((Slot **)(*pauVar10 + 8),param_2,param_3);
                    /* catch() { ... } // from try @ 00d7d5fc with catch @ 00d7d888 */
    if (bVar3) goto LAB_00d7da00;
    pauVar12 = (undefined1 (*) [16])(*pauVar10 + 8);
                    /* catch() { ... } // from try @ 00d7d60c with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d624 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d648 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d65c with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d678 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d6c0 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d6f0 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d718 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d738 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d758 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d798 with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d7ac with catch @ 00d7d88c
                       catch() { ... } // from try @ 00d7d7c8 with catch @ 00d7d88c */
    if (bVar2) goto LAB_00d7d6bc;
  }
                    /* catch() { ... } // from try @ 00d7d544 with catch @ 00d7d890 */
                    /* catch() { ... } // from try @ 00d7d52c with catch @ 00d7d894 */
                    /* catch() { ... } // from try @ 00d7d520 with catch @ 00d7d898 */
                    /* catch() { ... } // from try @ 00d7d4fc with catch @ 00d7d89c */
  if ((long)param_2 - (long)pauVar10 <= (long)pauVar10 - (long)param_1) {
    __sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
              ((Slot **)(*pauVar10 + 8),param_2,param_3);
    param_2 = (Slot **)pauVar10;
    goto LAB_00d7d6a8;
  }
                    /* catch() { ... } // from try @ 00d7d4ec with catch @ 00d7d8a0 */
                    /* catch() { ... } // from try @ 00d7d3b4 with catch @ 00d7d8a4 */
                    /* catch() { ... } // from try @ 00d7d328 with catch @ 00d7d8a8 */
                    /* catch() { ... } // from try @ 00d7cc68 with catch @ 00d7d8ac */
  __sort<bool(*&)(dragonBones::Slot*,dragonBones::Slot*),dragonBones::Slot**>
            (param_1,(Slot **)pauVar10,param_3);
                    /* catch() { ... } // from try @ 00d7cc60 with catch @ 00d7d8b0 */
  pauVar12 = (undefined1 (*) [16])(*pauVar10 + 8);
                    /* catch() { ... } // from try @ 00d7cc58 with catch @ 00d7d8b4 */
  goto LAB_00d7d6bc;
LAB_00d7da00:
  param_2 = (Slot **)pauVar10;
  if (bVar2) {
switchD_00d7da20_caseD_0:
                    /* try { // try from 00d7da28 to 00e7da2f has its CatchHandler @ 00d7dc40 */
                    /* try { // try from 00d7da30 to 00e7da47 has its CatchHandler @ 00d7dc20 */
    return;
  }
  goto LAB_00d7d6a8;
}

