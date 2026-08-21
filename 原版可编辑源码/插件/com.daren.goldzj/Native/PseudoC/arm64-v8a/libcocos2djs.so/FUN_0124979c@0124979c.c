
void FUN_0124979c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = v8::internal::JSPromise::Resolve(*(undefined8 *)(param_1 + 8));
  lVar3 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 4) << 0x20;
  uVar2 = *(ulong *)(lVar3 + 0x2bd8);
  if ((uVar2 & 1) == 0) {
    if (lVar1 != 0) {
LAB_012497f4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "promise_result.is_null() == promise_->GetIsolate()->has_pending_exception()");
    }
  }
  else if ((lVar1 != 0) == ((int)uVar2 != *(int *)(lVar3 + 0xa8))) goto LAB_012497f4;
  return;
}

