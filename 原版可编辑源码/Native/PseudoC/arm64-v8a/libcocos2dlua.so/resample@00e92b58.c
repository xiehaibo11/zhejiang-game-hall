
/* cocos2d::experimental::AudioDecoder::resample() */

undefined8 __thiscall cocos2d::experimental::AudioDecoder::resample(AudioDecoder *this)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  int *piVar5;
  __shared_weak_count *p_Var6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  bool bVar13;
  ulong uVar14;
  long lVar15;
  void *__s;
  long *plVar16;
  uint *puVar17;
  void *__ptr;
  int *piVar18;
  __shared_weak_count *this_00;
  undefined2 *puVar19;
  void *pvVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined2 uVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
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
  
  lVar15 = tpidr_el0;
  local_68 = *(long *)(lVar15 + 0x28);
  if (*(int *)(this + 0x34) == *(int *)(this + 0x50)) {
    __android_log_print(4,"AudioDecoder",
                        "No need to resample since the sample rate (%d) of the decoded pcm data is the same as the device output sample rate"
                       );
  }
  else {
    PcmData::PcmData((PcmData *)local_98,(PcmData *)(this + 0x20));
    PcmBufferProvider::PcmBufferProvider(aPStack_c8);
    uVar21 = (ulong)local_70;
    uVar14 = 0;
    if (uVar21 != 0) {
      uVar14 = (ulong)(local_98[0][1] - (long)*local_98[0]) / uVar21;
    }
    PcmBufferProvider::init(aPStack_c8,(void *)*local_98[0],uVar21,uVar14);
    iVar9 = *(int *)(this + 0x50);
    uVar14 = 0;
    if ((long)local_84 != 0) {
      uVar14 = ((long)local_70 * (long)iVar9) / (long)local_84;
    }
    __s = malloc(uVar14 << 3);
    plVar16 = (long *)AudioResampler::create(1,local_88,iVar9,2);
    (**(code **)(*plVar16 + 0x18))(plVar16,local_84);
    (**(code **)(*plVar16 + 0x20))(0x3f800000,0x3f800000,plVar16);
    memset(__s,0,uVar14 << 3);
    puVar17 = operator_new(4);
    uVar32 = (uint)uVar14;
    *puVar17 = uVar32;
    if (uVar14 != 0) {
      uVar21 = 0;
      uVar26 = uVar14 & 0xffffffff;
      while( true ) {
        iVar25 = (int)uVar26;
        uVar26 = uVar14 - uVar21;
        if ((ulong)(long)iVar25 <= uVar14 - uVar21 && iVar25 != 0) {
          uVar26 = (long)iVar25;
        }
        (**(code **)(*plVar16 + 0x38))(plVar16,(void *)((long)__s + uVar21 * 8),uVar26,aPStack_c8);
        uVar21 = uVar26 + uVar21;
        if (uVar14 <= uVar21) break;
        uVar26 = (ulong)*puVar17;
      }
    }
    (**(code **)(*plVar16 + 0x40))(plVar16);
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
    lVar30 = (long)(int)local_88;
    __size = uVar14 * lVar30 * 2;
    __ptr = malloc(__size);
    if (uVar14 != 0) {
      uVar26 = (ulong)local_88;
      lVar27 = 0;
      lVar28 = 0;
      uVar21 = 0;
      puVar4 = (undefined2 *)((long)__ptr + 2);
      piVar5 = (int *)((long)__s + 4);
      uVar29 = uVar26 & 0xfffffffe;
      do {
        if (0 < (int)local_88) {
          piVar18 = piVar5;
          puVar19 = puVar4;
          uVar22 = uVar29;
          if (local_88 == 1) {
            uVar22 = 0;
          }
          else {
            do {
              piVar1 = piVar18 + -1;
              iVar8 = *piVar18;
              piVar18 = piVar18 + 2;
              uVar3 = *piVar1 + 0x7ff;
              uVar2 = iVar8 + 0x7ff;
              uVar10 = uVar3 >> 0xc;
              uVar11 = uVar2 >> 0xc;
              iVar25 = *piVar1 + 0x800 >> 0xc;
              if (0x7ffe < uVar10) {
                uVar10 = 0x7fff;
              }
              iVar8 = iVar8 + 0x800 >> 0xc;
              if (0x7ffe < uVar11) {
                uVar11 = 0x7fff;
              }
              if (iVar25 < -0x7fff) {
                iVar25 = -0x8000;
              }
              if (iVar8 < -0x7fff) {
                iVar8 = -0x8000;
              }
              uVar24 = (short)uVar10;
              if ((int)uVar3 < 0) {
                uVar24 = (short)iVar25;
              }
              uVar7 = (short)uVar11;
              if ((int)uVar2 < 0) {
                uVar7 = (short)iVar8;
              }
              puVar19[-1] = uVar24;
              uVar22 = uVar22 - 2;
              *puVar19 = uVar7;
              puVar19 = puVar19 + 2;
            } while (uVar22 != 0);
            uVar22 = uVar29;
            if (uVar29 == uVar26) goto LAB_00e92d28;
          }
          piVar18 = (int *)((long)__s + (uVar22 + lVar28) * 4);
          lVar23 = uVar26 - uVar22;
          puVar19 = (undefined2 *)((long)__ptr + (uVar22 + lVar27) * 2);
          do {
            uVar3 = *piVar18 + 0x7ff;
            if ((int)uVar3 < 0) {
              iVar25 = *piVar18 + 0x800 >> 0xc;
              if (iVar25 < -0x7fff) {
                iVar25 = -0x8000;
              }
              uVar24 = (undefined2)iVar25;
            }
            else {
              uVar3 = uVar3 >> 0xc;
              if (0x7ffe < uVar3) {
                uVar3 = 0x7fff;
              }
              uVar24 = (undefined2)uVar3;
            }
            *puVar19 = uVar24;
            lVar23 = lVar23 + -1;
            piVar18 = piVar18 + 1;
            puVar19 = puVar19 + 1;
          } while (lVar23 != 0);
        }
LAB_00e92d28:
        uVar21 = uVar21 + 1;
        puVar4 = puVar4 + lVar30;
        piVar5 = piVar5 + 2;
        lVar28 = lVar28 + 2;
        lVar27 = lVar27 + lVar30;
      } while (uVar21 != uVar14);
    }
    *(uint *)(this + 0x48) = uVar32;
    *(int *)(this + 0x34) = iVar9;
    this_00 = operator_new(0x30);
    *(undefined8 *)(this_00 + 0x10) = 0;
    p_Var33 = this_00 + 8;
    *(long *)p_Var33 = 0;
    pvVar31 = (vector<char,std::__ndk1::allocator<char>> *)(this_00 + 0x18);
    *(undefined8 *)pvVar31 = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined ***)this_00 = &PTR____shared_ptr_emplace_016f42d0;
    pvVar20 = (void *)0x0;
    uVar32 = *(int *)(this + 0x38) * uVar32;
    uVar3 = uVar32 + 7;
    if (-1 < (int)uVar32) {
      uVar3 = uVar32;
    }
    if (0xe < uVar32 + 7) {
      uVar14 = (long)((ulong)uVar3 << 0x20) >> 0x23;
      pvVar20 = operator_new(uVar14);
      *(void **)(this_00 + 0x18) = pvVar20;
      *(void **)(this_00 + 0x20) = pvVar20;
      *(ulong *)(this_00 + 0x28) = (long)pvVar20 + uVar14;
    }
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<char*>
              (pvVar31,pvVar20,__ptr,(void *)((long)__ptr + __size));
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(p_Var33,0x10);
      if (bVar13) {
        *(long *)p_Var33 = *(long *)p_Var33 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    this_01 = *(__shared_weak_count **)(this + 0x28);
    *(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) = pvVar31;
    *(__shared_weak_count **)(this + 0x28) = this_00;
    if (this_01 != (__shared_weak_count *)0x0) {
      p_Var6 = this_01 + 8;
      do {
        lVar30 = *(long *)p_Var6;
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(p_Var6,0x10);
        if (bVar13) {
          *(long *)p_Var6 = lVar30 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (lVar30 == 0) {
        (**(code **)(*(long *)this_01 + 0x10))(this_01);
        std::__ndk1::__shared_weak_count::__release_weak(this_01);
      }
    }
    free(__ptr);
    free(__s);
    do {
      lVar30 = *(long *)p_Var33;
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(p_Var33,0x10);
      if (bVar13) {
        *(long *)p_Var33 = lVar30 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (lVar30 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
    operator_delete(puVar17);
    PcmData::~PcmData((PcmData *)local_98);
  }
  if (*(long *)(lVar15 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

