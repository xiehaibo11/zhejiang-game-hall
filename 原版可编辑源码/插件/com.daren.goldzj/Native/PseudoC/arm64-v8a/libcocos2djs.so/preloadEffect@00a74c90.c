
/* cocos2d::AudioPlayerProvider::preloadEffect(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool, cocos2d::PcmData)> const&) */

void __thiscall
cocos2d::AudioPlayerProvider::preloadEffect
          (AudioPlayerProvider *this,basic_string *param_1,function *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  code *pcVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  PcmData local_188 [16];
  void *local_178;
  __shared_weak_count *local_168;
  PcmData aPStack_150 [48];
  PcmData aPStack_120 [48];
  AudioPlayerProvider *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  void *local_a0;
  long local_90 [4];
  long *local_70;
  long local_58;
  
                    /* try { // try from 00a74c94 to 00b74ca3 has its CatchHandler @ 00a75030 */
                    /* try { // try from 00a74ca8 to 00b74cb3 has its CatchHandler @ 00a75028 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00a74cb4 to 00b74cc3 has its CatchHandler @ 00a75010 */
                    /* try { // try from 00a74cc8 to 00b74cd3 has its CatchHandler @ 00a75000 */
  if (DAT_01d1b788 < 1) {
    iVar5 = getSDKVersion();
    if (iVar5 < 1) {
      __android_log_print(6,"AudioPlayerProvider","Fail to get Android API level!");
      DAT_01d1b788 = iVar5;
    }
    else {
                    /* try { // try from 00a74d40 to 00b74d87 has its CatchHandler @ 00a75138 */
      __android_log_print(3,"AudioPlayerProvider","Android API level: %d",iVar5);
      DAT_01d1b788 = iVar5;
    }
  }
  if (DAT_01d1b788 < 0x11) {
    PcmData::PcmData(local_188);
    PcmData::PcmData(aPStack_120,local_188);
                    /* try { // try from 00a74cf4 to 00b74cff has its CatchHandler @ 00a74fe0 */
    local_90[0]._0_1_ = 1;
    plVar6 = *(long **)(param_2 + 0x20);
    if (plVar6 == (long *)0x0) {
LAB_00a750ac:
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
                    /* try { // try from 00a74d04 to 00b74d0b has its CatchHandler @ 00a74fd0 */
    (**(code **)(*plVar6 + 0x30))(plVar6,local_90,aPStack_120);
    PcmData::~PcmData(aPStack_120);
    PcmData::~PcmData(local_188);
    goto LAB_00a7507c;
  }
  std::__ndk1::mutex::lock((mutex *)(this + 0x80));
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
                      *)(this + 0x58),param_1);
  std::__ndk1::mutex::unlock((mutex *)(this + 0x80));
  if (lVar7 != 0) {
                    /* try { // try from 00a74d9c to 00b74da3 has its CatchHandler @ 00a7508c */
    PcmData::PcmData(aPStack_150,(PcmData *)(lVar7 + 0x28));
    local_188[0] = (PcmData)0x1;
    plVar6 = *(long **)(param_2 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_00a750ac;
    (**(code **)(*plVar6 + 0x30))(plVar6,local_188,aPStack_150);
    PcmData::~PcmData(aPStack_150);
    goto LAB_00a7507c;
  }
  getFileInfo((basic_string *)this);
  plVar6 = *(long **)(param_2 + 0x20);
  local_f0 = this;
  if (plVar6 == (long *)0x0) {
                    /* try { // try from 00a74e10 to 00b74e13 has its CatchHandler @ 00a74fcc */
    local_c0 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar6) {
                    /* try { // try from 00a74e18 to 00b74e23 has its CatchHandler @ 00a75058 */
    local_c0 = alStack_e0;
                    /* try { // try from 00a74e24 to 00b74ea3 has its CatchHandler @ 00a74b94 */
    (**(code **)(*plVar6 + 0x18))();
  }
  else {
    local_c0 = (long *)(**(code **)(*plVar6 + 0x10))();
  }
  uStack_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_a0 = *(void **)(param_1 + 0x10);
    uStack_a8 = *(ulong *)(param_1 + 8);
    local_b0 = *(ulong *)param_1;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar11) goto LAB_00a750b0;
    pvVar10 = *(void **)(param_1 + 0x10);
    if (uVar11 < 0x17) {
      pvVar8 = (void *)((long)&local_b0 + 1);
      local_b0 = (ulong)(byte)((int)uVar11 << 1);
      if (uVar11 != 0) goto LAB_00a74ea8;
    }
    else {
      uVar12 = uVar11 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar12);
      local_b0 = uVar12 | 1;
                    /* try { // try from 00a74ea4 to 00b74eb3 has its CatchHandler @ 00a75138 */
      uStack_a8 = uVar11;
      local_a0 = pvVar8;
LAB_00a74ea8:
                    /* try { // try from 00a74eb4 to 00b74f9b has its CatchHandler @ 00a74b94 */
      memcpy(pvVar8,pvVar10,uVar11);
    }
    *(undefined1 *)((long)pvVar8 + uVar11) = 0;
  }
  local_70 = (long *)0x0;
  plVar6 = operator_new(0x70);
  *plVar6 = (long)&PTR_FUN_01c6ef50;
  plVar6[2] = (long)local_f0;
  if (local_c0 == (long *)0x0) {
    plVar6[8] = 0;
  }
  else if (alStack_e0 == local_c0) {
    plVar6[8] = (long)(plVar6 + 4);
    (**(code **)(*local_c0 + 0x18))();
  }
  else {
    lVar7 = (**(code **)(*local_c0 + 0x10))();
    plVar6[8] = lVar7;
  }
  pvVar10 = local_a0;
  uVar11 = uStack_a8;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  if ((local_b0 & 1) == 0) {
    plVar6[0xc] = (long)local_a0;
    plVar6[0xb] = uStack_a8;
    plVar6[10] = local_b0;
  }
  else {
    if (0xffffffffffffffef < uStack_a8) {
LAB_00a750b0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uStack_a8 < 0x17) {
      pvVar8 = (void *)((long)plVar6 + 0x51);
      *(char *)(plVar6 + 10) = (char)((int)uStack_a8 << 1);
      if (uStack_a8 != 0) goto LAB_00a74f9c;
    }
    else {
      uVar12 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar12);
      plVar6[0xb] = uVar11;
      plVar6[0xc] = (long)pvVar8;
      plVar6[10] = uVar12 | 1;
LAB_00a74f9c:
                    /* try { // try from 00a74f9c to 00b74fc3 has its CatchHandler @ 00a750e8 */
      memcpy(pvVar8,pvVar10,uVar11);
    }
    *(undefined1 *)((long)pvVar8 + uVar11) = 0;
  }
                    /* try { // try from 00a74fc4 to 00b7518f has its CatchHandler @ 00a74b94 */
  local_70 = plVar6;
  preloadEffect(this,(AudioFileInfo *)local_188,(function *)local_90,false);
                    /* catch() { ... } // from try @ 00a74e10 with catch @ 00a74fcc */
                    /* catch() { ... } // from try @ 00a74d04 with catch @ 00a74fd0 */
  if (local_90 == local_70) {
    pcVar9 = *(code **)(*local_70 + 0x20);
LAB_00a74ff0:
                    /* catch() { ... } // from try @ 00a74cd8 with catch @ 00a74ff0 */
    (*pcVar9)();
  }
  else if (local_70 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00a74cf4 with catch @ 00a74fe0 */
    pcVar9 = *(code **)(*local_70 + 0x28);
    goto LAB_00a74ff0;
  }
  if ((local_b0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00a74cc8 with catch @ 00a75000 */
    operator_delete(local_a0);
  }
                    /* catch() { ... } // from try @ 00a74cb4 with catch @ 00a75010 */
  if (alStack_e0 == local_c0) {
                    /* catch() { ... } // from try @ 00a74ca8 with catch @ 00a75028 */
    pcVar9 = *(code **)(*local_c0 + 0x20);
LAB_00a75030:
                    /* catch() { ... } // from try @ 00a74c94 with catch @ 00a75030 */
    (*pcVar9)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_c0 + 0x28);
    goto LAB_00a75030;
  }
                    /* catch() { ... } // from try @ 00a74c80 with catch @ 00a75034 */
  if (local_168 != (__shared_weak_count *)0x0) {
                    /* catch() { ... } // from try @ 00a74c88 with catch @ 00a7503c */
    p_Var1 = local_168 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
                    /* catch() { ... } // from try @ 00a74c64 with catch @ 00a75054 */
                    /* catch() { ... } // from try @ 00a74e18 with catch @ 00a75058 */
      (**(code **)(*(long *)local_168 + 0x10))(local_168);
      std::__ndk1::__shared_weak_count::__release_weak(local_168);
    }
  }
  if (((byte)local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
LAB_00a7507c:
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00a74d9c with catch @ 00a7508c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

