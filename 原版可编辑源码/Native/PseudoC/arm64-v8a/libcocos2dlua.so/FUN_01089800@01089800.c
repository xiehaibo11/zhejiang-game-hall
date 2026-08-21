
undefined8 FUN_01089800(long param_1,ulong param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x428);
  uVar1 = *(ushort *)(*(long *)(lVar3 + 0x4f0) + (param_2 & 0xffffffff) * 2);
  if (uVar1 == 0xffff) {
    return 0;
  }
  if (0x186 < uVar1) {
    if (uVar1 - 0x187 < *(uint *)(lVar3 + 0x5f8)) {
      return *(undefined8 *)(*(long *)(lVar3 + 0x600) + (ulong)(uVar1 - 0x187) * 8);
    }
                    /* try { // try from 01089854 to 0118986f has its CatchHandler @ 010897f4 */
    return 0;
  }
  if (*(long *)(lVar3 + 0x1280) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0108984c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0108984c to 01189853 has its CatchHandler @ 010898c8 */
    uVar2 = (**(code **)(*(long *)(lVar3 + 0x1280) + 0x28))();
    return uVar2;
  }
  return 0;
}

