
/* float cocos2d::JniHelper::callStaticFloatMethod<int>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

float cocos2d::JniHelper::callStaticFloatMethod<int>
                (basic_string *param_1,basic_string *param_2,int param_3)

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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  _jclass *local_88;
  _jmethodID *p_Stack_80;
  undefined8 local_78;
  void *local_70;
  ulong uStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"I");
                    /* try { // try from 00de80e4 to 00ee8107 has its CatchHandler @ 00de7154 */
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_b8,0,"(",1);
  local_60 = (void *)puVar5[2];
  uStack_68 = puVar5[1];
  local_70 = (void *)*puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 00de8108 to 00ee810f has its CatchHandler @ 00de8be0 */
  puVar5 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_70,")F",2);
  local_90 = (char *)puVar5[2];
  uStack_98 = puVar5[1];
  local_a0 = *puVar5;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if (((ulong)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  pbVar8 = *(basic_string **)(param_1 + 0x10);
  pbVar9 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 00de8164 to 00ee8167 has its CatchHandler @ 00de8abc */
  if (((byte)*param_1 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar9 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_a0 | 1);
                    /* try { // try from 00de8188 to 00ee818f has its CatchHandler @ 00de8bc8 */
  if ((local_a0 & 1) != 0) {
    pcVar1 = local_90;
  }
  uVar6 = getStaticMethodInfo((JniMethodInfo_ *)&local_88,(char *)pbVar8,(char *)pbVar9,pcVar1);
  if ((uVar6 & 1) == 0) {
    fVar11 = 0.0;
    reportError(param_1,param_2,(basic_string *)&local_a0);
                    /* try { // try from 00de8220 to 00ee822f has its CatchHandler @ 00de8ca0 */
  }
  else {
    uStack_68 = 0;
    local_70 = (void *)0x0;
    uStack_58 = 0;
    local_60 = (void *)0x0;
    local_50 = 0x3f800000;
    fVar11 = (float)_JNIEnv::CallStaticFloatMethod
                              (local_88,p_Stack_80,local_78,(ulong)(uint)param_3);
                    /* try { // try from 00de81b8 to 00ee81bb has its CatchHandler @ 00de8ab4 */
    (**(code **)(*(long *)local_88 + 0xb8))(local_88,p_Stack_80);
    deleteLocalRefs((_JNIEnv *)local_88,(unordered_map *)&local_70);
    pvVar3 = local_70;
    puVar4 = local_60;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)puVar4[3];
      pvVar10 = (void *)*puVar4;
      local_70 = pvVar3;
      if (pvVar7 != (void *)0x0) {
        puVar4[4] = pvVar7;
        operator_delete(pvVar7);
      }
                    /* try { // try from 00de81e4 to 00ee81eb has its CatchHandler @ 00de8bc0 */
      operator_delete(puVar4);
      pvVar3 = local_70;
      puVar4 = pvVar10;
    }
    local_70 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
                    /* try { // try from 00de8234 to 00ee8243 has its CatchHandler @ 00de8c9c */
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return fVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

