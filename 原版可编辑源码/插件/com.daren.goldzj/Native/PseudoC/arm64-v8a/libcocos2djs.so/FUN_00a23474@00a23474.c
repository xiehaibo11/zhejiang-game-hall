
ssize_t FUN_00a23474(long *param_1,int param_2,void *param_3,size_t param_4,undefined4 *param_5)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  
                    /* try { // try from 00a23488 to 00b23497 has its CatchHandler @ 00a234cc */
                    /* try { // try from 00a23498 to 00b234df has its CatchHandler @ 00a23438 */
  sVar2 = recv(*(int *)((long)param_1 + (long)param_2 * 4 + 0x260),param_3,param_4,0);
  *param_5 = 0;
  if (sVar2 == -1) {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    uVar5 = 0x51;
                    /* catch() { ... } // from try @ 00a23488 with catch @ 00a234cc */
    if ((iVar1 != 4) && (iVar1 != 0xb)) {
      lVar6 = *param_1;
                    /* try { // try from 00a234e0 to 00b23523 has its CatchHandler @ 00a234e0
                       catch() { ... } // from try @ 00a234e0 with catch @ 00a234e0
                       catch() { ... } // from try @ 00a235a4 with catch @ 00a234e0 */
      uVar4 = FUN_00a155d4(param_1,iVar1);
      FUN_00a23020(lVar6,"Recv failure: %s",uVar4);
      *(int *)(*param_1 + 0x8b64) = iVar1;
      uVar5 = 0x38;
    }
    *param_5 = uVar5;
  }
  return sVar2;
}

