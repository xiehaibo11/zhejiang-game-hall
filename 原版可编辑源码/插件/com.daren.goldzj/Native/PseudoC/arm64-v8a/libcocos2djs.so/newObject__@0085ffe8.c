
/* _jobject* cocos2d::JniHelper::newObject<>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

_jobject * cocos2d::JniHelper::newObject<>(basic_string *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *__src;
  ulong *puVar4;
  ulong uVar5;
  _jobject *p_Var6;
  void *pvVar7;
  size_t __n;
  basic_string *pbVar8;
  void *pvVar9;
  void *pvVar10;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  _jclass *local_88;
  _jmethodID *p_Stack_80;
  void *local_78;
  void *local_70;
  size_t sStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_88 = (_jclass *)0x0;
  p_Stack_80 = (_jmethodID *)0x0;
  local_78 = (void *)0x0;
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_88,0,"(",1);
  local_60 = (void *)puVar4[2];
  sStack_68 = puVar4[1];
  local_70 = (void *)*puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,")V",2);
  local_90 = (char *)puVar4[2];
  uStack_98 = puVar4[1];
  local_a0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((ulong)local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  pbVar8 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar5 = getMethodInfo((JniMethodInfo_ *)&local_88,(char *)pbVar8,
                        newObject<>(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)
                        ::methodName,pcVar1);
  __src = newObject<>(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)
          ::methodName;
  if ((uVar5 & 1) != 0) {
    sStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    p_Var6 = (_jobject *)_JNIEnv::NewObject(local_88,p_Stack_80,local_78);
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,p_Stack_80);
    deleteLocalRefs((_JNIEnv *)local_88,(unordered_map *)&local_70);
    pvVar10 = local_70;
    puVar3 = local_60;
    while (puVar3 != (void *)0x0) {
      pvVar7 = (void *)puVar3[3];
      pvVar9 = (void *)*puVar3;
      local_70 = pvVar10;
      if (pvVar7 != (void *)0x0) {
        puVar3[4] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar3);
      pvVar10 = local_70;
      puVar3 = pvVar9;
    }
    local_70 = (void *)0x0;
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
    goto joined_r0x00860228;
  }
  sStack_68 = 0;
  local_60 = (void *)0x0;
  local_70 = (void *)0x0;
  __n = strlen(newObject<>(std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&)
               ::methodName);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n < 0x17) {
    pvVar10 = (void *)((ulong)&local_70 | 1);
    local_70 = (void *)CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_008601ec;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar5);
    local_70 = (void *)(uVar5 | 1);
    sStack_68 = __n;
    local_60 = pvVar10;
LAB_008601ec:
    memcpy(pvVar10,__src,__n);
  }
  *(undefined1 *)((long)pvVar10 + __n) = 0;
  reportError(param_1,(basic_string *)&local_70,(basic_string *)&local_a0);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  p_Var6 = (_jobject *)0x0;
joined_r0x00860228:
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return p_Var6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

