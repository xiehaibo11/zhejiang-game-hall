
/* v8::internal::ExternalReferenceEncoder::NameOfAddress(v8::internal::Isolate*, unsigned long)
   const */

char * __thiscall
v8::internal::ExternalReferenceEncoder::NameOfAddress
          (ExternalReferenceEncoder *this,Isolate *param_1,ulong param_2)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = **(long **)this;
  uVar1 = (int)(*(long **)this)[1] - 1;
  uVar4 = (ulong)(uVar1 & (uint)param_2);
  lVar5 = lVar3 + uVar4 * 0x18;
  if ((*(char *)(lVar5 + 0x10) != '\0') && (*(ulong *)(lVar3 + uVar4 * 0x18) != param_2)) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
      if (*(char *)(lVar3 + uVar4 * 0x18 + 0x10) == '\0') break;
    } while (*(ulong *)(lVar3 + uVar4 * 0x18) != param_2);
    lVar5 = lVar3 + uVar4 * 0x18;
  }
  pcVar2 = "<unknown>";
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    if ((int)*(uint *)(lVar5 + 8) < 0) {
      return "<from api>";
    }
    pcVar2 = (&ExternalReferenceTable::ref_name_)[*(uint *)(lVar5 + 8)];
  }
  return pcVar2;
}

