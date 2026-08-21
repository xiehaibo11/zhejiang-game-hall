
/* v8::internal::CompilationCacheScript::HasOrigin(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::MaybeHandle<v8::internal::Object>, int, int, v8::ScriptOriginOptions) */

ulong __thiscall
v8::internal::CompilationCacheScript::HasOrigin
          (CompilationCacheScript *this,ulong *param_2,ulong *param_3,int param_4,int param_5,
          uint param_6)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_2 & 0xffffffff00000000;
  uVar4 = uVar3 | *(uint *)(*param_2 + 0xf);
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
    uVar4 = uVar3 | *(uint *)(uVar4 + 0xb);
  }
  pIVar1 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    uVar4 = *puVar2;
  }
  if (param_3 == (ulong *)0x0) {
    if ((*(uint *)(uVar4 + 7) & 1) != 0) {
      return (ulong)(*(uint *)(uVar4 + 7) == *(uint *)(*(long *)this + 0xa0));
    }
  }
  else if (((((param_4 == *(int *)(uVar4 + 0xb) >> 1) && (param_5 == *(int *)(uVar4 + 0xf) >> 1)) &&
            (uVar3 = *param_3, (uVar3 & 1) != 0)) &&
           ((*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40 &&
            ((*(uint *)(uVar4 + 7) & 1) != 0)))) &&
          ((uVar3 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7),
           *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40 &&
           ((*(uint *)(uVar4 + 0x2f) >> 4 & 0xf) == param_6)))) {
    pIVar1 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    }
    if ((puVar2 == param_3) || ((uVar4 = *param_3, puVar2 != (ulong *)0x0 && (uVar4 == *puVar2)))) {
      return 1;
    }
    if ((0x1f < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1))) ||
       (0x1f < *(ushort *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)))) {
      uVar4 = String::SlowEquals(pIVar1,param_3);
      return uVar4;
    }
  }
  return 0;
}

