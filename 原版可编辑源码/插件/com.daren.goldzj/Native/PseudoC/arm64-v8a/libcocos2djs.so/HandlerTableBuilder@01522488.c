
/* v8::internal::interpreter::HandlerTableBuilder::HandlerTableBuilder(v8::internal::Zone*) */

void __thiscall
v8::internal::interpreter::HandlerTableBuilder::HandlerTableBuilder
          (HandlerTableBuilder *this,Zone *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(Zone **)(this + 0x18) = param_1;
  return;
}

