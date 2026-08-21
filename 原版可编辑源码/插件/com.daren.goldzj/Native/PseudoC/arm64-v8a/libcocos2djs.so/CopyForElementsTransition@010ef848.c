
/* v8::internal::Map::CopyForElementsTransition(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>) */

undefined8 * v8::internal::Map::CopyForElementsTransition(Isolate *param_1,ulong *param_2)

{
  Isolate *pIVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_28;
  
  puVar2 = (undefined8 *)CopyDropDescriptors();
  uVar5 = *param_2;
  if ((*(uint *)(uVar5 + 0xb) >> 0x16 & 1) == 0) {
    pIVar1 = param_1 + 0x95a0;
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x17);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    puVar3 = (ulong *)DescriptorArray::CopyUpTo
                                (param_1,puVar3,*(uint *)(*param_2 + 0xb) >> 10 & 0x3ff,0);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(undefined8 **)pIVar1;
      if (puVar4 == *(undefined8 **)(param_1 + 0x95a8)) {
        puVar4 = (undefined8 *)HandleScope::Extend(param_1);
      }
      *(undefined8 **)pIVar1 = puVar4 + 1;
      *puVar4 = 0;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
    }
    local_28 = *puVar2;
    uVar5 = *puVar3;
  }
  else {
    *(uint *)(uVar5 + 0xb) = *(uint *)(uVar5 + 0xb) & 0xffbfffff;
    local_28 = *puVar2;
    uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  }
  SetInstanceDescriptors((Map *)&local_28,param_1,uVar5,(int)*(short *)(uVar5 + 5));
  return puVar2;
}

