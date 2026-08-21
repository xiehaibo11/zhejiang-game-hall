
/* dragonBones::WeightData::~WeightData() */

void __thiscall dragonBones::WeightData::~WeightData(WeightData *this)

{
  void *pvVar1;
  
                    /* try { // try from 00da5c48 to 00ea5c7b has its CatchHandler @ 00da5c48
                       catch() { ... } // from try @ 00da5c48 with catch @ 00da5c48
                       catch() { ... } // from try @ 00da5c80 with catch @ 00da5c48 */
  pvVar1 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__WeightData_016d8550;
  *(void **)(this + 0x20) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

