
void memcpy_by_channel_mask
               (undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,long param_5,
               long param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  if (param_2 == param_4) {
    uVar7 = CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                     CONCAT12(POPCOUNT((char)(param_2 >> 0x10)),
                              CONCAT11(POPCOUNT((char)(param_2 >> 8)),POPCOUNT((char)param_2))));
    uVar6 = NEON_uaddlv((ulong)uVar7,1);
    memcpy(param_1,param_3,(ulong)CONCAT22((short)(uVar7 >> 0x10),uVar6) * param_5 * param_6);
    return;
  }
  switch(param_5) {
  case 1:
    if (param_6 != 0) {
      do {
        param_6 = param_6 + -1;
        uVar7 = param_4 | param_2;
        puVar3 = param_1;
        while (param_1 = puVar3, uVar7 != 0) {
          while( true ) {
            uVar2 = uVar7 & -uVar7;
            uVar7 = uVar2 ^ uVar7;
            if ((uVar2 & param_2) == 0) break;
            if ((uVar2 & param_4) == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(undefined1 *)param_3;
              param_3 = (undefined4 *)((long)param_3 + 1);
            }
            param_1 = (undefined4 *)((long)puVar3 + 1);
            *(undefined1 *)puVar3 = uVar4;
            puVar3 = param_1;
            if (uVar7 == 0) goto LAB_00e8f588;
          }
          param_3 = (undefined4 *)((long)param_3 + 1);
        }
LAB_00e8f588:
      } while (param_6 != 0);
    }
    break;
  case 2:
    if (param_6 != 0) {
      do {
        param_6 = param_6 + -1;
        uVar7 = param_4 | param_2;
        puVar3 = param_1;
        while (param_1 = puVar3, uVar7 != 0) {
          while( true ) {
            uVar2 = uVar7 & -uVar7;
            uVar7 = uVar2 ^ uVar7;
            if ((uVar2 & param_2) == 0) break;
            if ((uVar2 & param_4) == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined2 *)param_3;
              param_3 = (undefined4 *)((long)param_3 + 2);
            }
            param_1 = (undefined4 *)((long)puVar3 + 2);
            *(undefined2 *)puVar3 = uVar6;
            puVar3 = param_1;
            if (uVar7 == 0) goto LAB_00e8f6e0;
          }
          param_3 = (undefined4 *)((long)param_3 + 2);
        }
LAB_00e8f6e0:
      } while (param_6 != 0);
    }
    break;
  case 3:
    if (param_6 != 0) {
      param_6 = param_6 + -1;
      uVar7 = param_4 | param_2;
      while( true ) {
        while (uVar7 != 0) {
          uVar2 = uVar7 & -uVar7;
          uVar7 = uVar2 ^ uVar7;
          if ((uVar2 & param_2) == 0) {
            param_3 = (undefined4 *)((long)param_3 + 3);
          }
          else if ((uVar2 & param_4) == 0) {
            *(undefined1 *)((long)param_1 + 2) = 0;
            *(undefined2 *)param_1 = 0;
            param_1 = (undefined4 *)((long)param_1 + 3);
          }
          else {
            puVar1 = (undefined1 *)((long)param_3 + 2);
            uVar6 = *(undefined2 *)param_3;
            param_3 = (undefined4 *)((long)param_3 + 3);
            *(undefined1 *)((long)param_1 + 2) = *puVar1;
            *(undefined2 *)param_1 = uVar6;
            param_1 = (undefined4 *)((long)param_1 + 3);
          }
        }
        if (param_6 == 0) break;
        param_6 = param_6 + -1;
        uVar7 = param_4 | param_2;
      }
    }
    break;
  case 4:
    if (param_6 != 0) {
      do {
        param_6 = param_6 + -1;
        uVar7 = param_4 | param_2;
        puVar3 = param_1;
        while (param_1 = puVar3, uVar7 != 0) {
          while( true ) {
            uVar2 = uVar7 & -uVar7;
            uVar7 = uVar2 ^ uVar7;
            if ((uVar2 & param_2) == 0) break;
            if ((uVar2 & param_4) == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = *param_3;
              param_3 = param_3 + 1;
            }
            param_1 = puVar3 + 1;
            *puVar3 = uVar5;
            puVar3 = param_1;
            if (uVar7 == 0) goto LAB_00e8f680;
          }
          param_3 = param_3 + 1;
        }
LAB_00e8f680:
      } while (param_6 != 0);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}

