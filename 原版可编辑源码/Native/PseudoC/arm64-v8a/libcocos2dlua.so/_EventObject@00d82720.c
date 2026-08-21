
/* dragonBones::EventObject::~EventObject() */

void __thiscall dragonBones::EventObject::~EventObject(EventObject *this)

{
  EventObject EVar1;
  EventObject *pEVar2;
  EventObject *pEVar3;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__EventObject_016d69b8;
  pEVar3 = this + 0x18;
                    /* try { // try from 00d8274c to 00e827e7 has its CatchHandler @ 00d828d8 */
  if (((byte)*pEVar3 & 1) == 0) {
    pEVar2 = this + 0x19;
  }
  else {
    pEVar2 = *(EventObject **)(this + 0x28);
  }
  *pEVar2 = (EventObject)0x0;
  if (((byte)*pEVar3 & 1) == 0) {
    *pEVar3 = (EventObject)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  if (((byte)this[0x30] & 1) == 0) {
    pEVar2 = this + 0x31;
  }
  else {
    pEVar2 = *(EventObject **)(this + 0x40);
  }
  *pEVar2 = (EventObject)0x0;
  EVar1 = this[0x30];
  if (((byte)EVar1 & 1) == 0) {
    this[0x30] = (EventObject)0x0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    EVar1 = *pEVar3;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    if (((byte)EVar1 & 1) != 0) {
      operator_delete(*(void **)(this + 0x40));
    }
    EVar1 = *pEVar3;
  }
  if (((byte)EVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
    return;
  }
  return;
}

