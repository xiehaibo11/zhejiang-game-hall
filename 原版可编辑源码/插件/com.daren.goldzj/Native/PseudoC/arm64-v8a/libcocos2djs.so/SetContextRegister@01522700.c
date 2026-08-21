
/* v8::internal::interpreter::HandlerTableBuilder::SetContextRegister(int,
   v8::internal::interpreter::Register) */

void __thiscall
v8::internal::interpreter::HandlerTableBuilder::SetContextRegister
          (HandlerTableBuilder *this,int param_1,undefined4 param_3)

{
  *(undefined4 *)(*(long *)this + (long)param_1 * 0x20 + 0x18) = param_3;
  return;
}

