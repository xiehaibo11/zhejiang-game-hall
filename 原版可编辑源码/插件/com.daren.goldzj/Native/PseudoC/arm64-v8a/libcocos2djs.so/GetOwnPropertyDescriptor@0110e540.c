
/* v8::internal::JSProxy::GetOwnPropertyDescriptor(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSProxy>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::PropertyDescriptor*) */

undefined2
v8::internal::JSProxy::GetOwnPropertyDescriptor
          (Isolate *param_1,ulong *param_2,Isolate *param_3,PropertyDescriptor *param_4)

{
  Isolate *pIVar1;
  undefined2 uVar2;
  ushort uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte local_88 [8];
  long local_80;
  long lStack_78;
  long local_70;
  undefined8 uStack_68;
  ulong *local_60;
  Isolate *pIStack_58;
  
  uVar4 = GetCurrentStackPosition();
  if (uVar4 < *(ulong *)(param_1 + 0x58)) {
    Isolate::StackOverflow(param_1);
    return 0;
  }
  pIVar1 = param_1 + 0x95a0;
  uVar4 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)pIVar1;
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  uVar10 = *param_2;
  uVar4 = uVar10 & 0xffffffff00000000;
  if (*(ushort *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | *(uint *)(uVar10 + 0xb)) - 1)) < 0xa9) {
    uVar9 = 0x90;
    param_3 = param_1 + 0x708;
  }
  else {
    uVar4 = uVar4 | *(uint *)(uVar10 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)pIVar1;
      if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar7 + 1;
      *puVar7 = uVar4;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    puVar8 = (ulong *)Object::GetMethod(puVar5,param_1 + 0x708);
    if (puVar8 == (ulong *)0x0) {
      return 0;
    }
    if (((*puVar8 & 1) != 0) && ((int)*puVar8 == *(int *)(param_1 + 0xa0))) {
      uVar2 = JSReceiver::GetOwnPropertyDescriptor(param_1,puVar7,param_3,param_4);
      return uVar2;
    }
    local_60 = puVar7;
    pIStack_58 = param_3;
    puVar5 = (ulong *)Execution::Call(param_1,puVar8,puVar5,2,&local_60);
    if (puVar5 == (ulong *)0x0) {
      return 0;
    }
    uVar4 = *puVar5;
    if (((uVar4 & 1) == 0) ||
       ((*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9 &&
        ((int)uVar4 != *(int *)(param_1 + 0xa0))))) {
      uVar9 = 0x7f;
    }
    else {
      local_88[0] = 0;
      lStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uVar3 = JSReceiver::GetOwnPropertyDescriptor(param_1,puVar7,param_3,local_88);
      if ((uVar3 & 0xff) == 0) {
        return 0;
      }
      if (((*puVar5 & 1) == 0) || ((int)*puVar5 != *(int *)(param_1 + 0xa0))) {
        uVar3 = JSReceiver::IsExtensible(puVar7);
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
        uVar4 = PropertyDescriptor::ToPropertyDescriptor(param_1,puVar5,param_4);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        PropertyDescriptor::CompletePropertyDescriptor(param_1,param_4);
        uVar3 = JSReceiver::IsCompatiblePropertyDescriptor
                          (param_1,0xff < uVar3,param_4,local_88,param_3,0x100000001);
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
        if (uVar3 < 0x100) {
          uVar9 = 0x7e;
        }
        else {
          if (((byte)*param_4 >> 2 & 1) != 0) {
            return 0x101;
          }
          if ((((((local_88[0] & 0x2a) == 0) && (local_80 == 0)) && (lStack_78 == 0)) &&
              (local_70 == 0)) || ((local_88[0] >> 2 & 1) != 0)) {
            uVar9 = 0x80;
          }
          else {
            if (((byte)*param_4 & 0x30) != 0x20) {
              return 0x101;
            }
            if ((local_88[0] >> 4 & 1) == 0) {
              return 0x101;
            }
            uVar9 = 0x81;
          }
        }
      }
      else {
        if (uVar3 < 0x100) {
          return 1;
        }
        if ((local_88[0] >> 2 & 1) == 0) {
          uVar9 = 0x83;
        }
        else {
          uVar3 = JSReceiver::IsExtensible(puVar7);
          if ((uVar3 & 0xff) == 0) {
            return 0;
          }
          if (0xff < uVar3) {
            return 1;
          }
          uVar9 = 0x82;
        }
      }
    }
  }
  puVar6 = (undefined8 *)Factory::NewTypeError((Factory *)param_1,uVar9,param_3,0,0);
  Isolate::Throw(param_1,*puVar6,0);
  return 0;
}

