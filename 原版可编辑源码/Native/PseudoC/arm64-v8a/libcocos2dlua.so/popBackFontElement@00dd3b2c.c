
/* MyXMLVisitor::popBackFontElement() */

void __thiscall MyXMLVisitor::popBackFontElement(MyXMLVisitor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if ((*(byte *)(lVar1 + -0x48) & 1) != 0) {
    operator_delete(*(void **)(lVar1 + -0x38));
  }
  if ((*(byte *)(lVar1 + -0x60) & 1) != 0) {
    operator_delete(*(void **)(lVar1 + -0x50));
  }
  *(byte **)(this + 0x10) = (byte *)(lVar1 + -0x60);
  return;
}

