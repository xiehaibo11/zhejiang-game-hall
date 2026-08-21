
/* v8::internal::Runtime::SetObjectProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::StoreOrigin,
   v8::Maybe<v8::internal::ShouldThrow>) */

undefined8
v8::internal::Runtime::SetObjectProperty
          (Isolate *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,undefined4 param_5,
          undefined8 param_6)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  LookupIterator aLStack_a0 [4];
  int local_9c;
  char local_44 [4];
  
  iVar4 = (int)*param_2;
  if (((*param_2 & 1) == 0) ||
     ((iVar4 != *(int *)(param_1 + 0xb0) && (iVar4 != *(int *)(param_1 + 0xa0))))) {
    local_44[0] = '\0';
    LookupIterator::PropertyOrElement(aLStack_a0,param_1,param_2,param_3,local_44,3);
    if (local_44[0] == '\0') {
      return 0;
    }
    if ((((local_9c != 4) || (uVar5 = *param_3, (uVar5 & 1) == 0)) ||
        (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x40)) ||
       ((*(byte *)(uVar5 + 7) >> 4 & 1) == 0)) {
      cVar1 = Object::SetProperty(aLStack_a0,param_4,param_5,param_6);
      if (cVar1 != '\0') {
        return param_4;
      }
      return 0;
    }
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_3 = *(ulong **)(param_1 + 0x95a0);
      if (param_3 == *(ulong **)(param_1 + 0x95a8)) {
        param_3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = param_3 + 1;
      *param_3 = uVar5;
    }
    else {
      param_3 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    uVar3 = 0x105;
  }
  else {
    uVar3 = 0x55;
  }
  puVar2 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar3,param_3,param_2,0);
  Isolate::Throw(param_1,*puVar2,0);
  return 0;
}

