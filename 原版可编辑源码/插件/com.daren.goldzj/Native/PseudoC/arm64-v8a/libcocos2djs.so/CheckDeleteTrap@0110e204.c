
/* v8::internal::JSProxy::CheckDeleteTrap(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::JSReceiver>) */

undefined8
v8::internal::JSProxy::CheckDeleteTrap(Factory *param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  byte local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_58[0] = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uVar1 = JSReceiver::GetOwnPropertyDescriptor(param_1,param_3,param_2,local_58);
  if ((uVar1 & 0xff) != 0) {
    if (uVar1 < 0x100) {
      return 0x101;
    }
    if ((local_58[0] >> 2 & 1) == 0) {
      uVar3 = 0x7a;
    }
    else {
      uVar1 = JSReceiver::IsExtensible(param_3);
      if ((uVar1 & 0xff) == 0) {
        return 0;
      }
      if (0xff < uVar1) {
        return 0x101;
      }
      uVar3 = 0x7b;
    }
    puVar2 = (undefined8 *)Factory::NewTypeError(param_1,uVar3,param_2,0,0);
    Isolate::Throw((Isolate *)param_1,*puVar2,0);
  }
  return 0;
}

