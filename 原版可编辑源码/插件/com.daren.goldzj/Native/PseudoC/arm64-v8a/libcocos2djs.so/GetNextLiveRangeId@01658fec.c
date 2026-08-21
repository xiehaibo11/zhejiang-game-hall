
/* v8::internal::compiler::RegisterAllocationData::GetNextLiveRangeId() */

int __thiscall
v8::internal::compiler::RegisterAllocationData::GetNextLiveRangeId(RegisterAllocationData *this)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  TopLevelLiveRange *local_8;
  
  lVar3 = *(long *)(this + 0x88);
  iVar2 = *(int *)(this + 0x188);
  uVar4 = *(long *)(this + 0x90) - lVar3 >> 3;
  uVar1 = (long)iVar2 + 1;
  *(int *)(this + 0x188) = (int)uVar1;
  if ((int)uVar4 <= iVar2) {
    local_8 = (TopLevelLiveRange *)0x0;
    if (uVar4 < uVar1) {
      std::__ndk1::
      vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
      ::__append((vector<v8::internal::compiler::TopLevelLiveRange*,v8::internal::ZoneAllocator<v8::internal::compiler::TopLevelLiveRange*>>
                  *)(this + 0x88),uVar1 - uVar4,&local_8);
    }
    else if (uVar4 != uVar1) {
      *(ulong *)(this + 0x90) = lVar3 + uVar1 * 8;
    }
  }
  return iVar2;
}

