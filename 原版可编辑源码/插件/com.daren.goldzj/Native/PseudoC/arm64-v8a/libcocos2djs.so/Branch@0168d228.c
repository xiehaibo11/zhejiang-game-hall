
/* v8::internal::compiler::CommonOperatorBuilder::Branch(v8::internal::compiler::BranchHint,
   v8::internal::compiler::IsSafetyCheck) */

long __thiscall
v8::internal::compiler::CommonOperatorBuilder::Branch
          (CommonOperatorBuilder *this,char param_2,char param_3)

{
  if (param_3 == '\0' && param_2 == '\0') {
    return *(long *)this + 0x570;
  }
  if ((param_2 == '\x01') && (param_3 == '\0')) {
    return *(long *)this + 0x5a0;
  }
  if ((param_2 == '\x02') && (param_3 == '\0')) {
    return *(long *)this + 0x5d0;
  }
  if ((param_2 == '\0') && (param_3 == '\x01')) {
    return *(long *)this + 0x600;
  }
  if ((param_2 == '\x01') && (param_3 == '\x01')) {
    return *(long *)this + 0x630;
  }
  if ((param_2 == '\x02') && (param_3 == '\x01')) {
    return *(long *)this + 0x660;
  }
  if ((param_2 == '\0') && (param_3 == '\x02')) {
    return *(long *)this + 0x690;
  }
  if ((param_2 == '\x01') && (param_3 == '\x02')) {
    return *(long *)this + 0x6c0;
  }
  if ((param_2 == '\x02') && (param_3 == '\x02')) {
    return *(long *)this + 0x6f0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

