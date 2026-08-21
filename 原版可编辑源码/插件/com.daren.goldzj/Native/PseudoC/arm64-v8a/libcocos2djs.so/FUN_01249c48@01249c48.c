
void FUN_01249c48(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = v8::internal::JSPromise::Reject(*(undefined8 *)(param_1 + 0x10),param_2,1);
  uVar2 = *(ulong *)(*(long *)(param_1 + 8) + 0x2bd8);
  if ((uVar2 & 1) == 0) {
    if (lVar1 != 0) {
LAB_01249c9c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","promise_result.is_null() == isolate_->has_pending_exception()");
    }
  }
  else if ((lVar1 != 0) == ((int)uVar2 != *(int *)(*(long *)(param_1 + 8) + 0xa8)))
  goto LAB_01249c9c;
  return;
}

