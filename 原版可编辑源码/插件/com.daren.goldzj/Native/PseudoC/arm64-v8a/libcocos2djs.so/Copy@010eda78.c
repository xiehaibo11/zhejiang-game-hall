
/* v8::internal::Map::Copy(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Map>, char
   const*) */

void v8::internal::Map::Copy(Isolate *param_1,ulong *param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  pIVar1 = param_1 + 0x95a0;
  uVar5 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x17);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)pIVar1;
    if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar2 + 1;
    *puVar2 = uVar5;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  uVar3 = DescriptorArray::CopyUpTo(param_1,puVar2,*(uint *)(*param_2 + 0xb) >> 10 & 0x3ff,0);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(undefined8 **)pIVar1;
    if (puVar4 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar4 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)pIVar1 = puVar4 + 1;
    *puVar4 = 0;
  }
  else {
    puVar4 = (undefined8 *)
             CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),0);
  }
  CopyReplaceDescriptors(param_1,param_2,uVar3,puVar4,1,0,param_3,2);
  return;
}

