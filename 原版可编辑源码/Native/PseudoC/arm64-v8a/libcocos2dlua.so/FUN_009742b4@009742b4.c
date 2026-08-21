
undefined8 FUN_009742b4(void)

{
  long unaff_x24;
  long in_stack_00000018;
  
  tolua_error();
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000018) {
                    /* try { // try from 0097430c to 00a7435b has its CatchHandler @ 0097430c
                       catch() { ... } // from try @ 0097430c with catch @ 0097430c
                       catch() { ... } // from try @ 00974394 with catch @ 0097430c
                       catch() { ... } // from try @ 009743d8 with catch @ 0097430c */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

