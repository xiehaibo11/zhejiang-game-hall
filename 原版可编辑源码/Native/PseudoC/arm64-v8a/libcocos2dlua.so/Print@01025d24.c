
/* tinyxml2::XMLDocument::Print(tinyxml2::XMLPrinter*) */

void __thiscall tinyxml2::XMLDocument::Print(XMLDocument *this,XMLPrinter *param_1)

{
  XMLPrinter *pXVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **local_178 [21];
  undefined1 *local_d0;
  undefined1 auStack_c8 [88];
  undefined1 *local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  XMLPrinter::XMLPrinter((XMLPrinter *)local_178,(__sFILE *)glUniformMatrix2fv,false);
  pXVar1 = (XMLPrinter *)local_178;
  if (param_1 != (XMLPrinter *)0x0) {
    pXVar1 = param_1;
  }
  (**(code **)(*(long *)this + 0x70))(this,pXVar1);
  local_178[0] = &PTR__XMLPrinter_01727740;
  ppuVar3 = &PTR__XMLPrinter_01727740;
  if ((local_70 != auStack_68) && (ppuVar3 = local_178[0], local_70 != (undefined1 *)0x0)) {
    local_178[0] = &PTR__XMLPrinter_01727740;
    operator_delete__(local_70);
    ppuVar3 = local_178[0];
  }
  local_178[0] = ppuVar3;
  if ((local_d0 != auStack_c8) && (local_d0 != (undefined1 *)0x0)) {
    operator_delete__(local_d0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

