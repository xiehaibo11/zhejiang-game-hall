
/* tinyxml2::XMLPrinter::PushAttribute(char const*, int) */

void __thiscall tinyxml2::XMLPrinter::PushAttribute(XMLPrinter *this,char *param_1,int param_2)

{
  long lVar1;
  char acStack_100 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_01021478(acStack_100,200,200,"%d",param_2);
  Print((char *)this," %s=\"",param_1);
                    /* try { // try from 01026960 to 011269e3 has its CatchHandler @ 01026960
                       catch() { ... } // from try @ 01026960 with catch @ 01026960
                       catch() { ... } // from try @ 01026a00 with catch @ 01026960
                       catch() { ... } // from try @ 01026bc8 with catch @ 01026960
                       catch() { ... } // from try @ 01026ca0 with catch @ 01026960 */
  PrintString(this,acStack_100,false);
  Print((char *)this,"\"");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

