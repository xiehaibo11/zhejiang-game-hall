
/* v8::internal::JSReceiver::DefineProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8
v8::internal::JSReceiver::DefineProperty
          (Factory *param_1,Factory *param_2,ulong *param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(ulong *)param_2;
  if (((uVar4 & 1) == 0) ||
     (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
    local_50 = __strlen_chk("Object.defineProperty",0x16);
    local_58 = "Object.defineProperty";
    uVar2 = Factory::InternalizeUtf8String(param_1,(Vector *)&local_58);
    puVar3 = (undefined8 *)Factory::NewTypeError(param_1,0x19,uVar2,0,0);
    uVar2 = Isolate::Throw((Isolate *)param_1,*puVar3,0);
    return uVar2;
  }
  uVar4 = *param_3;
  if (((uVar4 & 1) != 0) &&
     (0x40 < *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)))) {
    param_3 = (ulong *)Object::ConvertToPropertyKey(param_1,param_3);
  }
  if (param_3 != (ulong *)0x0) {
    local_58 = (char *)((ulong)local_58 & 0xffffffffffffff00);
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uVar4 = PropertyDescriptor::ToPropertyDescriptor(param_1,param_4,&local_58);
    if (((uVar4 & 1) == 0) ||
       (uVar1 = DefineOwnProperty(param_1,param_2,param_3,&local_58,1), (uVar1 & 0xff) == 0)) {
      param_2 = param_1 + 0x180;
    }
    else if (uVar1 < 0x100) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","success.FromJust()");
    }
    return *(undefined8 *)param_2;
  }
  return *(undefined8 *)(param_1 + 0x180);
}

