
void FUN_01078634(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x360) != 0) {
      ft_mem_free(uVar1);
      *(undefined8 *)(param_1 + 0x360) = 0;
      *(undefined4 *)(param_1 + 0x358) = 0;
    }
    FUN_0107a86c(param_1);
                    /* try { // try from 01078678 to 0117867b has its CatchHandler @ 01078718 */
    *(undefined8 *)(param_1 + 0x348) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0xf8));
                    /* try { // try from 01078688 to 01178697 has its CatchHandler @ 0107871c */
    *(undefined8 *)(param_1 + 0xf8) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x100));
                    /* try { // try from 01078698 to 0117878b has its CatchHandler @ 01078584 */
    *(undefined8 *)(param_1 + 0x100) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x290));
    *(undefined8 *)(param_1 + 0x290) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x288));
    *(undefined8 *)(param_1 + 0x288) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x280));
    *(undefined8 *)(param_1 + 0x280) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x268));
    *(undefined8 *)(param_1 + 0x268) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x270));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01078678 with catch @ 01078718
                        */
    *(undefined8 *)(param_1 + 0x270) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01078688 with catch @ 0107871c
                        */
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x248));
    *(undefined8 *)(param_1 + 0x248) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x250));
    *(undefined8 *)(param_1 + 0x250) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 600));
    *(undefined8 *)(param_1 + 600) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x238));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01078620 with catch @ 01078750
                        */
    *(undefined8 *)(param_1 + 0x238) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x240));
    *(undefined8 *)(param_1 + 0x240) = 0;
    ft_mem_free(uVar1,*(undefined8 *)(param_1 + 0x218));
    lVar2 = *(long *)(param_1 + 0x310);
    *(undefined8 *)(param_1 + 0x218) = 0;
    if (lVar2 != 0) {
      ft_mem_free(uVar1,*(undefined8 *)(lVar2 + 0x48));
      *(undefined8 *)(lVar2 + 0x48) = 0;
      *(undefined4 *)(lVar2 + 0x50) = 0;
      ft_mem_free(uVar1,*(undefined8 *)(lVar2 + 0x38));
      *(undefined8 *)(lVar2 + 0x38) = 0;
      *(undefined4 *)(lVar2 + 0x40) = 0;
      ft_mem_free(uVar1,lVar2);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

