
/* v8::internal::IC::IsTransitionOfMonomorphicTarget(v8::internal::Map, v8::internal::Map) */

bool __thiscall
v8::internal::IC::IsTransitionOfMonomorphicTarget(IC *this,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong *local_50;
  void *local_48;
  long *local_40;
  long *plStack_38;
  long local_18;
  
  if ((int)param_2 == 0) {
    return true;
  }
  if (((int)param_3 == 0) ||
     (((*(uint *)(param_2 + 0xb) >> 0x14 & 1) != 0 && ((*(uint *)(param_2 + 0xb) >> 0x16 & 1) == 0))
     )) {
    return false;
  }
  local_18 = param_2;
  uVar2 = IsMoreGeneralElementsKindTransition
                    (*(byte *)(param_2 + 10) >> 3,*(byte *)(param_3 + 10) >> 3);
  if ((uVar2 & 1) == 0) {
    iVar1 = 0;
    goto LAB_014fc298;
  }
  local_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  local_48 = (void *)0x0;
  pIVar3 = *(Isolate **)(this + 8);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    local_50 = *(ulong **)(pIVar3 + 0x95a0);
    if (local_50 == *(ulong **)(pIVar3 + 0x95a8)) {
      local_50 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = local_50 + 1;
    *local_50 = param_3;
    if (plStack_38 <= local_40) goto LAB_014fc264;
    *local_40 = (long)local_50;
    local_40 = local_40 + 1;
  }
  else {
    local_50 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),param_3);
LAB_014fc264:
    std::__ndk1::
    vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
    ::__push_back_slow_path<v8::internal::Handle<v8::internal::Map>>
              ((vector<v8::internal::Handle<v8::internal::Map>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::Map>>>
                *)&local_48,(Handle *)&local_50);
  }
  iVar1 = Map::FindElementsKindTransitionedMap((Isolate *)&local_18,*(vector **)(this + 8));
  if (local_48 != (void *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
LAB_014fc298:
  return iVar1 == (int)param_3;
}

