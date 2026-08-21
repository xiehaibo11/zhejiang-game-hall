
/* v8::internal::interpreter::HandlerTableBuilder::SetPrediction(int,
   v8::internal::HandlerTable::CatchPrediction) */

void __thiscall
v8::internal::interpreter::HandlerTableBuilder::SetPrediction
          (HandlerTableBuilder *this,int param_1,undefined4 param_3)

{
  *(undefined4 *)(*(long *)this + (long)param_1 * 0x20 + 0x1c) = param_3;
  return;
}

