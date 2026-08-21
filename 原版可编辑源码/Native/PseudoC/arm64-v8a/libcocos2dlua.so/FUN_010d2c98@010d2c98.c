
int FUN_010d2c98(long param_1,int param_2,undefined8 param_3,int *param_4,long param_5,
                ulong *param_6)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_468 [1024];
  long local_68;
  
                    /* try { // try from 010d2ca0 to 011d2ca7 has its CatchHandler @ 010d3570 */
                    /* try { // try from 010d2ca8 to 011d2d07 has its CatchHandler @ 010d27c8 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(int *)(param_1 + 0x170) != param_2) {
                    /* try { // try from 010d2d68 to 011d2d6f has its CatchHandler @ 010d3568 */
                    /* try { // try from 010d2d70 to 011d2dc7 has its CatchHandler @ 010d27c8 */
    iVar5 = -2;
    *(char **)(param_1 + 0x1a8) = "zstream unclaimed";
    goto LAB_010d2e2c;
  }
  uVar6 = *param_6;
  iVar5 = *param_4;
  lVar1 = param_1 + 0x178;
  *(undefined8 *)(param_1 + 0x178) = param_3;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (param_5 == 0) {
    *(int *)(param_1 + 0x180) = iVar5;
    uVar2 = uVar6;
    if (0x3ff < uVar6) {
      uVar2 = 0x400;
    }
    lVar7 = uVar6 - uVar2;
    *(undefined1 **)(param_1 + 400) = auStack_468;
    *(int *)(param_1 + 0x198) = (int)uVar2;
    iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
    if (iVar5 == 0) {
      do {
        *(undefined1 **)(param_1 + 400) = auStack_468;
        uVar6 = lVar7 + (ulong)*(uint *)(param_1 + 0x198);
                    /* try { // try from 010d2dc8 to 011d2dcf has its CatchHandler @ 010d3564 */
        uVar2 = uVar6;
        if (0x3ff < uVar6) {
          uVar2 = 0x400;
        }
                    /* try { // try from 010d2dd0 to 011d2e27 has its CatchHandler @ 010d27c8 */
        lVar7 = uVar6 - uVar2;
        *(int *)(param_1 + 0x198) = (int)uVar2;
        iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
      } while (iVar5 == 0);
      goto LAB_010d2dec;
    }
LAB_010d2df0:
    *(undefined8 *)(param_1 + 400) = 0;
  }
  else {
    *(int *)(param_1 + 0x180) = iVar5;
    uVar2 = uVar6;
                    /* try { // try from 010d2d08 to 011d2d0f has its CatchHandler @ 010d356c */
    if (0xfffffffe < uVar6) {
      uVar2 = 0xffffffff;
    }
    lVar7 = uVar6 - uVar2;
                    /* try { // try from 010d2d10 to 011d2d67 has its CatchHandler @ 010d27c8 */
    *(long *)(param_1 + 400) = param_5;
    *(int *)(param_1 + 0x198) = (int)uVar2;
    iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
    if (iVar5 == 0) {
      do {
        uVar6 = lVar7 + (ulong)*(uint *)(param_1 + 0x198);
        uVar2 = uVar6;
        if (0xfffffffe < uVar6) {
          uVar2 = 0xffffffff;
        }
        lVar7 = uVar6 - uVar2;
        *(int *)(param_1 + 0x198) = (int)uVar2;
        iVar5 = inflate(lVar1,(ulong)(lVar7 == 0) << 2);
      } while (iVar5 == 0);
LAB_010d2dec:
      if (param_5 == 0) goto LAB_010d2df0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x180);
  lVar7 = lVar7 + (ulong)*(uint *)(param_1 + 0x198);
  if (lVar7 != 0) {
    *param_6 = *param_6 - lVar7;
  }
  if (iVar3 != 0) {
    *param_4 = *param_4 - iVar3;
  }
                    /* try { // try from 010d2e28 to 011d2e2f has its CatchHandler @ 010d3560 */
  png_zstream_error(param_1,iVar5);
LAB_010d2e2c:
                    /* try { // try from 010d2e30 to 011d2e87 has its CatchHandler @ 010d27c8 */
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

