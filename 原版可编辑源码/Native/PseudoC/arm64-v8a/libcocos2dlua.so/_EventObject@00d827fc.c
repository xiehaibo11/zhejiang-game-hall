
/* dragonBones::EventObject::~EventObject() */

void __thiscall dragonBones::EventObject::~EventObject(EventObject *this)

{
  EventObject EVar1;
  EventObject *pEVar2;
  EventObject *pEVar3;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__EventObject_016d69b8;
  pEVar3 = this + 0x18;
  if (((byte)*pEVar3 & 1) == 0) {
    pEVar2 = this + 0x19;
  }
  else {
    pEVar2 = *(EventObject **)(this + 0x28);
  }
  *pEVar2 = (EventObject)0x0;
  if (((byte)*pEVar3 & 1) == 0) {
    *pEVar3 = (EventObject)0x0;
                    /* try { // try from 00d82848 to 00e8284f has its CatchHandler @ 00d82854 */
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
                    /* try { // try from 00d82850 to 00e829c3 has its CatchHandler @ 00d81a64 */
                    /* catch() { ... } // from try @ 00d82848 with catch @ 00d82854 */
                    /* catch() { ... } // from try @ 00d82654 with catch @ 00d82858 */
  if (((byte)this[0x30] & 1) == 0) {
                    /* catch() { ... } // from try @ 00d82674 with catch @ 00d8285c */
    pEVar2 = this + 0x31;
                    /* catch() { ... } // from try @ 00d8212c with catch @ 00d82860 */
  }
  else {
    pEVar2 = *(EventObject **)(this + 0x40);
  }
  *pEVar2 = (EventObject)0x0;
                    /* catch() { ... } // from try @ 00d82120 with catch @ 00d82870 */
  if (((byte)this[0x30] & 1) == 0) {
                    /* catch() { ... } // from try @ 00d81e20 with catch @ 00d82874 */
                    /* catch() { ... } // from try @ 00d81af8 with catch @ 00d82878 */
    this[0x30] = (EventObject)0x0;
                    /* catch() { ... } // from try @ 00d81af0 with catch @ 00d8287c */
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
                    /* catch() { ... } // from try @ 00d81ae8 with catch @ 00d82880 */
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
                    /* catch() { ... } // from try @ 00d81ae0 with catch @ 00d82884 */
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
                    /* catch() { ... } // from try @ 00d81ad8 with catch @ 00d82888 */
    EVar1 = *pEVar3;
                    /* catch() { ... } // from try @ 00d81acc with catch @ 00d8288c */
  }
  else {
                    /* catch() { ... } // from try @ 00d822e0 with catch @ 00d8289c */
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    operator_delete(*(void **)(this + 0x40));
    EVar1 = *pEVar3;
  }
  if (((byte)EVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  operator_delete(this);
  return;
}

