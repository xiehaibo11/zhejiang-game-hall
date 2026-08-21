
/* v8::internal::ValueSerializer::WriteJSArrayBufferView(v8::internal::JSArrayBufferView) */

undefined2 __thiscall
v8::internal::ValueSerializer::WriteJSArrayBufferView(ValueSerializer *this,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  void *pvVar7;
  uchar uVar8;
  ulong uVar9;
  size_t local_28;
  
  if (this[0x28] != (ValueSerializer)0x0) {
    pIVar5 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = param_2;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),param_2);
    }
    uVar3 = WriteHostObject(this,puVar6);
    return uVar3;
  }
  lVar2 = *(long *)(this + 0x18);
  uVar1 = lVar2 + 1;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_28 = 0;
    uVar9 = *(ulong *)(this + 0x20) * 2;
    if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
      uVar9 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar7 = realloc(*(void **)(this + 0x10),uVar9 + 0x40);
      local_28 = uVar9 + 0x40;
    }
    else {
      pvVar7 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar7 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_011427d8;
    }
    *(void **)(this + 0x10) = pvVar7;
    *(size_t *)(this + 0x20) = local_28;
  }
  else {
    pvVar7 = *(void **)(this + 0x10);
  }
  *(ulong *)(this + 0x18) = uVar1;
  *(undefined1 *)((long)pvVar7 + lVar2) = 0x56;
LAB_011427d8:
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x41b) {
    local_28 = param_2;
    uVar4 = JSTypedArray::type((JSTypedArray *)&local_28);
    switch(uVar4) {
    case 2:
      uVar8 = 'B';
      break;
    case 3:
      uVar8 = 'w';
      break;
    case 4:
      uVar8 = 'W';
      break;
    case 5:
      uVar8 = 'd';
      break;
    case 6:
      uVar8 = 'D';
      break;
    case 7:
      uVar8 = 'f';
      break;
    case 8:
      uVar8 = 'F';
      break;
    case 9:
      uVar8 = 'C';
      break;
    case 10:
      uVar8 = 'q';
      break;
    case 0xb:
      uVar8 = 'Q';
      break;
    default:
      uVar8 = 'b';
    }
  }
  else {
    uVar8 = '?';
  }
  WriteVarint<unsigned_char>(this,uVar8);
  WriteVarint<unsigned_int>(this,*(uint *)(param_2 + 0xf));
  WriteVarint<unsigned_int>(this,*(uint *)(param_2 + 0x17));
  if (this[0x29] == (ValueSerializer)0x0) {
    uVar3 = 0x101;
  }
  else {
    ThrowDataCloneError(this,0x169,*(long *)this + 200);
    uVar3 = 0;
  }
  return uVar3;
}

