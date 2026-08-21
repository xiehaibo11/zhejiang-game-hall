
/* v8::internal::Factory::NewJSTypedArray(v8::internal::ExternalArrayType,
   v8::internal::Handle<v8::internal::JSArrayBuffer>, unsigned long, unsigned long) */

void __thiscall
v8::internal::Factory::NewJSTypedArray
          (Factory *this,undefined4 param_2,long *param_3,ulong param_4,ulong param_5)

{
  Factory *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar12 = 0x11;
  uVar13 = 1;
  switch(param_2) {
  case 1:
    uVar12 = 0x12;
    goto LAB_00f7b19c;
  case 2:
    break;
  case 3:
    uVar12 = 0x14;
    uVar13 = 2;
    break;
  case 4:
    uVar12 = 0x13;
    uVar13 = 2;
    break;
  case 5:
    uVar12 = 0x16;
    uVar13 = 4;
    break;
  case 6:
    uVar12 = 0x15;
    uVar13 = 4;
    break;
  case 7:
    uVar12 = 0x17;
    uVar13 = 4;
    break;
  case 8:
    uVar12 = 0x18;
    goto LAB_00f7b1a8;
  case 9:
    uVar12 = 0x19;
LAB_00f7b19c:
    uVar13 = 1;
    break;
  case 10:
    uVar12 = 0x1b;
    goto LAB_00f7b1a8;
  case 0xb:
    uVar12 = 0x1a;
LAB_00f7b1a8:
    uVar13 = 8;
    break;
  default:
    goto switchD_00f7b140_default;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar13;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_5;
  if (param_5 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length <= JSTypedArray::kMaxLength");
  }
  if (SUB168(auVar2 * auVar3,8) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length == byte_length / element_size");
  }
  iVar4 = ElementsKindToByteSize(uVar12);
  uVar7 = (ulong)iVar4;
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = param_4 / uVar7;
  }
  if (param_4 != uVar8 * uVar7) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == byte_offset % ElementsKindToByteSize(elements_kind)");
  }
  if (10 < (uVar12 & 0xf) - 1) {
switchD_00f7b140_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pFVar1 = this + 0x95a0;
  switch(uVar12 & 0xf) {
  case 1:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
    }
    puVar9 = (uint *)(uVar8 + 0x347);
    break;
  case 2:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      puVar9 = (uint *)(uVar8 + 0x12f);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      puVar9 = (uint *)(uVar8 + 0x12f);
    }
    break;
  case 3:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      puVar9 = (uint *)(uVar8 + 0x33f);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      puVar9 = (uint *)(uVar8 + 0x33f);
    }
    break;
  case 4:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      puVar9 = (uint *)(uVar8 + 0x127);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      puVar9 = (uint *)(uVar8 + 0x127);
    }
    break;
  case 5:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      puVar9 = (uint *)(uVar8 + 0x343);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      puVar9 = (uint *)(uVar8 + 0x343);
    }
    break;
  case 6:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      puVar9 = (uint *)(uVar8 + 299);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      puVar9 = (uint *)(uVar8 + 299);
    }
    break;
  case 7:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      uVar7 = (ulong)*(uint *)(uVar8 + 199);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      uVar7 = (ulong)*(uint *)(uVar8 + 199);
    }
    goto LAB_00f7b5d4;
  case 8:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      uVar7 = (ulong)*(uint *)(uVar8 + 0xcb);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      uVar7 = (ulong)*(uint *)(uVar8 + 0xcb);
    }
    goto LAB_00f7b5d4;
  case 9:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
    }
    puVar9 = (uint *)(uVar8 + 0x34b);
    break;
  case 10:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      uVar7 = (ulong)*(uint *)(uVar8 + 0x77);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      uVar7 = (ulong)*(uint *)(uVar8 + 0x77);
    }
    goto LAB_00f7b5d4;
  case 0xb:
    uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
    uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pFVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)pFVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      uVar7 = (ulong)*(uint *)(uVar8 + 0x73);
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      uVar7 = (ulong)*(uint *)(uVar8 + 0x73);
    }
    goto LAB_00f7b5d4;
  }
  uVar7 = (ulong)*puVar9;
LAB_00f7b5d4:
  uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | uVar7) + 0x1b)
  ;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pFVar1;
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
  }
  plVar6 = (long *)NewJSArrayBufferView(this,puVar5,this + 0x3c0,param_3,param_4,uVar13 * param_5);
  *(ulong *)(*plVar6 + 0x1f) = param_5;
  lVar11 = *plVar6;
  lVar10 = *(long *)(*param_3 + 0x13);
  *(undefined4 *)(lVar11 + 0x2f) = 0;
  *(ulong *)(lVar11 + 0x27) = lVar10 + param_4;
  return;
}

