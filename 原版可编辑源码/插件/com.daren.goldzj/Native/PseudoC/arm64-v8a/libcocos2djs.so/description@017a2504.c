
/* v8::internal::compiler::Truncation::description() const */

char * __thiscall v8::internal::compiler::Truncation::description(Truncation *this)

{
  int iVar1;
  
  switch(*this) {
  case (Truncation)0x0:
    return "no-value-use";
  case (Truncation)0x1:
    return "truncate-to-bool";
  case (Truncation)0x2:
    return "truncate-to-word32";
  case (Truncation)0x3:
    return "truncate-to-word64";
  case (Truncation)0x4:
    iVar1 = *(int *)(this + 4);
    if (iVar1 == 0) {
      return "truncate-oddball&bigint-to-number (identify zeros)";
    }
    if (iVar1 == 1) {
      return "truncate-oddball&bigint-to-number (distinguish zeros)";
    }
    break;
  case (Truncation)0x5:
    iVar1 = *(int *)(this + 4);
    break;
  default:
    goto switchD_017a2538_default;
  }
  if (iVar1 == 0) {
    return "no-truncation (but identify zeros)";
  }
  if (iVar1 == 1) {
    return "no-truncation (but distinguish zeros)";
  }
switchD_017a2538_default:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

