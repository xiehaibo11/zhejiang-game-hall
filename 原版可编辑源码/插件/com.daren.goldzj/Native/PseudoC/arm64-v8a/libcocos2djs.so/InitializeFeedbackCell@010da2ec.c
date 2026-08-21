
/* v8::internal::JSFunction::InitializeFeedbackCell(v8::internal::Handle<v8::internal::JSFunction>)
    */

void v8::internal::JSFunction::InitializeFeedbackCell(ulong *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar2 = uVar3 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar2 | *(uint *)(uVar3 + 0xb)) + 3);
  if ((uVar1 != 0x84) &&
     ((((uVar1 & 1) == 0 ||
       (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95)) &&
      (*(short *)((uVar2 | 7) +
                 (ulong)*(uint *)((uVar2 | *(uint *)((uVar2 | *(uint *)(uVar3 + 0x13)) + 3)) - 1))
       == 0x9f)))) {
    uVar2 = *param_1 & 0xffffffff00000000;
    uVar3 = uVar2 | *(uint *)((uVar2 | *(uint *)(*param_1 + 0x13)) + 3);
    if (*(int *)(uVar3 + 0xf) !=
        *(int *)((uVar2 | *(uint *)((uVar2 | *(uint *)(uVar3 + 3)) + 0xb)) + 3)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "function->feedback_vector().length() == function->feedback_vector().metadata().slot_count()"
              );
    }
    return;
  }
  if (((*(int *)(uVar2 + 0xb814) != 1) &&
      (FLAG_lazy_feedback_allocation == '\x01' && FLAG_log_function_events == '\0')) &&
     ((*(int *)(uVar2 + 0xb810) == 0 && (FLAG_always_opt == '\0')))) {
    EnsureClosureFeedbackCellArray();
    return;
  }
  EnsureFeedbackVector();
  return;
}

