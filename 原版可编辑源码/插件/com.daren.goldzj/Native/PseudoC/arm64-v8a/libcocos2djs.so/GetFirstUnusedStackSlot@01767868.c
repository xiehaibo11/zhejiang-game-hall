
/* v8::internal::compiler::CallDescriptor::GetFirstUnusedStackSlot() const */

int __thiscall v8::internal::compiler::CallDescriptor::GetFirstUnusedStackSlot(CallDescriptor *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  CallDescriptor *pCVar7;
  
  plVar4 = *(long **)(this + 0x10);
  if (plVar4[1] == 0xffffffffffffffff) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    uVar5 = 0xffffffffffffffff;
    do {
      pCVar7 = this + 8;
      if (uVar5 != 0xffffffffffffffff) {
        pCVar7 = (CallDescriptor *)(plVar4[2] + (uVar5 + *plVar4) * 8);
      }
      uVar6 = *(ulong *)pCVar7;
      iVar1 = iVar3;
      if ((uVar6 & 1) != 0) {
        uVar2 = (int)(uVar6 >> 0x20) - 1;
        if (0xc < (uVar2 & 0xff)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        iVar1 = ((int)uVar6 >> 1 ^ 0xffffffffU) +
                ((1 << (ulong)(*(uint *)(&DAT_01a5f990 + (long)(char)uVar2 * 4) & 0x1f)) + 7U >> 3);
        if (iVar1 <= iVar3) {
          iVar1 = iVar3;
        }
      }
      iVar3 = iVar1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)plVar4[1]);
  }
  return iVar3;
}

