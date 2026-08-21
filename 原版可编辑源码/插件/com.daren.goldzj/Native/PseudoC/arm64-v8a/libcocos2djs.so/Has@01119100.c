
/* v8::internal::StringSet::Has(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>)
    */

bool __thiscall v8::internal::StringSet::Has(StringSet *this,undefined8 param_1,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = HashTable<v8::internal::StringSet,v8::internal::StringSetShape>::FindEntry
                    ((HashTable<v8::internal::StringSet,v8::internal::StringSetShape> *)this,param_1
                     ,*param_3);
  return lVar1 != -1;
}

