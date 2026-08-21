
undefined8 FUN_014cef98(undefined8 param_1,long param_2,Factory *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  Factory *pFVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *(ulong *)(param_2 + -8);
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xa9)) {
    local_60 = __strlen_chk("Reflect.defineProperty",0x17);
    local_68 = "Reflect.defineProperty";
    lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_68,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError(param_3,0x19,lVar5,0,0);
    uVar8 = v8::internal::Isolate::Throw((Isolate *)param_3,*puVar6,0);
    goto LAB_014cf0d8;
  }
  puVar9 = (ulong *)(param_2 + -0x10);
  uVar7 = *puVar9;
  if (((uVar7 & 1) == 0) ||
     (0x40 < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
    puVar9 = (ulong *)v8::internal::Object::ConvertToName(param_3,puVar9);
  }
  if (puVar9 == (ulong *)0x0) {
    uVar8 = *(undefined8 *)(param_3 + 0x180);
    goto LAB_014cf0d8;
  }
  local_68 = (char *)((ulong)local_68 & 0xffffffffffffff00);
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar7 = v8::internal::PropertyDescriptor::ToPropertyDescriptor(param_3,param_2 + -0x18,&local_68);
  if ((uVar7 & 1) == 0) {
LAB_014cf11c:
    pFVar4 = param_3 + 0x180;
  }
  else {
    uVar3 = v8::internal::JSReceiver::DefineOwnProperty
                      (param_3,(ulong *)(param_2 + -8),puVar9,&local_68,0x100000001);
    if ((uVar3 & 0xff) == 0) goto LAB_014cf11c;
    pFVar4 = (Factory *)v8::internal::Factory::ToBoolean(param_3,0xff < uVar3);
  }
  uVar8 = *(undefined8 *)pFVar4;
LAB_014cf0d8:
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions((Isolate *)param_3);
  }
  return uVar8;
}

