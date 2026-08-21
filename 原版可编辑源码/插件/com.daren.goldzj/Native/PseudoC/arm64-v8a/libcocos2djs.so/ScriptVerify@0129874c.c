
/* v8::internal::TorqueGeneratedClassVerifiers::ScriptVerify(v8::internal::Script,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ScriptVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  if (*(short *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x65) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsScript()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 3));
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 7));
  uVar1 = *(uint *)(local_38 + 0xb);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","line_offset__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","column_offset__value.IsSmi()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x13));
  uVar1 = *(uint *)(local_38 + 0x17);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x1b))
    ;
    uVar1 = *(uint *)(local_38 + 0x1f);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","id__value.IsSmi()");
    }
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x23))
    ;
    uVar1 = *(uint *)(local_38 + 0x27);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x46)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "eval_from_position__value.IsSmi() || eval_from_position__value.IsForeign()");
    }
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x2b))
    ;
    uVar1 = *(uint *)(local_38 + 0x2f);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      Object::VerifyPointer
                (param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x33));
      Object::VerifyPointer
                (param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x37));
      Object::VerifyPointer
                (param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x3b));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","script_type__value.IsSmi()");
}

