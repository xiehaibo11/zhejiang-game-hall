
void FUN_0108f218(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 0108f224 to 0118f233 has its CatchHandler @ 0108f5fc */
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 800) != 0) {
      FT_Done_Face();
    }
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xf8));
    *(undefined8 *)(param_1 + 0xf8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x100));
                    /* try { // try from 0108f260 to 0118f273 has its CatchHandler @ 0108f5a8 */
    *(undefined8 *)(param_1 + 0x100) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
                    /* try { // try from 0108f274 to 0118f27f has its CatchHandler @ 0108f598 */
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x110));
                    /* try { // try from 0108f280 to 0118f2e3 has its CatchHandler @ 0108f1ec */
    *(undefined8 *)(param_1 + 0x110) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x290));
    *(undefined8 *)(param_1 + 0x290) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x288));
    *(undefined8 *)(param_1 + 0x288) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x280));
    *(undefined8 *)(param_1 + 0x280) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
                    /* try { // try from 0108f2e4 to 0118f2f3 has its CatchHandler @ 0108f594 */
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x238));
    *(undefined8 *)(param_1 + 0x238) = 0;
                    /* try { // try from 0108f2f4 to 0118f303 has its CatchHandler @ 0108f568 */
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x240));
    *(undefined8 *)(param_1 + 0x240) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x218));
    *(undefined8 *)(param_1 + 0x218) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x310));
    *(undefined8 *)(param_1 + 0x310) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x378));
                    /* try { // try from 0108f328 to 0118f33b has its CatchHandler @ 0108f51c */
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

