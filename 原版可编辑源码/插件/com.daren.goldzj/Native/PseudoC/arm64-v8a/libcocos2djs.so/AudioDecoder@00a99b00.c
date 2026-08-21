
/* cocos2d::AudioDecoder::AudioDecoder() */

void __thiscall cocos2d::AudioDecoder::AudioDecoder(AudioDecoder *this)

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
  *(undefined ***)this = &PTR__AudioDecoder_01c6f548;
  *(undefined8 *)(this + 8) = 0;
  PcmData::PcmData((PcmData *)(this + 0x20));
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  Data::Data((Data *)(this + 0x58));
  *(undefined8 *)(this + 0x68) = 0;
  this_00 = operator_new(0x30);
  *(undefined8 *)(this_00 + 0x10) = 0;
  p_Var6 = this_00 + 8;
  *(long *)p_Var6 = 0;
                    /* catch() { ... } // from try @ 00a99a58 with catch @ 00a99b64 */
  *(undefined ***)this_00 = &PTR____shared_ptr_emplace_01c6f588;
                    /* catch() { ... } // from try @ 00a99a38 with catch @ 00a99b6c */
                    /* catch() { ... } // from try @ 00a99a18 with catch @ 00a99b74 */
  pvVar4 = operator_new(0x1000);
                    /* catch() { ... } // from try @ 00a99a10 with catch @ 00a99b7c */
  *(void **)(this_00 + 0x18) = pvVar4;
  *(void **)(this_00 + 0x20) = pvVar4;
  *(long *)(this_00 + 0x28) = (long)pvVar4 + 0x1000;
  do {
                    /* catch() { ... } // from try @ 00a99a00 with catch @ 00a99b84 */
                    /* catch() { ... } // from try @ 00a999e8 with catch @ 00a99b8c */
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
    if (bVar3) {
      *(long *)p_Var6 = *(long *)p_Var6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* catch() { ... } // from try @ 00a99a40 with catch @ 00a99b94 */
  this_01 = *(__shared_weak_count **)(this + 0x28);
  *(__shared_weak_count **)(this + 0x20) = this_00 + 0x18;
  *(__shared_weak_count **)(this + 0x28) = this_00;
                    /* catch() { ... } // from try @ 00a99a20 with catch @ 00a99b9c */
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
                    /* catch() { ... } // from try @ 00a99a60 with catch @ 00a99ba4 */
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

