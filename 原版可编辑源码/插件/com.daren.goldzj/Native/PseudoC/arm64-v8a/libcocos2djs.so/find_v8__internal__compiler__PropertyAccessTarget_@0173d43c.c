
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>,
   std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,
   std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>, v8::internal::compiler::PropertyAccessTarget::Hash,
   true>, std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,
   std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo>, v8::internal::compiler::PropertyAccessTarget::Equal,
   true>, 
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,
   v8::internal::compiler::PropertyAccessInfo> >
   >::find<v8::internal::compiler::PropertyAccessTarget>(v8::internal::compiler::PropertyAccessTarget
   const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
::find<v8::internal::compiler::PropertyAccessTarget>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,std::__ndk1::__unordered_map_hasher<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Hash,true>,std::__ndk1::__unordered_map_equal<v8::internal::compiler::PropertyAccessTarget,std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>,v8::internal::compiler::PropertyAccessTarget::Equal,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::compiler::PropertyAccessTarget,v8::internal::compiler::PropertyAccessInfo>>>
           *this,PropertyAccessTarget *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = v8::base::hash_combine(**(ulong **)param_1,**(ulong **)(param_1 + 0x10));
  uVar3 = v8::base::hash_value(*(uint *)(param_1 + 0x20));
  uVar3 = v8::base::hash_combine(0,uVar3);
  uVar2 = v8::base::hash_value(uVar2);
  uVar2 = v8::base::hash_combine(uVar3,uVar2);
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar9 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7);
    if ((uVar9 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar2;
    }
    else {
      uVar5 = uVar2;
      if (uVar3 <= uVar2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar2 / uVar3;
        }
        uVar5 = uVar2 - uVar5 * uVar3;
      }
    }
    plVar4 = *(long **)(*(long *)this + uVar5 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        uVar6 = plVar4[1];
        if (uVar6 == uVar2) {
          if (((plVar4[2] == *(long *)param_1) && (plVar4[4] == *(long *)(param_1 + 0x10))) &&
             ((int)plVar4[6] == *(int *)(param_1 + 0x20))) {
            return plVar4;
          }
        }
        else {
          if ((uVar9 & 0xffffffff) < 2) {
            uVar6 = uVar6 & uVar3 - 1;
          }
          else if (uVar3 <= uVar6) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar6 / uVar3;
            }
            if (uVar6 - uVar1 * uVar3 != uVar5) {
              return (long *)0x0;
            }
            goto LAB_0173d508;
          }
          if (uVar6 != uVar5) {
            return (long *)0x0;
          }
        }
LAB_0173d508:
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  return (long *)0x0;
}

