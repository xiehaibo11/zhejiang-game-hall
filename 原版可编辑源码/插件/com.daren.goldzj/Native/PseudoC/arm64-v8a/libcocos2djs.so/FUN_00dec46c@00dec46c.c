
void FUN_00dec46c(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (0 < (int)param_2) {
    uVar4 = (ulong)param_2;
    if (param_3 == 0) {
      do {
        uVar5 = *param_1;
        uVar1 = uVar5 >> 0x18;
        if (uVar1 < 0xff) {
          if (uVar1 == 0) {
            uVar5 = 0;
          }
          else {
            iVar2 = uVar1 * 0x10101;
            uVar5 = uVar5 & 0xff000000 | iVar2 * (uVar5 & 0xff) + 0x800000 >> 0x18 |
                    iVar2 * (uVar5 >> 8 & 0xff) + 0x800000 >> 0x10 & 0xff00 |
                    iVar2 * (uVar5 >> 0x10 & 0xff) + 0x800000 >> 8 & 0xff0000;
          }
          *param_1 = uVar5;
        }
        uVar4 = uVar4 - 1;
        param_1 = param_1 + 1;
      } while (uVar4 != 0);
    }
    else {
      do {
        uVar5 = *param_1;
        uVar1 = uVar5 >> 0x18;
        if (uVar1 < 0xff) {
          if (uVar1 == 0) {
            uVar5 = 0;
          }
          else {
            uVar3 = 0;
            if (uVar1 != 0) {
              uVar3 = 0xff000000 / uVar1;
            }
            uVar5 = uVar5 & 0xff000000 | uVar3 * (uVar5 & 0xff) + 0x800000 >> 0x18 |
                    uVar3 * (uVar5 >> 8 & 0xff) + 0x800000 >> 0x10 & 0xff00 |
                    uVar3 * (uVar5 >> 0x10 & 0xff) + 0x800000 >> 8 & 0xff0000;
          }
          *param_1 = uVar5;
        }
        uVar4 = uVar4 - 1;
        param_1 = param_1 + 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

