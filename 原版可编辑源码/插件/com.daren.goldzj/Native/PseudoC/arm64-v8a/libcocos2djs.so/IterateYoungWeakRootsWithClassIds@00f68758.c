
/* v8::internal::GlobalHandles::IterateYoungWeakRootsWithClassIds(v8::PersistentHandleVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateYoungWeakRootsWithClassIds
          (GlobalHandles *this,PersistentHandleVisitor *param_1)

{
  long *plVar1;
  long *plVar2;
  long local_18;
  
  plVar2 = *(long **)(this + 0x18);
  for (plVar1 = *(long **)(this + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    local_18 = *plVar1;
    if ((*(short *)(local_18 + 8) != 0) && ((*(byte *)(local_18 + 0xb) & 7) == 2)) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_18,*(undefined2 *)(local_18 + 8));
    }
  }
  return;
}

