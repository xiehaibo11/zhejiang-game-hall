
/* v8::internal::JSRegExp::JSRegExpVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSRegExp::JSRegExpVerify(JSRegExp *this,Isolate *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  TorqueGeneratedClassVerifiers::JSRegExpVerify(*(undefined8 *)this);
  uVar2 = *(uint *)(*(ulong *)this + 0xb);
  uVar7 = *(ulong *)this & 0xffffffff00000000;
  uVar6 = uVar7 | uVar2;
  if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(uVar7 + 0xa0))) {
    iVar1 = *(int *)(uVar6 + 7) >> 1;
    if (iVar1 == 2) {
      uVar2 = *(uint *)(uVar6 + 0x13);
      if ((uVar2 & 1) == 0) {
        if (uVar2 < 0xfffffffe) {
LAB_00f2e594:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "(one_byte_data.IsSmi() && Smi::ToInt(one_byte_data) == JSRegExp::kUninitializedValue) || one_byte_data.IsCode()"
                  );
        }
      }
      else if (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) != 0x9a)
      goto LAB_00f2e594;
      uVar3 = *(uint *)(uVar6 + 0x17);
      if ((uVar3 & 1) == 0) {
        if (uVar3 < 0xfffffffe) {
LAB_00f2e610:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "(uc16_data.IsSmi() && Smi::ToInt(uc16_data) == JSRegExp::kUninitializedValue) || uc16_data.IsCode()"
                  );
        }
      }
      else if (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar3) - 1)) != 0x9a)
      goto LAB_00f2e610;
      uVar4 = *(uint *)(uVar6 + 0x1b);
      if ((uVar4 & 1) == 0) {
        if (uVar4 < 0xfffffffe) {
LAB_00f2e6c0:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "(one_byte_bytecode.IsSmi() && Smi::ToInt(one_byte_bytecode) == JSRegExp::kUninitializedValue) || (can_be_interpreted && one_byte_bytecode.IsByteArray())"
                  );
        }
      }
      else if (((FLAG_regexp_tier_up & 1) == 0 && FLAG_regexp_interpret_all == '\0') ||
              (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar4) - 1)) != 0x85))
      goto LAB_00f2e6c0;
      uVar5 = *(uint *)(uVar6 + 0x1f);
      if ((uVar5 & 1) == 0) {
        if (uVar5 < 0xfffffffe) {
LAB_00f2e6f4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "(uc16_bytecode.IsSmi() && Smi::ToInt(uc16_bytecode) == JSRegExp::kUninitializedValue) || (can_be_interpreted && uc16_bytecode.IsByteArray())"
                  );
        }
      }
      else if (((FLAG_regexp_tier_up & 1) == 0 && FLAG_regexp_interpret_all == '\0') ||
              (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar5) - 1)) != 0x85))
      goto LAB_00f2e6f4;
      if (((uVar2 & 1) == 0) && ((uVar4 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","one_byte_data.IsSmi() implies one_byte_bytecode.IsSmi()");
      }
      if (((uVar3 & 1) == 0) && ((uVar5 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","uc16_data.IsSmi() implies uc16_bytecode.IsSmi()");
      }
      if ((*(uint *)(uVar6 + 0x27) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","arr.get(JSRegExp::kIrregexpCaptureCountIndex).IsSmi()");
      }
      if ((*(uint *)(uVar6 + 0x23) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","arr.get(JSRegExp::kIrregexpMaxRegisterCountIndex).IsSmi()");
      }
      if ((*(uint *)(uVar6 + 0x2f) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","arr.get(JSRegExp::kIrregexpTicksUntilTierUpIndex).IsSmi()");
      }
      if ((*(uint *)(uVar6 + 0x33) & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","arr.get(JSRegExp::kIrregexpBacktrackLimit).IsSmi()");
    }
    if (iVar1 == 1) {
      if (((*(uint *)(uVar6 + 0x13) & 1) != 0) &&
         (*(ushort *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | *(uint *)(uVar6 + 0x13)) - 1)) < 0x40)
         ) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","arr.get(JSRegExp::kAtomPatternIndex).IsString()");
    }
    if ((uVar2 & 1) != 0) goto LAB_00f2e5ac;
  }
  else {
LAB_00f2e5ac:
    if (uVar2 == *(uint *)(uVar7 + 0xa0)) goto LAB_00f2e5c8;
  }
  if (1 < *(uint *)(uVar6 + 7)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","JSRegExp::NOT_COMPILED == TypeTag()");
  }
LAB_00f2e5c8:
  if (uVar2 == *(uint *)(param_1 + 0xa0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","data().IsUndefined(isolate)");
}

