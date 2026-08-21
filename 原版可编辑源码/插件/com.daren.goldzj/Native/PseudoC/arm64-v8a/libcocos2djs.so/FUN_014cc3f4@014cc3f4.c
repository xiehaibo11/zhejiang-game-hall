
undefined8 FUN_014cc3f4(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ushort uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  Isolate *pIVar9;
  undefined8 uVar10;
  undefined1 local_78 [8];
  undefined8 local_70;
  ulong *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar7 = param_2 + -1;
  uVar8 = *param_2;
  if (((uVar8 & 1) == 0) ||
     (puVar5 = param_2, puVar3 = puStack_68,
     *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)) {
    puVar5 = (ulong *)v8::internal::Object::ToObjectImpl(param_3,param_2,0);
    puVar3 = puStack_68;
  }
  if (puVar5 == (ulong *)0x0) {
    uVar10 = *(undefined8 *)(param_3 + 0x180);
    puStack_68 = puVar3;
  }
  else {
    puStack_68 = param_2 + -2;
    uVar8 = *puStack_68;
    if (((uVar8 & 1) == 0) ||
       ((*(byte *)((uVar8 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar8 - 1)) >> 1 & 1) == 0))
    {
      puStack_68 = puVar3;
      puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x68,0,0,0);
      uVar10 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
    }
    else {
      local_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      local_78[0] = 0xf;
      uVar8 = *puVar7;
      if (((uVar8 & 1) != 0) &&
         (0x40 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
        puVar7 = (ulong *)v8::internal::Object::ConvertToPropertyKey(param_3,puVar7);
      }
      if ((puVar7 == (ulong *)0x0) ||
         (uVar4 = v8::internal::JSReceiver::DefineOwnProperty(param_3,puVar5,puVar7,local_78,1),
         (uVar4 & 0xff) == 0)) {
        pIVar9 = param_3 + 0x180;
      }
      else {
        if (uVar4 < 0x100) {
          v8::internal::Isolate::CountUsage(param_3,0x22);
        }
        pIVar9 = param_3 + 0xa0;
      }
      uVar10 = *(undefined8 *)pIVar9;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar10;
}

