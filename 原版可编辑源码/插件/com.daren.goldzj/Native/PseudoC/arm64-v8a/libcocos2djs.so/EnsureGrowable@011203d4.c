
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashSet,
   1>::EnsureGrowable(v8::internal::Isolate*, v8::internal::Handle<v8::internal::OrderedHashSet>) */

long * v8::internal::OrderedHashTable<v8::internal::OrderedHashSet,1>::EnsureGrowable
                 (undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_2;
  iVar2 = *(int *)(lVar4 + 0xb) >> 1;
  uVar1 = *(uint *)(lVar4 + 0xf) & 0xfffffffe;
  if (iVar2 + (*(int *)(lVar4 + 7) >> 1) < (int)uVar1) {
    return param_2;
  }
  plVar3 = (long *)Rehash(param_1,param_2,uVar1 << (ulong)(iVar2 < (int)*(uint *)(lVar4 + 0xf) >> 1)
                         );
  return plVar3;
}

