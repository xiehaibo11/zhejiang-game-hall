
undefined8 FUN_0108c668(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 0108c670 to 0118c69b has its CatchHandler @ 0108c6bc */
  uVar1 = **(undefined8 **)(param_1 + 0x128);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  FT_GlyphLoader_Rewind(uVar1);
                    /* try { // try from 0108c69c to 0118c707 has its CatchHandler @ 0108c628 */
  return 0;
}

