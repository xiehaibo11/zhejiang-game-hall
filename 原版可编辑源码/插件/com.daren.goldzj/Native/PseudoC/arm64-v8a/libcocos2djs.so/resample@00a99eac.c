
/* cocos2d::AudioDecoder::resample() */

undefined8 __thiscall cocos2d::AudioDecoder::resample(AudioDecoder *this)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  __shared_weak_count *p_Var4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  void *__s;
  long *plVar14;
  uint *puVar15;
  void *__ptr;
  int *piVar16;
  __shared_weak_count *this_00;
  undefined2 *puVar17;
  void *pvVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined2 uVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined2 *puVar27;
  int *piVar28;
  ulong uVar29;
  size_t __size;
  __shared_weak_count *this_01;
  long lVar30;
  vector<char,std::__ndk1::allocator<char>> *pvVar31;
  uint uVar32;
  __shared_weak_count *p_Var33;
  PcmBufferProvider aPStack_c8 [48];
  undefined8 *local_98 [2];
  uint local_88;
  int local_84;
  int local_70;
  long local_68;
  
                    /* try { // try from 00a99ebc to 00b99ec7 has its CatchHandler @ 00a99f50 */
                    /* try { // try from 00a99ec8 to 00b99f73 has its CatchHandler @ 00a99d98 */
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  if (*(int *)(this + 0x34) == *(int *)(this + 0x50)) {
    __android_log_print(4,"AudioDecoder",
                        "No need to resample since the sample rate (%d) of the decoded pcm data is the same as the device output sample rate"
                       );
  }
  else {
    PcmData::PcmData((PcmData *)local_98,(PcmData *)(this + 0x20));
    PcmBufferProvider::PcmBufferProvider(aPStack_c8);
    uVar19 = (ulong)local_70;
    uVar12 = 0;
    if (uVar19 != 0) {
      uVar12 = (ulong)(local_98[0][1] - (long)*local_98[0]) / uVar19;
    }
    PcmBufferProvider::init(aPStack_c8,(void *)*local_98[0],uVar19,uVar12);
    iVar7 = *(int *)(this + 0x50);
    uVar12 = 0;
    if ((long)local_84 != 0) {
      uVar12 = ((long)local_70 * (long)iVar7) / (long)local_84;
    }
                    /* catch() { ... } // from try @ 00a99ebc with catch @ 00a99f50 */
    __s = malloc(uVar12 << 3);
                    /* catch() { ... } // from try @ 00a99e54 with catch @ 00a99f60 */
    plVar14 = (long *)AudioResampler::create(1,local_88,iVar7,2);
    (**(code **)(*plVar14 + 0x18))(plVar14,local_84);
    (**(code **)(*plVar14 + 0x20))(0x3f800000,0x3f800000,plVar14);
    memset(__s,0,uVar12 << 3);
    puVar15 = operator_new(4);
    uVar32 = (uint)uVar12;
    *puVar15 = uVar32;
    if (uVar12 != 0) {
      uVar19 = 0;
      uVar24 = uVar12 & 0xffffffff;
      while( true ) {
        iVar23 = (int)uVar24;
        uVar24 = uVar12 - uVar19;
        if ((ulong)(long)iVar23 <= uVar12 - uVar19 && iVar23 != 0) {
          uVar24 = (long)iVar23;
        }
        (**(code **)(*plVar14 + 0x38))(plVar14,(void *)((long)__s + uVar19 * 8),uVar24,aPStack_c8);
        uVar19 = uVar24 + uVar19;
        if (uVar12 <= uVar19) break;
        uVar24 = (ulong)*puVar15;
      }
    }
    (**(code **)(*plVar14 + 0x40))(plVar14);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 8))(plVar14);
    }
    lVar30 = (long)(int)local_88;
    __size = uVar12 * lVar30 * 2;
    __ptr = malloc(__size);
    if (uVar12 != 0) {
      uVar24 = (ulong)local_88;
      lVar25 = 0;
      lVar26 = 0;
      uVar19 = 0;
      puVar27 = (undefined2 *)((long)__ptr + 2);
      piVar28 = (int *)((long)__s + 4);
      uVar29 = uVar24 & 0xfffffffe;
      do {
        if (0 < (int)local_88) {
          piVar16 = piVar28;
          puVar17 = puVar27;
          uVar20 = uVar29;
          if (local_88 == 1) {
            uVar20 = 0;
          }
          else {
            do {
              piVar1 = piVar16 + -1;
              iVar6 = *piVar16;
              piVar16 = piVar16 + 2;
              uVar3 = *piVar1 + 0x7ff;
              uVar2 = iVar6 + 0x7ff;
              uVar8 = uVar3 >> 0xc;
              uVar9 = uVar2 >> 0xc;
              iVar23 = *piVar1 + 0x800 >> 0xc;
              if (0x7ffe < uVar8) {
                uVar8 = 0x7fff;
              }
              iVar6 = iVar6 + 0x800 >> 0xc;
              if (0x7ffe < uVar9) {
                uVar9 = 0x7fff;
              }
              if (iVar23 < -0x7fff) {
                iVar23 = -0x8000;
              }
              if (iVar6 < -0x7fff) {
                iVar6 = -0x8000;
              }
              uVar22 = (short)uVar8;
              if ((int)uVar3 < 0) {
                uVar22 = (short)iVar23;
              }
              uVar5 = (short)uVar9;
              if ((int)uVar2 < 0) {
                uVar5 = (short)iVar6;
              }
              puVar17[-1] = uVar22;
              uVar20 = uVar20 - 2;
              *puVar17 = uVar5;
              puVar17 = puVar17 + 2;
            } while (uVar20 != 0);
            uVar20 = uVar29;
            if (uVar29 == uVar24) goto LAB_00a9a15c;
          }
          piVar16 = (int *)((long)__s + (uVar20 + lVar26) * 4);
          lVar21 = uVar24 - uVar20;
          puVar17 = (undefined2 *)((long)__ptr + (uVar20 + lVar25) * 2);
          do {
            uVar3 = *piVar16 + 0x7ff;
            if ((int)uVar3 < 0) {
              iVar23 = *piVar16 + 0x800 >> 0xc;
              if (iVar23 < -0x7fff) {
                iVar23 = -0x8000;
              }
              uVar22 = (undefined2)iVar23;
            }
            else {
              uVar3 = uVar3 >> 0xc;
              if (0x7ffe < uVar3) {
                uVar3 = 0x7fff;
              }
              uVar22 = (undefined2)uVar3;
            }
            *puVar17 = uVar22;
            lVar21 = lVar21 + -1;
            piVar16 = piVar16 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar21 != 0);
        }
LAB_00a9a15c:
        uVar19 = uVar19 + 1;
        puVar27 = puVar27 + lVar30;
        piVar28 = piVar28 + 2;
        lVar26 = lVar26 + 2;
        lVar25 = lVar25 + lVar30;
      } while (uVar19 != uVar12);
    }
    *(uint *)(this + 0x48) = uVar32;
    *(int *)(this + 0x34) = iVar7;
    this_00 = operator_new(0x30);
    *(undefined8 *)(this_00 + 0x10) = 0;
    p_Var33 = this_00 + 8;
    *(long *)p_Var33 = 0;
    pvVar31 = (vector<char,std::__ndk1::allocator<char>> *)(this_00 + 0x18);
    *(undefined8 *)pvVar31 = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined ***)this_00 = &PTR____shared_ptr_emplace_01c6f588;
    pvVar18 = (void *)0x0;
    uVar32 = *(int *)(this + 0x38) * uVar32;
    uVar3 = uVar32 + 7;
    if (-1 < (int)uVar32) {
      uVar3 = uVar32;
    }
    if (0xe < uVar32 + 7) {
      uVar12 = (long)((ulong)uVar3 << 0x20) >> 0x23;
      pvVar18 = operator_new(uVar12);
      *(void **)(this_00 + 0x18) = pvVar18;
      *(void **)(this_00 + 0x20) = pvVar18;
      *(ulong *)(this_00 + 0x28) = (long)pvVar18 + uVar12;
    }
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
              (pvVar31,pvVar18,__ptr,(void *)((long)__ptr + __size));
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(p_Var33,0x10);
      if (bVar11) {
        *(long *)p_Var33 = *(long *)p_Var33 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    this_01 = *(__shared_weak_count **)(this + 0x28);
    *(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) = pvVar31;
    *(__shared_weak_count **)(this + 0x28) = this_00;
    if (this_01 != (__shared_weak_count *)0x0) {
      p_Var4 = this_01 + 8;
      do {
        lVar30 = *(long *)p_Var4;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(p_Var4,0x10);
        if (bVar11) {
          *(long *)p_Var4 = lVar30 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*(long *)this_01 + 0x10))(this_01);
        std::__ndk1::__shared_weak_count::__release_weak(this_01);
      }
    }
    free(__ptr);
    free(__s);
    do {
      lVar30 = *(long *)p_Var33;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(p_Var33,0x10);
      if (bVar11) {
        *(long *)p_Var33 = lVar30 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
    operator_delete(puVar15);
    PcmData::~PcmData((PcmData *)local_98);
  }
  if (*(long *)(lVar13 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

