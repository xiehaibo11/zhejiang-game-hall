
/* WARNING: Removing unreachable block (ram,0x0147a9ec) */
/* v8::sampler::SamplerManager::RemoveSampler(v8::sampler::Sampler*) */

void __thiscall v8::sampler::SamplerManager::RemoveSampler(SamplerManager *this,Sampler *param_1)

{
  SamplerManager *pSVar1;
  SamplerManager SVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  Sampler *pSVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  undefined2 uVar20;
  undefined8 uVar21;
  void *local_60 [2];
  char local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  pSVar1 = this + 0x28;
  SVar2 = *pSVar1;
  do {
    if (SVar2 == (SamplerManager)0x0) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
      if (bVar4) {
        *pSVar1 = (SamplerManager)0x1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') break;
    }
    else {
      ClearExclusiveLocal();
    }
    SVar2 = *pSVar1;
  } while( true );
  uVar9 = *(ulong *)(this + 8);
  if (uVar9 != 0) {
    uVar21 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar20 = NEON_uaddlv(uVar21,1);
    uVar11 = **(ulong **)(param_1 + 0x28);
    uVar14 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
    if (uVar14 < 2) {
      uVar15 = uVar9 - 1 & uVar11;
    }
    else {
      uVar15 = uVar11;
      if (uVar9 <= uVar11) {
        uVar15 = 0;
        if (uVar9 != 0) {
          uVar15 = uVar11 / uVar9;
        }
        uVar15 = uVar11 - uVar15 * uVar9;
      }
    }
    plVar16 = *(long **)(*(long *)this + uVar15 * 8);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      if (plVar16 != (long *)0x0) {
        do {
          uVar17 = plVar16[1];
          if (uVar17 == uVar11) {
            if (plVar16[2] == uVar11) break;
          }
          else {
            if (uVar14 < 2) {
              uVar17 = uVar17 & uVar9 - 1;
            }
            else if (uVar9 <= uVar17) {
              uVar5 = 0;
              if (uVar9 != 0) {
                uVar5 = uVar17 / uVar9;
              }
              uVar17 = uVar17 - uVar5 * uVar9;
            }
            if (uVar17 != uVar15) goto LAB_0147a95c;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      goto LAB_0147a960;
    }
  }
LAB_0147a95c:
  plVar16 = (long *)0x0;
LAB_0147a960:
  plVar18 = (long *)plVar16[3];
  plVar10 = (long *)plVar16[4];
  if (plVar18 != plVar10) {
    pSVar12 = (Sampler *)*plVar18;
    while (pSVar12 != param_1) {
      plVar18 = plVar18 + 1;
      if (plVar10 == plVar18) goto LAB_0147a9fc;
      pSVar12 = (Sampler *)*plVar18;
    }
  }
  if ((plVar18 != plVar10) && (plVar13 = plVar18 + 1, plVar19 = plVar18, plVar13 != plVar10)) {
    do {
      plVar18 = plVar19;
      if ((Sampler *)*plVar13 != param_1) {
        plVar18 = plVar19 + 1;
        *plVar19 = *plVar13;
      }
      plVar13 = plVar13 + 1;
      plVar19 = plVar18;
    } while (plVar10 != plVar13);
    plVar10 = (long *)plVar16[4];
  }
  if (plVar10 != plVar18) {
    plVar16[4] = (long)plVar18;
    plVar10 = plVar18;
  }
LAB_0147a9fc:
  if ((long *)plVar16[3] == plVar10) {
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>>>
    ::remove(local_60,this,plVar16);
    pvVar7 = local_60[0];
    local_60[0] = (void *)0x0;
    if (pvVar7 != (void *)0x0) {
      if ((local_50 != '\0') && (pvVar8 = *(void **)((long)pvVar7 + 0x18), pvVar8 != (void *)0x0)) {
        *(void **)((long)pvVar7 + 0x20) = pvVar8;
        operator_delete(pvVar8);
      }
      operator_delete(pvVar7);
    }
  }
  *(undefined4 *)pSVar1 = 0;
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

