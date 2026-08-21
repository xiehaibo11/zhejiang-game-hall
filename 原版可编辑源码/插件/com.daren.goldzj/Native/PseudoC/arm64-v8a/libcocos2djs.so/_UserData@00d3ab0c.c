
/* dragonBones::UserData::~UserData() */

void __thiscall dragonBones::UserData::~UserData(UserData *this)

{
  void *pvVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(this + 0x40);
  pbVar3 = *(byte **)(this + 0x48);
  *(undefined ***)this = &PTR__UserData_01c911c0;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  if (pbVar3 == pbVar4) {
    *(byte **)(this + 0x48) = pbVar4;
    pbVar3 = pbVar4;
  }
  else {
    do {
      pbVar2 = pbVar3 + -0x18;
      if ((*pbVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
      pbVar3 = pbVar2;
    } while (pbVar4 != pbVar2);
    pbVar3 = *(byte **)(this + 0x40);
    *(byte **)(this + 0x48) = pbVar4;
  }
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = pbVar3;
    if (pbVar4 != pbVar3) {
      do {
        pbVar2 = pbVar4 + -0x18;
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar2;
      } while (pbVar3 != pbVar2);
      pbVar2 = *(byte **)(this + 0x40);
    }
    *(byte **)(this + 0x48) = pbVar3;
    operator_delete(pbVar2);
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

