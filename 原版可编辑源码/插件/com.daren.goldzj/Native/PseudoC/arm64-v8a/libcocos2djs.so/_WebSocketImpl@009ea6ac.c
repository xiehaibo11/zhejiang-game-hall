
/* WARNING: Type propagation algorithm not settling */
/* WebSocketImpl::~WebSocketImpl() */

void __thiscall WebSocketImpl::~WebSocketImpl(WebSocketImpl *this)

{
  WsThreadHelper *pWVar1;
  __shared_weak_count *p_Var2;
  long *plVar3;
  WebSocketImpl WVar4;
  char cVar5;
  bool bVar6;
  size_t __n;
  long *plVar7;
  void *pvVar8;
  byte *pbVar9;
  WebSocketImpl *pWVar10;
  long lVar11;
  long *__dest;
  WsThreadHelper *this_00;
  byte *pbVar12;
  __shared_weak_count *this_01;
  long *plVar13;
  byte *pbVar14;
  
  std::__ndk1::mutex::lock((mutex *)&DAT_01d387d0);
  plVar7 = DAT_01d38880;
  if (DAT_01d38880 == (long *)0x0) {
LAB_009ea754:
    this_00 = DAT_01d38808;
    pWVar1 = DAT_01d38808 + 0x30;
    DAT_01d38808[0x38] = (WsThreadHelper)0x1;
    if (*(long *)*(thread **)pWVar1 != 0) {
      std::__ndk1::thread::join(*(thread **)pWVar1);
      this_00 = DAT_01d38808;
    }
    if (this_00 != (WsThreadHelper *)0x0) {
      WsThreadHelper::~WsThreadHelper(this_00);
      operator_delete(this_00);
    }
    DAT_01d38808 = (WsThreadHelper *)0x0;
  }
  else {
    __dest = (long *)*DAT_01d38880;
    plVar3 = (long *)DAT_01d38880[1];
    plVar13 = DAT_01d38880;
    if (__dest != plVar3) {
      pWVar10 = (WebSocketImpl *)*__dest;
      while (pWVar10 != this) {
        __dest = __dest + 1;
        if (plVar3 == __dest) goto LAB_009ea744;
        pWVar10 = (WebSocketImpl *)*__dest;
      }
    }
    if (__dest != plVar3) {
      __n = (long)plVar3 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      plVar13 = DAT_01d38880;
      plVar7[1] = (long)(__dest + ((long)__n >> 3));
    }
LAB_009ea744:
    if ((plVar13 == (long *)0x0) || (*plVar13 == plVar13[1])) goto LAB_009ea754;
  }
  **(undefined4 **)(this + 0xa8) = 1;
  std::__ndk1::mutex::unlock((mutex *)&DAT_01d387d0);
  if (((byte)this[0x138] & 1) != 0) {
    operator_delete(*(void **)(this + 0x148));
  }
  pbVar12 = *(byte **)(this + 0x118);
  if (pbVar12 != (byte *)0x0) {
    pbVar9 = *(byte **)(this + 0x120);
    pbVar14 = pbVar12;
    if (pbVar9 != pbVar12) {
      do {
        pbVar14 = pbVar9 + -0x18;
        if ((*pbVar14 & 1) != 0) {
          operator_delete(*(void **)(pbVar9 + -8));
        }
        pbVar9 = pbVar14;
      } while (pbVar12 != pbVar14);
      pbVar14 = *(byte **)(this + 0x118);
    }
    *(byte **)(this + 0x120) = pbVar12;
    operator_delete(pbVar14);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0xe8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xc0));
  this_01 = *(__shared_weak_count **)(this + 0xb0);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var2 = this_01 + 8;
    do {
      lVar11 = *(long *)p_Var2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar6) {
        *(long *)p_Var2 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
      WVar4 = this[0x90];
      goto joined_r0x009ea834;
    }
  }
  WVar4 = this[0x90];
joined_r0x009ea834:
  if (((byte)WVar4 & 1) == 0) {
    WVar4 = this[0x78];
  }
  else {
    operator_delete(*(void **)(this + 0xa0));
    WVar4 = this[0x78];
  }
  if (((byte)WVar4 & 1) == 0) {
    pvVar8 = *(void **)(this + 0x50);
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    pvVar8 = *(void **)(this + 0x50);
  }
  if (pvVar8 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar8;
    operator_delete(pvVar8);
  }
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xc));
  return;
}

