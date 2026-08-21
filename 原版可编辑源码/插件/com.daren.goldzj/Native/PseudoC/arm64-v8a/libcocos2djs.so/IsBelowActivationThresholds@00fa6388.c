
/* v8::internal::IncrementalMarking::IsBelowActivationThresholds() const */

bool __thiscall
v8::internal::IncrementalMarking::IsBelowActivationThresholds(IncrementalMarking *this)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = Heap::OldGenerationSizeOfObjects(*(Heap **)this);
  if (uVar2 < 0x800001) {
    uVar2 = Heap::GlobalSizeOfObjects(*(Heap **)this);
    bVar1 = uVar2 < 0x1000001;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

