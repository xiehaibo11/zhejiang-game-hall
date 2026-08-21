
void FUN_009fd95c(__jmp_buf_tag *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int local_94;
  long local_90;
  undefined8 uStack_88;
  int local_74;
  ulong local_70;
  undefined8 uStack_68;
  undefined4 local_58;
  undefined4 uStack_54;
  
                    /* try { // try from 009fd96c to 00afd977 has its CatchHandler @ 009fda4c */
                    /* try { // try from 009fd978 to 00afd983 has its CatchHandler @ 009fda18 */
  lVar3 = param_1[1].__jmpbuf[7];
  plVar1 = param_1[1].__jmpbuf + 7;
                    /* try { // try from 009fd984 to 00afd9c7 has its CatchHandler @ 009fd918 */
  lVar2 = FUN_009fb4dc(plVar1,&local_70);
  if ((lVar2 == 0) ||
     (lVar2 = param_1[1].__jmpbuf[7],
     (ulong)(*(long *)&param_1[1].__mask_was_saved - lVar2) < local_70)) {
    *plVar1 = lVar3;
  }
  else {
    lVar4 = lVar2 + local_70;
    *plVar1 = lVar4;
    if (lVar4 != lVar3) {
      uStack_88 = *(undefined8 *)&param_1[1].__mask_was_saved;
      local_90 = *plVar1;
                    /* try { // try from 009fd9c8 to 00afd9db has its CatchHandler @ 009fda50 */
      param_1[1].__jmpbuf[7] = lVar2;
      *(long *)&param_1[1].__mask_was_saved = lVar4;
      lVar2 = FUN_009fd24c(plVar1,&local_94);
      if (lVar2 != 0) {
                    /* try { // try from 009fd9dc to 00afda6b has its CatchHandler @ 009fd918 */
        do {
          if (local_94 == 0x12) {
            FUN_009fd3c8(param_1,param_2 + 2,0x18);
            lVar4 = param_2[2];
            lVar5 = *(long *)(lVar4 + -8);
            *(long *)(lVar4 + -8) = lVar5 + 1;
            lVar3 = param_1[1].__jmpbuf[7];
            lVar2 = FUN_009fb4dc(plVar1,&local_70);
            if ((lVar2 == 0) ||
               (lVar2 = param_1[1].__jmpbuf[7],
               (ulong)(*(long *)&param_1[1].__mask_was_saved - lVar2) < local_70)) {
LAB_009fdbb0:
              *plVar1 = lVar3;
              goto LAB_009fdbb4;
            }
            lVar6 = lVar2 + local_70;
            *plVar1 = lVar6;
            if (lVar6 == lVar3) goto LAB_009fdbb4;
            uStack_68 = *(undefined8 *)&param_1[1].__mask_was_saved;
            local_70 = *plVar1;
            param_1[1].__jmpbuf[7] = lVar2;
            *(long *)&param_1[1].__mask_was_saved = lVar6;
            lVar2 = FUN_009fd24c(plVar1,&local_74);
            if (lVar2 != 0) {
              lVar2 = lVar4 + lVar5 * 0x18;
              do {
                if (local_74 == 0x10) {
                  lVar3 = FUN_009fd24c(plVar1,&local_58);
                  if (lVar3 == 0) goto LAB_009fdbb4;
                  *(undefined4 *)(lVar2 + 0x10) = local_58;
                }
                else {
                  if (local_74 == 10) {
                    lVar6 = *plVar1;
                    lVar3 = FUN_009fb4dc(plVar1,&local_58);
                    if (lVar3 != 0) {
                      if (CONCAT44(uStack_54,local_58) <=
                          (ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7])) {
                        *(long *)(lVar4 + lVar5 * 0x18) = param_1[1].__jmpbuf[7];
                        lVar3 = *plVar1 + CONCAT44(uStack_54,local_58);
                        *(long *)(lVar2 + 8) = lVar3;
                        *plVar1 = lVar3;
                        if (lVar3 != lVar6) goto LAB_009fdaec;
                        goto LAB_009fdbb4;
                      }
                    }
                    *plVar1 = lVar6;
                    goto LAB_009fdbb4;
                  }
                  FUN_009fd480(plVar1);
                }
LAB_009fdaec:
                lVar3 = FUN_009fd24c(plVar1,&local_74);
              } while (lVar3 != 0);
            }
            *(undefined8 *)&param_1[1].__mask_was_saved = uStack_68;
            *plVar1 = local_70;
          }
          else if (local_94 == 10) {
            lVar3 = *plVar1;
                    /* catch() { ... } // from try @ 009fd978 with catch @ 009fda18 */
            lVar2 = FUN_009fb4dc(plVar1,&local_70);
            if ((lVar2 == 0) ||
               ((ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7]) < local_70))
            goto LAB_009fdbb0;
            *param_2 = param_1[1].__jmpbuf[7];
            lVar2 = *plVar1 + local_70;
                    /* catch() { ... } // from try @ 009fd96c with catch @ 009fda4c */
            param_2[1] = lVar2;
                    /* catch() { ... } // from try @ 009fd950 with catch @ 009fda50
                       catch() { ... } // from try @ 009fd9c8 with catch @ 009fda50 */
            *plVar1 = lVar2;
            if (lVar2 == lVar3) goto LAB_009fdbb4;
          }
          else {
            FUN_009fd480(plVar1);
          }
          lVar2 = FUN_009fd24c(plVar1,&local_94);
        } while (lVar2 != 0);
      }
      *(undefined8 *)&param_1[1].__mask_was_saved = uStack_88;
      *plVar1 = local_90;
      return;
    }
  }
LAB_009fdbb4:
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}

