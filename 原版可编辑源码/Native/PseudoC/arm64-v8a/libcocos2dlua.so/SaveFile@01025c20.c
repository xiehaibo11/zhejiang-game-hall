
/* tinyxml2::XMLDocument::SaveFile(__sFILE*, bool) */

undefined4 __thiscall
tinyxml2::XMLDocument::SaveFile(XMLDocument *this,__sFILE *param_1,bool param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **local_168 [21];
  undefined1 *local_c0;
  undefined1 auStack_b8 [88];
  undefined1 *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  XMLPrinter::XMLPrinter((XMLPrinter *)local_168,param_1,param_2);
  Print(this,(XMLPrinter *)local_168);
  uVar1 = *(undefined4 *)(this + 0x5c);
  local_168[0] = &PTR__XMLPrinter_01727740;
  ppuVar3 = &PTR__XMLPrinter_01727740;
  if ((local_60 != auStack_58) && (ppuVar3 = local_168[0], local_60 != (undefined1 *)0x0)) {
    local_168[0] = &PTR__XMLPrinter_01727740;
    operator_delete__(local_60);
    ppuVar3 = local_168[0];
  }
  local_168[0] = ppuVar3;
  if ((local_c0 != auStack_b8) && (local_c0 != (undefined1 *)0x0)) {
    operator_delete__(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

