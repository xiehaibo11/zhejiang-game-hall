
/* v8::internal::Runtime::GetObjectProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>, bool*) */

undefined8
v8::internal::Runtime::GetObjectProperty
          (Isolate *param_1,ulong *param_2,ulong *param_3,long param_4)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  LookupIterator aLStack_90 [4];
  int local_8c;
  char local_34 [4];
  
  iVar4 = (int)*param_2;
  if (((*param_2 & 1) == 0) ||
     ((iVar4 != *(int *)(param_1 + 0xb0) && (iVar4 != *(int *)(param_1 + 0xa0))))) {
    local_34[0] = '\0';
    LookupIterator::PropertyOrElement(aLStack_90,param_1,param_2,param_3,local_34,3);
    if (local_34[0] != '\0') {
      uVar1 = Object::GetProperty(aLStack_90,false);
      if (param_4 != 0) {
        *(bool *)param_4 = local_8c != 4;
      }
      if (local_8c != 4) {
        return uVar1;
      }
      uVar5 = *param_3;
      if ((uVar5 & 1) == 0) {
        return uVar1;
      }
      if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x40) {
        return uVar1;
      }
      if ((*(byte *)(uVar5 + 7) >> 4 & 1) == 0) {
        return uVar1;
      }
      uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(param_1 + 0x95a0);
        if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar5;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      }
      puVar3 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,0x104,puVar2,param_2,0);
      Isolate::Throw(param_1,*puVar3,0);
    }
  }
  else {
    ErrorUtils::ThrowLoadFromNullOrUndefined(param_1,param_2,param_3);
  }
  return 0;
}

