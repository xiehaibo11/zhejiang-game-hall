
/* tinyxml2::XMLAttribute::SetAttribute(int) */

void __thiscall tinyxml2::XMLAttribute::SetAttribute(XMLAttribute *this,int param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_01021478(acStack_f0,200,200,"%d",param_1);
  StrPair::SetStr((StrPair *)(this + 0x20),acStack_f0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

