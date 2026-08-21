
/* ClipperLib::GetMaximaPair(ClipperLib::TEdge*) */

long ClipperLib::GetMaximaPair(TEdge *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
                    /* try { // try from 0103756c to 01137593 has its CatchHandler @ 010375d0 */
                    /* try { // try from 01037594 to 011375eb has its CatchHandler @ 01037468 */
                    /* catch() { ... } // from try @ 0103756c with catch @ 010375d0 */
  if (((((*(long *)(lVar1 + 0x20) != *(long *)(param_1 + 0x20)) ||
        (*(long *)(lVar1 + 0x28) != *(long *)(param_1 + 0x28))) || (*(long *)(lVar1 + 0x70) != 0))
      && (((lVar1 = *(long *)(param_1 + 0x68), *(long *)(lVar1 + 0x20) != *(long *)(param_1 + 0x20)
           || (*(long *)(lVar1 + 0x28) != *(long *)(param_1 + 0x28))) ||
          (*(long *)(lVar1 + 0x70) != 0)))) ||
     ((*(int *)(lVar1 + 0x5c) == -2 ||
      ((*(long *)(lVar1 + 0x78) == *(long *)(lVar1 + 0x80) && (*(long *)(lVar1 + 0x38) != 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}

