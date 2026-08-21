
/* v8::internal::RuntimeCallStats::IsCalledOnTheSameThread() */

bool __thiscall v8::internal::RuntimeCallStats::IsCalledOnTheSameThread(RuntimeCallStats *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x18);
  iVar3 = ThreadId::GetCurrentThreadId();
  if (iVar1 == -1) {
    *(int *)(this + 0x18) = iVar3;
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(this + 0x18) == iVar3;
  }
  return bVar2;
}

