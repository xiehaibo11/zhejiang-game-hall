
/* dragonBones::WeightData::~WeightData() */

void __thiscall dragonBones::WeightData::~WeightData(WeightData *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__WeightData_01c91048;
  *(void **)(this + 0x20) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

