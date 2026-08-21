
/* v8::internal::Deoptimizer::MarkAllCodeForContext(v8::internal::NativeContext) */

void v8::internal::Deoptimizer::MarkAllCodeForContext(ulong param_1)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = param_1;
  uVar3 = NativeContext::OptimizedCodeListHead((NativeContext *)&local_18);
  if ((uVar3 & 1) == 0) goto LAB_00f17e64;
  do {
    if ((int)uVar3 == *(int *)((local_18 & 0xffffffff00000000) + 0xa0)) {
      return;
    }
LAB_00f17e64:
    do {
      if ((*(byte *)(uVar3 + 0x17) & 0x3e) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","code.kind() == Code::OPTIMIZED_FUNCTION");
      }
      puVar1 = (uint *)(uVar3 + 0xf);
      uVar3 = uVar3 & 0xffffffff00000000;
      *(uint *)((uVar3 | *puVar1) + 7) = *(uint *)((uVar3 | *puVar1) + 7) | 1;
      uVar2 = *(uint *)((uVar3 | *puVar1) + 3);
      uVar3 = uVar3 | uVar2;
    } while ((uVar2 & 1) == 0);
  } while( true );
}

