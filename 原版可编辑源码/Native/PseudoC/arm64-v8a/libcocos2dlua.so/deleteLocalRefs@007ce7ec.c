
/* cocos2d::JniHelper::deleteLocalRefs(_JNIEnv*, std::__ndk1::unordered_map<_JNIEnv*,
   std::__ndk1::vector<_jobject*, std::__ndk1::allocator<_jobject*> >, std::__ndk1::hash<_JNIEnv*>,
   std::__ndk1::equal_to<_JNIEnv*>, std::__ndk1::allocator<std::__ndk1::pair<_JNIEnv* const,
   std::__ndk1::vector<_jobject*, std::__ndk1::allocator<_jobject*> > > > >&) */

void cocos2d::JniHelper::deleteLocalRefs(_JNIEnv *param_1,unordered_map *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  _JNIEnv *local_60 [2];
  undefined1 *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_60[0] = param_1;
  if (param_1 != (_JNIEnv *)0x0) {
    local_50 = (undefined1 *)local_60;
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
            ::
            __emplace_unique_key_args<_JNIEnv*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<_JNIEnv*const&>,std::__ndk1::tuple<>>
                      ((_JNIEnv **)param_2,(piecewise_construct_t *)local_60,(tuple *)0x12768df,
                       (tuple *)&local_50);
    puVar1 = *(undefined8 **)(lVar3 + 0x20);
    for (puVar4 = *(undefined8 **)(lVar3 + 0x18); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      (**(code **)(*(long *)local_60[0] + 0xb8))(local_60[0],*puVar4);
    }
    local_50 = (undefined1 *)local_60;
    lVar3 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
            ::
            __emplace_unique_key_args<_JNIEnv*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<_JNIEnv*const&>,std::__ndk1::tuple<>>
                      ((_JNIEnv **)param_2,(piecewise_construct_t *)local_60,(tuple *)0x12768df,
                       (tuple *)&local_50);
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar3 + 0x18);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

