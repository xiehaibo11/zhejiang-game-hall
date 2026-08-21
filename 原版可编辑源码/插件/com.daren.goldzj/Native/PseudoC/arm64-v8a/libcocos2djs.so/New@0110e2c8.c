
/* v8::internal::JSProxy::New(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 v8::internal::JSProxy::New(Factory *param_1,ulong *param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *param_2;
  if ((uVar3 & 1) != 0) {
    uVar4 = uVar3 & 0xffffffff00000000 | 7;
    if (0xa8 < *(ushort *)(uVar4 + *(uint *)(uVar3 - 1))) {
      if ((*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0xa9) &&
         (*(ushort *)
           (uVar4 + *(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb)) - 1)) <
          0xa9)) {
LAB_0110e320:
        uVar2 = 0x86;
        goto LAB_0110e384;
      }
      uVar3 = *param_3;
      if ((uVar3 & 1) != 0) {
        uVar4 = uVar3 & 0xffffffff00000000 | 7;
        if (0xa8 < *(ushort *)(uVar4 + *(uint *)(uVar3 - 1))) {
          if ((*(short *)(uVar4 + *(uint *)(uVar3 - 1)) != 0xa9) ||
             (0xa8 < *(ushort *)
                      (uVar4 + *(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb)
                                         ) - 1)))) {
            uVar2 = Factory::NewJSProxy(param_1);
            return uVar2;
          }
          goto LAB_0110e320;
        }
      }
    }
  }
  uVar2 = 0x8a;
LAB_0110e384:
  puVar1 = (undefined8 *)Factory::NewTypeError(param_1,uVar2,0,0,0);
  Isolate::Throw((Isolate *)param_1,*puVar1,0);
  return 0;
}

