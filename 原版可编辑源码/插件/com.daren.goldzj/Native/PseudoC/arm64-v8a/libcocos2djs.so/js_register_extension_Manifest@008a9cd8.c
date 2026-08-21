
/* js_register_extension_Manifest(se::Object*) */

undefined8 js_register_extension_Manifest(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined1 local_3f;
  undefined6 uStack_3e;
  void *local_38;
  Class *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3e = 0;
  local_38 = (void *)0x0;
  local_48 = (basic_string)0x10;
  uStack_47 = 0x736566696e614d;
  uStack_40 = 0x74;
  local_3f = 0;
  this = (Class *)se::Class::create(&local_48,param_1,(Object *)0x0,
                                    js_extension_Manifest_constructorRegistry);
  if (((byte)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  se::Class::defineFunction(this,"getManifestRoot",js_extension_Manifest_getManifestRootRegistry);
  se::Class::defineFunction(this,"setUpdating",js_extension_Manifest_setUpdatingRegistry);
  se::Class::defineFunction
            (this,"getManifestFileUrl",js_extension_Manifest_getManifestFileUrlRegistry);
  se::Class::defineFunction(this,"isVersionLoaded",js_extension_Manifest_isVersionLoadedRegistry);
  se::Class::defineFunction(this,"parseFile",js_extension_Manifest_parseFileRegistry);
  se::Class::defineFunction(this,"isLoaded",js_extension_Manifest_isLoadedRegistry);
  se::Class::defineFunction(this,"getPackageUrl",js_extension_Manifest_getPackageUrlRegistry);
  se::Class::defineFunction(this,"isUpdating",js_extension_Manifest_isUpdatingRegistry);
  se::Class::defineFunction(this,"getVersion",js_extension_Manifest_getVersionRegistry);
  se::Class::defineFunction(this,"parseJSONString",js_extension_Manifest_parseJSONStringRegistry);
  se::Class::defineFunction
            (this,"getVersionFileUrl",js_extension_Manifest_getVersionFileUrlRegistry);
  se::Class::defineFunction(this,"getSearchPaths",js_extension_Manifest_getSearchPathsRegistry);
  se::Class::defineFinalizeFunction(this,js_cocos2d_extension_Manifest_finalizeRegistry);
  se::Class::install(this);
  local_48 = SUB81(this,0);
  uStack_47 = (undefined7)((ulong)this >> 8);
  local_30 = (Class *)0x185f45b;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_30);
  __jsb_cocos2d_extension_Manifest_proto = se::Class::getProto(this);
  __jsb_cocos2d_extension_Manifest_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

