
/* v8::internal::ProfileGenerator::ProfileGenerator(v8::internal::CpuProfilesCollection*,
   v8::internal::CodeMap*) */

void __thiscall
v8::internal::ProfileGenerator::ProfileGenerator
          (ProfileGenerator *this,CpuProfilesCollection *param_1,CodeMap *param_2)

{
  *(CpuProfilesCollection **)this = param_1;
  *(CodeMap **)(this + 8) = param_2;
  return;
}

