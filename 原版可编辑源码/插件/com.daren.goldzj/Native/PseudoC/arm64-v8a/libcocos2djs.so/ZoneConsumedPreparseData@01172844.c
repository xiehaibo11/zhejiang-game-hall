
/* v8::internal::ZoneConsumedPreparseData::ZoneConsumedPreparseData(v8::internal::Zone*,
   v8::internal::ZonePreparseData*) */

void __thiscall
v8::internal::ZoneConsumedPreparseData::ZoneConsumedPreparseData
          (ZoneConsumedPreparseData *this,Zone *param_1,ZonePreparseData *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = 0;
  *(undefined8 *)((long)puVar1 + 6) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(ZonePreparseData **)(this + 0x18) = param_2;
  *(ZonePreparseData **)(this + 0x20) = param_2;
  *(undefined ***)this = &PTR__BaseConsumedPreparseData_01cb5410;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}

