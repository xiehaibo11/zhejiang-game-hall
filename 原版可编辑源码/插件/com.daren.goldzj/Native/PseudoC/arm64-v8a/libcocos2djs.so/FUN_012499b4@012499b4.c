
void FUN_012499b4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    lVar1 = v8::internal::JSPromise::Reject(*(undefined8 *)(param_1 + 0x18),param_2,1);
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x2bd8);
    if ((uVar2 & 1) == 0) {
      if (lVar1 != 0) {
LAB_01249a18:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","promise_result.is_null() == isolate_->has_pending_exception()"
                );
      }
    }
    else if ((lVar1 != 0) == ((int)uVar2 != *(int *)(*(long *)(param_1 + 0x10) + 0xa8)))
    goto LAB_01249a18;
  }
  return;
}

