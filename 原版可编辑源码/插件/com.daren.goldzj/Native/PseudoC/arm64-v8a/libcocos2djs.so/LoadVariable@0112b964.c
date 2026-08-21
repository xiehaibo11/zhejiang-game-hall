
/* v8::internal::SourceTextModule::LoadVariable(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, int) */

void v8::internal::SourceTextModule::LoadVariable(Isolate *param_1,ulong *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  iVar2 = SourceTextModuleDescriptor::GetCellIndexKind(param_3);
  if (iVar2 == 1) {
    uVar1 = *(uint *)(uVar4 + 0x1b);
    iVar2 = param_3 * 4 + -4;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar4 = 0;
      goto LAB_0112b9d8;
    }
    uVar1 = *(uint *)(uVar4 + 0x1f);
    iVar2 = ~param_3 << 2;
  }
  uVar4 = uVar4 & 0xffffffff00000000 |
          (ulong)*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)uVar1) + (long)iVar2 + 7);
LAB_0112b9d8:
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 3);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  return;
}

