
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::experimental::UrlAudioPlayer::prepare(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int,
   std::__ndk1::shared_ptr<cocos2d::experimental::AssetFd>, int, int) */

undefined4 __thiscall
cocos2d::experimental::UrlAudioPlayer::prepare
          (UrlAudioPlayer *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          int param_2,undefined8 *param_4,int param_5,int param_6)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  __shared_weak_count *p_Var1;
  ulong uVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  char *pcVar12;
  long lVar13;
  undefined4 uVar14;
  __shared_weak_count *this_01;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  UrlAudioPlayer *local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x28);
  if (this_00 != param_1) {
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar4 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar4,uVar2);
  }
  uVar3 = *param_4;
  lVar13 = param_4[1];
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  this_01 = *(__shared_weak_count **)(this + 0x48);
  *(undefined8 *)(this + 0x40) = uVar3;
  *(long *)(this + 0x48) = lVar13;
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar13 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  uVar8 = _SL_IID_VOLUME;
  uVar3 = _SL_IID_SEEK;
  if ((param_2 == -0x7ffff844) || (param_2 == 1)) {
    local_88 = &local_b0;
    uStack_a8 = 0;
    local_b0 = 1;
    local_a0 = 1;
    if (param_2 == 1) {
      if (((byte)*this_00 & 1) == 0) {
        local_c0 = this + 0x29;
      }
      else {
        local_c0 = *(UrlAudioPlayer **)(this + 0x38);
      }
      local_90 = &local_c8;
      local_c8 = 1;
    }
    else if (param_2 == -0x7ffff844) {
      local_c0 = (UrlAudioPlayer *)(long)param_5;
      lStack_b8 = (long)param_6;
      local_90 = &local_c8;
      uStack_c4 = **(undefined4 **)(this + 0x40);
      local_c8 = 0x800007bc;
    }
    local_d8[0] = 4;
    local_68 = _SL_IID_PREFETCHSTATUS;
    uStack_60 = _SL_IID_VOLUME;
    local_e8 = local_d8;
    local_70 = _SL_IID_SEEK;
    local_d0 = *(undefined8 *)(this + 0x10);
    uStack_e0 = 0;
    local_80 = 0x100000001;
    local_78 = 1;
    iVar9 = (**(code **)(**(long **)(this + 8) + 0x10))
                      (*(long **)(this + 8),this + 0x50,&local_90,&local_e8,3,&local_70,&local_80);
    if (iVar9 == 0) {
      puVar10 = *(undefined8 **)(this + 0x50);
      iVar9 = (**(code **)*puVar10)(puVar10,0);
      if (iVar9 == 0) {
        iVar9 = (**(code **)(**(long **)(this + 0x50) + 0x18))
                          (*(long **)(this + 0x50),_SL_IID_PLAY,this + 0x58);
        if (iVar9 == 0) {
          iVar9 = (**(code **)(**(long **)(this + 0x50) + 0x18))
                            (*(long **)(this + 0x50),uVar3,this + 0x60);
          if (iVar9 == 0) {
            iVar9 = (**(code **)(**(long **)(this + 0x50) + 0x18))
                              (*(long **)(this + 0x50),uVar8,this + 0x68);
            if (iVar9 == 0) {
              iVar9 = (**(code **)(**(long **)(this + 0x58) + 0x20))
                                (*(long **)(this + 0x58),
                                 SLUrlAudioPlayerCallbackProxy::playEventCallback,this);
              if (iVar9 == 0) {
                plVar11 = *(long **)(this + 0x58);
                uVar14 = 1;
                iVar9 = (**(code **)(*plVar11 + 0x28))(plVar11,1);
                if (iVar9 == 0) {
                  *(undefined4 *)(this + 0x7c) = 1;
                  (**(code **)(*(long *)this + 0x58))(0x3f800000,this);
                  goto LAB_00e71a94;
                }
                pcVar12 = "SetCallbackEventsMask SL_PLAYEVENT_HEADATEND failed";
              }
              else {
                pcVar12 = "RegisterCallback failed";
              }
            }
            else {
              pcVar12 = "GetInterface SL_IID_VOLUME failed";
            }
          }
          else {
            pcVar12 = "GetInterface SL_IID_SEEK failed";
          }
        }
        else {
          pcVar12 = "GetInterface SL_IID_PLAY failed";
        }
      }
      else {
        pcVar12 = "Realize failed";
      }
    }
    else {
      pcVar12 = "CreateAudioPlayer failed";
    }
    __android_log_print(6,"UrlAudioPlayer",pcVar12);
  }
  else {
    __android_log_print(6,"UrlAudioPlayer","Oops, invalid locatorType: %d",param_2);
  }
  uVar14 = 0;
LAB_00e71a94:
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

