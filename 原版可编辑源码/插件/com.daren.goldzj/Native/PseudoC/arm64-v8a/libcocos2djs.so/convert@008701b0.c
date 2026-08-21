
/* cocos2d::JniHelper::convert(std::__ndk1::unordered_map<_JNIEnv*, std::__ndk1::vector<_jobject*,
   std::__ndk1::allocator<_jobject*> >, std::__ndk1::hash<_JNIEnv*>,
   std::__ndk1::equal_to<_JNIEnv*>, std::__ndk1::allocator<std::__ndk1::pair<_JNIEnv* const,
   std::__ndk1::vector<_jobject*, std::__ndk1::allocator<_jobject*> > > > >&,
   cocos2d::JniMethodInfo_&, char const*) */

_jobject * cocos2d::JniHelper::convert(unordered_map *param_1,JniMethodInfo_ *param_2,char *param_3)

{
  long lVar1;
  size_t __n;
  _jobject *p_Var2;
  long lVar3;
  _JNIEnv *p_Var4;
  void *__dest;
  ulong uVar5;
  _jobject *local_78;
  size_t local_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_3 == (char *)0x0) {
    p_Var2 = (_jobject *)0x0;
    goto LAB_00870288;
  }
  p_Var4 = *(_JNIEnv **)param_2;
  local_78 = (_jobject *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_78 | 1);
    local_78 = (_jobject *)CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00870250;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_78 = (_jobject *)(uVar5 | 1);
    local_70 = __n;
    local_68 = __dest;
LAB_00870250:
    memcpy(__dest,param_3,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  p_Var2 = (_jobject *)StringUtils::newStringUTFJNI(p_Var4,(basic_string *)&local_78,(bool *)0x0);
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
LAB_00870288:
  local_78 = (_jobject *)param_2;
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
          ::
          __emplace_unique_key_args<_JNIEnv*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<_JNIEnv*const&>,std::__ndk1::tuple<>>
                    ((_JNIEnv **)param_1,(piecewise_construct_t *)param_2,(tuple *)&DAT_01853c58,
                     (tuple *)&local_78);
  local_78 = p_Var2;
  if (*(undefined8 **)(lVar3 + 0x20) < *(undefined8 **)(lVar3 + 0x28)) {
    **(undefined8 **)(lVar3 + 0x20) = p_Var2;
    *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + 8;
  }
  else {
    std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>::
    __push_back_slow_path<_jobject*>
              ((vector<_jobject*,std::__ndk1::allocator<_jobject*>> *)(lVar3 + 0x18),&local_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return p_Var2;
}

