
/* v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,
   3>::EnsureGrowable(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedNameDictionary>) */

long * v8::internal::OrderedHashTable<v8::internal::OrderedNameDictionary,3>::EnsureGrowable
                 (undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_2;
  iVar2 = *(int *)(lVar4 + 0xf) >> 1;
  uVar1 = *(uint *)(lVar4 + 0x13) & 0xfffffffe;
  plVar3 = param_2;
  if ((int)uVar1 <= iVar2 + (*(int *)(lVar4 + 0xb) >> 1)) {
    plVar3 = (long *)Rehash(param_1,param_2,
                            uVar1 << (ulong)(iVar2 < (int)*(uint *)(lVar4 + 0x13) >> 1));
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else {
      *(uint *)(*plVar3 + 7) = *(uint *)(*param_2 + 7) & 0xfffffffe;
    }
  }
  return plVar3;
}

