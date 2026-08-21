
/* cocos2d::experimental::AudioPlayerProvider::preloadEffect(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, std::__ndk1::function<void
   (bool, cocos2d::experimental::PcmData)> const&) */

void __thiscall
cocos2d::experimental::AudioPlayerProvider::preloadEffect
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
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (DAT_017774f0 < 1) {
    iVar5 = getSDKVersion();
    if (iVar5 < 1) {
      __android_log_print(6,"AudioPlayerProvider","Fail to get Android API level!");
      DAT_017774f0 = iVar5;
    }
    else {
      __android_log_print(3,"AudioPlayerProvider","Android API level: %d",iVar5);
      DAT_017774f0 = iVar5;
    }
  }
  if (DAT_017774f0 < 0x11) {
    PcmData::PcmData(local_188);
    PcmData::PcmData(aPStack_120,local_188);
    local_90[0]._0_1_ = 1;
    plVar6 = *(long **)(param_2 + 0x20);
    if (plVar6 == (long *)0x0) {
LAB_00e6d570:
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,local_90,aPStack_120);
    PcmData::~PcmData(aPStack_120);
    PcmData::~PcmData(local_188);
    goto LAB_00e6d540;
  }
  std::__ndk1::mutex::lock((mutex *)(this + 0x80));
  lVar7 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
                      *)(this + 0x58),param_1);
  std::__ndk1::mutex::unlock((mutex *)(this + 0x80));
  if (lVar7 != 0) {
    PcmData::PcmData(aPStack_150,(PcmData *)(lVar7 + 0x28));
    local_188[0] = (PcmData)0x1;
    plVar6 = *(long **)(param_2 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_00e6d570;
    (**(code **)(*plVar6 + 0x30))(plVar6,local_188,aPStack_150);
    PcmData::~PcmData(aPStack_150);
    goto LAB_00e6d540;
  }
  getFileInfo((basic_string *)this);
  plVar6 = *(long **)(param_2 + 0x20);
  local_f0 = this;
  if (plVar6 == (long *)0x0) {
    local_c0 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar6) {
    local_c0 = alStack_e0;
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
    if (0xffffffffffffffef < uVar11) goto LAB_00e6d574;
    pvVar10 = *(void **)(param_1 + 0x10);
    if (uVar11 < 0x17) {
      pvVar8 = (void *)((long)&local_b0 + 1);
      local_b0 = (ulong)(byte)((int)uVar11 << 1);
      if (uVar11 != 0) goto LAB_00e6d36c;
    }
    else {
      uVar12 = uVar11 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar12);
      local_b0 = uVar12 | 1;
      uStack_a8 = uVar11;
      local_a0 = pvVar8;
LAB_00e6d36c:
      memcpy(pvVar8,pvVar10,uVar11);
    }
    *(undefined1 *)((long)pvVar8 + uVar11) = 0;
  }
  local_70 = (long *)0x0;
  plVar6 = operator_new(0x70);
  *plVar6 = (long)&PTR_FUN_016f3bd8;
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
LAB_00e6d574:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uStack_a8 < 0x17) {
      pvVar8 = (void *)((long)plVar6 + 0x51);
      *(char *)(plVar6 + 10) = (char)((int)uStack_a8 << 1);
      if (uStack_a8 != 0) goto LAB_00e6d460;
    }
    else {
      uVar12 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar12);
      plVar6[0xb] = uVar11;
      plVar6[0xc] = (long)pvVar8;
      plVar6[10] = uVar12 | 1;
LAB_00e6d460:
      memcpy(pvVar8,pvVar10,uVar11);
    }
    *(undefined1 *)((long)pvVar8 + uVar11) = 0;
  }
  local_70 = plVar6;
  preloadEffect(this,(AudioFileInfo *)local_188,(function *)local_90,false);
  if (local_90 == local_70) {
    pcVar9 = *(code **)(*local_70 + 0x20);
LAB_00e6d4b4:
    (*pcVar9)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar9 = *(code **)(*local_70 + 0x28);
    goto LAB_00e6d4b4;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (alStack_e0 == local_c0) {
    pcVar9 = *(code **)(*local_c0 + 0x20);
LAB_00e6d4f4:
    (*pcVar9)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_c0 + 0x28);
    goto LAB_00e6d4f4;
  }
  if (local_168 != (__shared_weak_count *)0x0) {
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
      (**(code **)(*(long *)local_168 + 0x10))(local_168);
      std::__ndk1::__shared_weak_count::__release_weak(local_168);
    }
  }
  if (((byte)local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
LAB_00e6d540:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

