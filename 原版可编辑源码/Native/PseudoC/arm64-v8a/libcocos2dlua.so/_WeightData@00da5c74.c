
/* dragonBones::WeightData::~WeightData() */

void __thiscall dragonBones::WeightData::~WeightData(WeightData *this)

{
  void *pvVar1;
  
                    /* try { // try from 00da5c7c to 00ea5c7f has its CatchHandler @ 00da5d80 */
                    /* try { // try from 00da5c80 to 00ea5d93 has its CatchHandler @ 00da5c48 */
  pvVar1 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__WeightData_016d8550;
  *(void **)(this + 0x20) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

