
/* v8::internal::ClassScope::ClassScope(v8::internal::Zone*, v8::internal::Scope*, bool) */

void __thiscall
v8::internal::ClassScope::ClassScope(ClassScope *this,Zone *param_1,Scope *param_2,bool param_3)

{
  Scope::Scope();
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined2 *)(this + 0x98) = 0;
  this[0x9a] = (ClassScope)param_3;
  this[0x9b] = (ClassScope)0x0;
  *(ushort *)(this + 0x81) = *(ushort *)(this + 0x81) | 1;
  return;
}

