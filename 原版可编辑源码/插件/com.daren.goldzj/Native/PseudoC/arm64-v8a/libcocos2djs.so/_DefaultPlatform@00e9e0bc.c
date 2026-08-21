
/* v8::platform::DefaultPlatform::~DefaultPlatform() */

void __thiscall v8::platform::DefaultPlatform::~DefaultPlatform(DefaultPlatform *this)

{
  Mutex *this_00;
  __shared_weak_count *p_Var1;
  DefaultForegroundTaskRunner *this_01;
  char cVar2;
  bool bVar3;
  long *plVar4;
  DefaultPlatform *pDVar5;
  long lVar6;
  __shared_weak_count *p_Var7;
  DefaultPlatform *pDVar8;
  
  this_00 = (Mutex *)(this + 8);
  *(undefined ***)this = &PTR__DefaultPlatform_01c98060;
  base::Mutex::Lock(this_00);
  if (*(DefaultWorkerThreadsTaskRunner **)(this + 0x38) != (DefaultWorkerThreadsTaskRunner *)0x0) {
    DefaultWorkerThreadsTaskRunner::Terminate(*(DefaultWorkerThreadsTaskRunner **)(this + 0x38));
  }
  pDVar8 = *(DefaultPlatform **)(this + 0x48);
  do {
    while( true ) {
      if (pDVar8 == this + 0x50) {
        base::Mutex::Unlock(this_00);
        plVar4 = *(long **)(this + 0x68);
        *(undefined8 *)(this + 0x68) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        plVar4 = *(long **)(this + 0x60);
        *(undefined8 *)(this + 0x60) = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        std::__ndk1::
        __tree<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::__map_value_compare<v8::Isolate*,std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::less<v8::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>>>
        ::destroy((__tree<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::__map_value_compare<v8::Isolate*,std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>,std::__ndk1::less<v8::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<v8::Isolate*,std::__ndk1::shared_ptr<v8::platform::DefaultForegroundTaskRunner>>>>
                   *)(this + 0x48),*(__tree_node **)(this + 0x50));
        p_Var7 = *(__shared_weak_count **)(this + 0x40);
        if (p_Var7 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var7 + 8;
          do {
            lVar6 = *(long *)p_Var1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar3) {
              *(long *)p_Var1 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
          }
        }
        base::Mutex::~Mutex(this_00);
        return;
      }
      this_01 = *(DefaultForegroundTaskRunner **)(pDVar8 + 0x28);
      p_Var7 = *(__shared_weak_count **)(pDVar8 + 0x30);
      if (p_Var7 == (__shared_weak_count *)0x0) break;
      p_Var1 = p_Var7 + 8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      DefaultForegroundTaskRunner::Terminate(this_01);
      do {
        lVar6 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar3) {
          *(long *)p_Var1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
        pDVar5 = *(DefaultPlatform **)(pDVar8 + 8);
        goto joined_r0x00e9e16c;
      }
      pDVar5 = *(DefaultPlatform **)(pDVar8 + 8);
      if (*(DefaultPlatform **)(pDVar8 + 8) == (DefaultPlatform *)0x0) goto LAB_00e9e1a4;
LAB_00e9e194:
      do {
        pDVar8 = pDVar5;
        pDVar5 = *(DefaultPlatform **)pDVar8;
      } while (*(DefaultPlatform **)pDVar8 != (DefaultPlatform *)0x0);
    }
    DefaultForegroundTaskRunner::Terminate(this_01);
    pDVar5 = *(DefaultPlatform **)(pDVar8 + 8);
joined_r0x00e9e16c:
    if (pDVar5 != (DefaultPlatform *)0x0) goto LAB_00e9e194;
LAB_00e9e1a4:
    pDVar5 = pDVar8 + 0x10;
    bVar3 = *(DefaultPlatform **)*(DefaultPlatform **)pDVar5 != pDVar8;
    pDVar8 = *(DefaultPlatform **)pDVar5;
    if (bVar3) {
      do {
        lVar6 = *(long *)pDVar5;
        pDVar5 = (DefaultPlatform *)(lVar6 + 0x10);
        pDVar8 = *(DefaultPlatform **)pDVar5;
      } while (*(long *)pDVar8 != lVar6);
    }
  } while( true );
}

