
/* v8::internal::OrderedNameDictionary::DeleteEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedNameDictionary>, int) */

long * v8::internal::OrderedNameDictionary::DeleteEntry(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long local_28;
  
  local_28 = *param_2;
  SetEntry((OrderedNameDictionary *)&local_28);
  *(uint *)(*param_2 + 0xb) = *(int *)(*param_2 + 0xb) - 2U & 0xfffffffe;
  *(uint *)(*param_2 + 0xf) = *(int *)(*param_2 + 0xf) + 2U & 0xfffffffe;
  uVar2 = *(uint *)(*param_2 + 0x13);
  plVar3 = param_2;
  if (*(int *)(*param_2 + 0xb) >> 1 < (int)uVar2 >> 2) {
    uVar1 = uVar2 & 0xfffffffe | 1;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2 & 0xfffffffe;
    }
    plVar3 = (long *)OrderedHashTable<v8::internal::OrderedNameDictionary,3>::Rehash
                               (param_1,param_2,(int)uVar1 >> 1);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    *(uint *)(*plVar3 + 7) = *(uint *)(*param_2 + 7) & 0xfffffffe;
  }
  return plVar3;
}

