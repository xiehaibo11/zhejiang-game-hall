
/* cocos2d::experimental::AudioDecoder::interleave() */

undefined8 __thiscall cocos2d::experimental::AudioDecoder::interleave(AudioDecoder *this)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  __shared_weak_count *this_00;
  void *pvVar8;
  __shared_weak_count *p_Var9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  __shared_weak_count *this_01;
  size_t __n;
  ulong uVar14;
  void *pvVar15;
  __shared_weak_count *p_Var16;
  int iVar17;
  undefined1 *puVar18;
  
  if (*(int *)(this + 0x30) == 1) {
    plVar12 = *(long **)(this + 0x20);
    uVar13 = (plVar12[1] - *plVar12) * 2;
    this_00 = operator_new(0x30);
    *(undefined8 *)(this_00 + 0x10) = 0;
    p_Var9 = this_00 + 8;
    *(long *)p_Var9 = 0;
    p_Var16 = this_00 + 0x18;
    *(undefined8 *)p_Var16 = 0;
    *(undefined ***)this_00 = &PTR____shared_ptr_emplace_016f42d0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    if (uVar13 != 0) {
      pvVar8 = operator_new(uVar13);
      *(void **)(this_00 + 0x18) = pvVar8;
      *(void **)(this_00 + 0x20) = pvVar8;
      *(void **)(this_00 + 0x28) = (void *)((long)pvVar8 + uVar13);
    }
    uVar5 = *(int *)(this + 0x38) * *(int *)(this + 0x48);
    uVar1 = uVar5 + 7;
    if (-1 < (int)uVar5) {
      uVar1 = uVar5;
    }
    if (0xe < uVar5 + 7) {
      lVar10 = *plVar12;
      uVar13 = plVar12[1] - lVar10;
      if (uVar13 != 0) {
        uVar11 = 0;
        do {
          if (uVar13 <= (uVar11 | 1)) break;
          uVar3 = *(undefined1 *)(lVar10 + uVar11);
          uVar4 = *(undefined1 *)(lVar10 + (uVar11 | 1));
          iVar17 = 2;
LAB_00e930a4:
          do {
            puVar2 = *(undefined1 **)(this_00 + 0x20);
            if (puVar2 == *(undefined1 **)(this_00 + 0x28)) {
              pvVar8 = *(void **)p_Var16;
              __n = (long)puVar2 - (long)pvVar8;
              uVar13 = __n + 1;
              if ((long)uVar13 < 0) goto LAB_00e931f8;
              uVar14 = (long)*(undefined1 **)(this_00 + 0x28) - (long)pvVar8;
              if (uVar14 < 0x3fffffffffffffff) {
                uVar14 = uVar14 * 2;
                if (uVar13 <= uVar14) {
                  uVar13 = uVar14;
                }
                if (uVar13 != 0) goto LAB_00e930f8;
                pvVar15 = (void *)0x0;
              }
              else {
                uVar13 = 0x7fffffffffffffff;
LAB_00e930f8:
                pvVar15 = operator_new(uVar13);
              }
              puVar18 = (undefined1 *)((long)pvVar15 + __n) + 1;
              *(undefined1 *)((long)pvVar15 + __n) = uVar3;
              if (0 < (long)__n) {
                memcpy(pvVar15,pvVar8,__n);
              }
              *(void **)(this_00 + 0x18) = pvVar15;
              *(undefined1 **)(this_00 + 0x20) = puVar18;
              *(ulong *)(this_00 + 0x28) = (long)pvVar15 + uVar13;
              if (pvVar8 != (void *)0x0) {
                operator_delete(pvVar8);
                puVar18 = *(undefined1 **)(this_00 + 0x20);
              }
            }
            else {
              puVar18 = puVar2 + 1;
              *puVar2 = uVar3;
              *(undefined1 **)(this_00 + 0x20) = puVar18;
            }
            if (puVar18 != *(undefined1 **)(this_00 + 0x28)) {
              *puVar18 = uVar4;
              *(undefined1 **)(this_00 + 0x20) = puVar18 + 1;
LAB_00e9309c:
              iVar17 = iVar17 + -1;
              if (iVar17 == 0) break;
              goto LAB_00e930a4;
            }
            pvVar8 = *(void **)p_Var16;
            uVar14 = (long)*(undefined1 **)(this_00 + 0x28) - (long)pvVar8;
            uVar13 = uVar14 + 1;
            if ((long)uVar13 < 0) goto LAB_00e931f8;
            if (uVar14 < 0x3fffffffffffffff) {
              if (uVar13 <= uVar14 * 2) {
                uVar13 = uVar14 * 2;
              }
              if (uVar13 != 0) goto LAB_00e93184;
              pvVar15 = (void *)0x0;
            }
            else {
              uVar13 = 0x7fffffffffffffff;
LAB_00e93184:
              pvVar15 = operator_new(uVar13);
            }
            *(undefined1 *)((long)pvVar15 + uVar14) = uVar4;
            if (0 < (long)uVar14) {
              memcpy(pvVar15,pvVar8,uVar14);
            }
            *(void **)(this_00 + 0x18) = pvVar15;
            *(undefined1 **)(this_00 + 0x20) = (undefined1 *)((long)pvVar15 + uVar14) + 1;
            *(ulong *)(this_00 + 0x28) = (long)pvVar15 + uVar13;
            if (pvVar8 == (void *)0x0) goto LAB_00e9309c;
            operator_delete(pvVar8);
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          uVar11 = uVar11 + 2;
          if ((ulong)((long)((ulong)uVar1 << 0x20) >> 0x23) <= uVar11) goto LAB_00e93214;
          lVar10 = **(long **)(this + 0x20);
          uVar13 = (*(long **)(this + 0x20))[1] - lVar10;
        } while (uVar11 < uVar13);
      }
LAB_00e931f8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_00e93214:
    *(undefined4 *)(this + 0x30) = 2;
    *(undefined4 *)(this + 0x40) = 3;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
      if (bVar7) {
        *(long *)p_Var9 = *(long *)p_Var9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    this_01 = *(__shared_weak_count **)(this + 0x28);
    *(__shared_weak_count **)(this + 0x20) = p_Var16;
    *(__shared_weak_count **)(this + 0x28) = this_00;
    if (this_01 != (__shared_weak_count *)0x0) {
      p_Var16 = this_01 + 8;
      do {
        lVar10 = *(long *)p_Var16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(p_Var16,0x10);
        if (bVar7) {
          *(long *)p_Var16 = lVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)this_01 + 0x10))(this_01);
        std::__ndk1::__shared_weak_count::__release_weak(this_01);
      }
    }
    do {
      lVar10 = *(long *)p_Var9;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var9,0x10);
      if (bVar7) {
        *(long *)p_Var9 = lVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar10 == 0) {
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
    __android_log_print(4,"AudioDecoder","Audio channel count is 2, no need to interleave");
  }
  return 1;
}

