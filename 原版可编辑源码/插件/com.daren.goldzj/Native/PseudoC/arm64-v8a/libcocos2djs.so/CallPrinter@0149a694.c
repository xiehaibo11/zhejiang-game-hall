
/* v8::internal::CallPrinter::CallPrinter(v8::internal::Isolate*, bool) */

void __thiscall
v8::internal::CallPrinter::CallPrinter(CallPrinter *this,Isolate *param_1,bool param_2)

{
  IncrementalStringBuilder *this_00;
  undefined8 uVar1;
  
  this_00 = operator_new(0x28);
  IncrementalStringBuilder::IncrementalStringBuilder(this_00,param_1);
  *(IncrementalStringBuilder **)(this + 0x10) = this_00;
  *(Isolate **)this = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x1c) = 0;
  this[0x21] = (CallPrinter)0x0;
  *(undefined2 *)(this + 0x1f) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x1e] = (CallPrinter)param_2;
  this[0x38] = (CallPrinter)0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  this[0x48] = (CallPrinter)0x0;
  *(undefined8 *)(this + 0x40) = uVar1;
  return;
}

