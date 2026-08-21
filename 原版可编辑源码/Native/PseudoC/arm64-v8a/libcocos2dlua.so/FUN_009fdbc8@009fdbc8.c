
void FUN_009fdbc8(__jmp_buf_tag *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_64;
  long local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined8 uStack_48;
  int local_38;
  undefined4 local_34;
  
  lVar4 = param_1[1].__jmpbuf[7];
  plVar1 = param_1[1].__jmpbuf + 7;
  lVar3 = FUN_009fb4dc(plVar1,&local_50);
  if ((lVar3 == 0) ||
     (lVar3 = param_1[1].__jmpbuf[7],
     (ulong)(*(long *)&param_1[1].__mask_was_saved - lVar3) < local_50)) {
    *plVar1 = lVar4;
  }
  else {
    lVar2 = lVar3 + local_50;
    *plVar1 = lVar2;
    if (lVar2 != lVar4) {
      uStack_58 = *(undefined8 *)&param_1[1].__mask_was_saved;
      local_60 = *plVar1;
      param_1[1].__jmpbuf[7] = lVar3;
      *(long *)&param_1[1].__mask_was_saved = lVar2;
      *(undefined4 *)(param_2 + 10) = 0xffffffff;
      lVar3 = FUN_009fd24c(plVar1,&local_64);
joined_r0x009fdc44:
      if (lVar3 == 0) {
        *(undefined8 *)&param_1[1].__mask_was_saved = uStack_58;
        *plVar1 = local_60;
        return;
      }
      switch(local_64) {
      case 10:
        lVar4 = *plVar1;
                    /* try { // try from 009fdc98 to 00afdcbf has its CatchHandler @ 009fdd14 */
        lVar3 = FUN_009fb4dc(plVar1,&local_50);
        if ((lVar3 != 0) &&
           (local_50 <= (ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7]))) {
          *param_2 = param_1[1].__jmpbuf[7];
                    /* try { // try from 009fdcc0 to 00afdd27 has its CatchHandler @ 009fdc48 */
          lVar3 = *plVar1 + local_50;
          param_2[1] = lVar3;
LAB_009fdc54:
          *plVar1 = lVar3;
          if (lVar3 != lVar4) goto LAB_009fdc60;
          goto LAB_009fdeb8;
        }
        break;
      default:
        FUN_009fd480(plVar1);
        goto LAB_009fdc60;
      case 0x12:
        lVar4 = *plVar1;
        lVar3 = FUN_009fb4dc(plVar1,&local_50);
        if ((lVar3 != 0) &&
           (local_50 <= (ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7]))) {
          param_2[4] = param_1[1].__jmpbuf[7];
          lVar3 = *plVar1 + local_50;
          param_2[5] = lVar3;
          goto LAB_009fdc54;
        }
        break;
      case 0x18:
        lVar3 = FUN_009fd24c(plVar1,&local_50);
        if (lVar3 != 0) {
          *(int *)(param_2 + 8) = (int)local_50;
          goto LAB_009fdc60;
        }
        goto LAB_009fdeb8;
      case 0x20:
        lVar3 = FUN_009fd24c(plVar1,&local_50);
        if (lVar3 != 0) {
          *(int *)((long)param_2 + 0x44) = (int)local_50;
          goto LAB_009fdc60;
        }
        goto LAB_009fdeb8;
      case 0x28:
        lVar3 = FUN_009fd24c(plVar1,&local_50);
        if (lVar3 != 0) {
          *(int *)(param_2 + 9) = (int)local_50;
          goto LAB_009fdc60;
        }
        goto LAB_009fdeb8;
      case 0x32:
        lVar4 = *plVar1;
        lVar3 = FUN_009fb4dc(plVar1,&local_50);
        if ((lVar3 != 0) &&
           (local_50 <= (ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7]))) {
          param_2[2] = param_1[1].__jmpbuf[7];
                    /* catch() { ... } // from try @ 009fdc98 with catch @ 009fdd14 */
          lVar3 = *plVar1 + local_50;
          param_2[3] = lVar3;
          goto LAB_009fdc54;
        }
        break;
      case 0x3a:
        lVar4 = *plVar1;
        lVar3 = FUN_009fb4dc(plVar1,&local_50);
        if ((lVar3 != 0) &&
           (local_50 <= (ulong)(*(long *)&param_1[1].__mask_was_saved - param_1[1].__jmpbuf[7]))) {
          param_2[6] = param_1[1].__jmpbuf[7];
          lVar3 = *plVar1 + local_50;
          param_2[7] = lVar3;
          goto LAB_009fdc54;
        }
        break;
      case 0x42:
        lVar4 = *plVar1;
        lVar3 = FUN_009fb4dc(plVar1,&local_50);
        if ((lVar3 != 0) &&
           (lVar3 = param_1[1].__jmpbuf[7],
           local_50 <= (ulong)(*(long *)&param_1[1].__mask_was_saved - lVar3))) {
          lVar2 = lVar3 + local_50;
          *plVar1 = lVar2;
          if (lVar2 != lVar4) {
            uStack_48 = *(undefined8 *)&param_1[1].__mask_was_saved;
            local_50 = *plVar1;
            param_1[1].__jmpbuf[7] = lVar3;
            *(long *)&param_1[1].__mask_was_saved = lVar2;
            while (lVar3 = FUN_009fd24c(plVar1,&local_38), lVar3 != 0) {
              if (local_38 == 0x10) {
                lVar3 = FUN_009fd24c(plVar1,&local_34);
                if (lVar3 == 0) goto LAB_009fdeb8;
                *(undefined4 *)(param_2 + 10) = local_34;
              }
              else {
                FUN_009fd480(plVar1);
              }
            }
            *(undefined8 *)&param_1[1].__mask_was_saved = uStack_48;
            *plVar1 = local_50;
            goto LAB_009fdc60;
          }
          goto LAB_009fdeb8;
        }
        break;
      case 0x48:
        lVar3 = FUN_009fd24c(plVar1,&local_50);
        if (lVar3 == 0) goto LAB_009fdeb8;
        *(int *)((long)param_2 + 0x4c) = (int)local_50 + 1;
LAB_009fdc60:
        lVar3 = FUN_009fd24c(plVar1,&local_64);
        goto joined_r0x009fdc44;
      }
      *plVar1 = lVar4;
    }
  }
LAB_009fdeb8:
                    /* WARNING: Subroutine does not return */
  longjmp(param_1,1);
}

