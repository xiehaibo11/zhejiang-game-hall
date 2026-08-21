
/* v8::internal::DateCache::GetLocalOffsetFromOS(long, bool) */

int __thiscall
v8::internal::DateCache::GetLocalOffsetFromOS(DateCache *this,long param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = *(int *)(this + 0x228);
  if (iVar2 == 0x7fffffff) {
    dVar3 = (double)(**(code **)(**(long **)(this + 0x250) + 0x10))
                              ((double)param_1,*(long **)(this + 0x250),param_2);
    iVar2 = (int)dVar3;
    *(int *)(this + 0x228) = iVar2;
  }
  if (!param_2) {
    param_1 = (long)((double)param_1 - ((double)iVar2 + 3600000.0));
  }
  iVar1 = DaylightSavingsOffsetInMs(this,param_1);
  return (int)((double)iVar2 + (double)iVar1);
}

