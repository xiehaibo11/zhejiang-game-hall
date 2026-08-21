
/* cocos2d::Application::Application(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, int) */

void __thiscall
cocos2d::Application::Application(Application *this,basic_string *param_1,int param_2,int param_3)

{
  Scheduler *pSVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  __shared_weak_count *p_Var6;
  __shared_weak_count *p_Var7;
  RenderTexture *this_00;
  code *pcVar8;
  long lVar9;
  undefined **local_90;
  undefined8 uStack_88;
  long *local_70;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  this[0x28] = (Application)0x1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__Application_01c66348;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0x3c;
  this[0x33] = (Application)0x0;
  *(undefined2 *)(this + 0x31) = 0;
  *(undefined8 *)(this + 0x29) = 0;
  _instance = this;
  Configuration::getInstance();
  p_Var7 = operator_new(0x70);
  *(undefined8 *)(p_Var7 + 0x10) = 0;
  pSVar1 = (Scheduler *)(p_Var7 + 0x18);
  *(undefined ***)p_Var7 = &PTR____shared_ptr_emplace_01c66498;
  *(undefined8 *)(p_Var7 + 8) = 0;
  Scheduler::Scheduler(pSVar1);
  p_Var6 = DAT_01d35b10;
  _scheduler = pSVar1;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var2 = DAT_01d35b10 + 8;
    DAT_01d35b10 = p_Var7;
    do {
      lVar9 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    p_Var7 = DAT_01d35b10;
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
      p_Var7 = DAT_01d35b10;
    }
  }
  DAT_01d35b10 = p_Var7;
  eglGetProcAddress("glGenVertexArraysOES");
  eglGetProcAddress("glBindVertexArrayOES");
  eglGetProcAddress("glDeleteVertexArraysOES");
  this_00 = operator_new(0x70);
  RenderTexture::RenderTexture(this_00,param_2,param_3);
  *(RenderTexture **)(this + 0x18) = this_00;
  *(float *)(this + 0x2c) = (float)param_2;
  *(float *)(this + 0x30) = (float)param_3;
  p_Var6 = DAT_01d35b10;
  pSVar1 = _scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var7 = DAT_01d35b10 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
      if (bVar4) {
        *(long *)p_Var7 = *(long *)p_Var7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_88 = CONCAT44(param_3,param_2);
  local_90 = &PTR_FUN_01c66398;
  local_70 = (long *)&local_90;
  Scheduler::performFunctionInCocosThread(pSVar1,(function *)&local_90);
  if (&local_90 == (undefined ***)local_70) {
    pcVar8 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0085c358;
    pcVar8 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar8)();
LAB_0085c358:
  if (p_Var6 != (__shared_weak_count *)0x0) {
    p_Var7 = p_Var6 + 8;
    do {
      lVar9 = *(long *)p_Var7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
      if (bVar4) {
        *(long *)p_Var7 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var6);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

