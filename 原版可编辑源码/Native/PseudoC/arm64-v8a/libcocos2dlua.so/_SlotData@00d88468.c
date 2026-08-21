
/* dragonBones::SlotData::~SlotData() */

void __thiscall dragonBones::SlotData::~SlotData(SlotData *this)

{
  undefined1 *puVar1;
  SlotData *pSVar2;
  
  *(undefined ***)this = &PTR__SlotData_016d6bc8;
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
  puVar1 = *(undefined1 **)(this + 0x38);
  if ((puVar1 != (undefined1 *)0x0) && (puVar1 != DEFAULT_COLOR)) {
    operator_delete(puVar1);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 00d884c4 to 00e884cf has its CatchHandler @ 00d88904 */
  if (((byte)this[0x20] & 1) == 0) {
    pSVar2 = this + 0x21;
  }
  else {
    pSVar2 = *(SlotData **)(this + 0x30);
  }
  *pSVar2 = (SlotData)0x0;
  if (((byte)this[0x20] & 1) != 0) {
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    operator_delete(*(void **)(this + 0x30));
  }
  operator_delete(this);
  return;
}

