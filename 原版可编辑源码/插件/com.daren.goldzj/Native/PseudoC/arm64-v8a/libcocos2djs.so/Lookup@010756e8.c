
/* v8::internal::ScriptContextTable::Lookup(v8::internal::Isolate*,
   v8::internal::ScriptContextTable, v8::internal::String,
   v8::internal::ScriptContextTable::LookupResult*) */

undefined8
v8::internal::ScriptContextTable::Lookup
          (undefined8 param_1,ulong param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined1 auStack_44 [4];
  
  if (1 < *(int *)(param_2 + 7)) {
    lVar2 = 0;
    iVar3 = 4;
    do {
      iVar1 = ScopeInfo::ContextSlotIndex
                        (param_2 & 0xffffffff00000000 |
                         (ulong)*(uint *)((param_2 & 0xffffffff00000000 |
                                          (ulong)*(uint *)((long)(param_2 + 7) + (long)iVar3)) + 7),
                         param_3,param_4 + 2,(long)param_4 + 9,(long)param_4 + 10,auStack_44);
      if (-1 < iVar1) {
        *param_4 = (int)lVar2;
        param_4[1] = iVar1;
        return 1;
      }
      lVar2 = lVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (lVar2 < *(int *)(param_2 + 7) >> 1);
  }
  return 0;
}

