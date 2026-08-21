
/* MyXMLVisitor::getBold() const */

undefined8 __thiscall MyXMLVisitor::getBold(MyXMLVisitor *this)

{
  long lVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd154c with catch @ 00dd16a4
                        */
  lVar1 = *(long *)(this + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd162c with catch @ 00dd16a8
                        */
  while( true ) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd14a8 with catch @ 00dd16ac
                        */
    if (lVar1 == *(long *)(this + 8)) {
                    /* try { // try from 00dd16c4 to 00ed16c7 has its CatchHandler @ 00dd172c */
      return 0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dd147c with catch @ 00dd16b0
                        */
    if (*(char *)(lVar1 + -0x28) != '\0') break;
    lVar1 = lVar1 + -0x60;
  }
  return 1;
}

