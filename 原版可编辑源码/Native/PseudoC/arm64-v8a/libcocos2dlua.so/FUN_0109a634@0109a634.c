
undefined2 FUN_0109a634(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  uVar1 = (*(uint *)(lVar3 + 0xc) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 0xc) & 0xff00ff) << 8;
  uVar2 = (*(uint *)(lVar3 + 0x10) & 0xff00ff00) >> 8 | (*(uint *)(lVar3 + 0x10) & 0xff00ff) << 8;
  uVar1 = param_2 - (uVar1 >> 0x10 | uVar1 << 0x10);
  if (uVar1 < (uVar2 >> 0x10 | uVar2 << 0x10)) {
                    /* try { // try from 0109a654 to 0119a65b has its CatchHandler @ 0109a744 */
    lVar3 = lVar3 + (ulong)(uVar1 * 2);
    return CONCAT11(*(undefined1 *)(lVar3 + 0x14),*(undefined1 *)(lVar3 + 0x15));
  }
  return 0;
}

