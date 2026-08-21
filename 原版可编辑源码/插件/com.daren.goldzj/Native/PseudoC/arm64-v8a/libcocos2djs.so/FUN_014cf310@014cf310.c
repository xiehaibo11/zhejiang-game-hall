
undefined8 FUN_014cf310(undefined8 param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  Isolate *pIVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar8 = *(ulong *)(param_2 + -8);
  if (((uVar8 & 1) == 0) ||
     (*(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)) < 0xa9)) {
    local_60 = __strlen_chk("Reflect.getOwnPropertyDescriptor",0x21);
    local_68 = "Reflect.getOwnPropertyDescriptor";
    lVar5 = v8::internal::Factory::NewStringFromOneByte(param_3,&local_68,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    puVar6 = (undefined8 *)v8::internal::Factory::NewTypeError((Factory *)param_3,0x19,lVar5,0,0);
    uVar9 = v8::internal::Isolate::Throw(param_3,*puVar6,0);
  }
  else {
    puVar7 = (ulong *)(param_2 + -0x10);
    uVar8 = *puVar7;
    if (((uVar8 & 1) == 0) ||
       (0x40 < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) {
      puVar7 = (ulong *)v8::internal::Object::ConvertToName(param_3,puVar7);
    }
    if (puVar7 == (ulong *)0x0) {
      uVar9 = *(undefined8 *)(param_3 + 0x180);
    }
    else {
      local_68 = (char *)((ulong)local_68 & 0xffffffffffffff00);
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uVar3 = v8::internal::JSReceiver::GetOwnPropertyDescriptor
                        (param_3,(ulong *)(param_2 + -8),puVar7,&local_68);
      if ((uVar3 & 0xff) == 0) {
        pIVar4 = param_3 + 0x180;
      }
      else if (uVar3 < 0x100) {
        pIVar4 = param_3 + 0xa0;
      }
      else {
        pIVar4 = (Isolate *)
                 v8::internal::PropertyDescriptor::ToObject((PropertyDescriptor *)&local_68,param_3)
        ;
      }
      uVar9 = *(undefined8 *)pIVar4;
    }
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

