
undefined4 FUN_0108aed0(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  iVar2 = *(int *)(param_2 + 0xc0);
  if ((iVar2 < 0) || (*(int *)(param_1 + 0x238) <= iVar2)) {
    uVar5 = 0;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x240);
    uVar5 = 3;
    iVar4 = (**(code **)(param_2 + 0x68))(param_2,6,&local_60,3);
    if (5 < iVar4) {
      uVar1 = -local_48;
      if (-1 < (long)local_48) {
        uVar1 = local_48;
      }
      if (uVar1 == 0) {
        uVar5 = 3;
      }
      else {
        uVar3 = FT_DivFix(1000,uVar1);
        *(undefined2 *)(param_1 + 0x88) = uVar3;
        if (uVar1 != 0x10000) {
                    /* catch() { ... } // from try @ 0108ae64 with catch @ 0108af88 */
          local_60 = FT_DivFix(local_60,uVar1);
                    /* catch() { ... } // from try @ 0108adac with catch @ 0108af8c */
                    /* catch() { ... } // from try @ 0108acf4 with catch @ 0108af90 */
                    /* catch() { ... } // from try @ 0108ac3c with catch @ 0108af94 */
                    /* catch() { ... } // from try @ 0108ab84 with catch @ 0108af98 */
          local_58 = FT_DivFix(local_58,uVar1);
                    /* catch() { ... } // from try @ 0108aacc with catch @ 0108af9c */
                    /* catch() { ... } // from try @ 0108aa14 with catch @ 0108afa0 */
                    /* catch() { ... } // from try @ 0108a9a8 with catch @ 0108afa4 */
                    /* catch() { ... } // from try @ 0108a8f0 with catch @ 0108afa8 */
          local_50 = FT_DivFix(local_50,uVar1);
                    /* catch() { ... } // from try @ 0108a838 with catch @ 0108afac */
                    /* catch() { ... } // from try @ 0108a780 with catch @ 0108afb0 */
                    /* catch() { ... } // from try @ 0108a6c8 with catch @ 0108afb4 */
                    /* catch() { ... } // from try @ 0108a658 with catch @ 0108afb8 */
          local_40 = FT_DivFix(local_40,uVar1);
                    /* catch() { ... } // from try @ 0108a5dc with catch @ 0108afbc */
                    /* catch() { ... } // from try @ 0108a570 with catch @ 0108afc0 */
                    /* catch() { ... } // from try @ 0108a500 with catch @ 0108afc4 */
          local_38 = FT_DivFix(local_38,uVar1);
                    /* catch() { ... } // from try @ 0108ae7c with catch @ 0108afcc */
                    /* catch() { ... } // from try @ 0108adc4 with catch @ 0108afd0 */
                    /* catch() { ... } // from try @ 0108ad0c with catch @ 0108afd4 */
                    /* catch() { ... } // from try @ 0108ac54 with catch @ 0108afd8 */
                    /* catch() { ... } // from try @ 0108ab9c with catch @ 0108afdc */
          local_48 = (long)local_48 >> 0x3f & 0xfffffffffffe0000U | 0x10000;
                    /* catch() { ... } // from try @ 0108aae4 with catch @ 0108afe0 */
        }
                    /* catch() { ... } // from try @ 0108aa2c with catch @ 0108afe4 */
                    /* catch() { ... } // from try @ 0108a9c0 with catch @ 0108afe8 */
                    /* catch() { ... } // from try @ 0108a908 with catch @ 0108afec */
        lVar6 = lVar6 + (long)iVar2 * 0x150;
                    /* catch() { ... } // from try @ 0108a850 with catch @ 0108aff0 */
        uVar5 = 0;
                    /* catch() { ... } // from try @ 0108a798 with catch @ 0108aff4 */
        *(undefined8 *)(lVar6 + 0x108) = local_60;
                    /* catch() { ... } // from try @ 0108a6e0 with catch @ 0108aff8 */
                    /* catch() { ... } // from try @ 0108a670 with catch @ 0108affc */
        *(undefined8 *)(lVar6 + 0x118) = local_58;
        *(ulong *)(lVar6 + 0x120) = local_48;
                    /* catch() { ... } // from try @ 0108a5f4 with catch @ 0108b000 */
                    /* catch() { ... } // from try @ 0108a588 with catch @ 0108b004 */
        *(undefined8 *)(lVar6 + 0x110) = local_50;
                    /* catch() { ... } // from try @ 0108a51c with catch @ 0108b008 */
        *(long *)(lVar6 + 0x128) = local_40 >> 0x10;
        *(long *)(lVar6 + 0x130) = local_38 >> 0x10;
      }
    }
  }
  return uVar5;
}

