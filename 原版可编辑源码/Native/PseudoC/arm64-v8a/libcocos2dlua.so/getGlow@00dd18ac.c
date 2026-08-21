
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MyXMLVisitor::getGlow() const */

ulong __thiscall MyXMLVisitor::getGlow(MyXMLVisitor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  while( true ) {
    if (lVar1 == *(long *)(this + 8)) {
      return (ulong)_WHITE << 8;
    }
    if (*(int *)(lVar1 + -0x20) == 3) break;
    lVar1 = lVar1 + -0x60;
  }
  return (ulong)*(uint3 *)(lVar1 + -4) << 8 | 1;
}

