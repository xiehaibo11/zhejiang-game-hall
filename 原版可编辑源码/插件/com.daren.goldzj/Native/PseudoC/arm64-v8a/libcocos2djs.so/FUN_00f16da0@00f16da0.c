
void FUN_00f16da0(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  vector<v8::internal::SourceChangeRange,std::__ndk1::allocator<v8::internal::SourceChangeRange>>
  *this;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  this = *(vector<v8::internal::SourceChangeRange,std::__ndk1::allocator<v8::internal::SourceChangeRange>>
           **)(param_1 + 8);
  local_20 = *(int *)(param_1 + 0x10) + param_2;
  iStack_1c = local_20 + param_4;
  iStack_18 = *(int *)(param_1 + 0x14) + param_3;
  iStack_14 = iStack_18 + param_5;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 < *(undefined8 **)(this + 0x10)) {
    puVar1[1] = CONCAT44(iStack_14,iStack_18);
    *puVar1 = CONCAT44(iStack_1c,local_20);
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
  }
  else {
    std::__ndk1::
    vector<v8::internal::SourceChangeRange,std::__ndk1::allocator<v8::internal::SourceChangeRange>>
    ::__emplace_back_slow_path<v8::internal::SourceChangeRange>(this,(SourceChangeRange *)&local_20)
    ;
  }
  return;
}

