
/* v8::internal::VariableMap::Remove(v8::internal::Variable*) */

void __thiscall v8::internal::VariableMap::Remove(VariableMap *this,Variable *param_1)

{
  void *local_18;
  
  local_18 = *(void **)(param_1 + 8);
  base::
  TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
  ::Remove((TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
            *)this,&local_18,*(uint *)((long)local_18 + 0x18) >> 3);
  return;
}

