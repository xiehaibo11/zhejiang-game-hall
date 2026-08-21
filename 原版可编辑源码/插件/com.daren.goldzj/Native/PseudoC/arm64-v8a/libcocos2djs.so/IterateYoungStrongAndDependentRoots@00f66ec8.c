
/* v8::internal::GlobalHandles::IterateYoungStrongAndDependentRoots(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateYoungStrongAndDependentRoots
          (GlobalHandles *this,RootVisitor *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x18);
  for (plVar1 = *(long **)(this + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((*(byte *)(*plVar1 + 0xb) & 7) == 1) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,*(undefined8 *)(*plVar1 + 0x10));
    }
  }
  plVar2 = *(long **)(this + 0x38);
  for (plVar1 = *(long **)(this + 0x30); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    if ((*(byte *)(*plVar1 + 0xb) & 3) != 0 && (*(byte *)(*plVar1 + 0xb) & 8) != 0) {
      (**(code **)(*(long *)param_1 + 0x18))(param_1,0xc,0);
    }
  }
  return;
}

