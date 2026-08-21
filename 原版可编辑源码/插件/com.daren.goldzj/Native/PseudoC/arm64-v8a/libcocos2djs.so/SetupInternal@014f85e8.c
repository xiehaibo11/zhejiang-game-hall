
/* v8::internal::ItemParallelJob::Task::SetupInternal(v8::base::Semaphore*,
   std::__ndk1::vector<v8::internal::ItemParallelJob::Item*,
   std::__ndk1::allocator<v8::internal::ItemParallelJob::Item*> >*, unsigned long) */

void __thiscall
v8::internal::ItemParallelJob::Task::SetupInternal
          (Task *this,Semaphore *param_1,vector *param_2,ulong param_3)

{
  ulong uVar1;
  
  *(Semaphore **)(this + 0x48) = param_1;
  *(vector **)(this + 0x28) = param_2;
  uVar1 = *(long *)(param_2 + 8) - *(long *)param_2 >> 3;
  if (param_3 < uVar1) {
    *(ulong *)(this + 0x30) = param_3;
    return;
  }
  *(ulong *)(this + 0x38) = uVar1;
  return;
}

