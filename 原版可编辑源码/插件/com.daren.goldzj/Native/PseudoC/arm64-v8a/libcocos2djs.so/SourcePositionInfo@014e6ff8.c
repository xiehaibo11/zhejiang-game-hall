
/* v8::internal::SourcePositionInfo::SourcePositionInfo(v8::internal::SourcePosition,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

void __thiscall
v8::internal::SourcePositionInfo::SourcePositionInfo
          (SourcePositionInfo *this,undefined8 param_2,ulong *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)this = param_2;
  *(ulong **)(this + 8) = param_3;
  if (param_3 != (ulong *)0x0) {
    pIVar1 = (Isolate *)(*param_3 & 0xffffffff00000000);
    uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(*param_3 + 0xf);
    uVar3 = uVar4;
    if (*(short *)(((ulong)pIVar1 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
      uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(uVar4 + 0xb);
    }
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x65) {
      if (*(short *)(((ulong)pIVar1 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
        uVar4 = (ulong)pIVar1 | (ulong)*(uint *)(uVar4 + 0xb);
      }
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
      }
      *(ulong **)(this + 0x10) = puVar2;
      *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
      if (puVar2 == (ulong *)0x0) {
        return;
      }
      local_40 = 0xffffffffffffffff;
      uStack_38 = 0xffffffffffffffff;
      uVar3 = Script::GetPositionInfo(puVar2,((uint)param_2 >> 1 & 0x3fffffff) - 1,&local_40,1);
      if ((uVar3 & 1) == 0) {
        return;
      }
      *(undefined8 *)(this + 0x18) = local_40;
      return;
    }
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0xffffffffffffffff;
  return;
}

