
void FT_Stroker_Done(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = **(undefined8 **)(param_1 + 0xd0);
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x80));
                    /* try { // try from 010679ac to 011679af has its CatchHandler @ 01067b2c */
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x98) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xa8));
                    /* try { // try from 010679d4 to 011679ef has its CatchHandler @ 01067b68 */
    *(undefined8 *)(param_1 + 0xa8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    *(undefined1 *)(param_1 + 200) = 0;
                    /* try { // try from 010679f0 to 01167b17 has its CatchHandler @ 010676a8 */
    *(undefined8 *)(param_1 + 0xd0) = 0;
    ft_mem_free(uVar2,param_1);
    return;
  }
  return;
}

