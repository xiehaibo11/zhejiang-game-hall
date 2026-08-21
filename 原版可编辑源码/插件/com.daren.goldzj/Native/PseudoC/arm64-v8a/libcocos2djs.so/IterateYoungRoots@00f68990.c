
/* v8::internal::EternalHandles::IterateYoungRoots(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::EternalHandles::IterateYoungRoots(EternalHandles *this,RootVisitor *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(this + 0x28);
  for (piVar2 = *(int **)(this + 0x20); piVar2 != piVar1; piVar2 = piVar2 + 1) {
    (**(code **)(*(long *)param_1 + 0x18))
              (param_1,0xd,0,
               *(long *)(*(long *)(this + 8) + (long)(*piVar2 >> 8) * 8) + (ulong)(byte)*piVar2 * 8)
    ;
  }
  return;
}

