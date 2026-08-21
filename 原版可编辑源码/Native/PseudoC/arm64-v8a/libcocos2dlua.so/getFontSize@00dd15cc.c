
/* MyXMLVisitor::getFontSize() const */

float __thiscall MyXMLVisitor::getFontSize(MyXMLVisitor *this)

{
  long lVar1;
  
                    /* try { // try from 00dd15cc to 00ed160f has its CatchHandler @ 00dd1698 */
  lVar1 = *(long *)(this + 0x10);
  while( true ) {
    if (lVar1 == *(long *)(this + 8)) {
      return 12.0;
    }
    if (*(float *)(lVar1 + -0x30) != -1.0) break;
    lVar1 = lVar1 + -0x60;
  }
  return *(float *)(lVar1 + -0x30);
}

