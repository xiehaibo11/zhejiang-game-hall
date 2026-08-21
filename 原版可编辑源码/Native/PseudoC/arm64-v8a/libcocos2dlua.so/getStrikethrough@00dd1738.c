
/* MyXMLVisitor::getStrikethrough() const */

undefined8 __thiscall MyXMLVisitor::getStrikethrough(MyXMLVisitor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd16fc with catch @ 00dd173c
                        */
  while( true ) {
    if (lVar1 == *(long *)(this + 8)) {
      return 0;
    }
    if (*(int *)(lVar1 + -0x24) == 2) break;
    lVar1 = lVar1 + -0x60;
  }
  return 1;
}

