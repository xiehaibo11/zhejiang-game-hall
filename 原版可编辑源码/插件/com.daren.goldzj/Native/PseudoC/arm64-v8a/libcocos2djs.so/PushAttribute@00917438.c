
/* tinyxml2::XMLPrinter::PushAttribute(char const*, double) */

void tinyxml2::XMLPrinter::PushAttribute(char *param_1,double param_2)

{
  long lVar1;
  char acStack_100 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  snprintf(acStack_100,200,"%g");
  Print(param_1," %s=\"");
  PrintString((XMLPrinter *)param_1,acStack_100,false);
  Print(param_1,&DAT_01a61e87);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

