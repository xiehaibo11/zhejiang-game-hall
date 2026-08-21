
void FUN_0108f75c(long param_1,long param_2)

{
  ulong uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
                    /* try { // try from 0108f76c to 0118f773 has its CatchHandler @ 0108f814 */
                    /* try { // try from 0108f774 to 0118f913 has its CatchHandler @ 0108f60c */
  iVar3 = (**(code **)(param_2 + 0x68))(param_2,6,&local_60,3);
  if (iVar3 < 6) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    uVar1 = -local_48;
    if (-1 < (long)local_48) {
      uVar1 = local_48;
    }
    if (uVar1 == 0) {
      *(undefined4 *)(param_2 + 0x18) = 3;
    }
    else {
      uVar2 = FT_DivFix(1000,uVar1);
      *(undefined2 *)(param_1 + 0x88) = uVar2;
      if (uVar1 != 0x10000) {
        local_60 = FT_DivFix(local_60,uVar1);
        local_58 = FT_DivFix(local_58,uVar1);
        local_50 = FT_DivFix(local_50,uVar1);
                    /* catch() { ... } // from try @ 0108f76c with catch @ 0108f814 */
        local_40 = FT_DivFix(local_40,uVar1);
                    /* catch() { ... } // from try @ 0108f744 with catch @ 0108f824 */
        local_38 = FT_DivFix(local_38,uVar1);
        local_48 = (long)local_48 >> 0x3f & 0xfffffffffffe0000U | 0x10000;
      }
      *(undefined8 *)(param_1 + 0x2a0) = local_60;
      *(undefined8 *)(param_1 + 0x2b0) = local_58;
      *(ulong *)(param_1 + 0x2b8) = local_48;
      *(undefined8 *)(param_1 + 0x2a8) = local_50;
      *(long *)(param_1 + 0x2c8) = local_38 >> 0x10;
                    /* catch() { ... } // from try @ 0108f710 with catch @ 0108f870 */
      *(long *)(param_1 + 0x2c0) = local_40 >> 0x10;
    }
  }
  return;
}

