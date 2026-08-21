
void FUN_0106d3c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
                    /* try { // try from 0106d3e0 to 0116d3e7 has its CatchHandler @ 0106d680 */
    lVar6 = *(long *)(param_1 + 0x360);
                    /* try { // try from 0106d3e8 to 0116d443 has its CatchHandler @ 0106d260 */
    if (*(code **)(param_1 + 0x430) != (code *)0x0) {
      (**(code **)(param_1 + 0x430))(*(undefined8 *)(param_1 + 0x428));
    }
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(param_1);
    }
    FT_Stream_ReleaseFrame(*(undefined8 *)(param_1 + 0xc0),param_1 + 0x480);
    lVar6 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x478) = 0;
    ft_mem_free(*(undefined8 *)(lVar6 + 0x38),*(undefined8 *)(param_1 + 0x4a8));
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    FT_Stream_ReleaseFrame(lVar6,param_1 + 0x488);
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x418));
                    /* try { // try from 0106d444 to 0116d44b has its CatchHandler @ 0106d668 */
    *(undefined8 *)(param_1 + 0x418) = 0;
    *(undefined8 *)(param_1 + 0x410) = 0;
                    /* try { // try from 0106d450 to 0116d457 has its CatchHandler @ 0106d6cc */
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x3f8);
    FT_Stream_ReleaseFrame(uVar2,param_1 + 0x408);
    puVar4 = *(uint **)(param_1 + 0x450);
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    *(undefined8 *)(param_1 + 0x400) = 0;
    if (puVar4 != (uint *)0x0) {
      ft_mem_free(uVar1,*(undefined8 *)(puVar4 + 2));
      puVar4[2] = 0;
      puVar4[3] = 0;
      ft_mem_free(uVar1,*(undefined8 *)(puVar4 + 4));
      lVar6 = *(long *)(puVar4 + 10);
      puVar4[4] = 0;
      puVar4[5] = 0;
      if (lVar6 != 0) {
        if (*puVar4 != 0) {
          uVar5 = 0;
          do {
            uVar3 = (ulong)uVar5;
            ft_mem_free(uVar1,*(undefined8 *)(lVar6 + uVar3 * 0x10 + 8));
            lVar6 = *(long *)(puVar4 + 10);
            uVar5 = uVar5 + 1;
            *(undefined8 *)(lVar6 + uVar3 * 0x10 + 8) = 0;
          } while (uVar5 < *puVar4);
        }
                    /* try { // try from 0106d4d8 to 0116d4df has its CatchHandler @ 0106d670 */
        ft_mem_free(uVar1);
                    /* try { // try from 0106d4e0 to 0116d523 has its CatchHandler @ 0106d260 */
        puVar4[10] = 0;
        puVar4[0xb] = 0;
      }
      ft_mem_free(uVar1,*(undefined8 *)(puVar4 + 0xe));
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      ft_mem_free(uVar1,*(undefined8 *)(puVar4 + 0x12));
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      ft_mem_free(uVar1,puVar4);
    }
    *(undefined8 *)(param_1 + 0x450) = 0;
  }
                    /* try { // try from 0106d524 to 0116d527 has its CatchHandler @ 0106d664 */
  return;
}

