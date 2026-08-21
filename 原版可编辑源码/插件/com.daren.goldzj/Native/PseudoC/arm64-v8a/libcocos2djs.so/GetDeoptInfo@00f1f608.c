
/* v8::internal::Deoptimizer::GetDeoptInfo(v8::internal::Code, unsigned long) */

undefined1  [16] v8::internal::Deoptimizer::GetDeoptInfo(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  RelocIterator aRStack_80 [16];
  ulong local_70;
  char local_68;
  uint local_60;
  char local_48;
  long local_28;
  
  local_28 = param_1;
  if (*(int *)(param_1 + 0x17) < 0) {
    uVar1 = Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    uVar1 = param_1 + 0x3f;
  }
  if (uVar1 <= param_2) {
    if (*(int *)(local_28 + 0x17) < 0) {
      uVar1 = Code::OffHeapInstructionEnd((Code *)&local_28);
    }
    else {
      uVar1 = local_28 + *(int *)(local_28 + 0x13) + 0x3f;
    }
    if (param_2 <= uVar1) {
      RelocIterator::RelocIterator(aRStack_80,local_28,0x1e000);
      if (local_48 == '\0') {
        uVar1 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 0x21;
        do {
          if (param_2 <= local_70) break;
          if (local_68 == '\x10') {
            uVar2 = (ulong)local_60;
          }
          else if (local_68 == '\x0f') {
            uVar3 = (ulong)(byte)local_60;
          }
          else if (local_68 == '\r') {
            uVar1 = (ulong)local_60;
            RelocIterator::next(aRStack_80);
            uVar1 = (long)((uVar1 << 0x20) + 0x100000000) >> 0x1f & 0xffff80007fffffffU |
                    (long)(((ulong)local_60 << 0x20) + 0x100000000) >> 1;
          }
          RelocIterator::next(aRStack_80);
        } while (local_48 == '\0');
      }
      else {
        uVar1 = 0;
        uVar3 = 0x21;
        uVar2 = 0xffffffff;
      }
      auVar4._8_8_ = uVar3 | uVar2 << 0x20;
      auVar4._0_8_ = uVar1;
      return auVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","code.InstructionStart() <= pc && pc <= code.InstructionEnd()");
}

