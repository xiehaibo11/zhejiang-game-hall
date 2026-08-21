
/* se::Object::_createJSObject(se::Class*, v8::Local<v8::Object>) */

RefCounter * se::Object::_createJSObject(undefined8 param_1,undefined8 param_2)

{
  ObjectWrap *this;
  long lVar1;
  RefCounter *this_00;
  RefCounter *pRStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x58);
  RefCounter::RefCounter(this_00);
  this = (ObjectWrap *)(this_00 + 0x18);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined ***)this_00 = &PTR__Object_01c68a98;
  ObjectWrap::ObjectWrap(this);
  *(undefined4 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x10) = param_1;
  ObjectWrap::init(this,param_2);
  ObjectWrap::setFinalizeCallback(this,nativeObjectFinalizeHook);
  if (__objectMap != (Object **)0x0) {
    pRStack_50 = this_00;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::__unordered_map_hasher<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::hash<se::Object*>,true>,std::__ndk1::__unordered_map_equal<se::Object*,std::__ndk1::__hash_value_type<se::Object*,void*>,std::__ndk1::equal_to<se::Object*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<se::Object*,void*>>>
    ::__emplace_unique_key_args<se::Object*,se::Object*,decltype(nullptr)>
              (__objectMap,(Object **)&pRStack_50,(_func_decltype_nullptr **)&pRStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

