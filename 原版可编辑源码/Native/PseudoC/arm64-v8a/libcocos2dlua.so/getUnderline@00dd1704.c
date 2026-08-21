
/* MyXMLVisitor::getUnderline() const */

undefined8 __thiscall MyXMLVisitor::getUnderline(MyXMLVisitor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  while( true ) {
    if (lVar1 == *(long *)(this + 8)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd16c4 with catch @ 00dd172c
                        */
      return 0;
    }
    if (*(int *)(lVar1 + -0x24) == 1) break;
    lVar1 = lVar1 + -0x60;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd1598 with catch @ 00dd1730
                        */
  return 1;
}

