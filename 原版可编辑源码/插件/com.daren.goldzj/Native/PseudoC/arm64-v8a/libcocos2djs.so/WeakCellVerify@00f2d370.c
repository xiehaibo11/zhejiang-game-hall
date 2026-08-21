
/* v8::internal::WeakCell::WeakCellVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::WeakCell::WeakCellVerify(WeakCell *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000;
  uVar2 = uVar3 | 7;
  if (*(short *)(uVar2 + *(uint *)(uVar4 - 1)) != 0xa8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsWeakCell()");
  }
  if ((*(ushort *)(uVar2 + *(uint *)((uVar3 | *(uint *)(uVar4 + 7)) - 1)) < 0xa9) &&
     (*(uint *)(uVar4 + 7) != *(uint *)(param_1 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","target().IsJSReceiver() || target().IsUndefined(isolate)");
  }
  uVar5 = uVar3 | *(uint *)(uVar4 + 0xf);
  if ((*(short *)(uVar2 + *(uint *)(uVar5 - 1)) != 0xa8) &&
     (*(uint *)(uVar4 + 0xf) != *(uint *)(param_1 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","prev().IsWeakCell() || prev().IsUndefined(isolate)");
  }
  if ((*(short *)(uVar2 + *(uint *)(uVar5 - 1)) == 0xa8) && (*(int *)(uVar5 + 0x13) != (int)uVar4))
  {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","WeakCell::cast(prev()).next() == *this");
  }
  uVar5 = uVar3 | *(uint *)(uVar4 + 0x13);
  if ((*(short *)(uVar2 + *(uint *)(uVar5 - 1)) != 0xa8) &&
     (*(uint *)(uVar4 + 0x13) != *(uint *)(param_1 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","next().IsWeakCell() || next().IsUndefined(isolate)");
  }
  if ((*(short *)(uVar2 + *(uint *)(uVar5 - 1)) == 0xa8) && (*(int *)(uVar5 + 0xf) != (int)uVar4)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","WeakCell::cast(next()).prev() == *this");
  }
  uVar1 = *(uint *)(uVar4 + 0x17);
  if (((uVar1 & 1) != 0) && (uVar1 == *(uint *)(param_1 + 0xa0))) {
    if (*(uint *)(uVar4 + 0x1b) != uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "key().IsUndefined(isolate) implies key_list_prev().IsUndefined(isolate)");
    }
    if (*(uint *)(uVar4 + 0x1f) != uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "key().IsUndefined(isolate) implies key_list_next().IsUndefined(isolate)");
    }
  }
  if ((*(short *)(uVar2 + *(uint *)((uVar3 | *(uint *)(uVar4 + 0x1b)) - 1)) != 0xa8) &&
     (*(uint *)(uVar4 + 0x1b) != *(uint *)(param_1 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "key_list_prev().IsWeakCell() || key_list_prev().IsUndefined(isolate)");
  }
  if ((*(short *)(uVar2 + *(uint *)((uVar3 | *(uint *)(uVar4 + 0x1f)) - 1)) != 0xa8) &&
     (*(uint *)(uVar4 + 0x1f) != *(uint *)(param_1 + 0xa0))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "key_list_next().IsWeakCell() || key_list_next().IsUndefined(isolate)");
  }
  if ((*(uint *)(uVar4 + 3) != *(uint *)(param_1 + 0xa0)) &&
     (*(short *)(uVar2 + *(uint *)((uVar3 | *(uint *)(uVar4 + 3)) - 1)) != 0x42a)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "finalization_group().IsUndefined(isolate) || finalization_group().IsJSFinalizationGroup()"
            );
  }
  return;
}

