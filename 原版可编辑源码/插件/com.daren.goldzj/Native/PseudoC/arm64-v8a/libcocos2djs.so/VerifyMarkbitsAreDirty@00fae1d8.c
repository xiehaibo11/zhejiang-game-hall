
/* v8::internal::MarkCompactCollector::VerifyMarkbitsAreDirty(v8::internal::ReadOnlySpace*) */

void __thiscall
v8::internal::MarkCompactCollector::VerifyMarkbitsAreDirty
          (MarkCompactCollector *this,ReadOnlySpace *param_1)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ReadOnlyHeapObjectIterator aRStack_38 [24];
  
  ReadOnlyHeapObjectIterator::ReadOnlyHeapObjectIterator(aRStack_38,param_1);
  uVar5 = ReadOnlyHeapObjectIterator::Next(aRStack_38);
  iVar4 = (int)uVar5;
  while( true ) {
    if (iVar4 == 0) {
      return;
    }
    uVar6 = uVar5 - (uVar5 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((uVar5 & 0xfffffffffffc0000) + 0x10) + (uVar6 >> 7 & 0x1ffffff) * 4)
    ;
    uVar2 = 1 << (ulong)((uint)(uVar6 >> 2) & 0x1f);
    if ((*puVar1 & uVar2) == 0) break;
    uVar2 = uVar2 << 1;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = 1;
    }
    if ((puVar1[bVar3] & uVar2) == 0) break;
    uVar5 = ReadOnlyHeapObjectIterator::Next(aRStack_38);
    iVar4 = (int)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","non_atomic_marking_state()->IsBlack(object)");
}

