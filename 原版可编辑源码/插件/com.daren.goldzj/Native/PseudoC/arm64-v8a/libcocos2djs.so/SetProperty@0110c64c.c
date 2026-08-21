
/* v8::internal::Object::SetProperty(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::StoreOrigin,
   v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::Object::SetProperty
          (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  Factory *this;
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  char local_34 [4];
  
  if (*(int *)(param_1 + 4) != 4) {
    local_34[0] = '\x01';
    uVar1 = SetPropertyInternal(param_1,param_2,param_4,param_4,local_34);
    if (local_34[0] != '\0') {
      return uVar1;
    }
  }
  uVar5 = **(ulong **)(param_1 + 0x30);
  if ((((uVar5 & 1) == 0) ||
      (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xaa)) ||
     (iVar2 = GetShouldThrow(*(undefined8 *)(param_1 + 0x18),param_4), iVar2 != 0)) {
    uVar1 = AddDataProperty(param_1,param_2,0,param_4,param_3);
  }
  else {
    this = *(Factory **)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      lVar3 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar3;
    }
    puVar4 = (undefined8 *)Factory::NewReferenceError(this,0xb2,lVar3,0,0);
    Isolate::Throw((Isolate *)this,*puVar4,0);
    uVar1 = 0;
  }
  return uVar1;
}

