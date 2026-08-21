
/* v8::internal::Object::SetPropertyWithAccessor(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

undefined8
v8::internal::Object::SetPropertyWithAccessor(long param_1,ulong param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  Isolate *this;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  ulong *puVar13;
  ulong local_b0;
  long local_a8;
  undefined8 uStack_a0;
  ulong local_48;
  
  this = *(Isolate **)(param_1 + 0x18);
  pIVar1 = this + 0x95a0;
  puVar5 = (ulong *)LookupIterator::GetAccessors();
  puVar11 = *(ulong **)(param_1 + 0x30);
  uVar7 = *puVar11;
  if (((uVar7 & 1) != 0) &&
     (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0xaa)) {
    uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xf);
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(this + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar7;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
    }
  }
  uVar7 = *puVar5;
  puVar13 = *(ulong **)(param_1 + 0x38);
  uVar8 = uVar7 & 0xffffffff00000000;
  if (((uVar7 & 1) == 0) || (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x51)) {
    uVar2 = *(uint *)(uVar7 + 7);
    uVar8 = uVar8 | uVar2;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(this + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar8;
      if ((uVar2 & 1) != 0) goto LAB_01108c08;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
      uVar8 = *puVar5;
      if ((uVar8 & 1) != 0) {
LAB_01108c08:
        uVar7 = uVar8 & 0xffffffff00000000;
        if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x4e) {
          local_48 = *puVar13;
          puVar6 = (undefined8 *)JSReceiver::GetCreationContext((JSReceiver *)&local_48);
          SaveAndSwitchContext::SaveAndSwitchContext((SaveAndSwitchContext *)&local_b0,this,*puVar6)
          ;
          local_48 = param_2;
          lVar12 = Builtins::InvokeApiFunction(this,0,puVar5,puVar11,1,&local_48,this + 0xa0);
          uVar10 = 0;
          if (lVar12 != 0) {
            uVar10 = 0x101;
          }
          SaveContext::~SaveContext((SaveContext *)&local_b0);
          return uVar10;
        }
        if ((*(byte *)((uVar7 | 9) + (ulong)*(uint *)(uVar8 - 1)) >> 1 & 1) != 0) {
          local_b0 = param_2;
          lVar12 = Execution::Call(uVar7,puVar5,puVar11,1,&local_b0);
          if (lVar12 == 0) {
            return 0;
          }
          return 0x101;
        }
      }
    }
    iVar4 = GetShouldThrow(this,param_3);
    if (iVar4 == 1) {
      return 1;
    }
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 == 0) {
      lVar12 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar12;
    }
    puVar11 = *(ulong **)(param_1 + 0x38);
    uVar10 = 0x56;
LAB_01108cd8:
    puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)this,uVar10,lVar12,puVar11,0);
    Isolate::Throw(this,*puVar6,0);
LAB_01108cf0:
    uVar10 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x20);
    if (lVar12 == 0) {
      lVar12 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar12;
      uVar7 = *puVar5;
      uVar8 = uVar7 & 0xffffffff00000000;
      uVar2 = *(uint *)(uVar7 + 0xb);
      uVar3 = local_b0;
    }
    else {
      uVar2 = *(uint *)(uVar7 + 0xb);
      uVar3 = local_b0;
    }
    if ((uVar2 & 1) != 0) {
      local_b0 = uVar8 | uVar2;
      uVar9 = *puVar11;
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)(local_b0 - 1)) == 0x4e) {
        if ((((uVar9 & 1) == 0) ||
            (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xaa)) ||
           (uVar7 = FunctionTemplateInfo::IsTemplateFor
                              ((FunctionTemplateInfo *)&local_b0,
                               uVar9 & 0xffffffff00000000 | (ulong)*(uint *)(uVar9 - 1)),
           uVar3 = local_b0, (uVar7 & 1) == 0)) {
          local_b0 = uVar3;
          uVar10 = 0x3d;
          goto LAB_01108cd8;
        }
        uVar7 = *puVar5;
      }
    }
    local_b0 = uVar3;
    if (*(int *)(uVar7 + 0xf) == 0) {
      return 0x101;
    }
    if (((*(byte *)(uVar7 + 7) >> 4 & 1) != 0) &&
       ((uVar8 = *puVar11, (uVar8 & 1) == 0 ||
        (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)))) {
      puVar11 = (ulong *)ConvertReceiver(this,puVar11);
      if (puVar11 == (ulong *)0x0) goto LAB_01108cf0;
      uVar7 = *puVar5;
    }
    PropertyCallbackArguments::PropertyCallbackArguments
              ((PropertyCallbackArguments *)&local_b0,this,
               uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1b),*puVar11,*puVar13,param_3
              );
    puVar11 = (ulong *)PropertyCallbackArguments::CallAccessorSetter
                                 ((PropertyCallbackArguments *)&local_b0,puVar5,lVar12,param_2);
    if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
      if (puVar11 == (ulong *)0x0) {
        uVar10 = 0x101;
      }
      else {
        local_48 = *puVar11;
        uVar7 = BooleanValue((Object *)&local_48,this);
        uVar10 = 0x101;
        if ((uVar7 & 1) == 0) {
          uVar10 = 1;
        }
      }
    }
    else {
      Isolate::PromoteScheduledException(this);
      uVar10 = 0;
    }
    *(undefined8 *)(local_a8 + 0xb790) = uStack_a0;
  }
  return uVar10;
}

