
void FUN_01065fac(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  size_t __n;
  char local_c8;
  byte local_c7;
  char acStack_c6 [61];
  char local_89;
  char local_7e;
  char local_76;
  uint local_75;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 01065f7c with catch @ 01065fd8 */
  if ((param_2 != (undefined8 *)0x0) &&
     (((code *)param_2[5] == (code *)0x0 ||
      (lVar3 = (*(code *)param_2[5])(param_2,0,0,0), lVar3 == 0)))) {
    __n = param_2[1];
                    /* catch() { ... } // from try @ 01065f6c with catch @ 01066008 */
    param_2[2] = 0;
    if (__n != 0) {
      if ((code *)param_2[5] == (code *)0x0) {
        if (0x7f < __n) {
          __n = 0x80;
        }
        memcpy(&local_c8,(void *)*param_2,__n);
      }
      else {
                    /* try { // try from 01066024 to 0116604f has its CatchHandler @ 01066024
                       catch() { ... } // from try @ 01066024 with catch @ 01066024
                       catch() { ... } // from try @ 0106606c with catch @ 01066024 */
        __n = (*(code *)param_2[5])(param_2,0,&local_c8,0x80);
      }
                    /* try { // try from 01066050 to 0116605f has its CatchHandler @ 010660e0 */
      param_2[2] = __n;
      if (0x7f < __n) {
                    /* catch() { ... } // from try @ 01066060 with catch @ 010660b0 */
        if ((((local_c8 == '\0') && (local_7e == '\0')) && (local_76 == '\0')) &&
           ((((byte)(local_c7 - 1) < 0x21 && (local_89 == '\0')) && (acStack_c6[local_c7] == '\0')))
           ) {
                    /* catch() { ... } // from try @ 01066050 with catch @ 010660e0 */
          uVar1 = (local_75 & 0xff00ff00) >> 8 | (local_75 & 0xff00ff) << 8;
          uVar4 = FUN_01066104(param_1,param_2,
                               (long)(int)(uVar1 >> 0x10 | uVar1 << 0x10) + 0xffU &
                               0xffffffffffffff80,param_3,param_4);
                    /* try { // try from 010660fc to 01166127 has its CatchHandler @ 010660fc
                       catch() { ... } // from try @ 010660fc with catch @ 010660fc
                       catch() { ... } // from try @ 01066144 with catch @ 010660fc */
        }
        else {
          uVar4 = 2;
        }
        goto LAB_01066060;
      }
    }
  }
  uVar4 = 0x55;
LAB_01066060:
                    /* try { // try from 01066060 to 0116606b has its CatchHandler @ 010660b0 */
                    /* try { // try from 0106606c to 011660fb has its CatchHandler @ 01066024 */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

