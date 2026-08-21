
void png_set_sCAL_fixed(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
                       int param_5)

{
  long lVar1;
  char *pcVar2;
  undefined1 auStack_70 [20];
  undefined1 auStack_5c [20];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 010d3b64 with catch @ 010d4098 */
  if (param_4 < 1) {
    pcVar2 = "Invalid sCAL width ignored";
                    /* catch() { ... } // from try @ 010d3b3c with catch @ 010d40f8 */
  }
  else {
    if (0 < param_5) {
      png_ascii_from_fixed(param_1,auStack_5c,0x12);
      png_ascii_from_fixed(param_1,auStack_70,0x12,param_5);
      png_set_sCAL_s(param_1,param_2,param_3,auStack_5c,auStack_70);
      goto LAB_010d410c;
    }
    pcVar2 = "Invalid sCAL height ignored";
  }
                    /* catch() { ... } // from try @ 010d3b28 with catch @ 010d4108 */
  png_warning(param_1,pcVar2);
LAB_010d410c:
                    /* catch() { ... } // from try @ 010d3af0 with catch @ 010d4118 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 010d3ac8 with catch @ 010d4128 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

