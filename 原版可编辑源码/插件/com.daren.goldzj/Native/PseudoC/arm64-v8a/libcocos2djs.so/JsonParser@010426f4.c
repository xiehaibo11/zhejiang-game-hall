
/* v8::internal::JsonParser<unsigned char>::JsonParser(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::String>) */

void __thiscall
v8::internal::JsonParser<unsigned_char>::JsonParser
          (JsonParser<unsigned_char> *this,Isolate *param_1,ulong *param_3)

{
  Isolate *pIVar1;
  int iVar2;
  JsonParser<unsigned_char> JVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *(Isolate **)this = param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)(param_1 + 0x490) + 7);
  uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar6;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  *(ulong **)(this + 0x18) = puVar4;
  *(ulong **)(this + 0x20) = param_3;
  *(undefined8 *)(this + 0x28) = 0;
  uVar8 = *param_3;
  iVar2 = *(int *)(uVar8 + 7);
  uVar6 = uVar8 & 0xffffffff00000000;
  uVar7 = uVar6 | 7;
  if ((*(ushort *)(uVar7 + *(uint *)(uVar8 - 1)) < 0x40) &&
     ((*(ushort *)(uVar7 + *(uint *)(uVar8 - 1)) & 7) == 3)) {
    uVar9 = uVar6 | *(uint *)(uVar8 + 0xb);
    lVar10 = (long)((ulong)*(uint *)(uVar8 + 0xf) << 0x20) >> 0x21;
    if ((*(ushort *)(uVar7 + *(uint *)(uVar9 - 1)) < 0x40) &&
       ((*(ushort *)(uVar7 + *(uint *)(uVar9 - 1)) & 7) == 5)) {
      uVar9 = uVar6 | *(uint *)(uVar9 + 0xb);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar9;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar9);
    }
  }
  else {
    puVar4 = (ulong *)String::Flatten(param_1,param_3,0);
    lVar10 = 0;
  }
  *(ulong **)(this + 0x28) = puVar4;
  uVar6 = *puVar4;
  JVar3 = (JsonParser<unsigned_char>)
          ((*(ushort *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 7) & 7) != 2);
  if ((bool)JVar3) {
    Heap::AddGCEpilogueCallback((Heap *)(param_1 + 0x8850),UpdatePointersCallback,0xf,this);
    lVar5 = **(long **)(this + 0x28) + 0xb;
  }
  else {
    lVar5 = (**(code **)(**(long **)(uVar6 + 0xb) + 0x30))();
  }
  this[0x11] = JVar3;
  *(long *)(this + 0x30) = lVar5 + lVar10;
  *(long *)(this + 0x38) = lVar5 + lVar10 + (long)iVar2;
  *(long *)(this + 0x40) = lVar5;
  return;
}

