
/* cocos2d::experimental::AudioPlayerProvider::getAudioPlayer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PcmAudioPlayer * __thiscall
cocos2d::experimental::AudioPlayerProvider::getAudioPlayer
          (AudioPlayerProvider *this,basic_string *param_1)

{
  mutex *pmVar1;
  PcmData *this_00;
  mutex *pmVar2;
  __shared_weak_count *p_Var3;
  char cVar4;
  bool bVar5;
  long lVar6;
  AudioFileInfo *pAVar7;
  __shared_weak_count *p_Var8;
  int iVar9;
  PcmAudioPlayer *this_01;
  ulong uVar10;
  AudioPlayerProvider *this_02;
  __shared_weak_count *p_Var11;
  __shared_weak_count *this_03;
  __shared_weak_count *this_04;
  __shared_weak_count *this_05;
  mutex *pmVar12;
  mutex *pmVar13;
  mutex *pmVar14;
  mutex *pmVar15;
  code *pcVar16;
  long lVar17;
  mutex *pmVar18;
  basic_string *pbVar19;
  __shared_weak_count *p_Var20;
  __shared_weak_count *p_Var21;
  __shared_weak_count *p_Var22;
  mutex *pmVar23;
  __shared_weak_count *p_Var24;
  undefined8 uVar25;
  mutex *local_160;
  mutex *pmStack_158;
  mutex *local_150;
  AudioFileInfo *local_140;
  undefined8 local_138;
  mutex *pmStack_130;
  mutex *local_128;
  mutex *local_120;
  PcmData *local_118;
  __shared_weak_count *local_110;
  mutex *local_108;
  __shared_weak_count *local_100;
  mutex *local_f8;
  __shared_weak_count *local_f0;
  mutex *local_e8;
  __shared_weak_count *local_e0;
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
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if (DAT_017774f0 < 1) {
    iVar9 = getSDKVersion();
    if (iVar9 < 1) {
      __android_log_print(6,"AudioPlayerProvider","Fail to get Android API level!");
    }
    else {
      __android_log_print(3,"AudioPlayerProvider","Android API level: %d",iVar9);
    }
    DAT_017774f0 = iVar9;
    if (iVar9 < 0x11) goto LAB_00e6b7b4;
LAB_00e6b874:
    pmVar1 = (mutex *)(this + 0x80);
    std::__ndk1::mutex::lock(pmVar1);
    lVar17 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
             ::
             find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::experimental::PcmData>>>
                         *)(this + 0x58),param_1);
    if (lVar17 != 0) {
      PcmData::PcmData((PcmData *)&local_d8,(PcmData *)(lVar17 + 0x28));
      std::__ndk1::mutex::unlock(pmVar1);
      uVar10 = PcmData::isValid((PcmData *)&local_d8);
      if ((uVar10 & 1) == 0) {
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
          PcmAudioPlayer::prepare(this_01,param_1,(PcmData *)&local_d8);
        }
      }
      PcmData::~PcmData((PcmData *)&local_d8);
      goto LAB_00e6c094;
    }
    std::__ndk1::mutex::unlock(pmVar1);
    this_02 = (AudioPlayerProvider *)getFileInfo((basic_string *)this);
    pmVar1 = (mutex *)(ulong)((byte)local_d8 >> 1);
    if (((byte)local_d8 & 1) != 0) {
      pmVar1 = pmStack_d0;
    }
    if ((pmVar1 == (mutex *)0x0) || (local_a8 < 1)) {
      pbVar19 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar19 = param_1 + 1;
      }
      __android_log_print(6,"AudioPlayerProvider","File info is invalid, path: %s",pbVar19);
      this_01 = (PcmAudioPlayer *)0x0;
    }
    else {
      uVar10 = isSmallFile(this_02,&local_d8);
      if ((uVar10 & 1) == 0) {
        this_01 = (PcmAudioPlayer *)createUrlAudioPlayer(this,&local_d8);
      }
      else {
        p_Var11 = operator_new(0x48);
        *(undefined8 *)(p_Var11 + 0x10) = 0;
        this_00 = (PcmData *)(p_Var11 + 0x18);
        p_Var21 = p_Var11 + 8;
        *(long *)p_Var21 = 0;
        *(undefined ***)p_Var11 = &PTR____shared_ptr_emplace_016f3ab8;
        PcmData::PcmData(this_00);
        this_03 = operator_new(0x20);
        *(undefined8 *)(this_03 + 0x10) = 0;
        p_Var22 = this_03 + 8;
        *(long *)p_Var22 = 0;
        *(undefined ***)this_03 = &PTR____shared_weak_count_016f3b08;
        pmVar18 = (mutex *)(this_03 + 0x18);
        *pmVar18 = (mutex)0x0;
        this_04 = operator_new(0x20);
        *(undefined8 *)(this_04 + 0x10) = 0;
        p_Var24 = this_04 + 8;
        *(long *)p_Var24 = 0;
        *(undefined ***)this_04 = &PTR____shared_weak_count_016f3b08;
        pmVar14 = (mutex *)(this_04 + 0x18);
        *pmVar14 = (mutex)0x0;
        this_05 = operator_new(0x20);
        *(undefined8 *)(this_05 + 0x10) = 0;
        p_Var20 = this_05 + 8;
        *(long *)p_Var20 = 0;
        *(undefined ***)this_05 = &PTR____shared_weak_count_016f3b08;
        pmVar15 = (mutex *)(this_05 + 0x18);
        *pmVar15 = (mutex)0x0;
        pmVar12 = (mutex *)pthread_self();
        pmVar1 = local_c8;
        pmStack_158 = (mutex *)0x0;
        local_150 = (mutex *)0x0;
        local_160 = (mutex *)0x0;
        if (((byte)local_d8 & 1) == 0) {
          local_160 = (mutex *)CONCAT71(uStack_d7,local_d8);
          pmStack_158 = pmStack_d0;
          local_150 = local_c8;
        }
        else {
          if ((mutex *)0xffffffffffffffef < pmStack_d0) goto LAB_00e6c0f0;
          if (pmStack_d0 < (mutex *)0x17) {
            pmVar23 = (mutex *)((ulong)&local_160 | 1);
            local_160 = (mutex *)(ulong)(byte)((int)pmStack_d0 << 1);
            if (pmStack_d0 != (mutex *)0x0) goto LAB_00e6bae8;
          }
          else {
            pmVar23 = operator_new((ulong)(pmStack_d0 + 0x10) & 0xfffffffffffffff0);
            local_160 = (mutex *)((ulong)(pmStack_d0 + 0x10) & 0xfffffffffffffff0 | 1);
            pmStack_158 = pmStack_d0;
            local_150 = pmVar23;
LAB_00e6bae8:
            memcpy(pmVar23,pmVar1,(size_t)pmStack_d0);
          }
          pmVar23[(long)pmStack_d0] = (mutex)0x0;
        }
        pmVar23 = local_150;
        pmVar1 = pmStack_158;
        local_140 = &local_d8;
        local_138 = (mutex *)0x0;
        pmStack_130 = (mutex *)0x0;
        local_128 = (mutex *)0x0;
        if (((ulong)local_160 & 1) == 0) {
          local_128 = local_150;
          pmStack_130 = pmStack_158;
          local_138 = local_160;
        }
        else {
          if ((mutex *)0xffffffffffffffef < pmStack_158) {
LAB_00e6c0f0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (pmStack_158 < (mutex *)0x17) {
            pmVar13 = (mutex *)((long)&local_138 + 1);
            local_138 = (mutex *)(ulong)(byte)((int)pmStack_158 << 1);
            if (pmStack_158 != (mutex *)0x0) goto LAB_00e6bb88;
          }
          else {
            pmVar2 = pmStack_158 + 0x10;
            pmVar13 = operator_new((ulong)pmVar2 & 0xfffffffffffffff0);
            local_138 = (mutex *)((ulong)pmVar2 & 0xfffffffffffffff0 | 1);
            pmStack_130 = pmVar1;
            local_128 = pmVar13;
LAB_00e6bb88:
            memcpy(pmVar13,pmVar23,(size_t)pmVar1);
          }
          pmVar13[(long)pmVar1] = (mutex)0x0;
        }
        do {
          pAVar7 = local_140;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var21,0x10);
          if (bVar5) {
            *(long *)p_Var21 = *(long *)p_Var21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var22,0x10);
          if (bVar5) {
            *(long *)p_Var22 = *(long *)p_Var22 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
          if (bVar5) {
            *(long *)p_Var24 = *(long *)p_Var24 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var20,0x10);
          if (bVar5) {
            *(long *)p_Var20 = *(long *)p_Var20 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_120 = pmVar12;
        local_118 = this_00;
        local_110 = p_Var11;
        local_108 = pmVar18;
        local_100 = this_03;
        local_f8 = pmVar14;
        local_f0 = this_04;
        local_e8 = pmVar15;
        local_e0 = this_05;
        local_80 = operator_new(0x70);
        pmVar13 = local_128;
        pmVar23 = pmStack_130;
        pmVar1 = local_138;
        pmStack_130 = (mutex *)0x0;
        local_128 = (mutex *)0x0;
        local_138 = (mutex *)0x0;
        *local_80 = (mutex *)&PTR_FUN_016f3b58;
        local_80[6] = (mutex *)this_00;
        local_80[7] = (mutex *)p_Var11;
        local_80[4] = pmVar13;
        local_118 = (PcmData *)0x0;
        local_110 = (__shared_weak_count *)0x0;
        local_80[1] = (mutex *)pAVar7;
        local_80[3] = pmVar23;
        local_80[2] = pmVar1;
        local_80[5] = pmVar12;
        local_80[8] = pmVar18;
        local_80[9] = (mutex *)this_03;
        local_108 = (mutex *)0x0;
        local_100 = (__shared_weak_count *)0x0;
        local_f8 = (mutex *)0x0;
        local_f0 = (__shared_weak_count *)0x0;
        local_e8 = (mutex *)0x0;
        local_e0 = (__shared_weak_count *)0x0;
        local_80[10] = pmVar14;
        local_80[0xb] = (mutex *)this_04;
        local_80[0xc] = pmVar15;
        local_80[0xd] = (mutex *)this_05;
        preloadEffect(this,&local_d8,(function *)&local_a0,true);
        if (&local_a0 == local_80) {
          pcVar16 = *(code **)(*local_80 + 0x20);
LAB_00e6bd20:
          (*pcVar16)();
        }
        else if (local_80 != (mutex **)0x0) {
          pcVar16 = *(code **)(*local_80 + 0x28);
          goto LAB_00e6bd20;
        }
        p_Var8 = local_e0;
        if (local_e0 != (__shared_weak_count *)0x0) {
          p_Var3 = local_e0 + 8;
          do {
            lVar17 = *(long *)p_Var3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
            if (bVar5) {
              *(long *)p_Var3 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*(long *)local_e0 + 0x10))(local_e0);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        p_Var8 = local_f0;
        if (local_f0 != (__shared_weak_count *)0x0) {
          p_Var3 = local_f0 + 8;
          do {
            lVar17 = *(long *)p_Var3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
            if (bVar5) {
              *(long *)p_Var3 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*(long *)local_f0 + 0x10))(local_f0);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        p_Var8 = local_100;
        if (local_100 != (__shared_weak_count *)0x0) {
          p_Var3 = local_100 + 8;
          do {
            lVar17 = *(long *)p_Var3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
            if (bVar5) {
              *(long *)p_Var3 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*(long *)local_100 + 0x10))(local_100);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        p_Var8 = local_110;
        if (local_110 != (__shared_weak_count *)0x0) {
          p_Var3 = local_110 + 8;
          do {
            lVar17 = *(long *)p_Var3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
            if (bVar5) {
              *(long *)p_Var3 = lVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar17 == 0) {
            (**(code **)(*(long *)local_110 + 0x10))(local_110);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        if (((ulong)local_138 & 1) != 0) {
          operator_delete(local_128);
        }
        if ((*pmVar14 == (mutex)0x0) && (*pmVar15 == (mutex)0x0)) {
          local_a0 = (mutex *)(this + 0xf8);
          local_98 = '\x01';
          std::__ndk1::mutex::lock(local_a0);
          std::__ndk1::chrono::steady_clock::now();
          lVar17 = std::__ndk1::chrono::system_clock::now();
          uVar25 = __floatditf();
          uVar25 = __multf3(uVar25,0);
          lVar17 = lVar17 * 1000 + 2000000000;
          iVar9 = __lttf2(uVar25,0xaffc000000000000);
          if (-1 < iVar9) {
            lVar17 = 0x7fffffffffffffff;
          }
          std::__ndk1::condition_variable::__do_timed_wait
                    ((condition_variable *)(this + 0x120),&local_a0,lVar17);
          std::__ndk1::chrono::steady_clock::now();
          if (local_98 != '\0') {
            std::__ndk1::mutex::unlock(local_a0);
          }
        }
        if (*pmVar18 == (mutex)0x0) {
          pbVar19 = *(basic_string **)(param_1 + 0x10);
          if (((byte)*param_1 & 1) == 0) {
            pbVar19 = param_1 + 1;
          }
          __android_log_print(6,"AudioPlayerProvider","FileInfo (%p), preloadEffect (%s) failed",
                              &local_d8,pbVar19);
LAB_00e6bf90:
          this_01 = (PcmAudioPlayer *)0x0;
        }
        else {
          uVar10 = PcmData::isValid(this_00);
          if ((uVar10 & 1) == 0) {
            pbVar19 = *(basic_string **)(param_1 + 0x10);
            if (((byte)*param_1 & 1) == 0) {
              pbVar19 = param_1 + 1;
            }
            __android_log_print(6,"AudioPlayerProvider","pcm data is invalid, path: %s",pbVar19);
            goto LAB_00e6bf90;
          }
          uVar10 = PcmData::isValid(this_00);
          if ((uVar10 & 1) == 0) {
            __android_log_print(6,"AudioPlayerProvider",
                                "obtainPcmAudioPlayer failed, pcmData isn\'t valid!");
            goto LAB_00e6bf90;
          }
          this_01 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
          if (this_01 != (PcmAudioPlayer *)0x0) {
            PcmAudioPlayer::PcmAudioPlayer
                      (this_01,*(AudioMixerController **)(this + 0x158),
                       *(ICallerThreadUtils **)(this + 0x50));
            PcmAudioPlayer::prepare(this_01,(basic_string *)&local_d8,this_00);
          }
        }
        if (((ulong)local_160 & 1) != 0) {
          operator_delete(local_150);
        }
        do {
          lVar17 = *(long *)p_Var20;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var20,0x10);
          if (bVar5) {
            *(long *)p_Var20 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)this_05 + 0x10))(this_05);
          std::__ndk1::__shared_weak_count::__release_weak(this_05);
        }
        do {
          lVar17 = *(long *)p_Var24;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var24,0x10);
          if (bVar5) {
            *(long *)p_Var24 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)this_04 + 0x10))(this_04);
          std::__ndk1::__shared_weak_count::__release_weak(this_04);
        }
        do {
          lVar17 = *(long *)p_Var22;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var22,0x10);
          if (bVar5) {
            *(long *)p_Var22 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)this_03 + 0x10))(this_03);
          std::__ndk1::__shared_weak_count::__release_weak(this_03);
        }
        do {
          lVar17 = *(long *)p_Var21;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var21,0x10);
          if (bVar5) {
            *(long *)p_Var21 = lVar17 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar17 == 0) {
          (**(code **)(*(long *)p_Var11 + 0x10))(p_Var11);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var11);
        }
      }
    }
    if (local_b8 != (__shared_weak_count *)0x0) {
      p_Var11 = local_b8 + 8;
      do {
        lVar17 = *(long *)p_Var11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
        if (bVar5) {
          *(long *)p_Var11 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00e6c080:
      if (lVar17 == 0) {
        (**(code **)(*(long *)local_b8 + 0x10))(local_b8);
        std::__ndk1::__shared_weak_count::__release_weak(local_b8);
      }
    }
  }
  else {
    if (0x10 < DAT_017774f0) goto LAB_00e6b874;
LAB_00e6b7b4:
    getFileInfo((basic_string *)this);
    pmVar1 = (mutex *)(ulong)((byte)local_d8 >> 1);
    if (((byte)local_d8 & 1) != 0) {
      pmVar1 = pmStack_d0;
    }
    if ((pmVar1 == (mutex *)0x0) || (local_a8 < 1)) {
      this_01 = (PcmAudioPlayer *)0x0;
    }
    else {
      this_01 = (PcmAudioPlayer *)createUrlAudioPlayer(this,&local_d8);
    }
    if (local_b8 != (__shared_weak_count *)0x0) {
      p_Var11 = local_b8 + 8;
      do {
        lVar17 = *(long *)p_Var11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var11,0x10);
        if (bVar5) {
          *(long *)p_Var11 = lVar17 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB_00e6c080;
    }
  }
  if (((byte)local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
LAB_00e6c094:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}

