
void FUN_00997d0c(long *param_1)

{
  long lVar1;
  undefined1 auStack_f0 [200];
  undefined8 local_28;
  
                    /* catch() { ... } // from try @ 00997a5c with catch @ 00997d18 */
                    /* catch() { ... } // from try @ 00997a50 with catch @ 00997d1c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00997a30 with catch @ 00997d20 */
  local_28 = *(undefined8 *)(lVar1 + 0x28);
  lVar1 = *param_1;
                    /* catch() { ... } // from try @ 00997a68 with catch @ 00997d30
                       catch() { ... } // from try @ 00997b10 with catch @ 00997d30
                       catch() { ... } // from try @ 00997c38 with catch @ 00997d30 */
  (**(code **)(lVar1 + 0x18))(param_1,auStack_f0);
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)(lVar1 + 0xa8),1);
}

