
/* v8::internal::compiler::ContextAccess::ContextAccess(unsigned long, unsigned long, bool) */

void __thiscall
v8::internal::compiler::ContextAccess::ContextAccess
          (ContextAccess *this,ulong param_1,ulong param_2,bool param_3)

{
  *(short *)(this + 2) = (short)param_1;
  *this = (ContextAccess)param_3;
  *(int *)(this + 4) = (int)param_2;
  return;
}

