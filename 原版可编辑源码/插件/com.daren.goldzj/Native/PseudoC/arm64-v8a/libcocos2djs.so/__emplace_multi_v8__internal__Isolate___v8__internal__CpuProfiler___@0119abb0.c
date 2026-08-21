
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   v8::internal::CpuProfiler*>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   v8::internal::CpuProfiler*>, std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,
   std::__ndk1::__hash_value_type<v8::internal::Isolate*, v8::internal::CpuProfiler*>,
   std::__ndk1::hash<v8::internal::Isolate*>, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,
   std::__ndk1::__hash_value_type<v8::internal::Isolate*, v8::internal::CpuProfiler*>,
   std::__ndk1::equal_to<v8::internal::Isolate*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   v8::internal::CpuProfiler*> > >::__emplace_multi<v8::internal::Isolate*&,
   v8::internal::CpuProfiler*&>(v8::internal::Isolate*&, v8::internal::CpuProfiler*&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
::__emplace_multi<v8::internal::Isolate*&,v8::internal::CpuProfiler*&>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
           *this,Isolate **param_1,CpuProfiler **param_2)

{
  long *plVar1;
  long *plVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
  *p_Var8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  plVar1 = operator_new(0x20);
  pIVar3 = *param_1;
  plVar1[2] = (long)pIVar3;
  plVar1[3] = (long)*param_2;
  uVar4 = ((ulong)(uint)((int)pIVar3 << 3) + 8 ^ (ulong)pIVar3 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar4 ^ (ulong)pIVar3 >> 0x20 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  *plVar1 = 0;
  plVar1[1] = (uVar4 ^ uVar4 >> 0x2f) * -0x622015f714c7d297;
  plVar2 = (long *)FUN_0119ad38(this);
  uVar5 = *(ulong *)(this + 8);
  uVar4 = plVar1[1];
  uVar10 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar5 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar5))))))
                            ));
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar6 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar6 < 2) {
    uVar4 = uVar5 - 1 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar7 = 0;
    if (uVar5 != 0) {
      uVar7 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar7 * uVar5;
  }
  if (plVar2 == (long *)0x0) {
    p_Var8 = this + 0x10;
    *plVar1 = *(long *)p_Var8;
    *(long **)p_Var8 = plVar1;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
      **)(*(long *)this + uVar4 * 8) = p_Var8;
    if (*plVar1 != 0) {
      uVar4 = *(ulong *)(*plVar1 + 8);
      if (uVar6 < 2) {
        uVar4 = uVar4 & uVar5 - 1;
      }
      else if (uVar5 <= uVar4) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar4 / uVar5;
        }
        uVar4 = uVar4 - uVar6 * uVar5;
      }
      *(long **)(*(long *)this + uVar4 * 8) = plVar1;
    }
  }
  else {
    *plVar1 = *plVar2;
    *plVar2 = (long)plVar1;
    if (*plVar1 != 0) {
      uVar7 = *(ulong *)(*plVar1 + 8);
      if (uVar6 < 2) {
        uVar7 = uVar7 & uVar5 - 1;
      }
      else if (uVar5 <= uVar7) {
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar7 / uVar5;
        }
        uVar7 = uVar7 - uVar6 * uVar5;
      }
      if (uVar7 != uVar4) {
        *(long **)(*(long *)this + uVar7 * 8) = plVar1;
      }
    }
  }
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar1;
}

