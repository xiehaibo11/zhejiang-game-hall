
/* MyXMLVisitor::getItalics() const */

undefined8 __thiscall MyXMLVisitor::getItalics(MyXMLVisitor *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  while( true ) {
    if (lVar1 == *(long *)(this + 8)) {
      return 0;
    }
    if (*(char *)(lVar1 + -0x27) != '\0') break;
    lVar1 = lVar1 + -0x60;
  }
                    /* try { // try from 00dd16fc to 00ed16ff has its CatchHandler @ 00dd173c */
                    /* try { // try from 00dd1700 to 00ed174f has its CatchHandler @ 00dd13c0 */
  return 1;
}

