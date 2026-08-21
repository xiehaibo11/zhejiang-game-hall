
/* v8::internal::ObjectStats::Dump(std::__ndk1::basic_stringstream<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall v8::internal::ObjectStats::Dump(ObjectStats *this,basic_stringstream *param_1)

{
  basic_ostream *this_00;
  int iVar1;
  basic_ostream *pbVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = *(long *)this;
  dVar4 = (double)Heap::MonotonicallyIncreasingTimeInMs();
  dVar5 = *(double *)(lVar3 + 0x2e70);
  this_00 = (basic_ostream *)(param_1 + 0x10);
  iVar1 = *(int *)(*(long *)this + 0x1b4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,"{",1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,"\"isolate\":\"",0xb);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
                      (void *)(*(long *)this + -0x8850));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\",",2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,"\"id\":",5);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,iVar1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,"\"time\":",7);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,dVar4 - dVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,",",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (this_00,"\"field_data\":{",0xe);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,"\"tagged_fields\":",0x10);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(long *)(this + 0x53e70) << 2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,",\"embedder_fields\":",0x13);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(long *)(this + 0x53e78) << 3);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,",\"inobject_smi_fields\": ",0x18);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(long *)(this + 0x53e80) << 2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,",\"unboxed_double_fields\": ",0x1a);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(long *)(this + 0x53e88) << 3);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,",\"boxed_double_fields\": ",0x18);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(long *)(this + 0x53e90) << 3);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,",\"string_data\": ",0x10);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(long *)(this + 0x53e98) << 2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (this_00,",\"other_raw_fields\":",0x14);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(long *)(this + 0x53ea0) << 3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,"}, ",3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (this_00,"\"bucket_sizes\":[",0x10);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x20);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x40);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x80);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x100);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x200);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x400);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x800);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x1000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x2000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x4000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x8000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x10000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x20000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x40000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x80000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,",",1);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,0x100000);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(this_00,"],",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (this_00,"\"type_data\":{",0xd);
  DumpInstanceTypeData(this,param_1,"INTERNALIZED_STRING_TYPE",0);
  DumpInstanceTypeData(this,param_1,"EXTERNAL_INTERNALIZED_STRING_TYPE",2);
  DumpInstanceTypeData(this,param_1,"ONE_BYTE_INTERNALIZED_STRING_TYPE",8);
  DumpInstanceTypeData(this,param_1,"EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE",10);
  DumpInstanceTypeData(this,param_1,"UNCACHED_EXTERNAL_INTERNALIZED_STRING_TYPE",0x12);
  DumpInstanceTypeData(this,param_1,"UNCACHED_EXTERNAL_ONE_BYTE_INTERNALIZED_STRING_TYPE",0x1a);
  DumpInstanceTypeData(this,param_1,"STRING_TYPE",0x20);
  DumpInstanceTypeData(this,param_1,"CONS_STRING_TYPE",0x21);
  DumpInstanceTypeData(this,param_1,"EXTERNAL_STRING_TYPE",0x22);
  DumpInstanceTypeData(this,param_1,"SLICED_STRING_TYPE",0x23);
  DumpInstanceTypeData(this,param_1,"THIN_STRING_TYPE",0x25);
  DumpInstanceTypeData(this,param_1,"ONE_BYTE_STRING_TYPE",0x28);
  DumpInstanceTypeData(this,param_1,"CONS_ONE_BYTE_STRING_TYPE",0x29);
  DumpInstanceTypeData(this,param_1,"EXTERNAL_ONE_BYTE_STRING_TYPE",0x2a);
  DumpInstanceTypeData(this,param_1,"SLICED_ONE_BYTE_STRING_TYPE",0x2b);
  DumpInstanceTypeData(this,param_1,"THIN_ONE_BYTE_STRING_TYPE",0x2d);
  DumpInstanceTypeData(this,param_1,"UNCACHED_EXTERNAL_STRING_TYPE",0x32);
  DumpInstanceTypeData(this,param_1,"UNCACHED_EXTERNAL_ONE_BYTE_STRING_TYPE",0x3a);
  DumpInstanceTypeData(this,param_1,"SYMBOL_TYPE",0x40);
  DumpInstanceTypeData(this,param_1,"BIG_INT_BASE_TYPE",0x41);
  DumpInstanceTypeData(this,param_1,"HEAP_NUMBER_TYPE",0x42);
  DumpInstanceTypeData(this,param_1,"ODDBALL_TYPE",0x43);
  DumpInstanceTypeData(this,param_1,"SOURCE_TEXT_MODULE_TYPE",0x44);
  DumpInstanceTypeData(this,param_1,"SYNTHETIC_MODULE_TYPE",0x45);
  DumpInstanceTypeData(this,param_1,"FOREIGN_TYPE",0x46);
  DumpInstanceTypeData(this,param_1,"PROMISE_FULFILL_REACTION_JOB_TASK_TYPE",0x47);
  DumpInstanceTypeData(this,param_1,"PROMISE_REJECT_REACTION_JOB_TASK_TYPE",0x48);
  DumpInstanceTypeData(this,param_1,"CALLABLE_TASK_TYPE",0x49);
  DumpInstanceTypeData(this,param_1,"CALLBACK_TASK_TYPE",0x4a);
  DumpInstanceTypeData(this,param_1,"PROMISE_RESOLVE_THENABLE_JOB_TASK_TYPE",0x4b);
  DumpInstanceTypeData(this,param_1,"LOAD_HANDLER_TYPE",0x4c);
  DumpInstanceTypeData(this,param_1,"STORE_HANDLER_TYPE",0x4d);
  DumpInstanceTypeData(this,param_1,"FUNCTION_TEMPLATE_INFO_TYPE",0x4e);
  DumpInstanceTypeData(this,param_1,"OBJECT_TEMPLATE_INFO_TYPE",0x4f);
  DumpInstanceTypeData(this,param_1,"ACCESS_CHECK_INFO_TYPE",0x50);
  DumpInstanceTypeData(this,param_1,"ACCESSOR_INFO_TYPE",0x51);
  DumpInstanceTypeData(this,param_1,"ACCESSOR_PAIR_TYPE",0x52);
  DumpInstanceTypeData(this,param_1,"ALIASED_ARGUMENTS_ENTRY_TYPE",0x53);
  DumpInstanceTypeData(this,param_1,"ALLOCATION_MEMENTO_TYPE",0x54);
  DumpInstanceTypeData(this,param_1,"ALLOCATION_SITE_TYPE",0x55);
  DumpInstanceTypeData(this,param_1,"ARRAY_BOILERPLATE_DESCRIPTION_TYPE",0x56);
  DumpInstanceTypeData(this,param_1,"ASM_WASM_DATA_TYPE",0x57);
  DumpInstanceTypeData(this,param_1,"ASYNC_GENERATOR_REQUEST_TYPE",0x58);
  DumpInstanceTypeData(this,param_1,"CALL_HANDLER_INFO_TYPE",0x59);
  DumpInstanceTypeData(this,param_1,"CLASS_POSITIONS_TYPE",0x5a);
  DumpInstanceTypeData(this,param_1,"DEBUG_INFO_TYPE",0x5b);
  DumpInstanceTypeData(this,param_1,"ENUM_CACHE_TYPE",0x5c);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_CELL_TYPE",0x5d);
  DumpInstanceTypeData(this,param_1,"FUNCTION_TEMPLATE_RARE_DATA_TYPE",0x5e);
  DumpInstanceTypeData(this,param_1,"INTERCEPTOR_INFO_TYPE",0x5f);
  DumpInstanceTypeData(this,param_1,"INTERNAL_CLASS_TYPE",0x60);
  DumpInstanceTypeData(this,param_1,"INTERPRETER_DATA_TYPE",0x61);
  DumpInstanceTypeData(this,param_1,"PROMISE_CAPABILITY_TYPE",0x62);
  DumpInstanceTypeData(this,param_1,"PROMISE_REACTION_TYPE",99);
  DumpInstanceTypeData(this,param_1,"PROTOTYPE_INFO_TYPE",100);
  DumpInstanceTypeData(this,param_1,"SCRIPT_TYPE",0x65);
  DumpInstanceTypeData(this,param_1,"SMI_BOX_TYPE",0x66);
  DumpInstanceTypeData(this,param_1,"SMI_PAIR_TYPE",0x67);
  DumpInstanceTypeData(this,param_1,"SORT_STATE_TYPE",0x68);
  DumpInstanceTypeData(this,param_1,"SOURCE_POSITION_TABLE_WITH_FRAME_CACHE_TYPE",0x69);
  DumpInstanceTypeData(this,param_1,"SOURCE_TEXT_MODULE_INFO_ENTRY_TYPE",0x6a);
  DumpInstanceTypeData(this,param_1,"STACK_FRAME_INFO_TYPE",0x6b);
  DumpInstanceTypeData(this,param_1,"STACK_TRACE_FRAME_TYPE",0x6c);
  DumpInstanceTypeData(this,param_1,"TEMPLATE_OBJECT_DESCRIPTION_TYPE",0x6d);
  DumpInstanceTypeData(this,param_1,"TUPLE2_TYPE",0x6e);
  DumpInstanceTypeData(this,param_1,"TUPLE3_TYPE",0x6f);
  DumpInstanceTypeData(this,param_1,"WASM_CAPI_FUNCTION_DATA_TYPE",0x70);
  DumpInstanceTypeData(this,param_1,"WASM_DEBUG_INFO_TYPE",0x71);
  DumpInstanceTypeData(this,param_1,"WASM_EXCEPTION_TAG_TYPE",0x72);
  DumpInstanceTypeData(this,param_1,"WASM_EXPORTED_FUNCTION_DATA_TYPE",0x73);
  DumpInstanceTypeData(this,param_1,"WASM_INDIRECT_FUNCTION_TABLE_TYPE",0x74);
  DumpInstanceTypeData(this,param_1,"WASM_JS_FUNCTION_DATA_TYPE",0x75);
  DumpInstanceTypeData(this,param_1,"FIXED_ARRAY_TYPE",0x76);
  DumpInstanceTypeData(this,param_1,"HASH_TABLE_TYPE",0x77);
  DumpInstanceTypeData(this,param_1,"EPHEMERON_HASH_TABLE_TYPE",0x78);
  DumpInstanceTypeData(this,param_1,"GLOBAL_DICTIONARY_TYPE",0x79);
  DumpInstanceTypeData(this,param_1,"NAME_DICTIONARY_TYPE",0x7a);
  DumpInstanceTypeData(this,param_1,"NUMBER_DICTIONARY_TYPE",0x7b);
  DumpInstanceTypeData(this,param_1,"ORDERED_HASH_MAP_TYPE",0x7c);
  DumpInstanceTypeData(this,param_1,"ORDERED_HASH_SET_TYPE",0x7d);
  DumpInstanceTypeData(this,param_1,"ORDERED_NAME_DICTIONARY_TYPE",0x7e);
  DumpInstanceTypeData(this,param_1,"SIMPLE_NUMBER_DICTIONARY_TYPE",0x7f);
  DumpInstanceTypeData(this,param_1,"STRING_TABLE_TYPE",0x80);
  DumpInstanceTypeData(this,param_1,"CLOSURE_FEEDBACK_CELL_ARRAY_TYPE",0x81);
  DumpInstanceTypeData(this,param_1,"OBJECT_BOILERPLATE_DESCRIPTION_TYPE",0x82);
  DumpInstanceTypeData(this,param_1,"SCOPE_INFO_TYPE",0x83);
  DumpInstanceTypeData(this,param_1,"SCRIPT_CONTEXT_TABLE_TYPE",0x84);
  DumpInstanceTypeData(this,param_1,"BYTE_ARRAY_TYPE",0x85);
  DumpInstanceTypeData(this,param_1,"BYTECODE_ARRAY_TYPE",0x86);
  DumpInstanceTypeData(this,param_1,"FIXED_DOUBLE_ARRAY_TYPE",0x87);
  DumpInstanceTypeData(this,param_1,"AWAIT_CONTEXT_TYPE",0x88);
  DumpInstanceTypeData(this,param_1,"BLOCK_CONTEXT_TYPE",0x89);
  DumpInstanceTypeData(this,param_1,"CATCH_CONTEXT_TYPE",0x8a);
  DumpInstanceTypeData(this,param_1,"DEBUG_EVALUATE_CONTEXT_TYPE",0x8b);
  DumpInstanceTypeData(this,param_1,"EVAL_CONTEXT_TYPE",0x8c);
  DumpInstanceTypeData(this,param_1,"FUNCTION_CONTEXT_TYPE",0x8d);
  DumpInstanceTypeData(this,param_1,"MODULE_CONTEXT_TYPE",0x8e);
  DumpInstanceTypeData(this,param_1,"NATIVE_CONTEXT_TYPE",0x8f);
  DumpInstanceTypeData(this,param_1,"SCRIPT_CONTEXT_TYPE",0x90);
  DumpInstanceTypeData(this,param_1,"WITH_CONTEXT_TYPE",0x91);
  DumpInstanceTypeData(this,param_1,"SMALL_ORDERED_HASH_MAP_TYPE",0x92);
  DumpInstanceTypeData(this,param_1,"SMALL_ORDERED_HASH_SET_TYPE",0x93);
  DumpInstanceTypeData(this,param_1,"SMALL_ORDERED_NAME_DICTIONARY_TYPE",0x94);
  DumpInstanceTypeData(this,param_1,"UNCOMPILED_DATA_WITH_PREPARSE_DATA_TYPE",0x95);
  DumpInstanceTypeData(this,param_1,"UNCOMPILED_DATA_WITHOUT_PREPARSE_DATA_TYPE",0x96);
  DumpInstanceTypeData(this,param_1,"WEAK_FIXED_ARRAY_TYPE",0x97);
  DumpInstanceTypeData(this,param_1,"TRANSITION_ARRAY_TYPE",0x98);
  DumpInstanceTypeData(this,param_1,"CELL_TYPE",0x99);
  DumpInstanceTypeData(this,param_1,"CODE_TYPE",0x9a);
  DumpInstanceTypeData(this,param_1,"CODE_DATA_CONTAINER_TYPE",0x9b);
  DumpInstanceTypeData(this,param_1,"DESCRIPTOR_ARRAY_TYPE",0x9c);
  DumpInstanceTypeData(this,param_1,"EMBEDDER_DATA_ARRAY_TYPE",0x9d);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_METADATA_TYPE",0x9e);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_TYPE",0x9f);
  DumpInstanceTypeData(this,param_1,"FILLER_TYPE",0xa0);
  DumpInstanceTypeData(this,param_1,"FREE_SPACE_TYPE",0xa1);
  DumpInstanceTypeData(this,param_1,"MAP_TYPE",0xa2);
  DumpInstanceTypeData(this,param_1,"PREPARSE_DATA_TYPE",0xa3);
  DumpInstanceTypeData(this,param_1,"PROPERTY_ARRAY_TYPE",0xa4);
  DumpInstanceTypeData(this,param_1,"PROPERTY_CELL_TYPE",0xa5);
  DumpInstanceTypeData(this,param_1,"SHARED_FUNCTION_INFO_TYPE",0xa6);
  DumpInstanceTypeData(this,param_1,"WEAK_ARRAY_LIST_TYPE",0xa7);
  DumpInstanceTypeData(this,param_1,"WEAK_CELL_TYPE",0xa8);
  DumpInstanceTypeData(this,param_1,"JS_PROXY_TYPE",0xa9);
  DumpInstanceTypeData(this,param_1,"JS_OBJECT_TYPE",0x421);
  DumpInstanceTypeData(this,param_1,"JS_GLOBAL_OBJECT_TYPE",0xaa);
  DumpInstanceTypeData(this,param_1,"JS_GLOBAL_PROXY_TYPE",0xab);
  DumpInstanceTypeData(this,param_1,"JS_MODULE_NAMESPACE_TYPE",0xac);
  DumpInstanceTypeData(this,param_1,"JS_SPECIAL_API_OBJECT_TYPE",0x410);
  DumpInstanceTypeData(this,param_1,"JS_PRIMITIVE_WRAPPER_TYPE",0x411);
  DumpInstanceTypeData(this,param_1,"JS_MAP_KEY_ITERATOR_TYPE",0x412);
  DumpInstanceTypeData(this,param_1,"JS_MAP_KEY_VALUE_ITERATOR_TYPE",0x413);
  DumpInstanceTypeData(this,param_1,"JS_MAP_VALUE_ITERATOR_TYPE",0x414);
  DumpInstanceTypeData(this,param_1,"JS_SET_KEY_VALUE_ITERATOR_TYPE",0x415);
  DumpInstanceTypeData(this,param_1,"JS_SET_VALUE_ITERATOR_TYPE",0x416);
  DumpInstanceTypeData(this,param_1,"JS_GENERATOR_OBJECT_TYPE",0x417);
  DumpInstanceTypeData(this,param_1,"JS_ASYNC_FUNCTION_OBJECT_TYPE",0x418);
  DumpInstanceTypeData(this,param_1,"JS_ASYNC_GENERATOR_OBJECT_TYPE",0x419);
  DumpInstanceTypeData(this,param_1,"JS_DATA_VIEW_TYPE",0x41a);
  DumpInstanceTypeData(this,param_1,"JS_TYPED_ARRAY_TYPE",0x41b);
  DumpInstanceTypeData(this,param_1,"JS_MAP_TYPE",0x41c);
  DumpInstanceTypeData(this,param_1,"JS_SET_TYPE",0x41d);
  DumpInstanceTypeData(this,param_1,"JS_WEAK_MAP_TYPE",0x41e);
  DumpInstanceTypeData(this,param_1,"JS_WEAK_SET_TYPE",0x41f);
  DumpInstanceTypeData(this,param_1,"JS_API_OBJECT_TYPE",0x420);
  DumpInstanceTypeData(this,param_1,"JS_ARGUMENTS_OBJECT_TYPE",0x422);
  DumpInstanceTypeData(this,param_1,"JS_ARRAY_TYPE",0x423);
  DumpInstanceTypeData(this,param_1,"JS_ARRAY_BUFFER_TYPE",0x424);
  DumpInstanceTypeData(this,param_1,"JS_ARRAY_ITERATOR_TYPE",0x425);
  DumpInstanceTypeData(this,param_1,"JS_ASYNC_FROM_SYNC_ITERATOR_TYPE",0x426);
  DumpInstanceTypeData(this,param_1,"JS_CONTEXT_EXTENSION_OBJECT_TYPE",0x427);
  DumpInstanceTypeData(this,param_1,"JS_DATE_TYPE",0x428);
  DumpInstanceTypeData(this,param_1,"JS_ERROR_TYPE",0x429);
  DumpInstanceTypeData(this,param_1,"JS_FINALIZATION_GROUP_TYPE",0x42a);
  DumpInstanceTypeData(this,param_1,"JS_FINALIZATION_GROUP_CLEANUP_ITERATOR_TYPE",0x42b);
  DumpInstanceTypeData(this,param_1,"JS_MESSAGE_OBJECT_TYPE",0x42c);
  DumpInstanceTypeData(this,param_1,"JS_PROMISE_TYPE",0x42d);
  DumpInstanceTypeData(this,param_1,"JS_REG_EXP_TYPE",0x42e);
  DumpInstanceTypeData(this,param_1,"JS_REG_EXP_STRING_ITERATOR_TYPE",0x42f);
  DumpInstanceTypeData(this,param_1,"JS_STRING_ITERATOR_TYPE",0x430);
  DumpInstanceTypeData(this,param_1,"JS_WEAK_REF_TYPE",0x431);
  DumpInstanceTypeData(this,param_1,"WASM_EXCEPTION_OBJECT_TYPE",0x432);
  DumpInstanceTypeData(this,param_1,"WASM_GLOBAL_OBJECT_TYPE",0x433);
  DumpInstanceTypeData(this,param_1,"WASM_INSTANCE_OBJECT_TYPE",0x434);
  DumpInstanceTypeData(this,param_1,"WASM_MEMORY_OBJECT_TYPE",0x435);
  DumpInstanceTypeData(this,param_1,"WASM_MODULE_OBJECT_TYPE",0x436);
  DumpInstanceTypeData(this,param_1,"WASM_TABLE_OBJECT_TYPE",0x437);
  DumpInstanceTypeData(this,param_1,"JS_BOUND_FUNCTION_TYPE",0x438);
  DumpInstanceTypeData(this,param_1,"JS_FUNCTION_TYPE",0x439);
  DumpInstanceTypeData(this,param_1,"OPTIMIZED_FUNCTION",0x43a);
  DumpInstanceTypeData(this,param_1,"BYTECODE_HANDLER",0x43b);
  DumpInstanceTypeData(this,param_1,"STUB",0x43c);
  DumpInstanceTypeData(this,param_1,"BUILTIN",0x43d);
  DumpInstanceTypeData(this,param_1,"REGEXP",0x43e);
  DumpInstanceTypeData(this,param_1,"WASM_FUNCTION",0x43f);
  DumpInstanceTypeData(this,param_1,"WASM_TO_CAPI_FUNCTION",0x440);
  DumpInstanceTypeData(this,param_1,"WASM_TO_JS_FUNCTION",0x441);
  DumpInstanceTypeData(this,param_1,"JS_TO_WASM_FUNCTION",0x442);
  DumpInstanceTypeData(this,param_1,"JS_TO_JS_FUNCTION",0x443);
  DumpInstanceTypeData(this,param_1,"WASM_INTERPRETER_ENTRY",0x444);
  DumpInstanceTypeData(this,param_1,"C_WASM_ENTRY",0x445);
  DumpInstanceTypeData(this,param_1,"ARRAY_BOILERPLATE_DESCRIPTION_ELEMENTS_TYPE",0x446);
  DumpInstanceTypeData(this,param_1,"ARRAY_DICTIONARY_ELEMENTS_TYPE",0x447);
  DumpInstanceTypeData(this,param_1,"ARRAY_ELEMENTS_TYPE",0x448);
  DumpInstanceTypeData(this,param_1,"BOILERPLATE_ELEMENTS_TYPE",0x449);
  DumpInstanceTypeData(this,param_1,"BOILERPLATE_PROPERTY_ARRAY_TYPE",0x44a);
  DumpInstanceTypeData(this,param_1,"BOILERPLATE_PROPERTY_DICTIONARY_TYPE",1099);
  DumpInstanceTypeData(this,param_1,"BYTECODE_ARRAY_CONSTANT_POOL_TYPE",0x44c);
  DumpInstanceTypeData(this,param_1,"BYTECODE_ARRAY_HANDLER_TABLE_TYPE",0x44d);
  DumpInstanceTypeData(this,param_1,"COW_ARRAY_TYPE",0x44e);
  DumpInstanceTypeData(this,param_1,"DEOPTIMIZATION_DATA_TYPE",0x44f);
  DumpInstanceTypeData(this,param_1,"DEPENDENT_CODE_TYPE",0x450);
  DumpInstanceTypeData(this,param_1,"DEPRECATED_DESCRIPTOR_ARRAY_TYPE",0x451);
  DumpInstanceTypeData(this,param_1,"EMBEDDED_OBJECT_TYPE",0x452);
  DumpInstanceTypeData(this,param_1,"ENUM_KEYS_CACHE_TYPE",0x453);
  DumpInstanceTypeData(this,param_1,"ENUM_INDICES_CACHE_TYPE",0x454);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_ENTRY_TYPE",0x455);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_HEADER_TYPE",0x456);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_CALL_TYPE",0x457);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_CALL_UNUSED_TYPE",0x458);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_ENUM_TYPE",0x459);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_LOAD_TYPE",0x45a);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_LOAD_UNUSED_TYPE",0x45b);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_OTHER_TYPE",0x45c);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_STORE_TYPE",0x45d);
  DumpInstanceTypeData(this,param_1,"FEEDBACK_VECTOR_SLOT_STORE_UNUSED_TYPE",0x45e);
  DumpInstanceTypeData(this,param_1,"FUNCTION_TEMPLATE_INFO_ENTRIES_TYPE",0x45f);
  DumpInstanceTypeData(this,param_1,"GLOBAL_ELEMENTS_TYPE",0x460);
  DumpInstanceTypeData(this,param_1,"GLOBAL_PROPERTIES_TYPE",0x461);
  DumpInstanceTypeData(this,param_1,"JS_ARRAY_BOILERPLATE_TYPE",0x462);
  DumpInstanceTypeData(this,param_1,"JS_COLLECTION_TABLE_TYPE",0x463);
  DumpInstanceTypeData(this,param_1,"JS_OBJECT_BOILERPLATE_TYPE",0x464);
  DumpInstanceTypeData(this,param_1,"JS_UNCOMPILED_FUNCTION_TYPE",0x465);
  DumpInstanceTypeData(this,param_1,"MAP_ABANDONED_PROTOTYPE_TYPE",0x466);
  DumpInstanceTypeData(this,param_1,"MAP_DEPRECATED_TYPE",0x467);
  DumpInstanceTypeData(this,param_1,"MAP_DICTIONARY_TYPE",0x468);
  DumpInstanceTypeData(this,param_1,"MAP_PROTOTYPE_DICTIONARY_TYPE",0x469);
  DumpInstanceTypeData(this,param_1,"MAP_PROTOTYPE_TYPE",0x46a);
  DumpInstanceTypeData(this,param_1,"MAP_STABLE_TYPE",0x46b);
  DumpInstanceTypeData(this,param_1,"NUMBER_STRING_CACHE_TYPE",0x46c);
  DumpInstanceTypeData(this,param_1,"OBJECT_DICTIONARY_ELEMENTS_TYPE",0x46d);
  DumpInstanceTypeData(this,param_1,"OBJECT_ELEMENTS_TYPE",0x46e);
  DumpInstanceTypeData(this,param_1,"OBJECT_PROPERTY_ARRAY_TYPE",0x46f);
  DumpInstanceTypeData(this,param_1,"OBJECT_PROPERTY_DICTIONARY_TYPE",0x470);
  DumpInstanceTypeData(this,param_1,"OBJECT_TO_CODE_TYPE",0x471);
  DumpInstanceTypeData(this,param_1,"OPTIMIZED_CODE_LITERALS_TYPE",0x472);
  DumpInstanceTypeData(this,param_1,"OTHER_CONTEXT_TYPE",0x473);
  DumpInstanceTypeData(this,param_1,"PROTOTYPE_DESCRIPTOR_ARRAY_TYPE",0x474);
  DumpInstanceTypeData(this,param_1,"PROTOTYPE_PROPERTY_ARRAY_TYPE",0x475);
  DumpInstanceTypeData(this,param_1,"PROTOTYPE_PROPERTY_DICTIONARY_TYPE",0x476);
  DumpInstanceTypeData(this,param_1,"PROTOTYPE_USERS_TYPE",0x477);
  DumpInstanceTypeData(this,param_1,"REGEXP_MULTIPLE_CACHE_TYPE",0x478);
  DumpInstanceTypeData(this,param_1,"RELOC_INFO_TYPE",0x479);
  DumpInstanceTypeData(this,param_1,"RETAINED_MAPS_TYPE",0x47a);
  DumpInstanceTypeData(this,param_1,"SCRIPT_LIST_TYPE",0x47b);
  DumpInstanceTypeData(this,param_1,"SCRIPT_SHARED_FUNCTION_INFOS_TYPE",0x47c);
  DumpInstanceTypeData(this,param_1,"SCRIPT_SOURCE_EXTERNAL_ONE_BYTE_TYPE",0x47d);
  DumpInstanceTypeData(this,param_1,"SCRIPT_SOURCE_EXTERNAL_TWO_BYTE_TYPE",0x47e);
  DumpInstanceTypeData(this,param_1,"SCRIPT_SOURCE_NON_EXTERNAL_ONE_BYTE_TYPE",0x47f);
  DumpInstanceTypeData(this,param_1,"SCRIPT_SOURCE_NON_EXTERNAL_TWO_BYTE_TYPE",0x480);
  DumpInstanceTypeData(this,param_1,"SERIALIZED_OBJECTS_TYPE",0x481);
  DumpInstanceTypeData(this,param_1,"SINGLE_CHARACTER_STRING_CACHE_TYPE",0x482);
  DumpInstanceTypeData(this,param_1,"STRING_SPLIT_CACHE_TYPE",0x483);
  DumpInstanceTypeData(this,param_1,"STRING_EXTERNAL_RESOURCE_ONE_BYTE_TYPE",0x484);
  DumpInstanceTypeData(this,param_1,"STRING_EXTERNAL_RESOURCE_TWO_BYTE_TYPE",0x485);
  DumpInstanceTypeData(this,param_1,"SOURCE_POSITION_TABLE_TYPE",0x486);
  DumpInstanceTypeData(this,param_1,"UNCOMPILED_SHARED_FUNCTION_INFO_TYPE",0x487);
  DumpInstanceTypeData(this,param_1,"WEAK_NEW_SPACE_OBJECT_TO_CODE_TYPE",0x488);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (this_00,"\"END\":{}}}",10);
  return;
}

