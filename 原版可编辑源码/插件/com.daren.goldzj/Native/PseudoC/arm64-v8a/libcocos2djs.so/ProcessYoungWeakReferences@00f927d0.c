
/* v8::internal::Heap::ProcessYoungWeakReferences(v8::internal::WeakObjectRetainer*) */

void __thiscall
v8::internal::Heap::ProcessYoungWeakReferences(Heap *this,WeakObjectRetainer *param_1)

{
  undefined8 uVar1;
  
  uVar1 = VisitWeakList<v8::internal::Context>(this,*(undefined8 *)(this + 0x5e8),param_1);
  *(undefined8 *)(this + 0x5e8) = uVar1;
  return;
}

