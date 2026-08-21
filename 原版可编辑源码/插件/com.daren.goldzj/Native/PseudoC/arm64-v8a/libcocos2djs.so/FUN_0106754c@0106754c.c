
void FUN_0106754c(uint param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0:
    goto switchD_01067574_caseD_0;
  case 1:
  case 2:
  case 3:
    goto switchD_01067574_caseD_1;
  case 4:
  case 5:
  case 6:
    goto switchD_01067574_caseD_4;
  case 7:
  case 8:
  case 9:
    goto switchD_01067574_caseD_7;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    goto switchD_01067574_caseD_a;
  case 0xe:
  case 0xf:
  case 0x10:
    goto switchD_01067574_caseD_e;
  case 0x11:
  case 0x12:
  case 0x13:
    goto switchD_01067574_caseD_11;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    goto switchD_01067574_caseD_14;
  case 0x18:
  case 0x19:
  case 0x1a:
    goto switchD_01067574_caseD_18;
  case 0x1b:
  case 0x1c:
  case 0x1d:
    goto switchD_01067574_caseD_1b;
  case 0x1e:
  case 0x1f:
  case 0x20:
    break;
  default:
    *param_3 = 0;
    *param_4 = 0;
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (999999999 < param_1) {
    uVar2 = 1000000000;
    uVar1 = 9;
    goto LAB_01067674;
  }
switchD_01067574_caseD_1b:
  if (param_1 < 100000000) {
switchD_01067574_caseD_18:
    if (param_1 < 10000000) {
switchD_01067574_caseD_14:
      if (param_1 < 1000000) {
switchD_01067574_caseD_11:
        if (param_1 >> 5 < 0xc35) {
switchD_01067574_caseD_e:
          if (param_1 >> 4 < 0x271) {
switchD_01067574_caseD_a:
            if (param_1 < 1000) {
switchD_01067574_caseD_7:
              if (param_1 < 100) {
switchD_01067574_caseD_4:
                if (param_1 < 10) {
switchD_01067574_caseD_1:
                  if (param_1 == 0) {
switchD_01067574_caseD_0:
                    uVar2 = 0;
                    uVar1 = 0xffffffff;
                  }
                  else {
                    uVar1 = 0;
                    uVar2 = 1;
                  }
                }
                else {
                  uVar1 = 1;
                  uVar2 = 10;
                }
              }
              else {
                uVar1 = 2;
                uVar2 = 100;
              }
            }
            else {
              uVar1 = 3;
              uVar2 = 1000;
            }
          }
          else {
            uVar1 = 4;
            uVar2 = 10000;
          }
        }
        else {
          uVar2 = 100000;
          uVar1 = 5;
        }
      }
      else {
        uVar2 = 1000000;
        uVar1 = 6;
      }
    }
    else {
      uVar2 = 10000000;
      uVar1 = 7;
    }
  }
  else {
    uVar2 = 100000000;
    uVar1 = 8;
  }
LAB_01067674:
  *param_3 = uVar2;
  *param_4 = uVar1;
  return;
}

