
bool FUN_00b07734(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
                    /* try { // try from 00b07754 to 00c077c7 has its CatchHandler @ 00b07754
                       catch() { ... } // from try @ 00b07754 with catch @ 00b07754
                       catch() { ... } // from try @ 00b07934 with catch @ 00b07754 */
  iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x10),
                 *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x10));
  if ((iVar2 == 0) &&
     (iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x18),
                     *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x18)), iVar2 == 0)) {
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x20),
                   *(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x20));
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

