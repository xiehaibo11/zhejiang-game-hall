
void FUN_0108a6e8(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 600);
                    /* try { // try from 0108a708 to 0118a77f has its CatchHandler @ 0108a4c4 */
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    if (lVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x238);
      if (0 < iVar1) {
        lVar5 = 8;
        lVar6 = 1;
        puVar2 = *(undefined8 **)(lVar4 + 8);
        while( true ) {
          if (puVar2 != (undefined8 *)0x0) {
            ft_mem_free(uVar3,*puVar2);
            **(undefined8 **)(lVar4 + lVar5) = 0;
            ft_mem_free(uVar3,*(undefined8 *)(lVar4 + lVar5));
            *(undefined8 *)(lVar4 + lVar5) = 0;
            iVar1 = *(int *)(param_1 + 0x238);
          }
          if (iVar1 <= lVar6) break;
          lVar4 = *(long *)(param_1 + 600);
          lVar5 = lVar5 + 0x10;
          lVar6 = lVar6 + 1;
          puVar2 = *(undefined8 **)(lVar4 + lVar5);
        }
        lVar4 = *(long *)(param_1 + 600);
      }
                    /* try { // try from 0108a780 to 0118a793 has its CatchHandler @ 0108afb0 */
      ft_mem_free(uVar3,lVar4);
      *(undefined8 *)(param_1 + 600) = 0;
    }
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x138));
                    /* try { // try from 0108a798 to 0118a7bf has its CatchHandler @ 0108aff4 */
    *(undefined8 *)(param_1 + 0x138) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x140));
    *(undefined8 *)(param_1 + 0x140) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
                    /* try { // try from 0108a7c0 to 0118a837 has its CatchHandler @ 0108a4c4 */
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x240));
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined4 *)(param_1 + 0x238) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x108));
    *(undefined8 *)(param_1 + 0x108) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x268));
    *(undefined8 *)(param_1 + 0x268) = 0;
                    /* try { // try from 0108a838 to 0118a84b has its CatchHandler @ 0108afac */
    ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x270));
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
                    /* try { // try from 0108a850 to 0118a877 has its CatchHandler @ 0108aff0 */
  return;
}

