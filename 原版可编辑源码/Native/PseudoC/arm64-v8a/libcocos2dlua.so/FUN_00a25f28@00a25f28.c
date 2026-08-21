
void FUN_00a25f28(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  
  uVar4 = *param_1;
  local_24 = 1;
  iVar1 = setsockopt(param_2,6,1,&local_24,4);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)__errno();
    uVar3 = FUN_00a2afbc(param_1,*puVar2);
                    /* catch() { ... } // from try @ 00a25ee8 with catch @ 00a25f8c
                       catch() { ... } // from try @ 00a25f70 with catch @ 00a25f8c */
                    /* catch() { ... } // from try @ 00a25ecc with catch @ 00a25f90 */
    FUN_00a38740(uVar4,"Could not set TCP_NODELAY: %s\n",uVar3);
  }
  else {
                    /* try { // try from 00a25f70 to 00b25f77 has its CatchHandler @ 00a25f8c */
    FUN_00a38740(uVar4,"TCP_NODELAY set\n");
                    /* try { // try from 00a25f78 to 00b25fab has its CatchHandler @ 00a25e94 */
  }
                    /* try { // try from 00a25fac to 00b25ff3 has its CatchHandler @ 00a25fac
                       catch() { ... } // from try @ 00a25fac with catch @ 00a25fac
                       catch() { ... } // from try @ 00a260b8 with catch @ 00a25fac
                       catch() { ... } // from try @ 00a26118 with catch @ 00a25fac
                       catch() { ... } // from try @ 00a2619c with catch @ 00a25fac */
  return;
}

