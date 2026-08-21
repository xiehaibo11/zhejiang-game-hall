
/* v8::internal::TorqueGeneratedClassVerifiers::InterceptorInfoVerify(v8::internal::InterceptorInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::InterceptorInfoVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x5f) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsInterceptorInfo()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
     (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "getter__value.IsOddball() || getter__value.IsSmi() || getter__value.IsForeign()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "setter__value.IsOddball() || setter__value.IsSmi() || setter__value.IsForeign()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "query__value.IsOddball() || query__value.IsSmi() || query__value.IsForeign()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "descriptor__value.IsOddball() || descriptor__value.IsSmi() || descriptor__value.IsForeign()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "deleter__value.IsOddball() || deleter__value.IsSmi() || deleter__value.IsForeign()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "enumerator__value.IsOddball() || enumerator__value.IsSmi() || enumerator__value.IsForeign()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x1b);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "definer__value.IsOddball() || definer__value.IsSmi() || definer__value.IsForeign()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x1f));
  uVar1 = *(uint *)(local_38 + 0x23);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
}

