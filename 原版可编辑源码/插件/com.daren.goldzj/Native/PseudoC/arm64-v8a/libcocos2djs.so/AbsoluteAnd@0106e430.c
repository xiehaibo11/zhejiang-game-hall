
/* v8::internal::MutableBigInt::AbsoluteAnd(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BigIntBase>, v8::internal::Handle<v8::internal::BigIntBase>,
   v8::internal::MutableBigInt) */

undefined8 v8::internal::MutableBigInt::AbsoluteAnd(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_01cb2638;
  uVar2 = AbsoluteBitwiseOp();
  if (local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_0106e4a0;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)(local_40);
LAB_0106e4a0:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

