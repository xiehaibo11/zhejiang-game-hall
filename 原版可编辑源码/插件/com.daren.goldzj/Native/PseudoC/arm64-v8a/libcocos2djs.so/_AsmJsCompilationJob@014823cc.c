
/* v8::internal::AsmJsCompilationJob::~AsmJsCompilationJob() */

void __thiscall v8::internal::AsmJsCompilationJob::~AsmJsCompilationJob(AsmJsCompilationJob *this)

{
  *(undefined ***)this = &PTR__AsmJsCompilationJob_01cc4118;
  if (*(long *)(this + 0xc0) != 0) {
    *(long *)(this + 200) = *(long *)(this + 0xc0);
  }
  Zone::~Zone((Zone *)(this + 0x48));
  return;
}

