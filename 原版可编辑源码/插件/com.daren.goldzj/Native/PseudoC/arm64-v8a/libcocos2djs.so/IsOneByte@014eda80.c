
/* v8::internal::ExternalizeStringExtension::IsOneByte(v8::FunctionCallbackInfo<v8::Value> const&)
    */

void v8::internal::ExternalizeStringExtension::IsOneByte(FunctionCallbackInfo *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  Isolate *pIVar4;
  
  if (((*(int *)(param_1 + 0x10) == 1) && (uVar2 = **(ulong **)(param_1 + 8), (uVar2 & 3) == 1)) &&
     (uVar3 = uVar2 & 0xffffffff00000000 | 7, *(ushort *)(uVar3 + (long)*(int *)(uVar2 - 1)) < 0x40)
     ) {
    lVar1 = 0xc0;
    if ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) & 8) != 0) {
      lVar1 = 0xb8;
    }
    *(undefined8 *)(*(long *)param_1 + 0x18) =
         *(undefined8 *)(lVar1 + *(long *)(*(long *)param_1 + 8));
    return;
  }
  pIVar4 = *(Isolate **)(*(long *)param_1 + 8);
  lVar1 = v8::String::NewFromUtf8
                    (pIVar4,"isOneByteString() requires a single string argument.",0,0xffffffff);
  if (lVar1 == 0) {
    v8::V8::ToLocalEmpty();
  }
  v8::Isolate::ThrowException(pIVar4,lVar1);
  return;
}

