
/* v8::internal::compiler::OperationTyper::Merge(v8::internal::compiler::Type,
   v8::internal::compiler::Type) */

void __thiscall
v8::internal::compiler::OperationTyper::Merge
          (OperationTyper *this,undefined8 param_2,undefined8 param_3)

{
  Type::Union(param_2,param_3,*(undefined8 *)this);
  return;
}

