
/* tinyxml2::XMLAttribute::SetAttribute(float) */

void __thiscall tinyxml2::XMLAttribute::SetAttribute(XMLAttribute *this,float param_1)

{
  long lVar1;
  char acStack_f0 [200];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_01021478((double)param_1,acStack_f0,200,200,&DAT_012f093a);
                    /* try { // try from 01023f34 to 01123f9b has its CatchHandler @ 01023f34
                       catch(type#1 @ 00000000) { ... } // from try @ 01023f34 with catch @ 01023f34
                       catch(type#1 @ 00000000) { ... } // from try @ 01023fa4 with catch @ 01023f34
                        */
  StrPair::SetStr((StrPair *)(this + 0x20),acStack_f0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

