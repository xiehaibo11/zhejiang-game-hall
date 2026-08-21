
void FUN_0108c6a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)(param_1 + 0x158);
                    /* catch() { ... } // from try @ 0108c670 with catch @ 0108c6bc */
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x150));
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
                    /* catch() { ... } // from try @ 0108c64c with catch @ 0108c6ec */
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}

