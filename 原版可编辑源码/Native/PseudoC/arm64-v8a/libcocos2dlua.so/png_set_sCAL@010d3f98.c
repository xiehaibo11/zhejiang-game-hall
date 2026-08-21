
void png_set_sCAL(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  char *pcVar2;
  undefined1 auStack_70 [20];
  undefined1 auStack_5c [20];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 <= 0.0) {
                    /* catch() { ... } // from try @ 010d3dec with catch @ 010d4024 */
                    /* catch() { ... } // from try @ 010d3dd8 with catch @ 010d4028 */
    pcVar2 = "Invalid sCAL width ignored";
                    /* catch() { ... } // from try @ 010d3dc8 with catch @ 010d402c */
  }
  else {
    if (0.0 < param_2) {
      png_ascii_from_fp(param_3,auStack_5c,0x12,5);
      png_ascii_from_fp(param_2,param_3,auStack_70,0x12,5);
                    /* catch() { ... } // from try @ 010d3ec0 with catch @ 010d4010 */
                    /* catch() { ... } // from try @ 010d3e88 with catch @ 010d4014 */
                    /* catch() { ... } // from try @ 010d3e60 with catch @ 010d4018 */
                    /* catch() { ... } // from try @ 010d3e4c with catch @ 010d401c */
      png_set_sCAL_s(param_3,param_4,param_5,auStack_5c,auStack_70);
                    /* catch() { ... } // from try @ 010d3e14 with catch @ 010d4020 */
      goto LAB_010d4040;
    }
                    /* catch() { ... } // from try @ 010d3ce0 with catch @ 010d4030 */
                    /* catch() { ... } // from try @ 010d3ca4 with catch @ 010d4034 */
    pcVar2 = "Invalid sCAL height ignored";
  }
                    /* catch() { ... } // from try @ 010d3c84 with catch @ 010d4038 */
                    /* catch() { ... } // from try @ 010d3c44 with catch @ 010d403c */
  png_warning(param_3,pcVar2);
LAB_010d4040:
                    /* catch() { ... } // from try @ 010d3c20 with catch @ 010d4040 */
                    /* catch() { ... } // from try @ 010d3b9c with catch @ 010d4044 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

