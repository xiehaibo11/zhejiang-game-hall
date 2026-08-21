
/* v8::internal::Scope::LookupWith(v8::internal::VariableProxy*, v8::internal::Scope*,
   v8::internal::Scope*, v8::internal::Scope*, bool) */

long v8::internal::Scope::LookupWith
               (VariableProxy *param_1,Scope *param_2,Scope *param_3,Scope *param_4,bool param_5)

{
  ushort uVar1;
  Variable *this;
  long lVar2;
  Scope *pSVar3;
  VariableProxy *pVVar4;
  void *local_40;
  undefined1 auStack_34 [4];
  
  pSVar3 = *(Scope **)(param_2 + 8);
  if (*(long *)(pSVar3 + 0x68) == 0) {
    this = Lookup<(v8::internal::Scope::ScopeLookupMode)0>
                     (param_1,pSVar3,param_3,(Scope *)0x0,param_5);
  }
  else {
    this = Lookup<(v8::internal::Scope::ScopeLookupMode)1>(param_1,pSVar3,param_3,param_4,false);
  }
  if (this == (Variable *)0x0) {
    lVar2 = 0;
  }
  else {
    uVar1 = *(ushort *)(this + 0x28);
    if ((((uVar1 & 0x380) == 0) && (2 < ((uVar1 & 0xf) - 4 & 0xff))) &&
       (*(ushort *)(this + 0x28) = uVar1 | 0xc00, (char)param_1[4] < '\0')) {
      Variable::SetMaybeAssigned(this);
    }
    if (param_4 != (Scope *)0x0) {
      local_40 = *(void **)(this + 8);
      base::
      TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
      ::Remove((TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
                *)(param_4 + 0x20),&local_40,*(uint *)((long)local_40 + 0x18) >> 3);
    }
    if (param_4 != (Scope *)0x0) {
      param_2 = param_4;
    }
    pVVar4 = param_1 + 8;
    if (((byte)param_1[5] & 1) != 0) {
      pVVar4 = (VariableProxy *)(*(long *)pVVar4 + 8);
    }
    lVar2 = VariableMap::Declare
                      ((VariableMap *)(param_2 + 0x20),*(undefined8 *)param_2,param_2,
                       *(undefined8 *)pVVar4,4,0,1,0,0,auStack_34);
    *(undefined4 *)(lVar2 + 0x20) = 0xffffffff;
    *(Variable **)(lVar2 + 0x10) = this;
    *(ushort *)(lVar2 + 0x28) = *(ushort *)(lVar2 + 0x28) & 0xfc7f | 0x200;
  }
  return lVar2;
}

