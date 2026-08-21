
/* v8::internal::CallPrinter::Print(char const*) */

void __thiscall v8::internal::CallPrinter::Print(CallPrinter *this,char *param_1)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  IncrementalStringBuilder *this_00;
  
  if ((this[0x1c] != (CallPrinter)0x0) && (this[0x1d] == (CallPrinter)0x0)) {
    this_00 = *(IncrementalStringBuilder **)(this + 0x10);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    uVar2 = (ushort)(byte)*param_1;
    if (*(int *)(this_00 + 8) == 0) {
      while (uVar2 != 0) {
        param_1 = param_1 + 1;
        iVar1 = *(int *)(this_00 + 0x14);
        lVar3 = **(long **)(this_00 + 0x20);
        *(int *)(this_00 + 0x14) = iVar1 + 1;
        *(char *)(lVar3 + iVar1 + 0xb) = (char)uVar2;
        if (*(int *)(this_00 + 0x14) == *(int *)(this_00 + 0x10)) {
          IncrementalStringBuilder::Extend(this_00);
        }
        uVar2 = (ushort)(byte)*param_1;
      }
    }
    else if (uVar2 != 0) {
      do {
        param_1 = param_1 + 1;
        iVar1 = *(int *)(this_00 + 0x14);
        lVar3 = **(long **)(this_00 + 0x20);
        *(int *)(this_00 + 0x14) = iVar1 + 1;
        *(ushort *)(lVar3 + (long)iVar1 * 2 + 0xb) = uVar2;
        if (*(int *)(this_00 + 0x14) == *(int *)(this_00 + 0x10)) {
          IncrementalStringBuilder::Extend(this_00);
        }
        uVar2 = (ushort)(byte)*param_1;
      } while (*param_1 != 0);
    }
  }
  return;
}

