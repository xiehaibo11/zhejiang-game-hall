
/* v8::internal::ConsumedPreparseData::For(v8::internal::Zone*, v8::internal::ZonePreparseData*) */

ConsumedPreparseData * __thiscall
v8::internal::ConsumedPreparseData::For
          (ConsumedPreparseData *this,Zone *param_1,ZonePreparseData *param_2)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  
  if (param_1 == (Zone *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x28);
    this = operator_new(0x10);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[3] = param_1;
    puVar1[4] = param_1;
    *puVar1 = &PTR__BaseConsumedPreparseData_01cb5410;
    puVar1[1] = this;
  }
  *in_x8 = puVar1;
  return this;
}

