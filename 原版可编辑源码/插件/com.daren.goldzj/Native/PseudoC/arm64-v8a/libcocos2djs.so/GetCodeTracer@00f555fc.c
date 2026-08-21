
/* v8::internal::Isolate::GetCodeTracer() */

CodeTracer * v8::internal::Isolate::GetCodeTracer(void)

{
  long in_x0;
  ulong in_x1;
  CodeTracer *this;
  
  this = *(CodeTracer **)(in_x0 + 0xb7d0);
  if (this == (CodeTracer *)0x0) {
    this = Malloced::operator_new((Malloced *)0xa0,in_x1);
    CodeTracer::CodeTracer(this,*(int *)(in_x0 + 0x9480));
    *(CodeTracer **)(in_x0 + 0xb7d0) = this;
  }
  return this;
}

