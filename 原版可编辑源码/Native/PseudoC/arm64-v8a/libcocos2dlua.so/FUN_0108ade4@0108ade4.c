
int FUN_0108ade4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  int local_24;
  
                    /* try { // try from 0108adec to 0118ae63 has its CatchHandler @ 0108a4c4 */
  uVar9 = *(undefined8 *)(param_1 + 0xb8);
  local_24 = 0;
  uVar1 = (**(code **)(param_2 + 0x48))(param_2);
  if (*(long *)(param_1 + 0x240) != 0) {
    return 0;
  }
  lVar2 = ft_mem_realloc(uVar9,0x150,0,uVar1,0,&local_24);
  *(long *)(param_1 + 0x240) = lVar2;
  if (local_24 == 0) {
    iVar8 = (int)uVar1;
    *(int *)(param_1 + 0x238) = iVar8;
    if (0 < iVar8) {
      uVar3 = (ulong)iVar8;
      if (uVar3 < 2) {
        uVar4 = 0;
      }
      else {
                    /* try { // try from 0108ae64 to 0118ae77 has its CatchHandler @ 0108af88 */
        uVar4 = uVar3 & 0xfffffffffffffffe;
        uVar6 = uVar4;
        lVar7 = lVar2;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)(lVar7 + 4) = 4;
                    /* try { // try from 0108ae7c to 0118aea3 has its CatchHandler @ 0108afcc */
            *(undefined4 *)(lVar7 + 0x154) = 4;
            uVar6 = uVar6 - 2;
            lVar7 = lVar7 + 0x2a0;
          } while (uVar6 != 0);
          if (uVar3 == uVar4) {
            return 0;
          }
        }
      }
      puVar5 = (undefined4 *)(lVar2 + uVar4 * 0x150 + 4);
      do {
                    /* try { // try from 0108aea4 to 0118b037 has its CatchHandler @ 0108a4c4 */
        uVar4 = uVar4 + 1;
        *puVar5 = 4;
        puVar5 = puVar5 + 0x54;
      } while ((long)uVar4 < (long)uVar3);
    }
    return 0;
  }
  return local_24;
}

