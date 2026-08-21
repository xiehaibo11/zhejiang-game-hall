
/* cocos2d::network::WebSocket::~WebSocket() */

void __thiscall cocos2d::network::WebSocket::~WebSocket(WebSocket *this)

{
  undefined8 *puVar1;
  WsThreadHelper *pWVar2;
  __shared_weak_count *p_Var3;
  undefined8 *puVar4;
  WebSocket WVar5;
  char cVar6;
  bool bVar7;
  size_t __n;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  undefined8 *puVar11;
  WsThreadHelper *this_00;
  __shared_weak_count *this_01;
  
  *(undefined ***)this = &PTR__WebSocket_016f47e0;
  std::__ndk1::mutex::lock((mutex *)&DAT_0178f4c4);
  plVar8 = DAT_0178f570;
  if (DAT_0178f570 == (long *)0x0) {
LAB_00e9e2b0:
    this_00 = DAT_0178f4f8;
    pWVar2 = DAT_0178f4f8 + 0x30;
    DAT_0178f4f8[0x38] = (WsThreadHelper)0x1;
    if (*(long *)*(thread **)pWVar2 != 0) {
      std::__ndk1::thread::join(*(thread **)pWVar2);
      this_00 = DAT_0178f4f8;
    }
    if (this_00 != (WsThreadHelper *)0x0) {
      WsThreadHelper::~WsThreadHelper(this_00);
      operator_delete(this_00);
    }
    DAT_0178f4f8 = (WsThreadHelper *)0x0;
  }
  else {
    puVar11 = (undefined8 *)*DAT_0178f570;
    puVar4 = (undefined8 *)DAT_0178f570[1];
    if ((puVar11 != puVar4) && ((WebSocket *)*puVar11 != this)) {
      do {
        if (puVar4 + -1 == puVar11) goto LAB_00e9e2a0;
        puVar1 = puVar11 + 1;
        puVar11 = puVar11 + 1;
      } while ((WebSocket *)*puVar1 != this);
    }
    if (puVar11 != puVar4) {
      __n = (long)puVar4 - (long)(puVar11 + 1);
      if (__n != 0) {
        memmove(puVar11,puVar11 + 1,__n);
      }
      plVar8[1] = (long)(puVar11 + ((long)__n >> 3));
    }
LAB_00e9e2a0:
    if ((DAT_0178f570 == (long *)0x0) || (*DAT_0178f570 == DAT_0178f570[1])) goto LAB_00e9e2b0;
  }
  puVar4 = *(undefined8 **)(this + 0x120);
  for (puVar11 = *(undefined8 **)(this + 0x118); puVar11 != puVar4; puVar11 = puVar11 + 1) {
    free((void *)*puVar11);
  }
  free(*(void **)(this + 0x70));
  lVar9 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar9 + 0xb0),*(EventListener **)(this + 0x150));
  **(undefined4 **)(this + 0xa8) = 1;
  std::__ndk1::mutex::unlock((mutex *)&DAT_0178f4c4);
  if (((byte)this[0x138] & 1) != 0) {
    operator_delete(*(void **)(this + 0x148));
  }
  pvVar10 = *(void **)(this + 0x118);
  if (pvVar10 != (void *)0x0) {
    *(void **)(this + 0x120) = pvVar10;
    operator_delete(pvVar10);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0xe8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xc0));
  this_01 = *(__shared_weak_count **)(this + 0xb0);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var3 = this_01 + 8;
    do {
      lVar9 = *(long *)p_Var3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var3,0x10);
      if (bVar7) {
        *(long *)p_Var3 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
      WVar5 = this[0x90];
      goto joined_r0x00e9e38c;
    }
  }
  WVar5 = this[0x90];
joined_r0x00e9e38c:
  if (((byte)WVar5 & 1) == 0) {
    WVar5 = this[0x78];
  }
  else {
    operator_delete(*(void **)(this + 0xa0));
    WVar5 = this[0x78];
  }
  if (((byte)WVar5 & 1) == 0) {
    pvVar10 = *(void **)(this + 0x50);
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    pvVar10 = *(void **)(this + 0x50);
  }
  if (pvVar10 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar10;
    operator_delete(pvVar10);
  }
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 8));
  return;
}

