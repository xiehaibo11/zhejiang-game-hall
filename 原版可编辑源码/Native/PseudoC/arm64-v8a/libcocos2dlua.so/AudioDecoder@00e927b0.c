
/* cocos2d::experimental::AudioDecoder::AudioDecoder() */

void __thiscall cocos2d::experimental::AudioDecoder::AudioDecoder(AudioDecoder *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  __shared_weak_count *this_00;
  void *pvVar4;
  long lVar5;
  __shared_weak_count *this_01;
  __shared_weak_count *p_Var6;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__AudioDecoder_016f4290;
  *(undefined8 *)(this + 8) = 0;
  PcmData::PcmData((PcmData *)(this + 0x20));
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  Data::Data((Data *)(this + 0x58));
  *(undefined8 *)(this + 0x68) = 0;
  this_00 = operator_new(0x30);
  *(undefined8 *)(this_00 + 0x10) = 0;
  p_Var6 = this_00 + 8;
  *(long *)p_Var6 = 0;
  *(undefined ***)this_00 = &PTR____shared_ptr_emplace_016f42d0;
  pvVar4 = operator_new(0x1000);
  *(void **)(this_00 + 0x18) = pvVar4;
  *(void **)(this_00 + 0x20) = pvVar4;
  *(long *)(this_00 + 0x28) = (long)pvVar4 + 0x1000;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
    if (bVar3) {
      *(long *)p_Var6 = *(long *)p_Var6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  this_01 = *(__shared_weak_count **)(this + 0x28);
  *(__shared_weak_count **)(this + 0x20) = this_00 + 0x18;
  *(__shared_weak_count **)(this + 0x28) = this_00;
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar5 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  do {
    lVar5 = *(long *)p_Var6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
    if (bVar3) {
      *(long *)p_Var6 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    return;
  }
  (**(code **)(*(long *)this_00 + 0x10))(this_00);
  std::__ndk1::__shared_weak_count::__release_weak(this_00);
  return;
}

