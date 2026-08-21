
undefined1 FUN_01099528(long param_1,uint param_2)

{
                    /* catch() { ... } // from try @ 010993bc with catch @ 0109952c */
  if (param_2 < 0x100) {
    return *(undefined1 *)(*(long *)(param_1 + 0x18) + (ulong)(param_2 + 6));
  }
  return 0;
}

