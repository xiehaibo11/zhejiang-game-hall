
/* v8::internal::KeyAccumulator::GetKeys(v8::internal::GetKeysConversion) */

long * __thiscall v8::internal::KeyAccumulator::GetKeys(KeyAccumulator *this,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 == (long *)0x0) {
    return (long *)(*(long *)this + 0x168);
  }
  if (*(int *)(this + 0x20) == 0) {
    lVar1 = *(long *)this;
    if (*(int *)(*plVar2 + -1) == *(int *)(lVar1 + 0xe0)) {
      return plVar2;
    }
  }
  else {
    lVar1 = *(long *)this;
  }
  plVar2 = (long *)OrderedHashSet::ConvertToKeysArray(lVar1,plVar2,param_2);
  return plVar2;
}

