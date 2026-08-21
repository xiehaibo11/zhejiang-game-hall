
undefined8 FUN_0109a5fc(long param_1,ulong *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[1] = 8;
                    /* try { // try from 0109a610 to 0119a653 has its CatchHandler @ 0109a610
                       catch() { ... } // from try @ 0109a610 with catch @ 0109a610
                       catch() { ... } // from try @ 0109a694 with catch @ 0109a610 */
  *param_2 = (ulong)*(byte *)(lVar1 + 8) << 0x18 | (ulong)*(byte *)(lVar1 + 9) << 0x10 |
             (ulong)*(byte *)(lVar1 + 10) << 8 | (ulong)*(byte *)(lVar1 + 0xb);
  return 0;
}

