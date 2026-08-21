
/* v8::internal::Heap::IterateSmiRoots(v8::internal::RootVisitor*) */

void __thiscall v8::internal::Heap::IterateSmiRoots(Heap *this,RootVisitor *param_1)

{
  base::RecursiveMutex::Lock((RecursiveMutex *)(this + 0xce0));
  (**(code **)(*(long *)param_1 + 0x10))(param_1,4,0,this + -0x7878,this + -0x7840);
  (**(code **)(*(long *)param_1 + 0x20))(param_1,4);
  base::RecursiveMutex::Unlock((RecursiveMutex *)(this + 0xce0));
  return;
}

