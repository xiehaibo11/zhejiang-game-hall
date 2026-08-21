
/* v8::internal::Object::ToObjectImpl(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, char const*) */

ulong * v8::internal::Object::ToObjectImpl(Isolate *param_1,ulong *param_2,char *param_3)

{
  Isolate *pIVar1;
  byte bVar2;
  ulong *puVar3;
  CanonicalHandleScope *this;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *local_50;
  size_t sStack_48;
  
  uVar7 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  pIVar1 = param_1 + 0x95a0;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar7;
    uVar7 = *param_2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
    uVar7 = *param_2;
  }
  if ((uVar7 & 1) == 0) {
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar7 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0x1ef);
  }
  else {
    bVar2 = *(byte *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 - 1)) + 4);
    if (bVar2 == 0) {
      if (param_3 == (char *)0x0) {
        uVar6 = 0xae;
        lVar4 = 0;
      }
      else {
        sStack_48 = strlen(param_3);
        local_50 = param_3;
        lVar4 = Factory::NewStringFromOneByte(param_1,&local_50,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        uVar6 = 0x1a;
      }
      puVar5 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar6,lVar4,0,0);
      Isolate::Throw(param_1,*puVar5,0);
      return (ulong *)0x0;
    }
    this = *(CanonicalHandleScope **)(param_1 + 0x95b8);
    uVar7 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + (ulong)bVar2 * 4 + 7);
  }
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar7;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup(this,uVar7);
  }
  puVar3 = (ulong *)Factory::NewJSObject((Factory *)param_1,puVar3,0);
  uVar9 = *puVar3;
  uVar7 = *param_2;
  *(int *)(uVar9 + 0xb) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar7);
    }
  }
  return puVar3;
}

