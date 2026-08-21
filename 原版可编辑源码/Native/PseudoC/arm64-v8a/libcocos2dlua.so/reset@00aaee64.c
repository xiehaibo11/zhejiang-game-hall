
/* fairygui::TouchInfo::reset() */

void __thiscall fairygui::TouchInfo::reset(TouchInfo *this)

{
  WeakPtr *pWVar1;
  WeakPtr *pWVar2;
  
                    /* catch() { ... } // from try @ 00aaeadc with catch @ 00aaee64 */
                    /* catch() { ... } // from try @ 00aaea98 with catch @ 00aaee68 */
                    /* catch() { ... } // from try @ 00aaec20 with catch @ 00aaee74
                       catch() { ... } // from try @ 00aaec78 with catch @ 00aaee74
                       catch() { ... } // from try @ 00aaeda4 with catch @ 00aaee74 */
  pWVar1 = *(WeakPtr **)(this + 0x40);
  pWVar2 = *(WeakPtr **)(this + 0x48);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
                    /* catch() { ... } // from try @ 00aaeb18 with catch @ 00aaee94
                       catch() { ... } // from try @ 00aaeb6c with catch @ 00aaee94
                       catch() { ... } // from try @ 00aaed80 with catch @ 00aaee94 */
  *(undefined8 *)(this + 0x18) = 0xffffffff00000000;
  *(undefined8 *)(this + 0x10) = 0xffffffff;
  this[0x28] = (TouchInfo)0x0;
  while (pWVar2 != pWVar1) {
    pWVar2 = pWVar2 + -8;
    WeakPtr::~WeakPtr(pWVar2);
  }
                    /* catch() { ... } // from try @ 00aaecb4 with catch @ 00aaeeb4
                       catch() { ... } // from try @ 00aaed04 with catch @ 00aaeeb4
                       catch() { ... } // from try @ 00aaed5c with catch @ 00aaeeb4 */
  *(WeakPtr **)(this + 0x48) = pWVar1;
  WeakPtr::operator=((WeakPtr *)(this + 0x38),(GObject *)0x0);
  pWVar1 = *(WeakPtr **)(this + 0x58);
  pWVar2 = *(WeakPtr **)(this + 0x60);
  this[0x29] = (TouchInfo)0x0;
                    /* try { // try from 00aaeed0 to 00baf0a7 has its CatchHandler @ 00aaeed0
                       catch() { ... } // from try @ 00aaeed0 with catch @ 00aaeed0
                       catch() { ... } // from try @ 00aaf128 with catch @ 00aaeed0 */
  while (pWVar2 != pWVar1) {
    pWVar2 = pWVar2 + -8;
    WeakPtr::~WeakPtr(pWVar2);
  }
  *(WeakPtr **)(this + 0x60) = pWVar1;
  return;
}

