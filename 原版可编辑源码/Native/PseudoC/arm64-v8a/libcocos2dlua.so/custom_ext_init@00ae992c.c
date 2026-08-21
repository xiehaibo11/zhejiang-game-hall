
void custom_ext_init(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    lVar4 = *param_1;
                    /* try { // try from 00ae993c to 00be9943 has its CatchHandler @ 00aea0f0 */
    if (uVar1 == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1 & 0xfffffffffffffffe;
                    /* try { // try from 00ae994c to 00be995f has its CatchHandler @ 00aea10c */
      if (uVar2 != 0) {
        puVar3 = (undefined4 *)(lVar4 + 0x34);
        uVar5 = uVar2;
        do {
          puVar3[-0xc] = 0;
          *puVar3 = 0;
          uVar5 = uVar5 - 2;
                    /* try { // try from 00ae996c to 00be997b has its CatchHandler @ 00aea1a4 */
          puVar3 = puVar3 + 0x18;
        } while (uVar5 != 0);
        lVar4 = lVar4 + uVar2 * 0x30;
        if (uVar1 == uVar2) {
          return;
        }
      }
    }
    puVar3 = (undefined4 *)(lVar4 + 4);
    do {
      uVar2 = uVar2 + 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 0xc;
    } while (uVar2 < uVar1);
  }
                    /* try { // try from 00ae9994 to 00be999f has its CatchHandler @ 00aea1a0 */
  return;
}

