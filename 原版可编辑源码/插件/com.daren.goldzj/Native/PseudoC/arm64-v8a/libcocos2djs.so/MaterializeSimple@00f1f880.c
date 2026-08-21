
/* v8::internal::TranslatedValue::MaterializeSimple() */

void __thiscall v8::internal::TranslatedValue::MaterializeSimple(TranslatedValue *this)

{
  ulong uVar1;
  ulong *puVar2;
  Isolate *this_00;
  double dVar3;
  
  if (this[1] != (TranslatedValue)0x2) {
    uVar1 = GetRawValue(this);
    this_00 = *(Isolate **)(*(long *)(this + 8) + 0x18);
    if ((int)uVar1 == *(int *)(this_00 + 0x178)) {
      switch(*this) {
      case (TranslatedValue)0x0:
      case (TranslatedValue)0x1:
      case (TranslatedValue)0x5:
      case (TranslatedValue)0x8:
      case (TranslatedValue)0x9:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("internal error: unexpected materialization.");
      case (TranslatedValue)0x2:
        dVar3 = (double)(long)*(int *)(this + 0x18);
        break;
      case (TranslatedValue)0x3:
        dVar3 = (double)*(long *)(this + 0x18);
        break;
      case (TranslatedValue)0x4:
        dVar3 = (double)NEON_ucvtf((ulong)*(uint *)(this + 0x18));
        break;
      case (TranslatedValue)0x6:
        dVar3 = (double)*(float *)(this + 0x18);
        break;
      case (TranslatedValue)0x7:
        dVar3 = *(double *)(this + 0x18);
        break;
      default:
        goto switchD_00f1f8dc_default;
      }
      puVar2 = (ulong *)Factory::NewNumber<(v8::internal::AllocationType)0>
                                  ((Factory *)this_00,dVar3);
    }
    else if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(this_00 + 0x95a0);
      if (puVar2 == *(ulong **)(this_00 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(this_00);
      }
      *(ulong **)(this_00 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar1;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar1);
    }
    *(ulong **)(this + 0x10) = puVar2;
    this[1] = (TranslatedValue)0x2;
  }
switchD_00f1f8dc_default:
  return;
}

