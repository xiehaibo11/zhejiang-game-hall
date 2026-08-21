
long FUN_00a48234(undefined8 *param_1,int param_2,void *param_3,ulong param_4,undefined4 *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong e;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  char acStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  ERR_clear_error();
  iVar2 = (int)param_4;
  if (0x7ffffffe < param_4) {
    iVar2 = 0x7fffffff;
  }
  iVar2 = SSL_read((SSL *)param_1[(long)param_2 * 5 + 0x56],param_3,iVar2);
  lVar7 = (long)iVar2;
                    /* catch() { ... } // from try @ 00a480f0 with catch @ 00a4829c */
  if (iVar2 < 1) {
                    /* catch() { ... } // from try @ 00a480e4 with catch @ 00a482a0 */
                    /* catch() { ... } // from try @ 00a480c4 with catch @ 00a482a4 */
    iVar3 = SSL_get_error((SSL *)param_1[(long)param_2 * 5 + 0x56],iVar2);
                    /* catch() { ... } // from try @ 00a480fc with catch @ 00a482b4 */
    if (iVar3 - 2U < 2) {
      uVar5 = 0x51;
    }
    else {
      if (((iVar3 == 0) || (iVar3 == 6)) || ((e = ERR_get_error(), -1 < iVar2 && (e == 0))))
      goto LAB_00a48314;
      uVar6 = *param_1;
      ERR_error_string_n(e,acStack_158,0x100);
      puVar4 = (undefined4 *)__errno();
      FUN_00a23020(uVar6,"SSL read: %s, errno %d",acStack_158,*puVar4);
      uVar5 = 0x38;
    }
                    /* try { // try from 00a4830c to 00b4835f has its CatchHandler @ 00a4830c
                       catch() { ... } // from try @ 00a4830c with catch @ 00a4830c
                       catch() { ... } // from try @ 00a484d0 with catch @ 00a4830c */
    lVar7 = -1;
    *param_5 = uVar5;
  }
LAB_00a48314:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

