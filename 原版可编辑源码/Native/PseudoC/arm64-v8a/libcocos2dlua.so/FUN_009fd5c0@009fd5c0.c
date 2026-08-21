
void FUN_009fd5c0(__jmp_buf_tag *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int local_94;
  long local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  int local_74;
  ulong local_70;
  undefined8 uStack_68;
  
                    /* try { // try from 009fd5d8 to 00afd5df has its CatchHandler @ 009fd604 */
  lVar3 = param_1[1].__jmpbuf[7];
                    /* try { // try from 009fd5e4 to 00afd5eb has its CatchHandler @ 009fd600 */
  plVar1 = param_1[1].__jmpbuf + 7;
                    /* try { // try from 009fd5ec to 00afd6a7 has its CatchHandler @ 009fd3d8 */
  lVar2 = FUN_009fb4dc(plVar1,&local_70);
                    /* catch() { ... } // from try @ 009fd4a4 with catch @ 009fd600
                       catch() { ... } // from try @ 009fd5e4 with catch @ 009fd600 */
                    /* catch() { ... } // from try @ 009fd434 with catch @ 009fd604
                       catch() { ... } // from try @ 009fd5d8 with catch @ 009fd604 */
                    /* catch() { ... } // from try @ 009fd420 with catch @ 009fd608
                       catch() { ... } // from try @ 009fd4f8 with catch @ 009fd608 */
                    /* catch() { ... } // from try @ 009fd46c with catch @ 009fd60c
                       catch() { ... } // from try @ 009fd510 with catch @ 009fd60c */
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
      param_1[1].__jmpbuf[7] = lVar2;
      *(long *)&param_1[1].__mask_was_saved = lVar4;
      lVar2 = FUN_009fd24c(plVar1,&local_94);
      if (lVar2 != 0) {
        do {
          switch(local_94 - 10U >> 3 | (local_94 - 10U) * 0x20000000) {
          case 0:
            lVar3 = *plVar1;
            lVar2 = FUN_009fb4dc(plVar1,&local_70);
            if ((lVar2 == 0) ||
               ((ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7]) < local_70))
            goto LAB_009fd944;
            *param_2 = param_1[1].__jmpbuf[7];
            lVar2 = *plVar1 + local_70;
            param_2[1] = lVar2;
            *plVar1 = lVar2;
            if (lVar2 != lVar3) break;
            goto LAB_009fd948;
          case 1:
            FUN_009fd3c8(param_1,param_2 + 3,0x58);
            lVar2 = param_2[3];
            goto LAB_009fd8f4;
          case 2:
            FUN_009fd3c8(param_1,param_2 + 6,0x40);
            lVar2 = param_2[6];
            lVar3 = *(long *)(lVar2 + -8);
            *(long *)(lVar2 + -8) = lVar3 + 1;
            FUN_009fd5c0(param_1,lVar2 + lVar3 * 0x40);
            break;
          case 3:
            FUN_009fd3c8(param_1,param_2 + 5,0x18);
            lVar2 = param_2[5];
            lVar3 = *(long *)(lVar2 + -8);
            *(long *)(lVar2 + -8) = lVar3 + 1;
            FUN_009fd95c(param_1,lVar2 + lVar3 * 0x18);
            break;
          default:
            FUN_009fd480(plVar1);
            break;
          case 5:
            FUN_009fd3c8(param_1,param_2 + 4,0x58);
            lVar2 = param_2[4];
LAB_009fd8f4:
            lVar3 = *(long *)(lVar2 + -8);
            *(long *)(lVar2 + -8) = lVar3 + 1;
            FUN_009fdbc8(param_1,lVar2 + lVar3 * 0x58);
            break;
          case 6:
            lVar3 = *plVar1;
            lVar2 = FUN_009fb4dc(plVar1,&local_70);
            if ((lVar2 == 0) ||
               (lVar2 = param_1[1].__jmpbuf[7],
               (ulong)(*(long *)&param_1[1].__mask_was_saved - lVar2) < local_70))
            goto LAB_009fd944;
            lVar4 = lVar2 + local_70;
            *plVar1 = lVar4;
            if (lVar4 != lVar3) {
              uStack_68 = *(undefined8 *)&param_1[1].__mask_was_saved;
              local_70 = *plVar1;
              param_1[1].__jmpbuf[7] = lVar2;
              *(long *)&param_1[1].__mask_was_saved = lVar4;
              while (lVar2 = FUN_009fd24c(plVar1,&local_74), lVar2 != 0) {
                if (local_74 == 0x38) {
                  lVar2 = FUN_009fd24c(plVar1,&local_80);
                  if (lVar2 == 0) goto LAB_009fd948;
                  *(undefined4 *)(param_2 + 2) = local_80;
                }
                else {
                  FUN_009fd480(plVar1);
                }
              }
LAB_009fd668:
              *(undefined8 *)&param_1[1].__mask_was_saved = uStack_68;
              *plVar1 = local_70;
              break;
            }
            goto LAB_009fd948;
          case 7:
            lVar3 = *plVar1;
            lVar2 = FUN_009fb4dc(plVar1,&local_70);
            if ((lVar2 == 0) ||
               (lVar2 = param_1[1].__jmpbuf[7],
               (ulong)(*(long *)&param_1[1].__mask_was_saved - lVar2) < local_70)) {
LAB_009fd944:
              *plVar1 = lVar3;
            }
            else {
              lVar4 = lVar2 + local_70;
              *plVar1 = lVar4;
              if (lVar4 != lVar3) {
                uStack_68 = *(undefined8 *)&param_1[1].__mask_was_saved;
                local_70 = *plVar1;
                param_1[1].__jmpbuf[7] = lVar2;
                *(long *)&param_1[1].__mask_was_saved = lVar4;
                while (lVar2 = FUN_009fd24c(plVar1,&local_74), lVar2 != 0) {
                  if (local_74 == 10) {
                    FUN_009fd3c8(param_1,param_2 + 7,0x10);
                    lVar3 = param_2[7];
                    lVar4 = *(long *)(lVar3 + -8);
                    *(long *)(lVar3 + -8) = lVar4 + 1;
                    lVar5 = param_1[1].__jmpbuf[7];
                    lVar2 = FUN_009fb4dc(plVar1,&local_80);
                    if (lVar2 == 0) {
LAB_009fd93c:
                      *plVar1 = lVar5;
                      goto LAB_009fd948;
                    }
                    if ((ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7]) <
                        CONCAT44(uStack_7c,local_80)) goto LAB_009fd93c;
                    *(long *)(lVar3 + lVar4 * 0x10) = param_1[1].__jmpbuf[7];
                    lVar2 = *plVar1 + CONCAT44(uStack_7c,local_80);
                    *(long *)(lVar3 + lVar4 * 0x10 + 8) = lVar2;
                    *plVar1 = lVar2;
                    if (lVar2 == lVar5) goto LAB_009fd948;
                  }
                  else {
                    FUN_009fd480(plVar1);
                  }
                }
                goto LAB_009fd668;
              }
            }
            goto LAB_009fd948;
          }
          lVar2 = FUN_009fd24c(plVar1,&local_94);
        } while (lVar2 != 0);
      }
                    /* try { // try from 009fd918 to 00afd94f has its CatchHandler @ 009fd918
                       catch() { ... } // from try @ 009fd918 with catch @ 009fd918
                       catch() { ... } // from try @ 009fd984 with catch @ 009fd918
                       catch() { ... } // from try @ 009fd9dc with catch @ 009fd918 */
      *(undefined8 *)&param_1[1].__mask_was_saved = uStack_88;
      *plVar1 = local_90;
      return;
    }
  }
LAB_009fd948:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009fd950 to 00afd967 has its CatchHandler @ 009fda50 */
  longjmp(param_1,1);
}

