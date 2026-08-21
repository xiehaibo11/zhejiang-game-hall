
/* tinyxml2::XMLPrinter::PushText(bool) */

void __thiscall tinyxml2::XMLPrinter::PushText(XMLPrinter *this,bool param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  snprintf(acStack_f0,200,"%d",(ulong)param_1);
  *(int *)(this + 0x1c) = *(int *)(this + 0x18) + -1;
  if (this[8] != (XMLPrinter)0x0) {
    this[8] = (XMLPrinter)0x0;
    Print((char *)this,">");
  }
  PrintString(this,acStack_f0,true);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

