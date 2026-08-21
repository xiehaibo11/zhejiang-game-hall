
void FUN_00a48348(undefined8 *param_1,int param_2,void *param_3,ulong param_4,undefined4 *param_5)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  char *pcVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  char local_16c;
  undefined2 local_16b;
  char acStack_168 [264];
  
                    /* try { // try from 00a48360 to 00b48377 has its CatchHandler @ 00a4854c */
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a48380 to 00b4838b has its CatchHandler @ 00a48548 */
                    /* try { // try from 00a4838c to 00b48397 has its CatchHandler @ 00a48544 */
  ERR_clear_error();
                    /* try { // try from 00a48398 to 00b484cf has its CatchHandler @ 00a4855c */
  iVar3 = (int)param_4;
  if (0x7ffffffe < param_4) {
    iVar3 = 0x7fffffff;
  }
  iVar3 = SSL_write((SSL *)param_1[(long)param_2 * 5 + 0x56],param_3,iVar3);
  if (iVar3 < 1) {
    iVar3 = SSL_get_error((SSL *)param_1[(long)param_2 * 5 + 0x56],iVar3);
    if (iVar3 - 2U < 2) {
      uVar8 = 0x51;
    }
    else {
      if (iVar3 == 1) {
        uVar6 = ERR_get_error();
        if ((((uVar6 & 0xff000fff) == 0x14000080) &&
            (*(int *)((long)param_1 + (long)param_2 * 0x28 + 0x29c) == 2)) &&
           (*(int *)((long)param_1 + (long)param_2 * 0x28 + 0x2ec) == 2)) {
          local_16b = 0;
          uVar6 = OpenSSL_version_num();
          if (uVar6 < 0x906000) {
            local_16c = '\0';
            uVar6 = 0x1010003f;
          }
          else {
            local_16c = '\0';
            if ((uVar6 & 0xff0) != 0) {
              uVar2 = (uint)(uVar6 >> 4) & 0xff;
              if (uVar2 < 0x1b) {
                    /* catch() { ... } // from try @ 00a4838c with catch @ 00a48544 */
                    /* catch() { ... } // from try @ 00a48380 with catch @ 00a48548 */
                local_16c = (char)(uVar6 >> 4) + '`';
              }
              else {
                iVar3 = uVar2 - 1;
                lVar4 = (long)iVar3 * 0x4ec4ec4f;
                local_16b = CONCAT11(local_16b._1_1_,
                                     (char)iVar3 +
                                     ((char)(uint)((ulong)lVar4 >> 0x23) - (char)(lVar4 >> 0x3f)) *
                                     -0x1a + 'b');
                local_16c = 'z';
              }
            }
          }
                    /* catch() { ... } // from try @ 00a48360 with catch @ 00a4854c */
                    /* catch() { ... } // from try @ 00a48398 with catch @ 00a4855c */
          FUN_00a0e7c4(acStack_168,0x78,"%s/%lx.%lx.%lx%s","OpenSSL",uVar6 >> 0x1c & 0xf,
                       uVar6 >> 0x14 & 0xff,uVar6 >> 0xc & 0xff,&local_16c);
          uVar10 = *param_1;
          pcVar7 = "Error: %s does not support double SSL tunneling.";
        }
        else {
          uVar10 = *param_1;
          ERR_error_string_n(uVar6,acStack_168,0x100);
          pcVar7 = "SSL_write() error: %s";
        }
        FUN_00a23020(uVar10,pcVar7,acStack_168);
      }
      else {
        if (iVar3 == 5) {
          uVar10 = *param_1;
          piVar5 = (int *)__errno();
          iVar3 = *piVar5;
          pcVar7 = "SSL_write() returned SYSCALL, errno = %d";
        }
        else {
          uVar10 = *param_1;
          pcVar7 = "SSL_write() return error %d";
        }
        FUN_00a23020(uVar10,pcVar7,iVar3);
      }
      uVar8 = 0x37;
    }
    *param_5 = uVar8;
    lVar4 = -1;
  }
  else {
    lVar4 = (long)iVar3;
    *param_5 = 0;
  }
                    /* try { // try from 00a484d0 to 00b485b3 has its CatchHandler @ 00a4830c */
  if (*(long *)(lVar1 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}

