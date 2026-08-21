
/* v8::internal::JSProxy::DefineOwnProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSProxy>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::JSProxy::DefineOwnProperty
          (Isolate *param_1,ulong *param_2,Isolate *param_3,PropertyDescriptor *param_4,
          undefined8 param_5)

{
  PropertyDescriptor PVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  Isolate *pIVar11;
  undefined8 uVar12;
  Isolate *pIVar13;
  ulong uVar14;
  ulong local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong *local_78;
  Isolate *pIStack_70;
  undefined8 local_68;
  
  uVar6 = GetCurrentStackPosition();
  if (uVar6 < *(ulong *)(param_1 + 0x58)) {
    Isolate::StackOverflow(param_1);
    return 0;
  }
  uVar6 = *(ulong *)param_3;
  if (((((uVar6 & 1) != 0) &&
       (uVar14 = uVar6 & 0xffffffff00000000 | 7, *(short *)(uVar14 + *(uint *)(uVar6 - 1)) == 0x40))
      && (*(short *)(uVar14 + *(uint *)(uVar6 - 1)) == 0x40)) && ((*(byte *)(uVar6 + 7) & 1) != 0))
  {
    uVar2 = SetPrivateSymbol(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  pIVar11 = param_1 + 0x95a0;
  pIVar13 = param_1 + 0x5f0;
  uVar6 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)pIVar11;
    if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar11 = puVar7 + 1;
    *puVar7 = uVar6;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
  }
  uVar14 = *param_2;
  uVar6 = uVar14 & 0xffffffff00000000;
  if (*(ushort *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | *(uint *)(uVar14 + 0xb)) - 1)) < 0xa9) {
    uVar12 = 0x90;
    pIVar11 = pIVar13;
  }
  else {
    uVar6 = uVar6 | *(uint *)(uVar14 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar9 = *(ulong **)pIVar11;
      if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar11 = puVar9 + 1;
      *puVar9 = uVar6;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    puVar10 = (ulong *)Object::GetMethod(puVar7,pIVar13);
    if (puVar10 == (ulong *)0x0) {
      return 0;
    }
    if (((*puVar10 & 1) != 0) && ((int)*puVar10 == *(int *)(param_1 + 0xa0))) {
      uVar2 = JSReceiver::DefineOwnProperty(param_1,puVar9,param_3,param_4,param_5);
      return uVar2;
    }
    local_68 = PropertyDescriptor::ToObject(param_4,param_1);
    uVar6 = *(ulong *)param_3;
    if (((uVar6 & 1) == 0) ||
       (pIVar11 = param_3,
       0x40 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
      pIVar11 = (Isolate *)Factory::NumberToString((Factory *)param_1,param_3,1);
    }
    local_78 = puVar9;
    pIStack_70 = pIVar11;
    puVar7 = (ulong *)Execution::Call(param_1,puVar10,puVar7,3,&local_78);
    if (puVar7 == (ulong *)0x0) {
      return 0;
    }
    local_a0 = *puVar7;
    uVar6 = Object::BooleanValue((Object *)&local_a0,param_1);
    if ((uVar6 & 1) == 0) {
      iVar5 = GetShouldThrow(param_1,param_5);
      if (iVar5 == 1) {
        return 1;
      }
      uVar12 = 0x95;
      goto LAB_0110f308;
    }
    local_a0 = local_a0 & 0xffffffffffffff00;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    uVar3 = JSReceiver::GetOwnPropertyDescriptor(param_1,puVar9,param_3,&local_a0);
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    uVar4 = JSReceiver::IsExtensible(puVar9);
    if ((uVar4 & 0xff) == 0) {
      return 0;
    }
    PVar1 = *param_4;
    if (uVar3 < 0x100) {
      if (uVar4 < 0x100) {
        uVar12 = 0x78;
      }
      else {
        if (((byte)PVar1 & 0xc) != 8) {
          return 0x101;
        }
LAB_0110f598:
        uVar12 = 0x76;
      }
    }
    else {
      uVar3 = JSReceiver::IsCompatiblePropertyDescriptor
                        (param_1,0xff < uVar4,param_4,&local_a0,pIVar11,0x100000001);
      if ((uVar3 & 0xff) == 0) {
        return 0;
      }
      if (uVar3 < 0x100) {
        uVar12 = 0x79;
      }
      else {
        if ((((byte)PVar1 & 0xc) == 8) && (((byte)local_a0._0_1_ >> 2 & 1) != 0)) goto LAB_0110f598;
        if ((local_a0 & 0x20) == 0 && local_98 == 0) {
          return 0x101;
        }
        if (((byte)local_a0._0_1_ & 0x14) != 0x10) {
          return 0x101;
        }
        if (((byte)*param_4 & 0x30) != 0x20) {
          return 0x101;
        }
        uVar12 = 0x77;
      }
    }
  }
  pIVar13 = pIVar11;
  pIVar11 = (Isolate *)0x0;
LAB_0110f308:
  puVar8 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar12,pIVar13,pIVar11,0);
  Isolate::Throw(param_1,*puVar8,0);
  return 0;
}

