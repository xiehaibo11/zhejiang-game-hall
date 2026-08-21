
/* fairygui::TouchInfo::~TouchInfo() */

void __thiscall fairygui::TouchInfo::~TouchInfo(TouchInfo *this)

{
  WeakPtr *pWVar1;
  WeakPtr *pWVar2;
  WeakPtr *pWVar3;
  
                    /* try { // try from 00aaed80 to 00baed93 has its CatchHandler @ 00aaee94 */
  pWVar3 = *(WeakPtr **)(this + 0x40);
  pWVar1 = *(WeakPtr **)(this + 0x48);
  while (pWVar1 != pWVar3) {
    pWVar1 = pWVar1 + -8;
                    /* try { // try from 00aaeda4 to 00baedb7 has its CatchHandler @ 00aaee74 */
    WeakPtr::~WeakPtr(pWVar1);
  }
  pWVar1 = *(WeakPtr **)(this + 0x58);
  pWVar2 = *(WeakPtr **)(this + 0x60);
  *(WeakPtr **)(this + 0x48) = pWVar3;
                    /* try { // try from 00aaedb8 to 00baeecf has its CatchHandler @ 00aaea38 */
  pWVar3 = pWVar1;
  if (pWVar2 != pWVar1) {
    do {
      pWVar2 = pWVar2 + -8;
      WeakPtr::~WeakPtr(pWVar2);
    } while (pWVar1 != pWVar2);
    pWVar3 = *(WeakPtr **)(this + 0x58);
  }
  *(WeakPtr **)(this + 0x60) = pWVar1;
  if (pWVar3 != (WeakPtr *)0x0) {
    pWVar2 = pWVar3;
    if (pWVar1 != pWVar3) {
      do {
        pWVar1 = pWVar1 + -8;
        WeakPtr::~WeakPtr(pWVar1);
      } while (pWVar3 != pWVar1);
      pWVar2 = *(WeakPtr **)(this + 0x58);
    }
    *(WeakPtr **)(this + 0x60) = pWVar3;
    operator_delete(pWVar2);
  }
  pWVar3 = *(WeakPtr **)(this + 0x40);
  if (pWVar3 != (WeakPtr *)0x0) {
    pWVar2 = *(WeakPtr **)(this + 0x48);
                    /* catch() { ... } // from try @ 00aaed14 with catch @ 00aaee20 */
    pWVar1 = pWVar3;
                    /* catch() { ... } // from try @ 00aaecf4 with catch @ 00aaee24 */
    if (pWVar2 != pWVar3) {
      do {
        pWVar2 = pWVar2 + -8;
                    /* catch() { ... } // from try @ 00aaec88 with catch @ 00aaee30 */
        WeakPtr::~WeakPtr(pWVar2);
                    /* catch() { ... } // from try @ 00aaec68 with catch @ 00aaee34 */
      } while (pWVar3 != pWVar2);
      pWVar1 = *(WeakPtr **)(this + 0x40);
    }
    *(WeakPtr **)(this + 0x48) = pWVar3;
                    /* catch() { ... } // from try @ 00aaeb7c with catch @ 00aaee4c */
    operator_delete(pWVar1);
  }
                    /* catch() { ... } // from try @ 00aaeb5c with catch @ 00aaee50 */
                    /* catch() { ... } // from try @ 00aaebe4 with catch @ 00aaee5c */
                    /* catch() { ... } // from try @ 00aaeba8 with catch @ 00aaee60 */
  WeakPtr::~WeakPtr((WeakPtr *)(this + 0x38));
  return;
}

