
/* v8::internal::Oddball::OddballVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Oddball::OddballVerify(Oddball *this,Isolate *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  TorqueGeneratedOddball<v8::internal::Oddball,v8::internal::PrimitiveHeapObject>::OddballVerify
            ((Isolate *)this);
  lVar3 = *(long *)this;
  uVar1 = *(uint *)(lVar3 + 0xf);
  if ((uVar1 & 1) == 0) {
    if (3 < (int)uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","value <= 1");
    }
    if ((int)uVar1 < -0xe) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","value >= kLeastHiddenOddballNumber");
    }
  }
  else if ((uVar1 != *(uint *)(param_1 + 0x430)) && (uVar1 != *(uint *)(param_1 + 0x438))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "number == ReadOnlyRoots(heap).nan_value() || number == ReadOnlyRoots(heap).hole_nan_value()"
            );
  }
  iVar2 = (int)lVar3;
  if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x358)) {
    if (iVar2 != *(int *)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.undefined_value()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x360)) {
    if (iVar2 != *(int *)(param_1 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.the_hole_value()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x368)) {
    if (iVar2 != *(int *)(param_1 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.null_value()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x370)) {
    if ((iVar2 != *(int *)(param_1 + 0xb8)) && (iVar2 != *(int *)(param_1 + 0xc0))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.true_value() || *this == roots.false_value()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x378)) {
    if (iVar2 != *(int *)(param_1 + 0x98)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.uninitialized_value()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x380)) {
    if (iVar2 != *(int *)(param_1 + 0x178)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.arguments_marker()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x390)) {
    if (iVar2 != *(int *)(param_1 + 0x188)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.termination_exception()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x388)) {
    if (iVar2 != *(int *)(param_1 + 0x180)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.exception()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x398)) {
    if (iVar2 != *(int *)(param_1 + 400)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.optimized_out()");
    }
  }
  else if (*(int *)(lVar3 + -1) == *(int *)(param_1 + 0x3a0)) {
    if (iVar2 != *(int *)(param_1 + 0x198)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","*this == roots.stale_register()");
    }
  }
  else {
    if (*(int *)(lVar3 + -1) != *(int *)(param_1 + 0x3a8)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if ((*(uint *)(lVar3 + 0x17) >> 1 & 0xff) != 10) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == Oddball::kSelfReferenceMarker");
    }
  }
  return;
}

