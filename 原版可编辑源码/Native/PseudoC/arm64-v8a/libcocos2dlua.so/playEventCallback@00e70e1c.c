
/* cocos2d::experimental::UrlAudioPlayer::playEventCallback(SLPlayItf_ const* const*, unsigned int)
    */

void __thiscall
cocos2d::experimental::UrlAudioPlayer::playEventCallback
          (UrlAudioPlayer *this,SLPlayItf_ **param_1,uint param_2)

{
  __shared_weak_count *p_Var1;
  char *pcVar2;
  __shared_weak_count *this_00;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  pthread_t __thread2;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  pthread_t __thread1;
  undefined **local_80;
  UrlAudioPlayer *local_78;
  char *pcStack_70;
  __shared_weak_count *local_68;
  UrlAudioPlayer *local_60;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (param_2 != 1) goto LAB_00e70fa4;
  pcVar2 = *(char **)(this + 0xb8);
  this_00 = *(__shared_weak_count **)(this + 0xc0);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  __thread1 = *(pthread_t *)(this + 0xb0);
  __thread2 = pthread_self();
  if ((__thread1 == 0) || (__thread2 == 0)) {
    if (__thread2 != 0 || __thread1 != 0) goto LAB_00e70ed8;
LAB_00e70e98:
    if ((*pcVar2 == '\0') && (*(int *)(this + 0x7c) != 4)) {
      uVar7 = (**(code **)(*(long *)this + 0x78))(this);
      if ((uVar7 & 1) == 0) {
        plVar8 = *(long **)(this + 0xa0);
        *(undefined4 *)(this + 0x7c) = 5;
        if (plVar8 != (long *)0x0) {
          local_80 = (undefined **)CONCAT44(local_80._4_4_,5);
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_80);
        }
        if (**(char **)(this + 0xb8) == '\0') {
          **(char **)(this + 0xb8) = '\x01';
          if (*(long **)(this + 0x50) != (long *)0x0) {
            (**(code **)(**(long **)(this + 0x50) + 0x30))();
            *(undefined8 *)(this + 0x50) = 0;
          }
        }
        pcVar9 = *(code **)(*(long *)this + 8);
      }
      else {
        pcVar9 = *(code **)(*(long *)this + 0x30);
      }
LAB_00e70f40:
      (*pcVar9)(this);
    }
  }
  else {
    iVar6 = pthread_equal(__thread1,__thread2);
    if (iVar6 != 0) goto LAB_00e70e98;
LAB_00e70ed8:
    plVar8 = *(long **)(this + 0x18);
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_80 = &PTR_FUN_016f4048;
    local_78 = this;
    pcStack_70 = pcVar2;
    local_68 = this_00;
    local_60 = (UrlAudioPlayer *)&local_80;
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_80);
    this = local_60;
    if ((UrlAudioPlayer *)&local_80 == local_60) {
      pcVar9 = *(code **)(*(long *)local_60 + 0x20);
      goto LAB_00e70f40;
    }
    if (local_60 != (UrlAudioPlayer *)0x0) {
      pcVar9 = *(code **)(*(long *)local_60 + 0x28);
      goto LAB_00e70f40;
    }
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar10 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
    do {
      lVar10 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
LAB_00e70fa4:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

