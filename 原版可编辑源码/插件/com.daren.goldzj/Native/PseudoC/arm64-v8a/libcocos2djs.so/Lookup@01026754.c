
/* v8::internal::SourceCodeCache::Lookup(v8::internal::Isolate*, v8::internal::Vector<char const>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>*) */

undefined8
v8::internal::SourceCodeCache::Lookup
          (long param_1,Isolate *param_2,undefined8 param_3,int param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong local_58;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (1 < *(int *)(uVar2 + 3)) {
    lVar3 = 0;
    iVar4 = 4;
    do {
      local_58 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + (long)(iVar4 + 3));
      uVar2 = String::IsOneByteEqualTo(&local_58,param_3,(long)param_4);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 8) & 0xffffffff00000000 |
                (ulong)*(uint *)(*(ulong *)(param_1 + 8) + (long)iVar4 + 7);
        if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar1 = *(ulong **)(param_2 + 0x95a0);
          if (puVar1 == *(ulong **)(param_2 + 0x95a8)) {
            puVar1 = (ulong *)HandleScope::Extend(param_2);
          }
          *(ulong **)(param_2 + 0x95a0) = puVar1 + 1;
          *puVar1 = uVar2;
        }
        else {
          puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar2);
        }
        *param_5 = (long)puVar1;
        return 1;
      }
      uVar2 = *(ulong *)(param_1 + 8);
      lVar3 = lVar3 + 2;
      iVar4 = iVar4 + 8;
    } while (lVar3 < *(int *)(uVar2 + 3) >> 1);
  }
  return 0;
}

