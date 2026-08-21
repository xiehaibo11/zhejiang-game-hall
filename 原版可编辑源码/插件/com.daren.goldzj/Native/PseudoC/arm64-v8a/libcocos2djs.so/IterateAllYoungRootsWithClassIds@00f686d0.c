
/* v8::internal::GlobalHandles::IterateAllYoungRootsWithClassIds(v8::PersistentHandleVisitor*) */

void __thiscall
v8::internal::GlobalHandles::IterateAllYoungRootsWithClassIds
          (GlobalHandles *this,PersistentHandleVisitor *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long local_18;
  
  plVar2 = *(long **)(this + 0x18);
  for (plVar1 = *(long **)(this + 0x10); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    local_18 = *plVar1;
    bVar3 = *(byte *)(local_18 + 0xb);
    if (((bVar3 & 7) != 0) &&
       ((((bVar3 & 7) != 4 || ((bVar3 & 0x30) == 0)) && (*(short *)(local_18 + 8) != 0)))) {
      (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_18,*(undefined2 *)(local_18 + 8));
    }
  }
  return;
}

