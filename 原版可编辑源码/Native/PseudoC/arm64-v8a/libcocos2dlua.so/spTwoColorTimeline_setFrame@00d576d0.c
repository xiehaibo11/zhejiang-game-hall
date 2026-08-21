
void spTwoColorTimeline_setFrame
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long param_9,uint param_10)

{
  ulong uVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00d57584 with catch @ 00d576d8 */
  lVar2 = *(long *)(param_9 + 0x20);
  uVar1 = (ulong)(long)(int)(param_10 << 3) >> 3;
  *(undefined4 *)
   (lVar2 + (-(ulong)((param_10 & 0x1fffffff) >> 0x1c) & 0xfffffffc00000000 |
            (ulong)(param_10 << 3) << 2)) = param_1;
  *(undefined4 *)(lVar2 + ((long)(int)param_10 << 5 | 4U)) = param_2;
  *(undefined4 *)(lVar2 + (uVar1 << 5 | 8)) = param_3;
  *(undefined4 *)(lVar2 + (uVar1 << 5 | 0xc)) = param_4;
  *(undefined4 *)(lVar2 + (uVar1 << 5 | 0x10)) = param_5;
  *(undefined4 *)(lVar2 + (uVar1 << 5 | 0x14)) = param_6;
  *(undefined4 *)(lVar2 + (uVar1 << 5 | 0x18)) = param_7;
  *(undefined4 *)(lVar2 + (uVar1 << 5 | 0x1c)) = param_8;
  return;
}

