
/* std::__ndk1::__hash_table<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,
   v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals,
   v8::internal::ZoneAllocator<v8::internal::compiler::LinearScanAllocator::RangeWithRegister>
   >::remove(std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,
   void*>*>) */

void std::__ndk1::
     __hash_table<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals,v8::internal::ZoneAllocator<v8::internal::compiler::LinearScanAllocator::RangeWithRegister>>
     ::remove(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar3 = param_2[1];
  uVar4 = param_3[1];
  uVar9 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                   CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                            CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                     CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                              CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                       CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                CONCAT11(POPCOUNT((char)(uVar3 >> 8)
                                                                                 ),
                                                                         POPCOUNT((char)uVar3)))))))
                  );
  uVar8 = NEON_uaddlv(uVar9,1);
  uVar5 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
  if (uVar5 < 2) {
    uVar4 = uVar3 - 1 & uVar4;
  }
  else {
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = uVar4 / uVar3;
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar7 * uVar3;
    }
  }
  plVar2 = *(long **)(*param_2 + uVar4 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 3) {
    uVar7 = plVar6[1];
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    if (uVar7 == uVar4) goto LAB_01668458;
  }
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar1 * uVar3;
    }
    if (uVar7 == uVar4) goto LAB_01668458;
  }
  *(undefined8 *)(*param_2 + uVar4 * 8) = 0;
LAB_01668458:
  if (*param_3 != 0) {
    uVar7 = *(ulong *)(*param_3 + 8);
    if (uVar5 < 2) {
      uVar7 = uVar7 & uVar3 - 1;
    }
    else if (uVar3 <= uVar7) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar5 * uVar3;
    }
    if (uVar7 != uVar4) {
      *(long **)(*param_2 + uVar7 * 8) = plVar6;
    }
  }
  *plVar6 = *param_3;
  *param_3 = 0;
  param_2[5] = param_2[5] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 4;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}

