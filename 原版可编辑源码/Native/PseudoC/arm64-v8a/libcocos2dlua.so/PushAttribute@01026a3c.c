
/* tinyxml2::XMLPrinter::PushAttribute(char const*, bool) */

void __thiscall tinyxml2::XMLPrinter::PushAttribute(XMLPrinter *this,char *param_1,bool param_2)

{
  long lVar1;
  char acStack_100 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_01021478(acStack_100,200,200,"%d",param_2);
  Print((char *)this," %s=\"",param_1);
  PrintString(this,acStack_100,false);
                    /* try { // try from 01026aa4 to 01126aaf has its CatchHandler @ 01026d40 */
                    /* try { // try from 01026ab0 to 01126abb has its CatchHandler @ 01026d30 */
  Print((char *)this,"\"");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

