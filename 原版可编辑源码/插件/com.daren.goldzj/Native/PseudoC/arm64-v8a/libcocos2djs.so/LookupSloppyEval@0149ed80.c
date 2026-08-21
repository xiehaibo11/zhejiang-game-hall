
/* v8::internal::Scope::LookupSloppyEval(v8::internal::VariableProxy*, v8::internal::Scope*,
   v8::internal::Scope*, v8::internal::Scope*, bool) */

Variable *
v8::internal::Scope::LookupSloppyEval
          (VariableProxy *param_1,Scope *param_2,Scope *param_3,Scope *param_4,bool param_5)

{
  Scope *pSVar1;
  Variable *this;
  ulong uVar2;
  Variable *pVVar3;
  Scope *pSVar4;
  ushort uVar5;
  VariableProxy *pVVar6;
  undefined1 auStack_44 [4];
  void *local_40;
  undefined1 auStack_34 [4];
  
  pSVar4 = *(Scope **)(param_2 + 8);
  if (*(long *)(pSVar4 + 0x68) == 0) {
    this = Lookup<(v8::internal::Scope::ScopeLookupMode)0>
                     (param_1,pSVar4,param_3,(Scope *)0x0,param_5);
  }
  else {
    pSVar1 = pSVar4;
    if (param_4 != (Scope *)0x0) {
      pSVar1 = param_4;
    }
    this = Lookup<(v8::internal::Scope::ScopeLookupMode)1>(param_1,pSVar4,param_3,pSVar1,false);
  }
  if (this != (Variable *)0x0) {
    uVar2 = Variable::IsGlobalObjectProperty(this);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(ushort *)(this + 0x28);
      pVVar3 = this;
    }
    else {
      pSVar4 = param_2;
      if (param_4 != (Scope *)0x0) {
        pSVar4 = param_4;
      }
      pVVar6 = param_1 + 8;
      if (((byte)param_1[5] & 1) != 0) {
        pVVar6 = (VariableProxy *)(*(long *)pVVar6 + 8);
      }
      pVVar3 = (Variable *)
               VariableMap::Declare
                         ((VariableMap *)(pSVar4 + 0x20),*(undefined8 *)pSVar4,pSVar4,
                          *(undefined8 *)pVVar6,5,0,1,0,0,auStack_44);
      *(undefined4 *)(pVVar3 + 0x20) = 0xffffffff;
      uVar5 = *(ushort *)(pVVar3 + 0x28) & 0xfc7f;
      *(ushort *)(pVVar3 + 0x28) = uVar5 | 0x200;
    }
    this = pVVar3;
    if (2 < ((uVar5 & 0xf) - 4 & 0xff)) {
      if (param_4 != (Scope *)0x0) {
        local_40 = *(void **)(pVVar3 + 8);
        base::
        TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
        ::Remove((TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
                  *)(param_4 + 0x20),&local_40,*(uint *)((long)local_40 + 0x18) >> 3);
      }
      if (param_4 != (Scope *)0x0) {
        param_2 = param_4;
      }
      pVVar6 = param_1 + 8;
      if (((byte)param_1[5] & 1) != 0) {
        pVVar6 = (VariableProxy *)(*(long *)pVVar6 + 8);
      }
      this = (Variable *)
             VariableMap::Declare
                       ((VariableMap *)(param_2 + 0x20),*(undefined8 *)param_2,param_2,
                        *(undefined8 *)pVVar6,6,0,1,0,0,auStack_34);
      *(Variable **)(this + 0x10) = pVVar3;
      *(undefined4 *)(this + 0x20) = 0xffffffff;
      *(ushort *)(this + 0x28) = *(ushort *)(this + 0x28) & 0xfc7f | 0x200;
    }
  }
  return this;
}

