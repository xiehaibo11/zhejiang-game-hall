
/* v8::internal::SharedFunctionInfo::EnsureSourcePositionsAvailable(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void v8::internal::SharedFunctionInfo::EnsureSourcePositionsAvailable
               (undefined8 param_1,ulong *param_2)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (FLAG_enable_lazy_source_positions != '\0') {
    puVar1 = (uint *)(*param_2 + 3);
    uVar3 = *puVar1;
    uVar2 = *param_2 & 0xffffffff00000000;
    if ((((uVar3 & 1) != 0) &&
        (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar3) - 1)) == 0x86)) ||
       ((uVar3 = *puVar1, (uVar3 & 1) != 0 &&
        (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar3) - 1)) == 0x61)))) {
      uVar4 = *param_2;
      uVar2 = uVar4 & 0xffffffff00000000;
      uVar6 = uVar2 | *(uint *)(uVar4 + 0xf);
      uVar5 = uVar2 | 7;
      if ((*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0x5b) &&
         (*(short *)(uVar5 + *(uint *)((uVar2 | *(uint *)(uVar6 + 0x13)) - 1)) == 0x86)) {
        uVar3 = *(uint *)(uVar6 + 0xf);
      }
      else {
        uVar3 = *(uint *)(uVar4 + 3);
        if (((uVar3 & 1) == 0) || (*(short *)(uVar5 + *(uint *)((uVar2 | uVar3) - 1)) != 0x86)) {
          uVar3 = *(uint *)((uVar2 | *(uint *)(uVar4 + 3)) + 3);
        }
        else {
          uVar3 = *(uint *)(uVar4 + 3);
        }
      }
      uVar3 = *(uint *)((uVar2 | uVar3) + 0xf);
      if (((uVar3 & 1) != 0) &&
         ((uVar3 == *(uint *)(uVar2 + 0xa0) || (uVar3 == *(uint *)(uVar2 + 0x180))))) {
        Compiler::CollectSourcePositions();
        return;
      }
    }
  }
  return;
}

