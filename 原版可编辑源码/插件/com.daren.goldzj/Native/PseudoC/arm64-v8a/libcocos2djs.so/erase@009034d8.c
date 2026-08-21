
/* se::NonRefNativePtrCreatedByCtorMap::erase(void*) */

void se::NonRefNativePtrCreatedByCtorMap::erase(void *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  void *local_40 [3];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = __nonRefNativeObjectCreatedByCtorMap[1];
  if (uVar4 != 0) {
    uVar6 = (((ulong)param_1 & 0x1fffffff) * 8 + 8 ^ (ulong)param_1 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (uVar6 ^ (ulong)param_1 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = uVar4 - 1;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    if ((uVar6 & uVar4) == 0) {
      uVar7 = uVar6 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*__nonRefNativeObjectCreatedByCtorMap + uVar7 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar5) {
          if ((void *)plVar8[2] == param_1) {
            std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<void*,bool>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,bool>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,bool>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,bool>>>
            ::remove(local_40,__nonRefNativeObjectCreatedByCtorMap);
            pvVar3 = local_40[0];
            local_40[0] = (void *)0x0;
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
            break;
          }
        }
        else {
          if ((uVar6 & uVar4) == 0) {
            uVar9 = uVar9 & uVar6;
          }
          else if (uVar4 <= uVar9) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar9 / uVar4;
            }
            uVar9 = uVar9 - uVar1 * uVar4;
          }
          if (uVar9 != uVar7) break;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

