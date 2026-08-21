
/* v8::internal::ExternalReferenceEncoder::TryEncode(unsigned long) */

ulong __thiscall
v8::internal::ExternalReferenceEncoder::TryEncode(ExternalReferenceEncoder *this,ulong param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = **(long **)this;
  uVar1 = (int)(*(long **)this)[1] - 1;
  uVar3 = (ulong)(uVar1 & (uint)param_1);
  lVar4 = lVar2 + uVar3 * 0x18;
  if ((*(char *)(lVar4 + 0x10) != '\0') && (*(ulong *)(lVar2 + uVar3 * 0x18) != param_1)) {
    do {
      uVar3 = (ulong)((int)uVar3 + 1U & uVar1);
      if (*(char *)(lVar2 + uVar3 * 0x18 + 0x10) == '\0') break;
    } while (*(ulong *)(lVar2 + uVar3 * 0x18) != param_1);
    lVar4 = lVar2 + uVar3 * 0x18;
  }
  uVar3 = 0;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
    uVar3 = (ulong)*(uint *)(lVar4 + 8) << 0x20 | 1;
  }
  return uVar3;
}

