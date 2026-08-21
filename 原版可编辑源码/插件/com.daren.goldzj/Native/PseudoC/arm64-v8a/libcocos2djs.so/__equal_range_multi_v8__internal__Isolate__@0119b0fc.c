
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   v8::internal::CpuProfiler*>, void*>*>,
   std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   v8::internal::CpuProfiler*>, void*>*> >
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   v8::internal::CpuProfiler*>, std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,
   std::__ndk1::__hash_value_type<v8::internal::Isolate*, v8::internal::CpuProfiler*>,
   std::__ndk1::hash<v8::internal::Isolate*>, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,
   std::__ndk1::__hash_value_type<v8::internal::Isolate*, v8::internal::CpuProfiler*>,
   std::__ndk1::equal_to<v8::internal::Isolate*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   v8::internal::CpuProfiler*> >
   >::__equal_range_multi<v8::internal::Isolate*>(v8::internal::Isolate* const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
::__equal_range_multi<v8::internal::Isolate*>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,v8::internal::CpuProfiler*>>>
           *this,Isolate **param_1)

{
  ulong uVar1;
  long *plVar2;
  Isolate *pIVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    pIVar3 = *param_1;
    uVar5 = ((ulong)(uint)((int)pIVar3 << 3) + 8 ^ (ulong)pIVar3 >> 0x20) * -0x622015f714c7d297;
    uVar11 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar6 = (uVar5 ^ (ulong)pIVar3 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar6 = (uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    if (uVar5 < 2) {
      uVar7 = uVar6 & uVar4 - 1;
    }
    else {
      uVar7 = uVar6;
      if (uVar4 <= uVar6) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar6 / uVar4;
        }
        uVar7 = uVar6 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)this + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      do {
        uVar9 = plVar8[1];
        if (uVar9 == uVar6) {
          plVar2 = plVar8;
          if ((Isolate *)plVar8[2] == pIVar3) {
            do {
              plVar2 = (long *)*plVar2;
              if (plVar2 == (long *)0x0) {
                return plVar8;
              }
            } while ((Isolate *)plVar2[2] == pIVar3);
            return plVar8;
          }
        }
        else {
          if (uVar5 < 2) {
            uVar9 = uVar9 & uVar4 - 1;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

