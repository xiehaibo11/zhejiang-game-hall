
void FUN_0107a86c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  
  puVar6 = *(uint **)(param_1 + 0x348);
  if (puVar6 != (uint *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0xb8);
    uVar1 = *puVar6;
    uVar7 = (ulong)uVar1;
    uVar2 = puVar6[1];
    uVar5 = (ulong)uVar2;
    ft_mem_free(uVar4,*(undefined8 *)(puVar6 + 10));
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    if (1 < uVar1) {
      memset(puVar6 + 0xc,0,(ulong)(uVar1 - 2) * 8 + 8);
    }
    ft_mem_free(uVar4,*(undefined8 *)(puVar6 + 0x6a));
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    ft_mem_free(uVar4,*(undefined8 *)(puVar6 + 0x48));
                    /* try { // try from 0107a8e4 to 0117a97f has its CatchHandler @ 0107a8e4
                       catch(type#1 @ 00000000) { ... } // from try @ 0107a8e4 with catch @ 0107a8e4
                       catch(type#1 @ 00000000) { ... } // from try @ 0107a9f8 with catch @ 0107a8e4
                        */
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    ft_mem_free(uVar4,*(undefined8 *)(puVar6 + 0x8e));
    puVar6[0x8e] = 0;
    puVar6[0x8f] = 0;
    if (uVar1 != 0) {
      puVar3 = puVar6 + 0x46;
      do {
        puVar3[0x22] = 0;
        puVar3[0x23] = 0;
        puVar3[0] = 0;
        puVar3[1] = 0;
        puVar3[0x46] = 0;
        puVar3[0x47] = 0;
        uVar7 = uVar7 - 1;
        puVar3 = puVar3 + 2;
      } while (uVar7 != 0);
    }
    ft_mem_free(uVar4,*(undefined8 *)(puVar6 + 0x42));
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    uVar7 = uVar5;
    puVar3 = puVar6;
    if (uVar2 != 0) {
      do {
        puVar3 = puVar3 + 2;
        ft_mem_free(uVar4,*(undefined8 *)puVar3);
        uVar7 = uVar7 - 1;
        puVar3[0] = 0;
        puVar3[1] = 0;
      } while (uVar7 != 0);
      if (uVar2 != 0) {
        puVar6 = puVar6 + 0x2c;
        do {
          ft_mem_free(uVar4,*(undefined8 *)puVar6);
          puVar6[0] = 0;
          puVar6[1] = 0;
          *(undefined1 *)(puVar6 + -2) = 0;
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 6;
        } while (uVar5 != 0);
      }
    }
    ft_mem_free(uVar4,*(undefined8 *)(param_1 + 0x348));
    *(undefined8 *)(param_1 + 0x348) = 0;
  }
                    /* try { // try from 0107a980 to 0117a987 has its CatchHandler @ 0107aab0 */
  return;
}

