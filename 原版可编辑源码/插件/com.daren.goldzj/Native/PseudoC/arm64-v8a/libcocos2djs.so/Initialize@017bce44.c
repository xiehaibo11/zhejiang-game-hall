
/* v8::internal::interpreter::BytecodeArrayRandomIterator::Initialize() */

void __thiscall
v8::internal::interpreter::BytecodeArrayRandomIterator::Initialize
          (BytecodeArrayRandomIterator *this)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = (**(code **)**(undefined8 **)this)();
  if (iVar1 < iVar2) {
    do {
      local_14 = *(int *)(this + 8);
      if (*(int **)(this + 0x20) < *(int **)(this + 0x28)) {
        **(int **)(this + 0x20) = local_14;
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 4;
      }
      else {
        std::__ndk1::vector<int,v8::internal::ZoneAllocator<int>>::__push_back_slow_path<int>
                  ((vector<int,v8::internal::ZoneAllocator<int>> *)(this + 0x18),&local_14);
      }
      iVar1 = *(int *)(this + 8);
      iVar2 = BytecodeArrayAccessor::current_bytecode_size((BytecodeArrayAccessor *)this);
      BytecodeArrayAccessor::SetOffset((BytecodeArrayAccessor *)this,iVar2 + iVar1);
      iVar1 = *(int *)(this + 8);
      iVar2 = (**(code **)**(undefined8 **)this)();
    } while (iVar1 < iVar2);
  }
  *(undefined4 *)(this + 0x38) = 0;
  if (*(int **)(this + 0x20) != *(int **)(this + 0x18)) {
    BytecodeArrayAccessor::SetOffset((BytecodeArrayAccessor *)this,**(int **)(this + 0x18));
  }
  return;
}

