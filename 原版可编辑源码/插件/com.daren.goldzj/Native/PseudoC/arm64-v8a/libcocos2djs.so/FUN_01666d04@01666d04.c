
long FUN_01666d04(__hash_table<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals,v8::internal::ZoneAllocator<v8::internal::compiler::LinearScanAllocator::RangeWithRegister>>
                  *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 != 0) {
    uVar7 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar3 >> 
                                                  8)),POPCOUNT((char)uVar3))))))));
    uVar6 = NEON_uaddlv(uVar7,1);
    uVar4 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar6) & 0xffffffff;
    if (uVar4 < 2) {
      param_2 = uVar3 - 1 & param_2;
    }
    else if (uVar3 <= param_2) {
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = param_2 / uVar3;
      }
      param_2 = param_2 - uVar5 * uVar3;
    }
    plVar2 = *(long **)(*(long *)param_1 + param_2 * 8);
    if (plVar2 != (long *)0x0) {
      while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
        uVar5 = plVar2[1];
        if (uVar4 < 2) {
          uVar5 = uVar5 & uVar3 - 1;
        }
        else if (uVar3 <= uVar5) {
          uVar1 = 0;
          if (uVar3 != 0) {
            uVar1 = uVar5 / uVar3;
          }
          uVar5 = uVar5 - uVar1 * uVar3;
        }
        if (uVar5 != param_2) break;
        if (plVar2[2] == *param_3) {
          return (long)plVar2;
        }
      }
    }
  }
  if ((uVar3 == 0) ||
     (*(float *)(param_1 + 0x30) * (float)uVar3 < (float)(*(long *)(param_1 + 0x28) + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar4 = (ulong)((float)(*(long *)(param_1 + 0x28) + 1) / *(float *)(param_1 + 0x30));
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    std::__ndk1::
    __hash_table<v8::internal::compiler::LinearScanAllocator::RangeWithRegister,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Hash,v8::internal::compiler::LinearScanAllocator::RangeWithRegister::Equals,v8::internal::ZoneAllocator<v8::internal::compiler::LinearScanAllocator::RangeWithRegister>>
    ::rehash(param_1,uVar4);
  }
  return 0;
}

