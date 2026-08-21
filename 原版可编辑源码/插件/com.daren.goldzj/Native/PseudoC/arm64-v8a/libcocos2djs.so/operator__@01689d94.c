
/* v8::internal::compiler::CodeAssemblerVariable::ImplComparator::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CodeAssemblerVariable::Impl
   const*, v8::internal::compiler::CodeAssemblerVariable::Impl const*) const */

bool __thiscall
v8::internal::compiler::CodeAssemblerVariable::ImplComparator::operator()
          (ImplComparator *this,Impl *param_1,Impl *param_2)

{
  return *(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc);
}

