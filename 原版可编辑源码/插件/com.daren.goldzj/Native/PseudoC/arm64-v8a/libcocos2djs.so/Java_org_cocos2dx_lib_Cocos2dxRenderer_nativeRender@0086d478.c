
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeRender(void)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  Scheduler *pSVar7;
  __shared_weak_count *p_Var8;
  int iVar9;
  ScriptEngine *pSVar10;
  ulong uVar11;
  PoolManager *pPVar12;
  AutoreleasePool *pAVar13;
  long lVar14;
  basic_string local_78;
  undefined6 uStack_77;
  undefined2 local_71;
  undefined6 uStack_6f;
  undefined1 local_69;
  void *local_68;
  ulong local_60 [2];
  char *local_50;
  long local_48;
  
  p_Var8 = DAT_01d35b10;
  pSVar7 = cocos2d::Application::_scheduler;
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  if (DAT_01d35b48 == '\x01') {
    if (DAT_01d35b40 != (long *)0x0) {
      (**(code **)(*DAT_01d35b40 + 8))();
    }
    DAT_01d35b40 = (long *)0x0;
    local_50 = operator_new(0x20);
    builtin_strncpy(local_50,"org/cocos2dx/lib/Cocos2dxHelper",0x20);
    local_78 = (basic_string)0x1c;
    local_68 = (void *)0x0;
    local_60[1] = 0x1f;
    local_60[0] = 0x21;
    uStack_6f = 0x6e6f69746163;
    uStack_77 = 0x707041646e65;
    local_71 = 0x696c;
    local_69 = 0;
    cocos2d::JniHelper::callStaticVoidMethod<>((basic_string *)local_60,&local_78);
    if (((byte)local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  else {
    if ((DAT_01d35b49 & 1) == 0) {
      if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
        p_Var1 = DAT_01d35b10 + 8;
        do {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      cocos2d::Scheduler::removeAllFunctionsToBePerformedInCocosThread(pSVar7);
      cocos2d::Scheduler::unscheduleAll(pSVar7);
      pSVar10 = (ScriptEngine *)se::ScriptEngine::getInstance();
      se::ScriptEngine::cleanup(pSVar10);
      pPVar12 = (PoolManager *)cocos2d::PoolManager::getInstance();
      pAVar13 = (AutoreleasePool *)cocos2d::PoolManager::getCurrentPool(pPVar12);
      cocos2d::AutoreleasePool::clear(pAVar13);
      cocos2d::ccInvalidateStateCache();
      pSVar10 = (ScriptEngine *)se::ScriptEngine::getInstance();
      se::ScriptEngine::addRegisterCallback(pSVar10,FUN_0086d368);
      cocos2d::EventDispatcher::init();
      uVar11 = (**(code **)(*DAT_01d35b40 + 0x10))();
      if ((uVar11 & 1) == 0) {
        DAT_01d35b48 = '\x01';
        if (p_Var8 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var8 + 8;
          do {
            lVar14 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar4) {
              *(long *)p_Var1 = lVar14 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar14 == 0) {
            (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
          }
        }
        goto LAB_0086d7a8;
      }
      DAT_01d35b49 = 1;
      if (p_Var8 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var8 + 8;
        do {
          lVar14 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar14 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
        }
      }
    }
    if (((DAT_01d35b50 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_01d35b50), iVar9 != 0)) {
      DAT_01d35b78 = 0;
      __cxa_guard_release(&DAT_01d35b50);
    }
    if (((DAT_01d35b58 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_01d35b58), iVar9 != 0)) {
      __cxa_guard_release(&DAT_01d35b58);
    }
    cVar2 = *(char *)((long)DAT_01d35b40 + 0x2b);
    if (cVar2 != '\0') {
      cocos2d::RenderTexture::prepare((RenderTexture *)DAT_01d35b40[3]);
    }
    p_Var8 = DAT_01d35b10;
    pSVar7 = cocos2d::Application::_scheduler;
    if (DAT_01d35b10 == (__shared_weak_count *)0x0) {
      cocos2d::Scheduler::update(cocos2d::Application::_scheduler,DAT_01d35b60);
    }
    else {
      p_Var1 = DAT_01d35b10 + 8;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      cocos2d::Scheduler::update(pSVar7,DAT_01d35b60);
      do {
        lVar14 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
      }
    }
    cocos2d::EventDispatcher::dispatchTickEvent(DAT_01d35b60);
    if (cVar2 != '\0') {
      cocos2d::RenderTexture::draw((RenderTexture *)DAT_01d35b40[3]);
    }
    pPVar12 = (PoolManager *)cocos2d::PoolManager::getInstance();
    pAVar13 = (AutoreleasePool *)cocos2d::PoolManager::getCurrentPool(pPVar12);
    cocos2d::AutoreleasePool::clear(pAVar13);
    lVar14 = std::__ndk1::chrono::steady_clock::now();
    DAT_01d35b60 = (float)((lVar14 - DAT_01d35b78) / 1000) / 1e+06;
    DAT_01d35b78 = std::__ndk1::chrono::steady_clock::now();
    if (DAT_01d35b70 == '\x01') {
      DAT_01d35b64 = DAT_01d35b60 + DAT_01d35b64;
      DAT_01d35b6c = DAT_01d35b6c + 1;
      DAT_01d35b68 = DAT_01d35b68 + __jsbInvocationCount;
      if (1.0 < DAT_01d35b64) {
        uVar5 = 0;
        if (DAT_01d35b6c != 0) {
          uVar5 = DAT_01d35b68 / DAT_01d35b6c;
        }
        DAT_01d35b64 = 0.0;
        setJSBInvocationCountJNI(uVar5);
        DAT_01d35b68 = 0;
        DAT_01d35b6c = 0;
      }
    }
    __jsbInvocationCount = 0;
  }
LAB_0086d7a8:
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

