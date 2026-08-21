
/* v8::internal::TorqueGeneratedClassVerifiers::SlicedStringVerify(v8::internal::SlicedString,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SlicedStringVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  String::StringVerify((String *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if ((0x3f < *(ushort *)(uVar3 + *(uint *)(local_38 - 1))) ||
     ((*(ushort *)(uVar3 + *(uint *)(local_38 - 1)) & 7) != 3)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSlicedString()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40)) {
    uVar1 = *(uint *)(local_38 + 0xf);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","offset__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","parent__value.IsString()");
}

