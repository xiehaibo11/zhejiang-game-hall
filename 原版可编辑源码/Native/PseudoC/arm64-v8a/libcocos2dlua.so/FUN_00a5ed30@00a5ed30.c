
void FUN_00a5ed30(undefined8 *param_1,int param_2,void *param_3,ulong param_4,undefined4 *param_5)

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
  
  lVar1 = tpidr_el0;
  lVar9 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a5ed64 to 00b5ed7b has its CatchHandler @ 00a5f278 */
  ERR_clear_error();
                    /* try { // try from 00a5ed80 to 00b5ed8f has its CatchHandler @ 00a5f270 */
  iVar3 = (int)param_4;
  if (0x7ffffffe < param_4) {
    iVar3 = 0x7fffffff;
  }
                    /* try { // try from 00a5ed90 to 00b5ed9f has its CatchHandler @ 00a5f26c */
  iVar3 = SSL_write((SSL *)param_1[(long)param_2 * 5 + 0x56],param_3,iVar3);
                    /* try { // try from 00a5eda0 to 00b5edaf has its CatchHandler @ 00a5f268 */
  if (iVar3 < 1) {
                    /* try { // try from 00a5edb8 to 00b5edcf has its CatchHandler @ 00a5f264 */
    iVar3 = SSL_get_error((SSL *)param_1[(long)param_2 * 5 + 0x56],iVar3);
    if (iVar3 - 2U < 2) {
      uVar8 = 0x51;
    }
    else {
      if (iVar3 == 1) {
        uVar6 = ERR_get_error();
                    /* try { // try from 00a5ee24 to 00b5ee73 has its CatchHandler @ 00a5f298 */
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
                local_16c = (char)(uVar6 >> 4) + '`';
              }
              else {
                iVar3 = uVar2 - 1;
                    /* try { // try from 00a5ef00 to 00b5ef6b has its CatchHandler @ 00a5f2d4 */
                lVar4 = (long)iVar3 * 0x4ec4ec4f;
                local_16b = CONCAT11(local_16b._1_1_,
                                     (char)iVar3 +
                                     ((char)(uint)((ulong)lVar4 >> 0x23) - (char)(lVar4 >> 0x3f)) *
                                     -0x1a + 'b');
                local_16c = 'z';
              }
            }
          }
          FUN_00a241ac(acStack_168,0x78,"%s/%lx.%lx.%lx%s","OpenSSL",uVar6 >> 0x1c & 0xf,
                       uVar6 >> 0x14 & 0xff,uVar6 >> 0xc & 0xff,&local_16c);
          uVar10 = *param_1;
          pcVar7 = "Error: %s does not support double SSL tunneling.";
        }
        else {
          uVar10 = *param_1;
          ERR_error_string_n(uVar6,acStack_168,0x100);
                    /* try { // try from 00a5ee98 to 00b5eeaf has its CatchHandler @ 00a5f25c */
          pcVar7 = "SSL_write() error: %s";
        }
        FUN_00a38a08(uVar10,pcVar7,acStack_168);
      }
      else {
        if (iVar3 == 5) {
          uVar10 = *param_1;
          piVar5 = (int *)__errno();
          iVar3 = *piVar5;
          pcVar7 = "SSL_write() returned SYSCALL, errno = %d";
                    /* try { // try from 00a5edf8 to 00b5ee0b has its CatchHandler @ 00a5f24c */
        }
        else {
          uVar10 = *param_1;
          pcVar7 = "SSL_write() return error %d";
        }
        FUN_00a38a08(uVar10,pcVar7,iVar3);
                    /* try { // try from 00a5ee80 to 00b5ee8f has its CatchHandler @ 00a5f260 */
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
  if (*(long *)(lVar1 + 0x28) == lVar9) {
                    /* try { // try from 00a5eed0 to 00b5eee3 has its CatchHandler @ 00a5f244 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar4);
}

