
/* v8::internal::HeapSnapshot::AddLocation(v8::internal::HeapEntry*, int, int, int) */

void __thiscall
v8::internal::HeapSnapshot::AddLocation
          (HeapSnapshot *this,HeapEntry *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint local_20;
  int local_1c;
  int iStack_18;
  int local_14;
  
  local_20 = *(uint *)param_1 >> 4;
  puVar1 = *(uint **)(this + 0x178);
  if (puVar1 < *(uint **)(this + 0x180)) {
    *puVar1 = local_20;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    *(long *)(this + 0x178) = *(long *)(this + 0x178) + 0x10;
  }
  else {
    local_1c = param_4;
    iStack_18 = param_3;
    local_14 = param_2;
    std::__ndk1::
    vector<v8::internal::SourceLocation,std::__ndk1::allocator<v8::internal::SourceLocation>>::
    __emplace_back_slow_path<int,int&,int&,int&>
              ((vector<v8::internal::SourceLocation,std::__ndk1::allocator<v8::internal::SourceLocation>>
                *)(this + 0x170),(int *)&local_20,&local_14,&iStack_18,&local_1c);
  }
  return;
}

