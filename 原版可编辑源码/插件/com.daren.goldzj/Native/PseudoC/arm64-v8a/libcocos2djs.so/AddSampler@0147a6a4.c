
/* v8::sampler::SamplerManager::AddSampler(v8::sampler::Sampler*) */

void __thiscall v8::sampler::SamplerManager::AddSampler(SamplerManager *this,Sampler *param_1)

{
  undefined8 *puVar1;
  SamplerManager *pSVar2;
  SamplerManager SVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  void *local_48;
  void *local_40;
  undefined8 uStack_38;
  ulong local_30;
  Sampler *local_28;
  
  pSVar2 = this + 0x28;
  SVar3 = *pSVar2;
  do {
    if (SVar3 == (SamplerManager)0x0) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pSVar2,0x10);
      if (bVar5) {
        *pSVar2 = (SamplerManager)0x1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') break;
    }
    else {
      ClearExclusiveLocal();
    }
    SVar3 = *pSVar2;
  } while( true );
  local_30 = **(ulong **)(param_1 + 0x28);
  uVar9 = *(ulong *)(this + 8);
  local_28 = param_1;
  if (uVar9 != 0) {
    uVar15 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar11 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar11 < 2) {
      uVar12 = uVar9 - 1 & local_30;
    }
    else {
      uVar12 = local_30;
      if (uVar9 <= local_30) {
        uVar12 = 0;
        if (uVar9 != 0) {
          uVar12 = local_30 / uVar9;
        }
        uVar12 = local_30 - uVar12 * uVar9;
      }
    }
    plVar7 = *(long **)(*(long *)this + uVar12 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      do {
        uVar13 = plVar7[1];
        if (uVar13 == local_30) {
          if (plVar7[2] == local_30) {
            puVar10 = *(undefined8 **)(plVar7 + 3);
            puVar8 = (undefined8 *)plVar7[4];
            if ((puVar10 == puVar8) || ((Sampler *)*puVar10 == param_1)) goto LAB_0147a828;
            goto LAB_0147a804;
          }
        }
        else {
          if (uVar11 < 2) {
            uVar13 = uVar13 & uVar9 - 1;
          }
          else if (uVar9 <= uVar13) {
            uVar6 = 0;
            if (uVar9 != 0) {
              uVar6 = uVar13 / uVar9;
            }
            uVar13 = uVar13 - uVar6 * uVar9;
          }
          if (uVar13 != uVar12) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  local_40 = (void *)0x0;
  uStack_38 = 0;
  local_48 = (void *)0x0;
  std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>::
  __push_back_slow_path<v8::sampler::Sampler*const&>
            ((vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>> *)
             &local_48,&local_28);
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>>>
  ::
  __emplace_unique_key_args<long,long&,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>
            ((__hash_table<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>>>>
              *)this,(long *)&local_30,(long *)&local_30,(vector *)&local_48);
  if (local_48 != (void *)0x0) {
    local_40 = local_48;
    operator_delete(local_48);
  }
  goto LAB_0147a7cc;
  while (puVar1 = puVar10 + 1, puVar10 = puVar10 + 1, (Sampler *)*puVar1 != param_1) {
LAB_0147a804:
    if (puVar8 + -1 == puVar10) goto LAB_0147a830;
  }
LAB_0147a828:
  if (puVar10 == puVar8) {
LAB_0147a830:
    if (puVar8 == (undefined8 *)plVar7[5]) {
      std::__ndk1::vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>>::
      __push_back_slow_path<v8::sampler::Sampler*const&>
                ((vector<v8::sampler::Sampler*,std::__ndk1::allocator<v8::sampler::Sampler*>> *)
                 (plVar7 + 3),&local_28);
    }
    else {
      *puVar8 = param_1;
      plVar7[4] = plVar7[4] + 8;
    }
  }
LAB_0147a7cc:
  *(undefined4 *)pSVar2 = 0;
  return;
}

