
/* fairygui::GearBase::getTweenConfig() */

void __thiscall fairygui::GearBase::getTweenConfig(GearBase *this)

{
  undefined1 *puVar1;
  
                    /* catch() { ... } // from try @ 00aaf76c with catch @ 00ab03f4
                       catch() { ... } // from try @ 00aafa4c with catch @ 00ab03f4
                       catch() { ... } // from try @ 00aafb2c with catch @ 00ab03f4
                       catch() { ... } // from try @ 00ab0238 with catch @ 00ab03f4 */
                    /* catch() { ... } // from try @ 00aaf964 with catch @ 00ab03f8
                       catch() { ... } // from try @ 00aaff44 with catch @ 00ab03f8
                       catch() { ... } // from try @ 00ab0044 with catch @ 00ab03f8
                       catch() { ... } // from try @ 00ab0250 with catch @ 00ab03f8 */
                    /* catch() { ... } // from try @ 00aaf9e0 with catch @ 00ab03fc
                       catch() { ... } // from try @ 00ab0070 with catch @ 00ab03fc
                       catch() { ... } // from try @ 00ab018c with catch @ 00ab03fc
                       catch() { ... } // from try @ 00ab0268 with catch @ 00ab03fc */
  if (*(long *)(this + 0x18) == 0) {
    puVar1 = operator_new(0x20);
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *puVar1 = 1;
    *(undefined4 *)(puVar1 + 4) = 5;
    *(undefined8 *)(puVar1 + 8) = 0x3e99999a;
    *(undefined1 **)(this + 0x18) = puVar1;
  }
                    /* try { // try from 00ab0438 to 00bb0593 has its CatchHandler @ 00ab0438
                       catch() { ... } // from try @ 00ab0438 with catch @ 00ab0438
                       catch() { ... } // from try @ 00ab0614 with catch @ 00ab0438 */
  return;
}

