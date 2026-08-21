
/* v8::internal::BreakIterator::BreakIterator(v8::internal::Handle<v8::internal::DebugInfo>) */

void __thiscall v8::internal::BreakIterator::BreakIterator(BreakIterator *this,ulong *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong local_18;
  
  *(ulong **)this = param_2;
  *(undefined4 *)(this + 8) = 0xffffffff;
  uVar6 = *param_2 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar6 | *(uint *)(*param_2 + 0x13)) + 0xf);
  uVar5 = uVar6 | uVar1;
  if (((uVar1 & 1) == 0) || (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x85)) {
    if (uVar1 == *(uint *)(uVar6 + 0x180)) {
      uVar5 = *(ulong *)(uVar6 + 0x3c0);
    }
    else {
      uVar5 = uVar6 | *(uint *)(uVar5 + 3);
    }
  }
  SourcePositionTableIterator::SourcePositionTableIterator
            ((SourcePositionTableIterator *)(this + 0x18),uVar5,0);
  local_18 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  uVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_18);
  iVar7 = *(int *)(this + 0x30);
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(this + 0x10) = uVar3;
  bVar2 = *(int *)(this + 8) == -1;
  do {
    if (iVar7 == -1) break;
    if (!bVar2) {
      SourcePositionTableIterator::Advance((SourcePositionTableIterator *)(this + 0x18));
      iVar7 = *(int *)(this + 0x30);
      if (iVar7 == -1) {
        return;
      }
    }
    iVar4 = (*(uint *)(this + 0x40) >> 1 & 0x3fffffff) - 1;
    *(int *)(this + 0xc) = iVar4;
    if (this[0x48] != (BreakIterator)0x0) {
      *(int *)(this + 0x10) = iVar4;
    }
    iVar4 = GetDebugBreakType(this);
    bVar2 = false;
  } while (iVar4 == 0);
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

