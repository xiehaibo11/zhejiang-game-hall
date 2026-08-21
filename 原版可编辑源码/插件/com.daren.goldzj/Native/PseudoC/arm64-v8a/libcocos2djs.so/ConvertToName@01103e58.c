
/* v8::internal::Object::ConvertToName(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::Object::ConvertToName(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (((uVar2 & 1) != 0) &&
     (0x43 < *(ushort *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7))) {
    param_2 = (ulong *)JSReceiver::ToPrimitive(param_2,2);
  }
  if ((param_2 != (ulong *)0x0) &&
     ((uVar2 = *param_2, (uVar2 & 1) == 0 ||
      ((uVar3 = uVar2 & 0xffffffff00000000 | 7, 0x40 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
       (0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))))))) {
    puVar1 = (ulong *)ConvertToString(param_1,param_2);
    return puVar1;
  }
  return param_2;
}

