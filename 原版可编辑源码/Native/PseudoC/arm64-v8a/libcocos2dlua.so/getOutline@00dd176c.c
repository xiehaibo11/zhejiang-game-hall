
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MyXMLVisitor::getOutline() const */

ulong __thiscall MyXMLVisitor::getOutline(MyXMLVisitor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  while( true ) {
    if (lVar1 == *(long *)(this + 8)) {
      return (ulong)_WHITE << 8 | 0xffffffff00000000;
    }
    if (*(int *)(lVar1 + -0x20) == 1) break;
    lVar1 = lVar1 + -0x60;
  }
  return (ulong)*(uint *)(lVar1 + -0x18) << 0x20 | (ulong)*(uint3 *)(lVar1 + -0x1c) << 8 | 1;
}

