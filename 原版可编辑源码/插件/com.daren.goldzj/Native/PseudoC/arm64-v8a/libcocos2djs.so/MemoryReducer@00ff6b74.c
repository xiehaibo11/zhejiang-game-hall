
/* v8::internal::MemoryReducer::MemoryReducer(v8::internal::Heap*) */

void __thiscall v8::internal::MemoryReducer::MemoryReducer(MemoryReducer *this,Heap *param_1)

{
  long *plVar1;
  
  *(Heap **)this = param_1;
  plVar1 = (long *)V8::GetCurrentPlatform();
  (**(code **)(*plVar1 + 0x30))(this + 8,plVar1,param_1 + -0x8850);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

