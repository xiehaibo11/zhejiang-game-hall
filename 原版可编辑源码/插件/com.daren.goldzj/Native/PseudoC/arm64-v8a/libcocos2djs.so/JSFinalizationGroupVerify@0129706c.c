
/* v8::internal::TorqueGeneratedClassVerifiers::JSFinalizationGroupVerify(v8::internal::JSFinalizationGroup,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSFinalizationGroupVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x42a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSFinalizationGroup()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x8f)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","native_context__value.IsNativeContext()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0xf));
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa8)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "active_cells__value.IsOddball() || active_cells__value.IsWeakCell()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa8)))) {
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x1b))
    ;
    uVar1 = *(uint *)(local_38 + 0x1f);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) &&
       ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x42a)))) {
      uVar1 = *(uint *)(local_38 + 0x23);
      Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
      if ((uVar1 & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","next__value.IsOddball() || next__value.IsJSFinalizationGroup()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "cleared_cells__value.IsOddball() || cleared_cells__value.IsWeakCell()");
}

