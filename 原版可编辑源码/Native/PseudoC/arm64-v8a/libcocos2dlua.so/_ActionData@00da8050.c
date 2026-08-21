
/* dragonBones::ActionData::~ActionData() */

void __thiscall dragonBones::ActionData::~ActionData(ActionData *this)

{
  ActionData AVar1;
  ActionData *pAVar2;
  
  *(undefined ***)this = &PTR__ActionData_016d86c8;
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
                    /* try { // try from 00da807c to 00ea8087 has its CatchHandler @ 00da8098 */
  *(undefined4 *)(this + 0x10) = 0;
                    /* try { // try from 00da8088 to 00ea80cf has its CatchHandler @ 00da8038 */
  if (((byte)this[0x18] & 1) == 0) {
    pAVar2 = this + 0x19;
  }
  else {
    pAVar2 = *(ActionData **)(this + 0x28);
  }
                    /* catch() { ... } // from try @ 00da807c with catch @ 00da8098 */
  *pAVar2 = (ActionData)0x0;
  AVar1 = this[0x18];
  if (((byte)AVar1 & 1) == 0) {
    this[0x18] = (ActionData)0x0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    if (((byte)AVar1 & 1) != 0) {
      operator_delete(*(void **)(this + 0x28));
      return;
    }
  }
  return;
}

