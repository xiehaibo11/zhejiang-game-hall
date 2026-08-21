
/* v8::internal::Literal::ToBooleanIsTrue() const */

ulong __thiscall v8::internal::Literal::ToBooleanIsTrue(Literal *this)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  
  uVar1 = 0;
  switch(*(uint *)(this + 4) >> 7 & 0xf) {
  case 0:
    uVar3 = *(uint *)(this + 8);
    break;
  case 1:
    uVar1 = DoubleToBoolean(*(double *)(this + 8));
    return uVar1;
  case 2:
    pcVar6 = *(char **)(this + 8);
    sVar2 = strlen(pcVar6);
    if ((sVar2 != 1) || (*pcVar6 != '0')) {
      uVar1 = (ulong)(*pcVar6 == '0');
      uVar5 = uVar1 * 2;
      if (uVar5 < sVar2) {
        lVar4 = sVar2 + uVar1 * -2;
        pcVar6 = pcVar6 + uVar5;
        do {
          if (*pcVar6 != '0') {
            return 1;
          }
          lVar4 = lVar4 + -1;
          pcVar6 = pcVar6 + 1;
        } while (lVar4 != 0);
        return 0;
      }
    }
    return 0;
  case 3:
    uVar3 = *(uint *)(*(long *)(this + 8) + 0x10);
    break;
  case 4:
    return 1;
  case 5:
    uVar3 = (uint)(byte)this[8];
    break;
  case 6:
  case 7:
    goto switchD_014963c8_caseD_6;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar1 = (ulong)(uVar3 != 0);
switchD_014963c8_caseD_6:
  return uVar1;
}

