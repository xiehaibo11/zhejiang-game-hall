
/* dragonBones::ActionData::~ActionData() */

void __thiscall dragonBones::ActionData::~ActionData(ActionData *this)

{
  ActionData *pAVar1;
  
  *(undefined ***)this = &PTR__ActionData_016d86c8;
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
  *(undefined4 *)(this + 0x10) = 0;
  if (((byte)this[0x18] & 1) == 0) {
    pAVar1 = this + 0x19;
  }
  else {
    pAVar1 = *(ActionData **)(this + 0x28);
  }
  *pAVar1 = (ActionData)0x0;
  if (((byte)this[0x18] & 1) != 0) {
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    operator_delete(*(void **)(this + 0x28));
  }
  operator_delete(this);
  return;
}

