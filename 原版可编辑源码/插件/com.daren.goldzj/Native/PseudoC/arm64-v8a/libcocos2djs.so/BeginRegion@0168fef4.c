
/* v8::internal::compiler::CommonOperatorBuilder::BeginRegion(v8::internal::compiler::RegionObservability)
    */

long __thiscall
v8::internal::compiler::CommonOperatorBuilder::BeginRegion(CommonOperatorBuilder *this,char param_2)

{
  if (param_2 == '\x01') {
    return *(long *)this + 0x870;
  }
  if (param_2 == '\0') {
    return *(long *)this + 0x840;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

