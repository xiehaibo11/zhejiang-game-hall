
/* atitc_decode(unsigned char*, unsigned char*, int, int, ATITCDecodeFlag) */

void atitc_decode(undefined8 *param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *local_58;
  
  iVar1 = param_4 + 3;
  if (-1 < param_4) {
    iVar1 = param_4;
  }
  if (3 < param_4) {
    iVar2 = param_3 + 3;
    if (-1 < param_3) {
      iVar2 = param_3;
    }
    iVar7 = 0;
    local_58 = param_1;
    do {
      iVar3 = iVar2 >> 2;
      if (3 < param_3) {
        do {
          if (param_5 == 5) {
            uVar6 = 5;
LAB_00fc29a0:
            uVar4 = 1;
            uVar5 = *local_58;
            local_58 = local_58 + 1;
LAB_00fc29b0:
            FUN_00fc2a24(&local_58,param_2,param_3,uVar4,uVar5,uVar6);
          }
          else {
            if (param_5 == 3) {
              uVar6 = 3;
              goto LAB_00fc29a0;
            }
            if (param_5 == 1) {
              uVar6 = 1;
              uVar4 = 0;
              uVar5 = 0;
              goto LAB_00fc29b0;
            }
          }
          iVar3 = iVar3 + -1;
          param_2 = param_2 + 0x10;
        } while (iVar3 != 0);
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + (long)(param_3 * 3) * 4;
    } while (iVar7 != iVar1 >> 2);
  }
  return;
}

