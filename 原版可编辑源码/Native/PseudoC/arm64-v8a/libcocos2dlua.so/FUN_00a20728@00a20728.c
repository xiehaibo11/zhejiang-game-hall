
undefined8 FUN_00a20728(undefined1 *param_1,uint param_2)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (param_2 < 0x100) {
    uVar4 = param_2 >> 4;
    puVar6 = &DAT_01341238;
  }
  else if (param_2 - 0x200 < 0x1d0) {
    uVar4 = (param_2 >> 4) - 0x20;
    puVar6 = &UNK_01341278;
  }
  else if (param_2 - 0x2000 < 0x2c0) {
    uVar4 = (param_2 >> 4) - 0x200;
    puVar6 = &UNK_013412ec;
  }
  else {
                    /* try { // try from 00a20788 to 00b207bb has its CatchHandler @ 00a20888 */
    if (param_2 - 0x2400 < 0x250) {
      uVar4 = (param_2 >> 4) - 0x240;
      puVar6 = &UNK_0134139c;
    }
    else if (param_2 - 0x3000 >> 4 < 0x6fb) {
                    /* try { // try from 00a207bc to 00b207cf has its CatchHandler @ 00a20854 */
      uVar4 = (param_2 >> 4) - 0x300;
      puVar6 = &UNK_01341430;
    }
    else {
                    /* try { // try from 00a207d4 to 00b20807 has its CatchHandler @ 00a20858 */
      if (param_2 - 64000 < 0x30) {
        uVar4 = (param_2 >> 4) - 4000;
        puVar6 = &UNK_0134301c;
      }
      else if (param_2 - 0xfe00 < 0x1f0) {
        uVar4 = (param_2 >> 4) - 0xfe0;
                    /* try { // try from 00a20808 to 00b208a3 has its CatchHandler @ 00a20520 */
        puVar6 = &UNK_01343028;
      }
      else if (param_2 - 0x20000 >> 5 < 0x537) {
        uVar4 = (param_2 >> 4) - 0x2000;
        puVar6 = &UNK_013430a4;
      }
      else {
        if (0x21f < param_2 - 0x2f800) {
          return 0xffffffff;
        }
        uVar4 = (param_2 >> 4) - 0x2f80;
                    /* catch() { ... } // from try @ 00a207bc with catch @ 00a20854 */
        puVar6 = &UNK_01345a5c;
      }
    }
  }
                    /* catch() { ... } // from try @ 00a207d4 with catch @ 00a20858 */
  uVar3 = 1 << (ulong)(param_2 & 0xf);
  uVar5 = (uint)*(ushort *)((long)(puVar6 + (ulong)uVar4 * 4) + 2);
  if ((uVar3 & uVar5) == 0) {
    return 0xffffffff;
  }
  uVar5 = uVar5 & uVar3 - 1;
                    /* catch() { ... } // from try @ 00a20788 with catch @ 00a20888 */
  uVar5 = (uVar5 >> 1 & 0x55555555) + (uVar5 & 0x55555555);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar5 = (uVar5 >> 4 & 0xffffff0f) + (uVar5 & 0xf0f0f0f);
  uVar4 = (uVar5 & 0xf) + (uVar5 >> 8) + (uint)*(ushort *)(puVar6 + (ulong)uVar4 * 4);
  lVar1 = ((ulong)uVar4 & 0xffff) + (ulong)(ushort)uVar4 * 2;
  uVar2 = *(undefined2 *)(&DAT_01345ae5 + lVar1);
  *param_1 = (&DAT_01345ae4)[lVar1];
  *(undefined2 *)(param_1 + 1) = uVar2;
  return 3;
}

