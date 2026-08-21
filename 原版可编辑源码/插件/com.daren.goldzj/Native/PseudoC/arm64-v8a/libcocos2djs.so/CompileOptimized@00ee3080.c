
/* v8::internal::Compiler::CompileOptimized(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::ConcurrencyMode) */

undefined8 v8::internal::Compiler::CompileOptimized(ulong *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar3 = uVar4 & 0xffffffff00000000;
  if (*(int *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0x27) != 0x42) {
    uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) + 3);
    if (((uVar1 != 0x84) &&
        ((((uVar1 & 1) == 0 ||
          (1 < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x95)) &&
         ((*(byte *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0x17) & 0x3e) == 0)))) &&
       ((*(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(uVar4 + 0x17)) + 0xf)) + 7) & 1) == 0)) {
      return 1;
    }
  }
  uVar3 = *param_1;
  puVar2 = (ulong *)FUN_00ee1db0(param_1,param_2,0xffffffff,0);
  if (puVar2 == (ulong *)0x0) {
    puVar2 = (ulong *)Builtins::builtin_handle
                                ((Builtins *)(uVar3 & 0xffffffff00000000 | 0x9e00),0x38);
  }
  uVar3 = *param_1;
  uVar4 = *puVar2;
  *(int *)(uVar3 + 0x17) = (int)uVar4;
  if (((uVar4 & 1) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
    Heap_MarkingBarrierSlow(uVar3,uVar3 + 0x17);
  }
  return 1;
}

