
/* v8::internal::JSObject::DeletePropertyWithInterceptor(v8::internal::LookupIterator*,
   v8::internal::ShouldThrow) */

undefined8
v8::internal::JSObject::DeletePropertyWithInterceptor(LookupIterator *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  Isolate *this;
  PropertyCallbackArguments local_90 [8];
  long local_88;
  undefined8 uStack_80;
  
  this = *(Isolate **)(param_1 + 0x18);
  puVar2 = (ulong *)LookupIterator::GetInterceptor(param_1);
  uVar6 = *puVar2;
  if (((*(uint *)(uVar6 + 0x13) & 1) == 0) || (*(uint *)(uVar6 + 0x13) != *(uint *)(this + 0xa0))) {
    puVar1 = *(ulong **)(param_1 + 0x38);
    uVar5 = **(ulong **)(param_1 + 0x30);
    if (((uVar5 & 1) == 0) ||
       (*(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
      puVar4 = (ulong *)Object::ConvertReceiver(this);
      if (puVar4 == (ulong *)0x0) {
        return 0;
      }
      uVar6 = *puVar2;
      uVar5 = *puVar4;
    }
    PropertyCallbackArguments::PropertyCallbackArguments
              (local_90,this,uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x1f),uVar5,
               *puVar1,param_2 << 0x20 | 1);
    if ((*(ulong *)(param_1 + 0x48) < 0xffffffff) ||
       ((*(ulong *)(param_1 + 0x48) != 0xffffffffffffffff &&
        (uVar6 = *puVar1,
        (byte)((*(byte *)((uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1)) + 10) >> 3) -
              0x11) < 0xb)))) {
      puVar2 = (ulong *)PropertyCallbackArguments::CallIndexedDeleter(local_90,puVar2);
    }
    else {
      puVar2 = (ulong *)PropertyCallbackArguments::CallNamedDeleter
                                  (local_90,puVar2,*(undefined8 *)(param_1 + 0x20));
    }
    if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
      uVar3 = 0;
      if (puVar2 != (ulong *)0x0) {
        if ((*puVar2 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0x101;
          if ((int)*puVar2 != *(int *)(this + 0xb8)) {
            uVar3 = 1;
          }
        }
      }
    }
    else {
      Isolate::PromoteScheduledException(this);
      uVar3 = 0;
    }
    *(undefined8 *)(local_88 + 0xb790) = uStack_80;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

