
void FUN_00a539b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00a538fc with catch @ 00a539c8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a53914 with catch @ 00a539e0 */
                    /* catch() { ... } // from try @ 00a538d4 with catch @ 00a539e4 */
  local_48 = *param_3;
                    /* catch() { ... } // from try @ 00a5391c with catch @ 00a539e8 */
                    /* catch() { ... } // from try @ 00a53904 with catch @ 00a539f8 */
  local_40 = *param_2;
  lVar2 = FUN_00a52e14(&PTR_MD5_Init_01c6e520,param_1,0x10);
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
                    /* catch() { ... } // from try @ 00a538c0 with catch @ 00a53a10 */
                    /* catch() { ... } // from try @ 00a53894 with catch @ 00a53a14 */
    FUN_00a52fa8(lVar2,&local_48,0x10);
    FUN_00a52fc8(lVar2,&local_58);
    uVar3 = 0;
    param_4[1] = uStack_50;
    *param_4 = local_58;
    param_4[2] = *param_2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a53a64 to 00b53aa7 has its CatchHandler @ 00a53a64
                       catch() { ... } // from try @ 00a53a64 with catch @ 00a53a64
                       catch() { ... } // from try @ 00a53ac0 with catch @ 00a53a64 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

