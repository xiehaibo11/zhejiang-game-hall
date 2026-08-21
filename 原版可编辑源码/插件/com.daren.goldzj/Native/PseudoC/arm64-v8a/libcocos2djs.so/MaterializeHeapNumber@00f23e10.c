
/* v8::internal::TranslatedState::MaterializeHeapNumber(v8::internal::TranslatedFrame*, int*,
   v8::internal::TranslatedValue*) */

void __thiscall
v8::internal::TranslatedState::MaterializeHeapNumber
          (TranslatedState *this,TranslatedFrame *param_1,int *param_2,TranslatedValue *param_3)

{
  TranslatedValue *this_00;
  TranslatedValue TVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) +
                   ((ulong)(*(long *)(param_1 + 0x48) + (long)*param_2) >> 4 & 0xffffffffffffff8));
  uVar5 = *(long *)(param_1 + 0x48) + (long)*param_2 & 0x7f;
  this_00 = (TranslatedValue *)(lVar4 + uVar5 * 0x20);
  TVar1 = *this_00;
  if ((byte)TVar1 == 8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "TranslatedValue::kCapturedObject != frame->values_[*value_index].kind()");
  }
  if (this_00[1] != (TranslatedValue)0x2) {
    if (6 < (byte)TVar1 - 1) {
      if (TVar1 != (TranslatedValue)0x9) {
        if (TVar1 != (TranslatedValue)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("internal error: value missing");
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unexpected case");
      }
      lVar4 = lVar4 + uVar5 * 0x20;
      EnsureObjectAllocatedAt(*(TranslatedState **)(lVar4 + 8),this_00);
      puVar2 = (ulong *)InitializeObjectAt(*(TranslatedState **)(lVar4 + 8),this_00);
      uVar5 = *puVar2;
      goto joined_r0x00f23ec8;
    }
    TranslatedValue::MaterializeSimple(this_00);
  }
  uVar5 = **(ulong **)(lVar4 + uVar5 * 0x20 + 0x10);
joined_r0x00f23ec8:
  if ((uVar5 & 1) == 0) {
    dVar6 = (double)((int)uVar5 >> 1);
  }
  else {
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","value->IsNumber()");
    }
    dVar6 = *(double *)(uVar5 + 3);
  }
  plVar3 = (long *)Factory::NewHeapNumber<(v8::internal::AllocationType)0>
                             (*(Factory **)(this + 0x18));
  *(double *)(*plVar3 + 3) = dVar6;
  *param_2 = *param_2 + 1;
  *(long **)(param_3 + 0x10) = plVar3;
  return;
}

