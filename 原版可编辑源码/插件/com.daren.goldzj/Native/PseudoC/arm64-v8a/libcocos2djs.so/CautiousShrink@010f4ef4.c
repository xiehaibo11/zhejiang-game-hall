
/* v8::internal::StringTable::CautiousShrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::StringTable>) */

long * v8::internal::StringTable::CautiousShrink(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_2 + 0xf);
  if (0x1001 < iVar1) {
    iVar2 = *(int *)(*param_2 + 7);
    if (iVar2 >> 1 <= (int)((uint)(iVar1 >> 1) >> 2)) {
      param_2 = (long *)HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::Shrink
                                  (param_1,param_2,iVar2 >> 3);
    }
  }
  return param_2;
}

