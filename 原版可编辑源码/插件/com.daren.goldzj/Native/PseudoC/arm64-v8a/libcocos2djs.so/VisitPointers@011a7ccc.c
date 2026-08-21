
/* v8::internal::IndexedReferencesExtractor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedMaybeObjectSlot, v8::internal::CompressedMaybeObjectSlot) */

void __thiscall
v8::internal::IndexedReferencesExtractor::VisitPointers
          (IndexedReferencesExtractor *this,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = *(uint **)(this + 0x18);
  if (param_3 < puVar3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","parent_start_ <= start");
  }
  if (*(uint **)(this + 0x20) < param_4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","end <= parent_end_");
  }
  if (param_3 < param_4) {
    while( true ) {
      uVar6 = ((long)param_3 - (long)puVar3) * 0x40000000 >> 0x20;
      uVar5 = uVar6 >> 6;
      lVar4 = *(long *)(*(V8HeapExplorer **)(this + 8) + 0xb8);
      uVar7 = 1L << (uVar6 & 0x3f);
      uVar6 = *(ulong *)(lVar4 + uVar5 * 8);
      if ((uVar7 & uVar6) == 0) {
        uVar1 = *param_3;
        if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
          iVar2 = *(int *)(this + 0x30);
          *(int *)(this + 0x30) = iVar2 + 1;
          V8HeapExplorer::SetHiddenReference
                    (*(V8HeapExplorer **)(this + 8),*(undefined8 *)(this + 0x10),
                     *(undefined8 *)(this + 0x28),iVar2,
                     (ulong)uVar1 & 0xfffffffffffffffd | (ulong)param_3 & 0xffffffff00000000,
                     (int)param_3 - (int)puVar3 & 0xfffffffc);
        }
      }
      else {
        *(ulong *)(lVar4 + uVar5 * 8) = uVar6 & (uVar7 ^ 0xffffffffffffffff);
      }
      param_3 = param_3 + 1;
      if (param_4 <= param_3) break;
      puVar3 = *(uint **)(this + 0x18);
    }
  }
  return;
}

