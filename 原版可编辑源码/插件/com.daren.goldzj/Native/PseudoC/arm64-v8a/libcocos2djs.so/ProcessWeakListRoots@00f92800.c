
/* v8::internal::Heap::ProcessWeakListRoots(v8::internal::WeakObjectRetainer*) */

void __thiscall v8::internal::Heap::ProcessWeakListRoots(Heap *this,WeakObjectRetainer *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(this + 0x5e8));
  *(undefined8 *)(this + 0x5e8) = uVar1;
  uVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,*(undefined8 *)(this + 0x5f0));
  *(undefined8 *)(this + 0x5f0) = uVar1;
  return;
}

