
/* se::Object::init(se::Class*, v8::Local<v8::Object>) */

undefined8 __thiscall se::Object::init(Object *this,undefined8 param_1,undefined8 param_3)

{
  long lVar1;
  Object *pOStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = param_1;
  ObjectWrap::init((ObjectWrap *)(this + 0x18),param_3);
  ObjectWrap::setFinalizeCallback((ObjectWrap *)(this + 0x18),nativeObjectFinalizeHook);
  if (__objectMap != (Object **)0x0) {
    pOStack_40 = this;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::__unordered_map_hasher<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::hash<se::Object*>,true>,std::__ndk1::__unordered_map_equal<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::equal_to<se::Object*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<se::Object*,void*>>>
    ::__emplace_unique_key_args<se::Object*,se::Object*,decltype(nullptr)>
              (__objectMap,&pOStack_40,(_func_decltype_nullptr **)&pOStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

