
/* v8::internal::compiler::Typer::Visitor::TypeConstant(v8::internal::Handle<v8::internal::Object>)
    */

void __thiscall
v8::internal::compiler::Typer::Visitor::TypeConstant(Visitor *this,undefined8 param_2)

{
  Type::NewConstant(*(undefined8 *)(*(long *)(this + 8) + 0x20),param_2,
                    **(undefined8 **)(*(long *)(this + 8) + 8));
  return;
}

