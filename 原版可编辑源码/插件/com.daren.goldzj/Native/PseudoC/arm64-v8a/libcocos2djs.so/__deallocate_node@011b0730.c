
/* std::__ndk1::__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, v8::internal::CodeEntry::Hasher,
   v8::internal::CodeEntry::Equals,
   std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> > >
   >::__deallocate_node(std::__ndk1::__hash_node_base<std::__ndk1::__hash_node<std::__ndk1::unique_ptr<v8::internal::CodeEntry,
   std::__ndk1::default_delete<v8::internal::CodeEntry> >, void*>*>*) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
::__deallocate_node(__hash_table<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>,v8::internal::CodeEntry::Hasher,v8::internal::CodeEntry::Equals,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::internal::CodeEntry,std::__ndk1::default_delete<v8::internal::CodeEntry>>>>
                    *this,__hash_node_base *param_1)

{
  __hash_node_base *p_Var1;
  void *pvVar2;
  __hash_node_base *extraout_x1;
  __hash_node_base *extraout_x1_00;
  __hash_node_base *extraout_x1_01;
  void *pvVar3;
  RareData *this_00;
  Malloced *this_01;
  __hash_node_base *p_Var4;
  
  p_Var1 = param_1;
  while (p_Var1 != (__hash_node_base *)0x0) {
    pvVar3 = *(void **)(p_Var1 + 0x10);
    p_Var4 = *(__hash_node_base **)p_Var1;
    *(undefined8 *)(p_Var1 + 0x10) = 0;
    if (pvVar3 != (void *)0x0) {
      this_00 = *(RareData **)((long)pvVar3 + 0x38);
      *(undefined8 *)((long)pvVar3 + 0x38) = 0;
      if (this_00 != (RareData *)0x0) {
        v8::internal::CodeEntry::RareData::~RareData(this_00);
        operator_delete(this_00);
        param_1 = extraout_x1_00;
      }
      this_01 = *(Malloced **)((long)pvVar3 + 0x28);
      *(undefined8 *)((long)pvVar3 + 0x28) = 0;
      if (this_01 != (Malloced *)0x0) {
        pvVar2 = *(void **)this_01;
        if (pvVar2 != (void *)0x0) {
          *(void **)(this_01 + 8) = pvVar2;
          operator_delete(pvVar2);
          param_1 = extraout_x1_01;
        }
        v8::internal::Malloced::operator_delete(this_01,param_1);
      }
      operator_delete(pvVar3);
    }
    operator_delete(p_Var1);
    p_Var1 = p_Var4;
    param_1 = extraout_x1;
  }
  return;
}

