
/* cocos2d::JniHelper::convert(std::__ndk1::unordered_map<_JNIEnv*, std::__ndk1::vector<_jobject*,
   std::__ndk1::allocator<_jobject*> >, std::__ndk1::hash<_JNIEnv*>,
   std::__ndk1::equal_to<_JNIEnv*>, std::__ndk1::allocator<std::__ndk1::pair<_JNIEnv* const,
   std::__ndk1::vector<_jobject*, std::__ndk1::allocator<_jobject*> > > > >&,
   cocos2d::JniMethodInfo_&, char const*) */

undefined8 cocos2d::JniHelper::convert(unordered_map *param_1,JniMethodInfo_ *param_2,char *param_3)

{
  char *__s;
  undefined8 *puVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  void *__dest;
  long lVar6;
  ulong uVar7;
  _JNIEnv *p_Var8;
  void *pvVar9;
  ulong uVar10;
  JniMethodInfo_ *local_88;
  size_t local_80;
  void *local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  p_Var8 = *(_JNIEnv **)param_2;
  __s = "";
  if (param_3 != (char *)0x0) {
    __s = param_3;
  }
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = (JniMethodInfo_ *)0x0;
  sVar3 = strlen(__s);
  if (0xffffffffffffffef < sVar3) goto LAB_007ce74c;
  if (sVar3 < 0x17) {
    pvVar9 = (void *)((ulong)&local_88 | 1);
    local_88 = (JniMethodInfo_ *)CONCAT71(local_88._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_007ce698;
  }
  else {
    uVar10 = sVar3 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar10);
    local_88 = (JniMethodInfo_ *)(uVar10 | 1);
    local_80 = sVar3;
    local_78 = pvVar9;
LAB_007ce698:
    memcpy(pvVar9,__s,sVar3);
  }
  *(undefined1 *)((long)pvVar9 + sVar3) = 0;
  uVar4 = StringUtils::newStringUTFJNI(p_Var8,(basic_string *)&local_88,(bool *)0x0);
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  local_88 = param_2;
  lVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::__unordered_map_hasher<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::hash<_JNIEnv*>,true>,std::__ndk1::__unordered_map_equal<_JNIEnv*,std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>,std::__ndk1::equal_to<_JNIEnv*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<_JNIEnv*,std::__ndk1::vector<_jobject*,std::__ndk1::allocator<_jobject*>>>>>
          ::
          __emplace_unique_key_args<_JNIEnv*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<_JNIEnv*const&>,std::__ndk1::tuple<>>
                    ((_JNIEnv **)param_1,(piecewise_construct_t *)param_2,(tuple *)0x12768df,
                     (tuple *)&local_88);
  puVar1 = *(undefined8 **)(lVar5 + 0x20);
  if (puVar1 < *(undefined8 **)(lVar5 + 0x28)) {
    *puVar1 = uVar4;
    *(undefined8 **)(lVar5 + 0x20) = puVar1 + 1;
    goto LAB_007ce798;
  }
  pvVar9 = *(void **)(lVar5 + 0x18);
  sVar3 = (long)puVar1 - (long)pvVar9;
  uVar10 = ((long)sVar3 >> 3) + 1;
  if (uVar10 >> 0x3d != 0) {
LAB_007ce74c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = (long)*(undefined8 **)(lVar5 + 0x28) - (long)pvVar9;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 != 0) {
      if (uVar10 >> 0x3d != 0) goto LAB_007ce74c;
      goto LAB_007ce754;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar10 = 0x1fffffffffffffff;
LAB_007ce754:
    __dest = operator_new(uVar10 << 3);
  }
  puVar1 = (undefined8 *)((long)__dest + ((long)sVar3 >> 3) * 8);
  *puVar1 = uVar4;
  if (0 < (long)sVar3) {
    memcpy(__dest,pvVar9,sVar3);
  }
  *(void **)(lVar5 + 0x18) = __dest;
  *(undefined8 **)(lVar5 + 0x20) = puVar1 + 1;
  *(void **)(lVar5 + 0x28) = (void *)((long)__dest + uVar10 * 8);
  if (pvVar9 != (void *)0x0) {
    operator_delete(pvVar9);
  }
LAB_007ce798:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

