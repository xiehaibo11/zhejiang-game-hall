
/* cocos2d::AudioPlayerProvider::getAudioPlayer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PcmAudioPlayer * __thiscall
cocos2d::AudioPlayerProvider::getAudioPlayer(AudioPlayerProvider *this,basic_string *param_1)

{
  mutex *pmVar1;
  PcmData *this_00;
  mutex *pmVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  mutex *pmVar6;
  int iVar7;
  PcmAudioPlayer *this_01;
  ulong uVar8;
  AudioPlayerProvider *this_02;
  __shared_weak_count *p_Var9;
  __shared_weak_count *this_03;
  __shared_weak_count *this_04;
  __shared_weak_count *this_05;
  mutex *pmVar10;
  mutex *pmVar11;
  mutex *pmVar12;
  mutex *pmVar13;
  code *pcVar14;
  long lVar15;
  mutex *pmVar16;
  basic_string *pbVar17;
  __shared_weak_count *p_Var18;
  __shared_weak_count *p_Var19;
  __shared_weak_count *p_Var20;
  mutex *pmVar21;
  __shared_weak_count *p_Var22;
  undefined8 uVar23;
  AudioFileInfo *local_1b0;
  undefined8 local_150;
  mutex *pmStack_148;
  mutex *local_140;
  mutex *local_138;
  PcmData *local_130;
  __shared_weak_count *local_128;
  mutex *local_120;
  __shared_weak_count *p_Stack_118;
  mutex *local_110;
  __shared_weak_count *p_Stack_108;
  mutex *local_100;
  __shared_weak_count *p_Stack_f8;
  mutex *local_f0;
  mutex *pmStack_e8;
  mutex *local_e0;
  AudioFileInfo local_d8;
  undefined7 uStack_d7;
  mutex *pmStack_d0;
  mutex *local_c8;
  __shared_weak_count *local_b8;
  long local_a8;
  mutex *local_a0;
  char local_98;
  mutex **local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
                    /* try { // try from 00a7334c to 00b7344b has its CatchHandler @ 00a73158 */
  local_70 = *(long *)(lVar5 + 0x28);
  if (DAT_01d1b788 < 1) {
                    /* catch() { ... } // from try @ 00a73208 with catch @ 00a733c4
                       catch() { ... } // from try @ 00a7326c with catch @ 00a733c4 */
    iVar7 = getSDKVersion();
    if (iVar7 < 1) {
      __android_log_print(6,"AudioPlayerProvider","Fail to get Android API level!");
    }
    else {
                    /* catch() { ... } // from try @ 00a731d8 with catch @ 00a733dc */
                    /* catch() { ... } // from try @ 00a731cc with catch @ 00a733e0 */
                    /* catch() { ... } // from try @ 00a731ac with catch @ 00a733e4 */
      __android_log_print(3,"AudioPlayerProvider","Android API level: %d",iVar7);
    }
    DAT_01d1b788 = iVar7;
    if (iVar7 < 0x11) goto LAB_00a73374;
LAB_00a73434:
    pmVar1 = (mutex *)(this + 0x80);
    std::__ndk1::mutex::lock(pmVar1);
    lVar15 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
             ::
             find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::PcmData>>>
                         *)(this + 0x58),param_1);
                    /* try { // try from 00a7344c to 00b734a3 has its CatchHandler @ 00a7344c
                       catch() { ... } // from try @ 00a7344c with catch @ 00a7344c
                       catch() { ... } // from try @ 00a73664 with catch @ 00a7344c */
    if (lVar15 != 0) {
      PcmData::PcmData((PcmData *)&local_d8,(PcmData *)(lVar15 + 0x28));
      std::__ndk1::mutex::unlock(pmVar1);
      uVar8 = PcmData::isValid((PcmData *)&local_d8);
      if ((uVar8 & 1) == 0) {
        __android_log_print(6,"AudioPlayerProvider",
                            "obtainPcmAudioPlayer failed, pcmData isn\'t valid!");
        this_01 = (PcmAudioPlayer *)0x0;
      }
      else {
        this_01 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
        if (this_01 != (PcmAudioPlayer *)0x0) {
          PcmAudioPlayer::PcmAudioPlayer
                    (this_01,*(AudioMixerController **)(this + 0x158),
                     *(ICallerThreadUtils **)(this + 0x50));
                    /* try { // try from 00a734a4 to 00b734bb has its CatchHandler @ 00a736d8 */
          PcmAudioPlayer::prepare(this_01,param_1,(PcmData *)&local_d8);
        }
      }
      PcmData::~PcmData((PcmData *)&local_d8);
      goto LAB_00a73b5c;
    }
    std::__ndk1::mutex::unlock(pmVar1);
    this_02 = (AudioPlayerProvider *)getFileInfo((basic_string *)this);
                    /* try { // try from 00a734c4 to 00b734cf has its CatchHandler @ 00a736bc */
                    /* try { // try from 00a734d0 to 00b734db has its CatchHandler @ 00a736b8 */
    pmVar1 = (mutex *)(ulong)((byte)local_d8 >> 1);
    if (((byte)local_d8 & 1) != 0) {
      pmVar1 = pmStack_d0;
    }
                    /* try { // try from 00a734dc to 00b73507 has its CatchHandler @ 00a736e8 */
    if ((pmVar1 == (mutex *)0x0) || (local_a8 < 1)) {
      pbVar17 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar17 = param_1 + 1;
      }
                    /* try { // try from 00a73620 to 00b73663 has its CatchHandler @ 00a736c0 */
      __android_log_print(6,"AudioPlayerProvider","File info is invalid, path: %s",pbVar17);
      this_01 = (PcmAudioPlayer *)0x0;
    }
    else {
      uVar8 = isSmallFile(this_02,&local_d8);
      if ((uVar8 & 1) == 0) {
        this_01 = (PcmAudioPlayer *)createUrlAudioPlayer(this,&local_d8);
      }
      else {
        p_Var9 = operator_new(0x48);
        *(undefined8 *)(p_Var9 + 0x10) = 0;
        this_00 = (PcmData *)(p_Var9 + 0x18);
        p_Var18 = p_Var9 + 8;
        *(long *)p_Var18 = 0;
        *(undefined ***)p_Var9 = &PTR____shared_ptr_emplace_01c6ee30;
                    /* try { // try from 00a7351c to 00b73527 has its CatchHandler @ 00a736c0 */
        PcmData::PcmData(this_00);
        this_03 = operator_new(0x20);
        *(undefined8 *)(this_03 + 0x10) = 0;
        p_Var19 = this_03 + 8;
        *(long *)p_Var19 = 0;
                    /* try { // try from 00a7354c to 00b73553 has its CatchHandler @ 00a736b4 */
        *(undefined ***)this_03 = &PTR____shared_weak_count_01c6ee80;
        pmVar16 = (mutex *)(this_03 + 0x18);
        *pmVar16 = (mutex)0x0;
        this_04 = operator_new(0x20);
                    /* try { // try from 00a73568 to 00b7356f has its CatchHandler @ 00a736c0 */
        *(undefined8 *)(this_04 + 0x10) = 0;
        p_Var22 = this_04 + 8;
        *(long *)p_Var22 = 0;
        *(undefined ***)this_04 = &PTR____shared_weak_count_01c6ee80;
        pmVar12 = (mutex *)(this_04 + 0x18);
        *pmVar12 = (mutex)0x0;
        this_05 = operator_new(0x20);
                    /* try { // try from 00a73590 to 00b735e7 has its CatchHandler @ 00a736e8 */
        *(undefined8 *)(this_05 + 0x10) = 0;
        p_Var20 = this_05 + 8;
        *(long *)p_Var20 = 0;
        *(undefined ***)this_05 = &PTR____shared_weak_count_01c6ee80;
        pmVar13 = (mutex *)(this_05 + 0x18);
        *pmVar13 = (mutex)0x0;
        pmVar10 = (mutex *)pthread_self();
        pmVar1 = local_c8;
        local_f0 = (mutex *)0x0;
        pmStack_e8 = (mutex *)0x0;
        local_e0 = (mutex *)0x0;
        if (((byte)local_d8 & 1) == 0) {
          local_f0 = (mutex *)CONCAT71(uStack_d7,local_d8);
          local_e0 = local_c8;
          pmStack_e8 = pmStack_d0;
        }
        else {
          if ((mutex *)0xffffffffffffffef < pmStack_d0) goto LAB_00a73bb8;
                    /* try { // try from 00a73664 to 00b7373f has its CatchHandler @ 00a7344c */
          if (pmStack_d0 < (mutex *)0x17) {
            pmVar21 = (mutex *)((ulong)&local_f0 | 1);
            local_f0 = (mutex *)(ulong)(byte)((int)pmStack_d0 << 1);
            if (pmStack_d0 != (mutex *)0x0) goto LAB_00a736a8;
          }
          else {
            pmVar21 = operator_new((ulong)(pmStack_d0 + 0x10) & 0xfffffffffffffff0);
            local_f0 = (mutex *)((ulong)(pmStack_d0 + 0x10) & 0xfffffffffffffff0 | 1);
            pmStack_e8 = pmStack_d0;
            local_e0 = pmVar21;
LAB_00a736a8:
            memcpy(pmVar21,pmVar1,(size_t)pmStack_d0);
          }
                    /* catch() { ... } // from try @ 00a7354c with catch @ 00a736b4 */
          pmVar21[(long)pmStack_d0] = (mutex)0x0;
        }
                    /* catch() { ... } // from try @ 00a734d0 with catch @ 00a736b8 */
        pmVar6 = local_e0;
        pmVar21 = pmStack_e8;
        pmVar1 = local_f0;
                    /* catch() { ... } // from try @ 00a734c4 with catch @ 00a736bc */
                    /* catch() { ... } // from try @ 00a7351c with catch @ 00a736c0
                       catch() { ... } // from try @ 00a73568 with catch @ 00a736c0
                       catch() { ... } // from try @ 00a73620 with catch @ 00a736c0 */
        local_150 = (mutex *)0x0;
        pmStack_148 = (mutex *)0x0;
        local_140 = (mutex *)0x0;
        if (((ulong)local_f0 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a734a4 with catch @ 00a736d8 */
                    /* catch() { ... } // from try @ 00a734dc with catch @ 00a736e8
                       catch() { ... } // from try @ 00a73590 with catch @ 00a736e8 */
          local_140 = local_e0;
          pmStack_148 = pmStack_e8;
          local_150 = local_f0;
        }
        else {
          if ((mutex *)0xffffffffffffffef < pmStack_e8) {
LAB_00a73bb8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (pmStack_e8 < (mutex *)0x17) {
            pmVar11 = (mutex *)((long)&local_150 + 1);
            local_150 = (mutex *)(ulong)(byte)((int)pmStack_e8 << 1);
            if (pmStack_e8 != (mutex *)0x0) goto LAB_00a7374c;
          }
          else {
            pmVar2 = pmStack_e8 + 0x10;
            pmVar11 = operator_new((ulong)pmVar2 & 0xfffffffffffffff0);
                    /* try { // try from 00a73740 to 00b73793 has its CatchHandler @ 00a73740
                       catch() { ... } // from try @ 00a73740 with catch @ 00a73740
                       catch() { ... } // from try @ 00a7392c with catch @ 00a73740 */
            pmStack_148 = pmVar21;
            local_150 = (mutex *)((ulong)pmVar2 & 0xfffffffffffffff0 | 1);
            local_140 = pmVar11;
LAB_00a7374c:
            memcpy(pmVar11,pmVar6,(size_t)pmVar21);
          }
          pmVar11[(long)pmVar21] = (mutex)0x0;
        }
        local_1b0 = &local_d8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var18,0x10);
          if (bVar4) {
            *(long *)p_Var18 = *(long *)p_Var18 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
          if (bVar4) {
            *(long *)p_Var19 = *(long *)p_Var19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
                    /* try { // try from 00a737b4 to 00b737bf has its CatchHandler @ 00a73944 */
        } while (cVar3 != '\0');
        do {
                    /* try { // try from 00a737cc to 00b7380b has its CatchHandler @ 00a73970 */
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var22,0x10);
          if (bVar4) {
            *(long *)p_Var22 = *(long *)p_Var22 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var20,0x10);
          if (bVar4) {
            *(long *)p_Var20 = *(long *)p_Var20 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_138 = pmVar10;
        local_130 = this_00;
        local_128 = p_Var9;
        local_120 = pmVar16;
        p_Stack_118 = this_03;
        local_110 = pmVar12;
        p_Stack_108 = this_04;
        local_100 = pmVar13;
        p_Stack_f8 = this_05;
        local_80 = operator_new(0x70);
        pmVar11 = local_140;
        pmVar6 = pmStack_148;
        pmVar21 = local_150;
                    /* try { // try from 00a7380c to 00b7381f has its CatchHandler @ 00a73948 */
        pmStack_148 = (mutex *)0x0;
        local_140 = (mutex *)0x0;
        local_150 = (mutex *)0x0;
        *local_80 = (mutex *)&PTR_FUN_01c6eed0;
        local_80[6] = (mutex *)this_00;
        local_80[7] = (mutex *)p_Var9;
        local_80[4] = pmVar11;
                    /* try { // try from 00a7383c to 00b73877 has its CatchHandler @ 00a73970 */
        local_130 = (PcmData *)0x0;
        local_128 = (__shared_weak_count *)0x0;
        local_80[1] = (mutex *)local_1b0;
        local_80[3] = pmVar6;
        local_80[2] = pmVar21;
        local_80[5] = pmVar10;
        local_80[8] = pmVar16;
        local_80[9] = (mutex *)this_03;
        local_120 = (mutex *)0x0;
        p_Stack_118 = (__shared_weak_count *)0x0;
        local_110 = (mutex *)0x0;
        p_Stack_108 = (__shared_weak_count *)0x0;
        local_100 = (mutex *)0x0;
        p_Stack_f8 = (__shared_weak_count *)0x0;
        local_80[10] = pmVar12;
        local_80[0xb] = (mutex *)this_04;
        local_80[0xc] = pmVar13;
        local_80[0xd] = (mutex *)this_05;
        preloadEffect(this,&local_d8,(function *)&local_a0,true);
        if (&local_a0 == local_80) {
          pcVar14 = *(code **)(*local_80 + 0x20);
LAB_00a738d0:
          (*pcVar14)();
        }
        else if (local_80 != (mutex **)0x0) {
          pcVar14 = *(code **)(*local_80 + 0x28);
          goto LAB_00a738d0;
        }
                    /* try { // try from 00a738e8 to 00b7392b has its CatchHandler @ 00a73948 */
        if ((*pmVar12 == (mutex)0x0) && (*pmVar13 == (mutex)0x0)) {
          local_a0 = (mutex *)(this + 0xf8);
          local_98 = '\x01';
          std::__ndk1::mutex::lock(local_a0);
          std::__ndk1::chrono::steady_clock::now();
          lVar15 = std::__ndk1::chrono::system_clock::now();
          uVar23 = __floatditf();
          uVar23 = __multf3(uVar23,0);
                    /* try { // try from 00a7392c to 00b739c7 has its CatchHandler @ 00a73740 */
          iVar7 = __lttf2(uVar23,0xaffc000000000000);
          if (iVar7 < 0) {
                    /* catch() { ... } // from try @ 00a737c0 with catch @ 00a73940 */
                    /* catch() { ... } // from try @ 00a737b4 with catch @ 00a73944 */
            lVar15 = lVar15 * 1000 + 2000000000;
                    /* catch() { ... } // from try @ 00a7380c with catch @ 00a73948
                       catch() { ... } // from try @ 00a738e8 with catch @ 00a73948 */
          }
          else {
            lVar15 = 0x7fffffffffffffff;
          }
          std::__ndk1::condition_variable::__do_timed_wait
                    ((condition_variable *)(this + 0x120),&local_a0,lVar15);
                    /* catch() { ... } // from try @ 00a73794 with catch @ 00a73960 */
          std::__ndk1::chrono::steady_clock::now();
          if (local_98 != '\0') {
                    /* catch() { ... } // from try @ 00a737cc with catch @ 00a73970
                       catch() { ... } // from try @ 00a7383c with catch @ 00a73970 */
            std::__ndk1::mutex::unlock(local_a0);
          }
        }
        if (*pmVar16 == (mutex)0x0) {
          pbVar17 = *(basic_string **)(param_1 + 0x10);
          if (((byte)*param_1 & 1) == 0) {
            pbVar17 = param_1 + 1;
          }
          __android_log_print(6,"AudioPlayerProvider","FileInfo (%p), preloadEffect (%s) failed",
                              &local_d8,pbVar17);
LAB_00a73a58:
          this_01 = (PcmAudioPlayer *)0x0;
        }
        else {
          uVar8 = PcmData::isValid(this_00);
          if ((uVar8 & 1) == 0) {
            pbVar17 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00a73a1c to 00b73a33 has its CatchHandler @ 00a73be8 */
            if (((byte)*param_1 & 1) == 0) {
              pbVar17 = param_1 + 1;
            }
            __android_log_print(6,"AudioPlayerProvider","pcm data is invalid, path: %s",pbVar17);
                    /* try { // try from 00a73a3c to 00b73a47 has its CatchHandler @ 00a73bcc */
            goto LAB_00a73a58;
          }
          uVar8 = PcmData::isValid(this_00);
          if ((uVar8 & 1) == 0) {
                    /* try { // try from 00a73a48 to 00b73a53 has its CatchHandler @ 00a73bc8 */
                    /* try { // try from 00a73a54 to 00b73a93 has its CatchHandler @ 00a73bf8 */
            __android_log_print(6,"AudioPlayerProvider",
                                "obtainPcmAudioPlayer failed, pcmData isn\'t valid!");
            goto LAB_00a73a58;
          }
          this_01 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
          if (this_01 != (PcmAudioPlayer *)0x0) {
            PcmAudioPlayer::PcmAudioPlayer
                      (this_01,*(AudioMixerController **)(this + 0x158),
                       *(ICallerThreadUtils **)(this + 0x50));
                    /* try { // try from 00a739c8 to 00b73a1b has its CatchHandler @ 00a739c8
                       catch() { ... } // from try @ 00a739c8 with catch @ 00a739c8
                       catch() { ... } // from try @ 00a73bb4 with catch @ 00a739c8 */
            PcmAudioPlayer::prepare(this_01,(basic_string *)&local_d8,this_00);
          }
        }
        if (((ulong)pmVar1 & 1) != 0) {
          operator_delete(local_e0);
        }
        do {
          lVar15 = *(long *)p_Var20;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var20,0x10);
          if (bVar4) {
            *(long *)p_Var20 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*(long *)this_05 + 0x10))(this_05);
                    /* try { // try from 00a73a94 to 00b73aa7 has its CatchHandler @ 00a73bd0 */
          std::__ndk1::__shared_weak_count::__release_weak(this_05);
        }
        do {
          lVar15 = *(long *)p_Var22;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var22,0x10);
          if (bVar4) {
            *(long *)p_Var22 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*(long *)this_04 + 0x10))(this_04);
                    /* try { // try from 00a73ac4 to 00b73aff has its CatchHandler @ 00a73bf8 */
          std::__ndk1::__shared_weak_count::__release_weak(this_04);
        }
        do {
          lVar15 = *(long *)p_Var19;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var19,0x10);
          if (bVar4) {
            *(long *)p_Var19 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*(long *)this_03 + 0x10))(this_03);
          std::__ndk1::__shared_weak_count::__release_weak(this_03);
        }
        do {
          lVar15 = *(long *)p_Var18;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var18,0x10);
          if (bVar4) {
            *(long *)p_Var18 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var9);
        }
      }
    }
    if (local_b8 != (__shared_weak_count *)0x0) {
      p_Var9 = local_b8 + 8;
      do {
        lVar15 = *(long *)p_Var9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar4) {
          *(long *)p_Var9 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_00a73b48:
      if (lVar15 == 0) {
        (**(code **)(*(long *)local_b8 + 0x10))(local_b8);
        std::__ndk1::__shared_weak_count::__release_weak(local_b8);
      }
    }
  }
  else {
    if (0x10 < DAT_01d1b788) goto LAB_00a73434;
LAB_00a73374:
    getFileInfo((basic_string *)this);
    pmVar1 = (mutex *)(ulong)((byte)local_d8 >> 1);
    if (((byte)local_d8 & 1) != 0) {
      pmVar1 = pmStack_d0;
    }
    if ((pmVar1 == (mutex *)0x0) || (local_a8 < 1)) {
                    /* catch() { ... } // from try @ 00a731e4 with catch @ 00a733f4
                       catch() { ... } // from try @ 00a7324c with catch @ 00a733f4
                       catch() { ... } // from try @ 00a73310 with catch @ 00a733f4 */
      this_01 = (PcmAudioPlayer *)0x0;
    }
    else {
      this_01 = (PcmAudioPlayer *)createUrlAudioPlayer(this,&local_d8);
    }
    if (local_b8 != (__shared_weak_count *)0x0) {
      p_Var9 = local_b8 + 8;
      do {
        lVar15 = *(long *)p_Var9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
        if (bVar4) {
          *(long *)p_Var9 = lVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00a73b48;
    }
  }
  if (((byte)local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
LAB_00a73b5c:
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a73bb4 to 00b73c4f has its CatchHandler @ 00a739c8 */
    __stack_chk_fail();
  }
                    /* try { // try from 00a73b70 to 00b73bb3 has its CatchHandler @ 00a73bd0 */
  return this_01;
}

