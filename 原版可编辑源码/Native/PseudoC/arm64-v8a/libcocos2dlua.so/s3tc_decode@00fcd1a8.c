
/* s3tc_decode(unsigned char*, unsigned char*, int, int, S3TCDecodeFlag) */

void s3tc_decode(undefined8 *param_1,long param_2,int param_3,int param_4,int param_5)

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
                    /* try { // try from 00fcd25c to 010cd25f has its CatchHandler @ 00fcd3b0 */
          if (param_5 == 5) {
            uVar6 = 5;
LAB_00fcd23c:
            uVar4 = 1;
            uVar5 = *local_58;
            local_58 = local_58 + 1;
LAB_00fcd24c:
            FUN_00fcd2c0(&local_58,param_2,param_3,uVar4,uVar5,uVar6);
          }
          else {
            if (param_5 == 3) {
              uVar6 = 3;
              goto LAB_00fcd23c;
            }
            if (param_5 == 1) {
              uVar6 = 1;
              uVar4 = 0;
              uVar5 = 0;
              goto LAB_00fcd24c;
            }
          }
          iVar3 = iVar3 + -1;
          param_2 = param_2 + 0x10;
        } while (iVar3 != 0);
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + (long)(param_3 * 3) * 4;
                    /* catch() { ... } // from try @ 00fcd30c with catch @ 00fcd218
                       catch() { ... } // from try @ 00fcd38c with catch @ 00fcd218 */
    } while (iVar7 != iVar1 >> 2);
  }
                    /* try { // try from 00fcd2ac to 010cd2b7 has its CatchHandler @ 00fcd3b4 */
  return;
}

