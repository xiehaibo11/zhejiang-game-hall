
/* v8::internal::TranslatedValue::GetRawValue() const */

long __thiscall v8::internal::TranslatedValue::GetRawValue(TranslatedValue *this)

{
  ulong uVar1;
  
  if (this[1] == (TranslatedValue)0x2) {
    return **(long **)(this + 0x10);
  }
  switch(*this) {
  case (TranslatedValue)0x1:
    return *(long *)(this + 0x18);
  case (TranslatedValue)0x2:
    uVar1 = (ulong)*(int *)(this + 0x18);
    break;
  case (TranslatedValue)0x3:
    uVar1 = *(ulong *)(this + 0x18);
    break;
  case (TranslatedValue)0x4:
    uVar1 = (ulong)*(uint *)(this + 0x18);
    if (*(uint *)(this + 0x18) >> 0x1e != 0) goto switchD_00f1cc2c_default;
    goto LAB_00f1cc94;
  case (TranslatedValue)0x5:
    if (*(int *)(this + 0x18) == 0) {
      return *(long *)(*(long *)(*(long *)(this + 8) + 0x18) + 0xc0);
    }
    if (*(int *)(this + 0x18) != 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","1U == uint32_value()");
    }
    return *(long *)(*(long *)(*(long *)(this + 8) + 0x18) + 0xb8);
  default:
    goto switchD_00f1cc2c_default;
  }
  if (uVar1 + 0x40000000 >> 0x1f == 0) {
LAB_00f1cc94:
    return uVar1 << 1;
  }
switchD_00f1cc2c_default:
  return *(long *)(*(long *)(*(long *)(this + 8) + 0x18) + 0x178);
}

