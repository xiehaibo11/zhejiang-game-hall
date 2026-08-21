
/* v8::internal::TranslatedState::MaterializeFixedDoubleArray(v8::internal::TranslatedFrame*, int*,
   v8::internal::TranslatedValue*, v8::internal::Handle<v8::internal::Map>) */

void v8::internal::TranslatedState::MaterializeFixedDoubleArray
               (long param_1,long param_2,int *param_3,long param_4)

{
  ulong *puVar1;
  TranslatedValue *this;
  TranslatedValue TVar2;
  int iVar3;
  long *plVar4;
  ulong *puVar5;
  int iVar6;
  double *pdVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  
  uVar9 = *(long *)(param_2 + 0x48) + (long)*param_3;
  iVar3 = TranslatedValue::GetRawValue
                    ((TranslatedValue *)
                     (*(long *)(*(long *)(param_2 + 0x30) + (uVar9 >> 4 & 0xffffffffffffff8)) +
                     (uVar9 & 0x7f) * 0x20));
  *param_3 = *param_3 + 1;
  plVar4 = (long *)Factory::NewFixedDoubleArray(*(Factory **)(param_1 + 0x18),iVar3 >> 1);
  if (iVar3 < 2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length > 0");
  }
  iVar6 = *param_3;
  uVar9 = 0;
  lVar10 = 0;
  do {
    uVar11 = *(long *)(param_2 + 0x48) + (long)iVar6;
    lVar8 = *(long *)(*(long *)(param_2 + 0x30) + (uVar11 >> 4 & 0xffffffffffffff8));
    uVar11 = uVar11 & 0x7f;
    this = (TranslatedValue *)(lVar8 + uVar11 * 0x20);
    TVar2 = *this;
    if ((byte)TVar2 == 8) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "TranslatedValue::kCapturedObject != frame->values_[*value_index].kind()");
    }
    if (this[1] == (TranslatedValue)0x2) {
LAB_00f23cd8:
      puVar5 = *(ulong **)(lVar8 + uVar11 * 0x20 + 0x10);
      uVar11 = *puVar5;
      if ((uVar11 & 1) != 0) goto LAB_00f23ce8;
LAB_00f23c54:
      dVar12 = (double)((int)uVar11 >> 1);
      pdVar7 = (double *)(*plVar4 + (uVar9 & 0xfffffff8 | 7));
LAB_00f23c6c:
      *pdVar7 = dVar12;
    }
    else {
      if ((byte)TVar2 - 1 < 7) {
        TranslatedValue::MaterializeSimple(this);
        goto LAB_00f23cd8;
      }
      if (TVar2 != (TranslatedValue)0x9) {
        if (TVar2 == (TranslatedValue)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unexpected case");
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("internal error: value missing");
      }
      lVar8 = lVar8 + uVar11 * 0x20;
      EnsureObjectAllocatedAt(*(TranslatedState **)(lVar8 + 8),this);
      puVar5 = (ulong *)InitializeObjectAt(*(TranslatedState **)(lVar8 + 8),this);
      uVar11 = *puVar5;
      if ((uVar11 & 1) == 0) goto LAB_00f23c54;
LAB_00f23ce8:
      if (*(short *)((uVar11 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x42) {
        dVar12 = *(double *)(uVar11 + 3);
        pdVar7 = (double *)(*plVar4 + (uVar9 & 0xfffffff8 | 7));
        if (!NAN(dVar12)) goto LAB_00f23c6c;
        *pdVar7 = NAN;
      }
      else {
        puVar1 = (ulong *)(*(long *)(param_1 + 0x18) + 0xa8);
        if ((puVar5 != puVar1) && ((puVar5 == (ulong *)0x0 || (uVar11 != *puVar1)))) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.",
                   "value.is_identical_to(isolate()->factory()->the_hole_value())");
        }
        *(undefined8 *)(*plVar4 + (uVar9 & 0xfffffff8 | 7)) = 0xfff7fffffff7ffff;
      }
    }
    lVar10 = lVar10 + 1;
    uVar9 = uVar9 + 8;
    iVar6 = *param_3 + 1;
    *param_3 = iVar6;
    if (iVar3 >> 1 <= lVar10) {
      *(long **)(param_4 + 0x10) = plVar4;
      return;
    }
  } while( true );
}

