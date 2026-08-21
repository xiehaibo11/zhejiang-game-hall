
/* v8::internal::FrameFunctionIterator::MaterializeFunction() */

undefined8 __thiscall
v8::internal::FrameFunctionIterator::MaterializeFunction(FrameFunctionIterator *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  JavaScriptFrame *pJVar5;
  TranslatedValue *this_00;
  TranslatedState aTStack_b0 [120];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x5c8) == 0) {
    uVar4 = *(undefined8 *)(this + 8);
  }
  else {
    pJVar5 = *(JavaScriptFrame **)(this + 0x598);
    TranslatedState::TranslatedState(aTStack_b0,pJVar5);
    TranslatedState::Prepare(aTStack_b0,*(ulong *)(pJVar5 + 0x20));
    lVar2 = TranslatedState::GetFrameFromJSFrameIndex(aTStack_b0,*(int *)(this + 0x5c8));
    if (*(long *)(lVar2 + 0x38) == *(long *)(lVar2 + 0x30)) {
      this_00 = (TranslatedValue *)0x0;
    }
    else {
      this_00 = (TranslatedValue *)
                (*(long *)(*(long *)(lVar2 + 0x30) +
                          (*(ulong *)(lVar2 + 0x48) >> 4 & 0xffffffffffffff8)) +
                (*(ulong *)(lVar2 + 0x48) & 0x7f) * 0x20);
    }
    uVar3 = TranslatedValue::IsMaterializedObject(this_00);
    uVar4 = TranslatedValue::GetValue(this_00);
    if ((uVar3 & 1) != 0) {
      TranslatedState::StoreMaterializedValuesAndDeopt(aTStack_b0,pJVar5);
    }
    TranslatedState::~TranslatedState(aTStack_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

