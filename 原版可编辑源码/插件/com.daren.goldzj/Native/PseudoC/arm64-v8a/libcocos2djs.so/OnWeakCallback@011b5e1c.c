
/* v8::internal::SamplingHeapProfiler::OnWeakCallback(v8::WeakCallbackInfo<v8::internal::SamplingHeapProfiler::Sample>
   const&) */

void v8::internal::SamplingHeapProfiler::OnWeakCallback(WeakCallbackInfo *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  *p_Var5;
  __tree_node_base *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  *this;
  void *pvVar14;
  __tree_node_base *p_Var15;
  long lVar16;
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  *p_Var17;
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  *p_Var18;
  __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
  *p_Var19;
  undefined2 uVar20;
  undefined8 uVar21;
  void *local_70 [2];
  char local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  puVar13 = *(ulong **)(param_1 + 8);
  this = (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
          *)puVar13[1];
  p_Var17 = this + 8;
  p_Var18 = p_Var17;
  p_Var19 = p_Var17;
  if (*(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
        **)p_Var17 !=
      (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
       *)0x0) {
    p_Var5 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
               **)p_Var17;
    p_Var19 = this + 8;
    do {
      while (p_Var18 = p_Var5, *puVar13 < *(ulong *)(p_Var18 + 0x20)) {
        p_Var5 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                   **)p_Var18;
        p_Var19 = p_Var18;
        if (*(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
              **)p_Var18 ==
            (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
             *)0x0) {
          p_Var15 = *(__tree_node_base **)p_Var18;
          goto joined_r0x011b5ef0;
        }
      }
      if (*puVar13 <= *(ulong *)(p_Var18 + 0x20)) break;
      p_Var19 = p_Var18 + 8;
      p_Var5 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                 **)p_Var19;
    } while (*(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
               **)p_Var19 !=
             (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
              *)0x0);
  }
  p_Var15 = *(__tree_node_base **)p_Var19;
joined_r0x011b5ef0:
  if (p_Var15 == (__tree_node_base *)0x0) {
    p_Var15 = operator_new(0x30);
    uVar7 = *puVar13;
    *(undefined4 *)(p_Var15 + 0x28) = 0;
    *(undefined8 *)p_Var15 = 0;
    *(undefined8 *)(p_Var15 + 8) = 0;
    *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
      **)(p_Var15 + 0x10) = p_Var18;
    *(ulong *)(p_Var15 + 0x20) = uVar7;
    *(__tree_node_base **)p_Var19 = p_Var15;
    p_Var6 = p_Var15;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var6 = *(__tree_node_base **)p_Var19;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var6);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  *(int *)(p_Var15 + 0x28) = *(int *)(p_Var15 + 0x28) + -1;
  if (*(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
        **)p_Var17 ==
      (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
       *)0x0) {
    lVar16 = *(long *)p_Var17;
    p_Var18 = p_Var17;
  }
  else {
    p_Var19 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                **)p_Var17;
    p_Var18 = this + 8;
    do {
      while (p_Var17 = p_Var19, *puVar13 < *(ulong *)(p_Var17 + 0x20)) {
        p_Var19 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                    **)p_Var17;
        p_Var18 = p_Var17;
        if (*(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
              **)p_Var17 ==
            (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
             *)0x0) {
          lVar16 = *(long *)p_Var17;
          goto joined_r0x011b5f68;
        }
      }
      if (*puVar13 <= *(ulong *)(p_Var17 + 0x20)) break;
      p_Var18 = p_Var17 + 8;
      p_Var19 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                  **)p_Var18;
    } while (*(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
               **)p_Var18 !=
             (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
              *)0x0);
    lVar16 = *(long *)p_Var18;
  }
joined_r0x011b5f68:
  if (lVar16 == 0) {
    p_Var6 = operator_new(0x30);
    uVar7 = *puVar13;
    *(undefined4 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
      **)(p_Var6 + 0x10) = p_Var17;
    *(ulong *)(p_Var6 + 0x20) = uVar7;
    *(__tree_node_base **)p_Var18 = p_Var6;
    p_Var15 = p_Var6;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      p_Var15 = *(__tree_node_base **)p_Var18;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),p_Var15);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    iVar1 = *(int *)(p_Var6 + 0x28);
  }
  else {
    iVar1 = *(int *)(lVar16 + 0x28);
  }
  if (iVar1 == 0) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
    ::__erase_unique<unsigned_long>(this,puVar13);
LAB_011b6000:
    p_Var17 = this;
    if (*(long *)(this + 0x10) == 0) {
      while( true ) {
        if (((*(long *)(p_Var17 + 0x28) != 0) ||
            (this = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                      **)(p_Var17 + 0x30),
            this == (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                     *)0x0)) ||
           (this[0x4c] !=
            (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
             )0x0)) goto LAB_011b6094;
        if (*(uint *)(p_Var17 + 0x38) == 0) {
          uVar7 = *(ulong *)(p_Var17 + 0x40) | 1;
        }
        else {
          uVar7 = ((ulong)*(uint *)(p_Var17 + 0x38) << 0x20) + (long)(*(int *)(p_Var17 + 0x3c) << 1)
          ;
        }
        p_Var17 = this + 0x20;
        p_Var18 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                    **)p_Var17;
        if (p_Var18 ==
            (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
             *)0x0) break;
        p_Var19 = p_Var17;
        do {
          if (*(ulong *)(p_Var18 + 0x20) >= uVar7) {
            p_Var19 = p_Var18;
          }
          p_Var18 = *(__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                      **)(p_Var18 + (ulong)(*(ulong *)(p_Var18 + 0x20) < uVar7) * 8);
        } while (p_Var18 !=
                 (__tree<std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,unsigned_int>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,unsigned_int>>>
                  *)0x0);
        if ((p_Var19 == p_Var17) || (uVar7 < *(ulong *)(p_Var19 + 0x20))) break;
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
        ::erase((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::AllocationNode,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::AllocationNode>>>>>
                 *)(this + 0x18));
        p_Var17 = this;
        if (*(long *)(this + 0x10) != 0) goto LAB_011b6094;
      }
      goto LAB_011b6000;
    }
  }
LAB_011b6094:
  uVar7 = *(ulong *)(puVar13[3] + 0xb8);
  if (uVar7 != 0) {
    uVar8 = ((ulong)(uint)((int)puVar13 << 3) + 8 ^ (ulong)puVar13 >> 0x20) * -0x622015f714c7d297;
    uVar21 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar20 = NEON_uaddlv(uVar21,1);
    uVar9 = (uVar8 ^ (ulong)puVar13 >> 0x20 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = CONCAT62((int6)((ulong)uVar21 >> 0x10),uVar20) & 0xffffffff;
    uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
    if (uVar8 < 2) {
      uVar10 = uVar7 - 1 & uVar9;
    }
    else {
      uVar10 = uVar9;
      if (uVar7 <= uVar9) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar9 / uVar7;
        }
        uVar10 = uVar9 - uVar10 * uVar7;
      }
    }
    plVar11 = *(long **)(*(long *)(puVar13[3] + 0xb0) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      do {
        uVar12 = plVar11[1];
        if (uVar12 == uVar9) {
          if ((ulong *)plVar11[2] == puVar13) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::__unordered_map_hasher<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::hash<v8::internal::SamplingHeapProfiler::Sample*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>,std::__ndk1::equal_to<v8::internal::SamplingHeapProfiler::Sample*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::SamplingHeapProfiler::Sample*,std::__ndk1::unique_ptr<v8::internal::SamplingHeapProfiler::Sample,std::__ndk1::default_delete<v8::internal::SamplingHeapProfiler::Sample>>>>>
            ::remove(local_70);
            pvVar4 = local_70[0];
            local_70[0] = (void *)0x0;
            if (pvVar4 != (void *)0x0) {
              if (local_60 != '\0') {
                pvVar14 = *(void **)((long)pvVar4 + 0x18);
                *(undefined8 *)((long)pvVar4 + 0x18) = 0;
                if (pvVar14 != (void *)0x0) {
                  if (*(ulong **)((long)pvVar14 + 0x10) != (ulong *)0x0) {
                    v8::V8::DisposeGlobal(*(ulong **)((long)pvVar14 + 0x10));
                  }
                  operator_delete(pvVar14);
                }
              }
              operator_delete(pvVar4);
            }
            break;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar12 = uVar12 & uVar7 - 1;
          }
          else if (uVar7 <= uVar12) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar2 * uVar7;
          }
          if (uVar12 != uVar10) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

