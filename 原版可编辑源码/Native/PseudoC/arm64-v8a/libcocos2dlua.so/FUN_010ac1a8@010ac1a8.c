
void FUN_010ac1a8(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int local_38;
  int local_34;
  
  if (*(int *)(param_1 + 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 2) == 1) {
                    /* try { // try from 010ac1d8 to 011ac1df has its CatchHandler @ 010ac498 */
    uVar2 = *(uint *)(param_1 + 5);
    uVar4 = *param_1;
                    /* try { // try from 010ac1e0 to 011ac20b has its CatchHandler @ 010abeb4 */
    if (uVar2 != 0) {
      *(undefined4 *)(param_1[6] + (ulong)uVar2 * 0x18 + -8) = param_2;
    }
    uVar1 = uVar2 + 1;
    if (*(uint *)((long)param_1 + 0x2c) < uVar1) {
      local_38 = 0;
                    /* try { // try from 010ac20c to 011ac217 has its CatchHandler @ 010ac4ac */
      uVar2 = uVar2 + 8 & 0xfffffff8;
                    /* try { // try from 010ac224 to 011ac22f has its CatchHandler @ 010ac434 */
      lVar3 = ft_mem_realloc(uVar4,0x18,*(uint *)((long)param_1 + 0x2c),uVar2,param_1[6],&local_38);
      param_1[6] = lVar3;
      if (local_38 != 0) goto LAB_010ac240;
      *(uint *)((long)param_1 + 0x2c) = uVar2;
    }
    else {
      lVar3 = param_1[6];
    }
                    /* try { // try from 010ac24c to 011ac24f has its CatchHandler @ 010ac42c */
    lVar3 = lVar3 + (ulong)uVar1 * 0x18;
    *(undefined4 *)(lVar3 + -0x18) = 0;
    *(undefined4 *)(lVar3 + -8) = 0;
    uVar2 = *(uint *)(param_1 + 0xb);
    *(uint *)(param_1 + 5) = uVar1;
    if (uVar2 != 0) {
                    /* try { // try from 010ac270 to 011ac273 has its CatchHandler @ 010ac428 */
      *(undefined4 *)(param_1[0xc] + (ulong)uVar2 * 0x18 + -8) = param_2;
    }
    uVar1 = uVar2 + 1;
    if (*(uint *)((long)param_1 + 0x5c) < uVar1) {
      local_34 = 0;
                    /* try { // try from 010ac290 to 011ac293 has its CatchHandler @ 010ac424 */
      uVar2 = uVar2 + 8 & 0xfffffff8;
      lVar3 = ft_mem_realloc(uVar4,0x18,*(uint *)((long)param_1 + 0x5c),uVar2,param_1[0xc],&local_34
                            );
      param_1[0xc] = lVar3;
                    /* try { // try from 010ac2b4 to 011ac2b7 has its CatchHandler @ 010ac420 */
      local_38 = local_34;
      if (local_34 != 0) goto LAB_010ac240;
      *(uint *)((long)param_1 + 0x5c) = uVar2;
    }
    else {
      lVar3 = param_1[0xc];
    }
                    /* try { // try from 010ac2c8 to 011ac2df has its CatchHandler @ 010ac430 */
    lVar3 = lVar3 + (ulong)uVar1 * 0x18;
    *(undefined4 *)(lVar3 + -0x18) = 0;
    *(undefined4 *)(lVar3 + -8) = 0;
    *(uint *)(param_1 + 0xb) = uVar1;
  }
  else {
    local_38 = 6;
LAB_010ac240:
    *(int *)(param_1 + 1) = local_38;
  }
                    /* try { // try from 010ac2e0 to 011ac3f7 has its CatchHandler @ 010abeb4 */
  return;
}

