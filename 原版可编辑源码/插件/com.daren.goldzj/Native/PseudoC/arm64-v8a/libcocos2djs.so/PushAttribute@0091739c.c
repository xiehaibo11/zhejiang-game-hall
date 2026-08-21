
/* tinyxml2::XMLPrinter::PushAttribute(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PushAttribute(XMLPrinter *this,char *param_1,bool param_2)

{
  long lVar1;
  char acStack_100 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  snprintf(acStack_100,200,"%d",(ulong)param_2);
  Print((char *)this," %s=\"",param_1);
  PrintString(this,acStack_100,false);
  Print((char *)this,&DAT_01a61e87);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

