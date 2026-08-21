
/* v8::internal::TorqueGeneratedClassVerifiers::JSRegExpVerify(v8::internal::JSRegExp,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSRegExpVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x42e) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSRegExp()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
      (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76 < 0xf)))) {
    uVar1 = *(uint *)(local_38 + 0xf);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) &&
       ((uVar3 = uVar3 | 7, *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40 ||
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
      uVar1 = *(uint *)(local_38 + 0x13);
      uVar2 = local_38 & 0xffffffff00000000;
      uVar3 = uVar2 | uVar1;
      Object::VerifyPointer(param_2,uVar3);
      if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x43)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","flags__value.IsSmi() || flags__value.IsOddball()");
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","source__value.IsString() || source__value.IsOddball()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","data__value.IsOddball() || data__value.IsFixedArray()");
}

