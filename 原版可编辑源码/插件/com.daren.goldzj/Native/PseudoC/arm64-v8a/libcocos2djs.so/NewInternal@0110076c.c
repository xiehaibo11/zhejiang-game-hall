
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::NewInternal(v8::internal::Isolate*, int,
   v8::internal::AllocationType) */

void v8::internal::
     HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
     NewInternal(undefined8 param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                             (param_1,0x3d,param_2 * 2 + 3,param_3);
  *(undefined4 *)(*plVar1 + 7) = 0;
  *(undefined4 *)(*plVar1 + 0xb) = 0;
  *(int *)(*plVar1 + 0xf) = param_2 * 2;
  return;
}

