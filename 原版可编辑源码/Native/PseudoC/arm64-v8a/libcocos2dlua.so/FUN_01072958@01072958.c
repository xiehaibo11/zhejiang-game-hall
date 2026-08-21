
void FUN_01072958(long param_1,ulong *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
                    /* try { // try from 01072960 to 0117296b has its CatchHandler @ 01072be0 */
                    /* try { // try from 01072978 to 01172997 has its CatchHandler @ 01072c08 */
  lVar2 = (**(code **)(param_1 + 0x400))();
  uVar6 = *param_2;
  if (uVar6 != 0) {
    uVar7 = 1;
                    /* try { // try from 0107299c to 011729a7 has its CatchHandler @ 01072bdc */
    do {
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 < 2) {
        if (*(char *)(param_1 + 0x3c1) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x81;
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
        break;
      }
                    /* try { // try from 010729b4 to 011729d3 has its CatchHandler @ 01072c04 */
      *(long *)(param_1 + 0x38) = lVar5 + -2;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + lVar5 * 8 + -8);
      if ((uVar1 & 0xffff) < (uint)*(ushort *)(param_1 + 0x54)) {
        uVar3 = *(ulong *)(*(long *)(param_1 + 0x30) + (lVar5 + -2) * 8);
        uVar4 = uVar3 >> 4 & 0xf;
                    /* try { // try from 010729e0 to 011729e7 has its CatchHandler @ 01072bd8 */
        if (*(char *)(param_1 + 0x290) == 'r') {
          uVar4 = uVar4 | 0x20;
        }
        else if (*(char *)(param_1 + 0x290) == 'q') {
          uVar4 = uVar4 | 0x10;
        }
                    /* try { // try from 01072a08 to 01172a0f has its CatchHandler @ 01072bd4 */
        if (lVar2 == uVar4 + *(ushort *)(param_1 + 600)) {
                    /* try { // try from 01072a1c to 01172a3f has its CatchHandler @ 01072c00 */
          uVar3 = uVar3 & 0xf;
          lVar5 = -8;
          if (7 < uVar3) {
            lVar5 = -7;
          }
          (**(code **)(param_1 + 0x3f0))
                    (param_1,param_1 + 0x48,uVar1,
                     lVar5 + uVar3 << ((ulong)(6 - *(ushort *)(param_1 + 0x25a)) & 0x3f));
        }
      }
      else {
                    /* try { // try from 010729f4 to 011729ff has its CatchHandler @ 01072bb0 */
        if (*(char *)(param_1 + 0x3c1) != '\0') {
          *(undefined4 *)(param_1 + 0x18) = 0x86;
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 <= uVar6);
  }
  *(int *)(param_1 + 0x40) = (int)*(undefined8 *)(param_1 + 0x38);
                    /* try { // try from 01072a70 to 01172a7b has its CatchHandler @ 01072bb8 */
                    /* try { // try from 01072a80 to 01172a8b has its CatchHandler @ 01072bb4 */
  return;
}

