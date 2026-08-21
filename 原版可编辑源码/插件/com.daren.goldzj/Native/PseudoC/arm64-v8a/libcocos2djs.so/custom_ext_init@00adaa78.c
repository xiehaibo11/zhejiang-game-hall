
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
    if (uVar1 == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar1 & 0xfffffffffffffffe;
      if (uVar2 != 0) {
        puVar3 = (undefined4 *)(lVar4 + 0x34);
        uVar5 = uVar2;
        do {
          puVar3[-0xc] = 0;
          *puVar3 = 0;
                    /* try { // try from 00adaab4 to 00bdaabb has its CatchHandler @ 00adac18 */
          uVar5 = uVar5 - 2;
          puVar3 = puVar3 + 0x18;
        } while (uVar5 != 0);
                    /* try { // try from 00adaabc to 00bdab3b has its CatchHandler @ 00adaa00 */
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
  return;
}

