
uint jpeg_write_raw_data(long *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  iVar2 = *(int *)((long)param_1 + 0x24);
  if (iVar2 != 0x66) {
                    /* catch() { ... } // from try @ 010deea8 with catch @ 010def3c */
    puVar4 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010dee28 with catch @ 010def40 */
                    /* catch() { ... } // from try @ 010dee1c with catch @ 010def44 */
                    /* catch() { ... } // from try @ 010dede8 with catch @ 010def48 */
    *(undefined4 *)(puVar4 + 5) = 0x15;
    *(int *)((long)puVar4 + 0x2c) = iVar2;
    (*(code *)*puVar4)(param_1);
  }
  uVar1 = *(uint *)((long)param_1 + 0x34);
  if (*(uint *)(param_1 + 0x2b) < uVar1) {
    puVar4 = (undefined8 *)param_1[2];
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = (ulong)*(uint *)(param_1 + 0x2b);
      puVar4[2] = (ulong)uVar1;
      (*(code *)*puVar4)(param_1);
    }
                    /* catch() { ... } // from try @ 010deddc with catch @ 010def80 */
    if (*(int *)(param_1[0x3e] + 0x18) != 0) {
      (**(code **)(param_1[0x3e] + 8))(param_1);
    }
    uVar1 = *(int *)((long)param_1 + 0x16c) * *(int *)((long)param_1 + 0x164);
                    /* catch() { ... } // from try @ 010dedd0 with catch @ 010defa0 */
                    /* catch() { ... } // from try @ 010dedbc with catch @ 010defa4 */
    if (param_3 < uVar1) {
                    /* catch() { ... } // from try @ 010dee54 with catch @ 010defa8 */
      puVar4 = (undefined8 *)*param_1;
                    /* catch() { ... } // from try @ 010deec4 with catch @ 010defac */
      *(undefined4 *)(puVar4 + 5) = 0x18;
      (*(code *)*puVar4)(param_1);
    }
                    /* try { // try from 010defc8 to 011df02b has its CatchHandler @ 010defc8
                       catch() { ... } // from try @ 010defc8 with catch @ 010defc8
                       catch() { ... } // from try @ 010df03c with catch @ 010defc8
                       catch() { ... } // from try @ 010df12c with catch @ 010defc8
                       catch() { ... } // from try @ 010df39c with catch @ 010defc8 */
    iVar2 = (**(code **)(param_1[0x41] + 8))(param_1,param_2);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x2b) = (int)param_1[0x2b] + uVar1;
      return uVar1;
    }
  }
  else {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7e;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
  }
  return 0;
}

