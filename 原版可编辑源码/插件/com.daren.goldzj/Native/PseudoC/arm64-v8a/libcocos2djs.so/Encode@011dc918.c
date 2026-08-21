
/* v8::internal::ExternalReferenceEncoder::Encode(unsigned long) */

undefined4 __thiscall
v8::internal::ExternalReferenceEncoder::Encode(ExternalReferenceEncoder *this,ulong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = **(long **)this;
  uVar1 = (int)(*(long **)this)[1] - 1;
  uVar4 = (ulong)(uVar1 & (uint)param_1);
  lVar5 = lVar3 + uVar4 * 0x18;
  if ((*(char *)(lVar5 + 0x10) != '\0') && (*(ulong *)(lVar3 + uVar4 * 0x18) != param_1)) {
    do {
      uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
      if (*(char *)(lVar3 + uVar4 * 0x18 + 0x10) == '\0') break;
    } while (*(ulong *)(lVar3 + uVar4 * 0x18) != param_1);
    lVar5 = lVar3 + uVar4 * 0x18;
  }
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    return *(undefined4 *)(lVar5 + 8);
  }
  base::OS::PrintError("Unknown external reference %p.\n");
  uVar2 = ExternalReferenceTable::ResolveSymbol((void *)param_1);
  base::OS::PrintError("%s",uVar2);
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

