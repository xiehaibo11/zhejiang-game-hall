
/* v8::internal::compiler::RangeType::Limits::IsEmpty() */

bool __thiscall v8::internal::compiler::RangeType::Limits::IsEmpty(Limits *this)

{
  return *(double *)(this + 8) < *(double *)this;
}

