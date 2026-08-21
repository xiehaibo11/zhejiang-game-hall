
/* cocos2d::AudioDecoder::interleave() */

undefined8 __thiscall cocos2d::AudioDecoder::interleave(AudioDecoder *this)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  __shared_weak_count *this_00;
  void *pvVar6;
  __shared_weak_count *p_Var7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  __shared_weak_count *this_01;
  size_t __n;
  ulong uVar12;
  void *pvVar13;
  __shared_weak_count *p_Var14;
  uint uVar15;
  undefined1 *puVar16;
  
  if (*(int *)(this + 0x30) == 1) {
    plVar10 = *(long **)(this + 0x20);
    uVar11 = (plVar10[1] - *plVar10) * 2;
    this_00 = operator_new(0x30);
    *(undefined8 *)(this_00 + 0x10) = 0;
    p_Var7 = this_00 + 8;
    *(long *)p_Var7 = 0;
    p_Var14 = this_00 + 0x18;
    *(undefined8 *)p_Var14 = 0;
    *(undefined ***)this_00 = &PTR____shared_ptr_emplace_01c6f588;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    if (uVar11 != 0) {
      pvVar6 = operator_new(uVar11);
      *(void **)(this_00 + 0x18) = pvVar6;
      *(void **)(this_00 + 0x20) = pvVar6;
      *(void **)(this_00 + 0x28) = (void *)((long)pvVar6 + uVar11);
    }
    uVar15 = *(int *)(this + 0x38) * *(int *)(this + 0x48);
                    /* try { // try from 00a9a394 to 00b9a39b has its CatchHandler @ 00a9a71c */
    uVar1 = uVar15 + 7;
    if (-1 < (int)uVar15) {
      uVar1 = uVar15;
    }
    if (0xe < uVar15 + 7) {
      lVar8 = *plVar10;
      uVar11 = plVar10[1] - lVar8;
                    /* try { // try from 00a9a3ac to 00b9a3b3 has its CatchHandler @ 00a9a70c */
      if (uVar11 != 0) {
        uVar9 = 0;
                    /* try { // try from 00a9a3b4 to 00b9a72f has its CatchHandler @ 00a9a310 */
        do {
          if (uVar11 <= (uVar9 | 1)) break;
          uVar2 = *(undefined1 *)(lVar8 + uVar9);
          uVar3 = *(undefined1 *)(lVar8 + (uVar9 | 1));
          uVar15 = 0;
          do {
            puVar16 = *(undefined1 **)(this_00 + 0x20);
            if (puVar16 == *(undefined1 **)(this_00 + 0x28)) {
              pvVar6 = *(void **)p_Var14;
              __n = (long)puVar16 - (long)pvVar6;
              uVar11 = __n + 1;
              if ((long)uVar11 < 0) goto LAB_00a9a54c;
              uVar12 = (long)*(undefined1 **)(this_00 + 0x28) - (long)pvVar6;
              if (uVar12 < 0x3fffffffffffffff) {
                uVar12 = uVar12 * 2;
                if (uVar11 <= uVar12) {
                  uVar11 = uVar12;
                }
                if (uVar11 != 0) goto LAB_00a9a434;
                pvVar13 = (void *)0x0;
              }
              else {
                uVar11 = 0x7fffffffffffffff;
LAB_00a9a434:
                pvVar13 = operator_new(uVar11);
              }
              puVar16 = (undefined1 *)((long)pvVar13 + __n) + 1;
              *(undefined1 *)((long)pvVar13 + __n) = uVar2;
              if (0 < (long)__n) {
                memcpy(pvVar13,pvVar6,__n);
              }
              *(void **)(this_00 + 0x18) = pvVar13;
              *(undefined1 **)(this_00 + 0x20) = puVar16;
              *(ulong *)(this_00 + 0x28) = (long)pvVar13 + uVar11;
              if (pvVar6 != (void *)0x0) {
                operator_delete(pvVar6);
                puVar16 = *(undefined1 **)(this_00 + 0x20);
              }
            }
            else {
              *puVar16 = uVar2;
              puVar16 = (undefined1 *)(*(long *)(this_00 + 0x20) + 1);
              *(undefined1 **)(this_00 + 0x20) = puVar16;
            }
            if (puVar16 == *(undefined1 **)(this_00 + 0x28)) {
              pvVar6 = *(void **)p_Var14;
              uVar12 = (long)*(undefined1 **)(this_00 + 0x28) - (long)pvVar6;
              uVar11 = uVar12 + 1;
              if ((long)uVar11 < 0) goto LAB_00a9a54c;
              if (uVar12 < 0x3fffffffffffffff) {
                if (uVar11 <= uVar12 * 2) {
                  uVar11 = uVar12 * 2;
                }
                if (uVar11 != 0) goto LAB_00a9a4d4;
                pvVar13 = (void *)0x0;
              }
              else {
                uVar11 = 0x7fffffffffffffff;
LAB_00a9a4d4:
                pvVar13 = operator_new(uVar11);
              }
              *(undefined1 *)((long)pvVar13 + uVar12) = uVar3;
              if (0 < (long)uVar12) {
                memcpy(pvVar13,pvVar6,uVar12);
              }
              *(void **)(this_00 + 0x18) = pvVar13;
              *(undefined1 **)(this_00 + 0x20) = (undefined1 *)((long)pvVar13 + uVar12) + 1;
              *(ulong *)(this_00 + 0x28) = (long)pvVar13 + uVar11;
              if (pvVar6 != (void *)0x0) {
                operator_delete(pvVar6);
              }
            }
            else {
              *puVar16 = uVar3;
              *(long *)(this_00 + 0x20) = *(long *)(this_00 + 0x20) + 1;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < 2);
          uVar9 = uVar9 + 2;
          if ((ulong)((long)((ulong)uVar1 << 0x20) >> 0x23) <= uVar9) goto LAB_00a9a568;
          lVar8 = **(long **)(this + 0x20);
          uVar11 = (*(long **)(this + 0x20))[1] - lVar8;
        } while (uVar9 < uVar11);
      }
LAB_00a9a54c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_00a9a568:
    *(undefined4 *)(this + 0x30) = 2;
    *(undefined4 *)(this + 0x40) = 3;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
      if (bVar5) {
        *(long *)p_Var7 = *(long *)p_Var7 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    this_01 = *(__shared_weak_count **)(this + 0x28);
    *(__shared_weak_count **)(this + 0x20) = p_Var14;
    *(__shared_weak_count **)(this + 0x28) = this_00;
    if (this_01 != (__shared_weak_count *)0x0) {
      p_Var14 = this_01 + 8;
      do {
        lVar8 = *(long *)p_Var14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var14,0x10);
        if (bVar5) {
          *(long *)p_Var14 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*(long *)this_01 + 0x10))(this_01);
        std::__ndk1::__shared_weak_count::__release_weak(this_01);
      }
    }
    do {
      lVar8 = *(long *)p_Var7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var7,0x10);
      if (bVar5) {
        *(long *)p_Var7 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  else {
    if (*(int *)(this + 0x30) != 2) {
      __android_log_print(6,"AudioDecoder",
                          "Audio channel count (%d) is wrong, interleave only supports converting mono to stereo!"
                         );
      return 0;
    }
                    /* try { // try from 00a9a310 to 00b9a393 has its CatchHandler @ 00a9a310
                       catch() { ... } // from try @ 00a9a310 with catch @ 00a9a310
                       catch() { ... } // from try @ 00a9a3b4 with catch @ 00a9a310 */
    __android_log_print(4,"AudioDecoder","Audio channel count is 2, no need to interleave");
  }
  return 1;
}

