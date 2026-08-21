
/* bool cocos2d::JniHelper::callStaticBooleanMethod<int>(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int) */

bool cocos2d::JniHelper::callStaticBooleanMethod<int>
               (basic_string *param_1,basic_string *param_2,int param_3)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  ulong *puVar7;
  ulong uVar8;
  void *pvVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  void *pvVar12;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  _jclass *local_78;
  _jmethodID *p_Stack_70;
  undefined8 local_68;
  void *local_60;
  ulong uStack_58;
  void *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
                    /* try { // try from 009ddda0 to 00addda7 has its CatchHandler @ 009dde70 */
                    /* try { // try from 009dddac to 00adddd3 has its CatchHandler @ 009dde78 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uStack_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = &DAT_00004902;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_a8,0,"(",1);
  local_50 = (void *)puVar7[2];
  uStack_58 = puVar7[1];
  local_60 = (void *)*puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_60,")Z",2);
                    /* try { // try from 009dde24 to 00adde33 has its CatchHandler @ 009dde6c */
  local_80 = (char *)puVar7[2];
  uStack_88 = puVar7[1];
  local_90 = *puVar7;
                    /* try { // try from 009dde34 to 00adde93 has its CatchHandler @ 009ddd28 */
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (((ulong)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (((ulong)local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  pbVar10 = *(basic_string **)(param_1 + 0x10);
  pbVar11 = *(basic_string **)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 009dde24 with catch @ 009dde6c */
                    /* catch() { ... } // from try @ 009ddda0 with catch @ 009dde70 */
                    /* catch() { ... } // from try @ 009dddac with catch @ 009dde78 */
  if (((byte)*param_1 & 1) == 0) {
    pbVar10 = param_1 + 1;
  }
  if (((byte)*param_2 & 1) == 0) {
    pbVar11 = param_2 + 1;
  }
  pcVar1 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar1 = local_80;
  }
                    /* try { // try from 009dde94 to 00addecf has its CatchHandler @ 009dde94
                       catch() { ... } // from try @ 009dde94 with catch @ 009dde94
                       catch() { ... } // from try @ 009ddfb8 with catch @ 009dde94 */
  uVar8 = getStaticMethodInfo((JniMethodInfo_ *)&local_78,(char *)pbVar10,(char *)pbVar11,pcVar1);
  if ((uVar8 & 1) == 0) {
                    /* try { // try from 009ddf34 to 00addf47 has its CatchHandler @ 009de00c */
    reportError(param_1,param_2,(basic_string *)&local_90);
    bVar5 = false;
  }
  else {
    uStack_58 = 0;
    local_60 = (void *)0x0;
    uStack_48 = 0;
    local_50 = (void *)0x0;
    local_40 = 0x3f800000;
    cVar6 = _JNIEnv::CallStaticBooleanMethod(local_78,p_Stack_70,local_68,(ulong)(uint)param_3);
                    /* try { // try from 009dded0 to 00addedb has its CatchHandler @ 009de040 */
    (**(code **)(*(long *)local_78 + 0xb8))(local_78,p_Stack_70);
                    /* try { // try from 009ddedc to 00addeef has its CatchHandler @ 009de024 */
    deleteLocalRefs((_JNIEnv *)local_78,(unordered_map *)&local_60);
    pvVar3 = local_60;
    puVar4 = local_50;
    while (puVar4 != (void *)0x0) {
      pvVar9 = (void *)puVar4[3];
      pvVar12 = (void *)*puVar4;
      local_60 = pvVar3;
      if (pvVar9 != (void *)0x0) {
        puVar4[4] = pvVar9;
        operator_delete(pvVar9);
      }
                    /* try { // try from 009ddf00 to 00addf07 has its CatchHandler @ 009de01c */
      operator_delete(puVar4);
                    /* try { // try from 009ddf08 to 00addf1b has its CatchHandler @ 009de018 */
      pvVar3 = local_60;
      puVar4 = pvVar12;
    }
    local_60 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    bVar5 = cVar6 == '\x01';
                    /* try { // try from 009ddf2c to 00addf33 has its CatchHandler @ 009de010 */
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
                    /* try { // try from 009ddf58 to 00addf5f has its CatchHandler @ 009de004 */
                    /* try { // try from 009ddf60 to 00addf73 has its CatchHandler @ 009de000 */
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

