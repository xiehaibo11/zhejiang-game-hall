
/* float cocos2d::JniHelper::callStaticFloatMethod<>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

float cocos2d::JniHelper::callStaticFloatMethod<>(basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  void *pvVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  void *pvVar10;
  float fVar11;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  _jclass *local_78;
  _jmethodID *local_70;
  void *local_68;
  void *local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_70 = (_jmethodID *)0x0;
  local_68 = (void *)0x0;
  local_78 = (_jclass *)0x0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_78,0,"(",1);
  uStack_58 = puVar5[1];
  local_60 = (void *)*puVar5;
  local_50 = (void *)puVar5[2];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_60,")F",2);
  local_80 = (char *)puVar5[2];
  uStack_88 = puVar5[1];
  local_90 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (((ulong)local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  pbVar8 = *(basic_string **)(param_1 + 0x10);
  pbVar9 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar1 = local_80;
  }
  uVar6 = getStaticMethodInfo((JniMethodInfo_ *)&local_78,(char *)pbVar8,(char *)pbVar9,pcVar1);
  if ((uVar6 & 1) == 0) {
    reportError(param_1,param_2,(basic_string *)&local_90);
    fVar11 = 0.0;
  }
  else {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (void *)0x0;
    local_40 = 0x3f800000;
    fVar11 = (float)_JNIEnv::CallStaticFloatMethod(local_78,local_70,local_68);
                    /* try { // try from 00df51c0 to 00ef51cb has its CatchHandler @ 00df5328 */
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,local_70);
    deleteLocalRefs((_JNIEnv *)local_78,(unordered_map *)&local_60);
    pvVar3 = local_60;
    puVar4 = local_50;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)puVar4[3];
      pvVar10 = (void *)*puVar4;
      local_60 = pvVar3;
      if (pvVar7 != (void *)0x0) {
        puVar4[4] = pvVar7;
        operator_delete(pvVar7);
      }
      operator_delete(puVar4);
      pvVar3 = local_60;
      puVar4 = pvVar10;
    }
                    /* try { // try from 00df5230 to 00ef533f has its CatchHandler @ 00df5008 */
    local_60 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
                    /* try { // try from 00df5228 to 00ef522f has its CatchHandler @ 00df5310 */
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return fVar11;
}

