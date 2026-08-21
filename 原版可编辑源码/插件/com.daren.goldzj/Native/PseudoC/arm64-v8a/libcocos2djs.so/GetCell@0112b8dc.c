
/* v8::internal::SourceTextModule::GetCell(int) */

ulong __thiscall v8::internal::SourceTextModule::GetCell(SourceTextModule *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = SourceTextModuleDescriptor::GetCellIndexKind(param_1);
  if (iVar2 == 1) {
    uVar3 = *(ulong *)this;
    iVar2 = param_1 * 4 + -4;
    uVar1 = *(uint *)(uVar3 + 0x1b);
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar3 = *(ulong *)this;
    iVar2 = ~param_1 << 2;
    uVar1 = *(uint *)(uVar3 + 0x1f);
  }
  return uVar3 & 0xffffffff00000000 |
         (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)uVar1) + (long)iVar2 + 7);
}

