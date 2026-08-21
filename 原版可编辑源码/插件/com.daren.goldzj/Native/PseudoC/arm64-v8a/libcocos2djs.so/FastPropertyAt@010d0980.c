
/* v8::internal::JSObject::FastPropertyAt(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Representation, v8::internal::FieldIndex) */

void v8::internal::JSObject::FastPropertyAt(ulong *param_1,undefined1 param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  Isolate *pIVar4;
  
  uVar3 = *param_1;
  pIVar4 = (Isolate *)(uVar3 & 0xffffffff00000000);
  if (((uint)param_3 >> 0xd & 1) == 0) {
    uVar2 = *(uint *)(uVar3 + 3);
    if (((uVar2 & 1) == 0) || (uVar2 == *(uint *)(pIVar4 + 0x168))) {
      uVar3 = *(ulong *)(pIVar4 + 0x3b8);
    }
    else {
      uVar3 = (ulong)pIVar4 | (ulong)uVar2;
    }
    uVar2 = *(uint *)(((param_3 & 0x1ffc) - (param_3 >> 0x1a & 0x7c)) + uVar3 + 7);
  }
  else {
    uVar2 = *(uint *)((param_3 & 0x1fff) + uVar3 + -1);
  }
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar1 + 1;
    *puVar1 = (ulong)pIVar4 | (ulong)uVar2;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),
                                 (ulong)pIVar4 | (ulong)uVar2);
  }
  Object::WrapForRead(pIVar4,puVar1,param_2);
  return;
}

