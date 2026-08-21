
/* tinyxml2::XMLAttribute::SetAttribute(double) */

void tinyxml2::XMLAttribute::SetAttribute(double param_1)

{
  long lVar1;
  long in_x0;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_01021478(acStack_f0,200,200,&DAT_012f093a);
  StrPair::SetStr((StrPair *)(in_x0 + 0x20),acStack_f0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

