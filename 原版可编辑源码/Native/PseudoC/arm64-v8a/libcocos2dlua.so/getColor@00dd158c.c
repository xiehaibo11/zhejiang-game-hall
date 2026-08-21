
/* MyXMLVisitor::getColor() const */

ulong __thiscall MyXMLVisitor::getColor(MyXMLVisitor *this)

{
  uint3 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x10);
  puVar1 = (uint3 *)&cocos2d::Color3B::WHITE;
                    /* try { // try from 00dd1598 to 00ed159b has its CatchHandler @ 00dd1730 */
  do {
    if (lVar2 == *(long *)(this + 8)) {
LAB_00dd15bc:
      return (ulong)*puVar1;
    }
    if (*(char *)(lVar2 + -0x29) != '\0') {
      puVar1 = (uint3 *)(lVar2 + -0x2c);
      goto LAB_00dd15bc;
    }
    lVar2 = lVar2 + -0x60;
  } while( true );
}

