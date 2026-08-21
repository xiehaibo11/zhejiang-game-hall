
/* dragonBones::SlotData::~SlotData() */

void __thiscall dragonBones::SlotData::~SlotData(SlotData *this)

{
  undefined1 *puVar1;
  SlotData *pSVar2;
  SlotData *pSVar3;
  SlotData *pSVar4;
  
                    /* try { // try from 00d883c4 to 00e883d3 has its CatchHandler @ 00d889d4 */
  *(undefined ***)this = &PTR__SlotData_016d6bc8;
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
  pSVar4 = this + 0x38;
  puVar1 = *(undefined1 **)pSVar4;
  if ((puVar1 != (undefined1 *)0x0) && (puVar1 != DEFAULT_COLOR)) {
    operator_delete(puVar1);
  }
  pSVar2 = this + 0x20;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (((byte)*pSVar2 & 1) == 0) {
    pSVar3 = this + 0x21;
  }
  else {
    pSVar3 = *(SlotData **)(this + 0x30);
  }
  *pSVar3 = (SlotData)0x0;
  if (((byte)*pSVar2 & 1) == 0) {
    *pSVar2 = (SlotData)0x0;
    *(undefined8 *)pSVar4 = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  else {
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)pSVar4 = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    if (((byte)*pSVar2 & 1) != 0) {
      operator_delete(*(void **)(this + 0x30));
      return;
    }
  }
  return;
}

