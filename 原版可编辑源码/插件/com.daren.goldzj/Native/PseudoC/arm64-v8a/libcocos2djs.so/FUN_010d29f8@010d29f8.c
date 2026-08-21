
undefined8 FUN_010d29f8(long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  Isolate *this;
  long lVar6;
  PropertyCallbackArguments local_90 [8];
  long local_88;
  undefined8 uStack_80;
  
  uVar5 = *param_2;
  lVar6 = *(long *)(param_1 + 0x18);
  if (((*(uint *)(uVar5 + 7) & 1) == 0) || (*(uint *)(uVar5 + 7) != *(uint *)(lVar6 + 0xa0))) {
    puVar1 = *(ulong **)(param_1 + 0x38);
    uVar4 = **(ulong **)(param_1 + 0x30);
    if (((uVar4 & 1) == 0) ||
       (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
      puVar3 = (ulong *)v8::internal::Object::ConvertReceiver(lVar6);
      if (puVar3 == (ulong *)0x0) {
        return 0;
      }
      uVar5 = *param_2;
      uVar4 = *puVar3;
    }
    v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
              (local_90,lVar6,uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x1f),uVar4,
               *puVar1,param_3);
    uVar5 = *(ulong *)(param_1 + 0x48);
    if ((uVar5 < 0xffffffff) ||
       ((uVar5 != 0xffffffffffffffff &&
        (uVar4 = *puVar1,
        (byte)((*(byte *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 10) >> 3) -
              0x11) < 0xb)))) {
      lVar6 = v8::internal::PropertyCallbackArguments::CallIndexedSetter
                        (local_90,param_2,uVar5,param_4);
    }
    else {
      lVar6 = v8::internal::PropertyCallbackArguments::CallNamedSetter
                        (local_90,param_2,*(undefined8 *)(param_1 + 0x20),param_4);
    }
    this = *(Isolate **)(param_1 + 0x18);
    if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
      uVar2 = 0x101;
      if (lVar6 == 0) {
        uVar2 = 1;
      }
    }
    else {
      v8::internal::Isolate::PromoteScheduledException(this);
      uVar2 = 0;
    }
    *(undefined8 *)(local_88 + 0xb790) = uStack_80;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

