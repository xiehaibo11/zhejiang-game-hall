
undefined8 FUN_0108b440(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(*param_1 + 0x248);
  *(uint *)(param_1 + 3) = uVar1;
  puVar2 = *(uint **)(*param_1 + 600);
  param_1[4] = (long)puVar2;
  if (uVar1 < 2) {
    return 0;
  }
                    /* try { // try from 0108b45c to 0118b46b has its CatchHandler @ 0108b7a8 */
  uVar3 = 1;
  uVar4 = *puVar2;
  do {
    puVar2 = puVar2 + 4;
    if (*puVar2 <= uVar4) {
      return 8;
    }
                    /* try { // try from 0108b470 to 0118b47b has its CatchHandler @ 0108b7a4 */
    uVar3 = uVar3 + 1;
    uVar4 = *puVar2;
  } while (uVar3 < uVar1);
                    /* try { // try from 0108b488 to 0118b4ab has its CatchHandler @ 0108b7bc */
  return 0;
}

