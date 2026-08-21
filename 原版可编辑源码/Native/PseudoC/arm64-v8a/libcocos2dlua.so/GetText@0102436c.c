
/* tinyxml2::XMLElement::GetText() const */

undefined8 __thiscall tinyxml2::XMLElement::GetText(XMLElement *this)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long **)(this + 0x30) != (long *)0x0) &&
     (lVar1 = (**(code **)(**(long **)(this + 0x30) + 0x38))(), lVar1 != 0)) {
    lVar1 = (**(code **)(**(long **)(this + 0x30) + 0x38))();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010242d4 with catch @ 010243a4
                        */
                    /* try { // try from 010243a8 to 01124537 has its CatchHandler @ 010243a8
                       catch() { ... } // from try @ 010243a8 with catch @ 010243a8
                       catch() { ... } // from try @ 01024604 with catch @ 010243a8
                       catch() { ... } // from try @ 01024668 with catch @ 010243a8
                       catch() { ... } // from try @ 010246c8 with catch @ 010243a8
                       catch() { ... } // from try @ 01024760 with catch @ 010243a8 */
    uVar2 = StrPair::GetStr((StrPair *)(lVar1 + 0x18));
    return uVar2;
  }
  return 0;
}

