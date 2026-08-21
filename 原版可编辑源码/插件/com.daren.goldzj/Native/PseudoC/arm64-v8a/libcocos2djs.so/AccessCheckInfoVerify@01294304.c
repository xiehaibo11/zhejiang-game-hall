
/* v8::internal::TorqueGeneratedClassVerifiers::AccessCheckInfoVerify(v8::internal::AccessCheckInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::AccessCheckInfoVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x50) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsAccessCheckInfo()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
     (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "callback__value.IsOddball() || callback__value.IsSmi() || callback__value.IsForeign()"
            );
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x5f)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "named_interceptor__value.IsOddball() || named_interceptor__value.IsSmi() || named_interceptor__value.IsInterceptorInfo()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x5f)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "indexed_interceptor__value.IsOddball() || indexed_interceptor__value.IsSmi() || indexed_interceptor__value.IsInterceptorInfo()"
            );
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0xf));
  return;
}

