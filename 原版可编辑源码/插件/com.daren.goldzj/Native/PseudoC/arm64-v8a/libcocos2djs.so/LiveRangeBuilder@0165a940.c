
/* v8::internal::compiler::LiveRangeBuilder::LiveRangeBuilder(v8::internal::compiler::RegisterAllocationData*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::LiveRangeBuilder
          (LiveRangeBuilder *this,RegisterAllocationData *param_1,Zone *param_2)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_2;
  *(undefined8 *)(this + 0x20) = 0;
  *(RegisterAllocationData **)this = param_1;
  *(LiveRangeBuilder **)(this + 8) = this + 0x10;
  return;
}

