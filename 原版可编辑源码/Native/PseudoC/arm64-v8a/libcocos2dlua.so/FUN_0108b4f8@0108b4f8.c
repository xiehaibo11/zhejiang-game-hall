
int FUN_0108b4f8(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
                    /* try { // try from 0108b4f8 to 0118b50b has its CatchHandler @ 0108b7bc */
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 == 0) {
    iVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *param_2;
    do {
      uVar6 = 0;
                    /* try { // try from 0108b50c to 0118b517 has its CatchHandler @ 0108b7a0 */
      uVar5 = uVar5 + 1;
      uVar7 = uVar2;
      while( true ) {
        uVar1 = uVar6 + (uVar7 - uVar6 >> 1);
        uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 0x10);
                    /* try { // try from 0108b524 to 0118b547 has its CatchHandler @ 0108b7bc */
        if (uVar3 == uVar5) break;
        if (uVar3 < uVar5) {
          uVar6 = uVar1 + 1;
          uVar1 = uVar7;
        }
        uVar7 = uVar1;
        if (uVar1 <= uVar6) {
          iVar4 = 0;
          if (uVar6 == 0) {
            uVar5 = 0;
          }
          else {
                    /* try { // try from 0108b554 to 0118b55b has its CatchHandler @ 0108b76c */
            uVar5 = 0;
            if (uVar6 < uVar2) {
                    /* try { // try from 0108b564 to 0118b58b has its CatchHandler @ 0108b77c */
              uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar6 * 0x10);
              iVar4 = uVar6 + 1;
            }
          }
          goto LAB_0108b588;
        }
      }
    } while (uVar1 == 0);
    iVar4 = uVar1 + 1;
  }
LAB_0108b588:
  *param_2 = uVar5;
  return iVar4;
}

