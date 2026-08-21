
/* v8::internal::Genesis::InstallTypedArray(char const*, v8::internal::ElementsKind) */

ulong * __thiscall
v8::internal::Genesis::InstallTypedArray(Genesis *this,undefined8 param_1,uint param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  ulong uVar10;
  undefined8 local_58;
  
  local_58 = **(undefined8 **)(this + 0x10);
  uVar4 = Context::global_object((Context *)&local_58);
  pIVar9 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar4);
  }
  pIVar9 = *(Isolate **)this;
  uVar4 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 0x33b);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar4;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar4);
  }
  pIVar9 = *(Isolate **)this;
  uVar4 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
  uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)((uVar4 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1))
                                              + 0x13)) + 0x337);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar4;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar4);
  }
  puVar5 = (ulong *)FUN_01036964(*(long *)this,puVar5,param_1,0x41b,0x44,0,*(long *)this + 0xa8,
                                 0x22c);
  if (0x1b < (param_3 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","static_cast<int>(elements_kind) < kElementsKindCount");
  }
  uVar4 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0x1b);
  *(byte *)(uVar4 + 10) = *(byte *)(uVar4 + 10) & 7 | (byte)(param_3 << 3);
  *(undefined2 *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x15) = 0xffff;
  *(undefined2 *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x13) = 3;
  uVar2 = JSObject::SetPrototype(puVar5,puVar7,0,1);
  if ((uVar2 & 0xff) == 0) {
    v8::V8::FromJustIsNothing();
  }
  if (uVar2 < 0x100) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "JSObject::SetPrototype(result, typed_array_function, false, kDontThrow) .FromJust()");
  }
  uVar3 = ElementsKindToShiftSize(param_3);
  pIVar9 = *(Isolate **)this;
  uVar3 = 1 << (ulong)(uVar3 & 0x1f);
  uVar4 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar4;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar4);
  }
  FUN_01036cb4(*(undefined8 *)this,puVar5,"BYTES_PER_ELEMENT",puVar7);
  uVar10 = *puVar5;
  uVar4 = uVar10 & 0xffffffff00000000;
  if ((*(byte *)((uVar4 | 9) + (ulong)*(uint *)(uVar10 - 1)) & 1) == 0) {
    uVar10 = uVar4 | *(uint *)(uVar10 + 0x1b);
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0xa2) {
      uVar10 = uVar4 | *(uint *)(uVar10 + 0xf);
    }
  }
  else {
    uVar3 = *(uint *)((uVar4 | 0x13) + (ulong)*(uint *)(uVar10 - 1));
    uVar10 = uVar4 | uVar3;
    if ((uVar3 & 1) != 0) {
      do {
        if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0xa2) break;
        puVar1 = (uint *)(uVar10 + 0x13);
        uVar10 = uVar4 | *puVar1;
      } while ((*puVar1 & 1) != 0);
    }
  }
  pIVar9 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar8 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar8 + 1;
    *puVar8 = uVar10;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
  }
  uVar2 = JSObject::SetPrototype(puVar8,puVar6,0,1);
  if ((uVar2 & 0xff) == 0) {
    v8::V8::FromJustIsNothing();
  }
  if (0xff < uVar2) {
    FUN_01036cb4(*(undefined8 *)this,puVar8,"BYTES_PER_ELEMENT",puVar7);
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "JSObject::SetPrototype(prototype, typed_array_prototype, false, kDontThrow) .FromJust()"
          );
}

