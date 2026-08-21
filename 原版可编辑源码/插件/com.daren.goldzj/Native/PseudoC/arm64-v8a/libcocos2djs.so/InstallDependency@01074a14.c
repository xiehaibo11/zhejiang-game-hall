
/* v8::internal::DependentCode::InstallDependency(v8::internal::Isolate*,
   v8::internal::MaybeObjectHandle const&, v8::internal::Handle<v8::internal::HeapObject>,
   v8::internal::DependentCode::DependencyGroup) */

void v8::internal::DependentCode::InstallDependency
               (Isolate *param_1,undefined8 param_2,ulong *param_3,undefined4 param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = *param_3;
  uVar4 = uVar3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0xa2) {
    lVar5 = 0x1b;
  }
  else if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0xa5) {
    lVar5 = 0xf;
  }
  else {
    if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0x55) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar5 = 0xb;
  }
  uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + lVar5);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
  }
  puVar2 = (ulong *)InsertWeakCode(param_1,puVar1,param_4,param_2);
  if ((puVar1 != puVar2) &&
     (((puVar1 == (ulong *)0x0 || (puVar2 == (ulong *)0x0)) || (*puVar2 != *puVar1)))) {
    SetDependentCode(param_3);
    return;
  }
  return;
}

