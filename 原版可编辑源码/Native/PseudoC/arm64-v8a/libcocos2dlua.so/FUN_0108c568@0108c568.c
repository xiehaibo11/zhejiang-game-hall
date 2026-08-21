
void FUN_0108c568(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x10);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x208));
    *(undefined8 *)(param_1 + 0x208) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x210));
    *(undefined8 *)(param_1 + 0x210) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
                    /* try { // try from 0108c5c8 to 0118c5e3 has its CatchHandler @ 0108c5c8
                       catch() { ... } // from try @ 0108c5c8 with catch @ 0108c5c8
                       catch() { ... } // from try @ 0108c5ec with catch @ 0108c5c8 */
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x200));
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
                    /* try { // try from 0108c5e4 to 0118c5eb has its CatchHandler @ 0108c60c */
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x228));
                    /* try { // try from 0108c5ec to 0118c627 has its CatchHandler @ 0108c5c8 */
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
                    /* catch() { ... } // from try @ 0108c5e4 with catch @ 0108c60c */
    *(undefined8 *)(param_1 + 0x250) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x238));
    plVar2 = *(long **)(param_1 + 0x268);
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    while (plVar2 != (long *)0x0) {
                    /* try { // try from 0108c628 to 0118c64b has its CatchHandler @ 0108c628
                       catch() { ... } // from try @ 0108c628 with catch @ 0108c628
                       catch() { ... } // from try @ 0108c69c with catch @ 0108c628 */
      plVar2 = (long *)*plVar2;
      ft_mem_free(uVar1);
    }
    *(undefined4 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
                    /* try { // try from 0108c64c to 0118c657 has its CatchHandler @ 0108c6ec */
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

