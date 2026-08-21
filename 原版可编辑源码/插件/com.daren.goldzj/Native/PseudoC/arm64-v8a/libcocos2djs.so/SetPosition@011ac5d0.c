
/* v8::internal::SourcePositionTable::SetPosition(int, int, int) */

void __thiscall
v8::internal::SourcePositionTable::SetPosition
          (SourcePositionTable *this,int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  int local_20;
  int iStack_1c;
  int local_18;
  
  puVar1 = *(undefined8 **)(this + 8);
  if ((*(undefined8 **)this == puVar1) ||
     ((*(int *)((long)puVar1 - 0xc) != param_1 &&
      ((*(int *)(puVar1 + -1) != param_2 || (*(int *)((long)puVar1 - 4) != param_3)))))) {
    if (puVar1 < *(undefined8 **)(this + 0x10)) {
      *(int *)(puVar1 + 1) = param_3;
      *puVar1 = CONCAT44(param_2,param_1);
      *(long *)(this + 8) = *(long *)(this + 8) + 0xc;
    }
    else {
      local_20 = param_1;
      iStack_1c = param_2;
      local_18 = param_3;
      std::__ndk1::
      vector<v8::internal::SourcePositionTable::SourcePositionTuple,std::__ndk1::allocator<v8::internal::SourcePositionTable::SourcePositionTuple>>
      ::__push_back_slow_path<v8::internal::SourcePositionTable::SourcePositionTuple>
                ((vector<v8::internal::SourcePositionTable::SourcePositionTuple,std::__ndk1::allocator<v8::internal::SourcePositionTable::SourcePositionTuple>>
                  *)this,(SourcePositionTuple *)&local_20);
    }
  }
  return;
}

