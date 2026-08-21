
/* v8::internal::TorqueGeneratedClassVerifiers::ThinStringVerify(v8::internal::ThinString,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ThinStringVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  String::StringVerify((String *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if ((0x3f < *(ushort *)(uVar3 + *(uint *)(local_38 - 1))) ||
     ((*(ushort *)(uVar3 + *(uint *)(local_38 - 1)) & 7) != 5)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsThinString()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","actual__value.IsString()");
}

