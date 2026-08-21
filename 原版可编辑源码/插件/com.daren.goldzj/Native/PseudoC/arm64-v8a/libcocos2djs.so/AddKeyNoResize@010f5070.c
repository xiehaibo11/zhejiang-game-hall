
/* v8::internal::StringTable::AddKeyNoResize(v8::internal::Isolate*, v8::internal::StringTableKey*)
    */

ulong * v8::internal::StringTable::AddKeyNoResize(Isolate *param_1,StringTableKey *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  
  puVar4 = (ulong *)(**(code **)(*(long *)param_2 + 0x10))(param_2,param_1);
  if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!string.is_null()");
  }
  uVar9 = *(ulong *)(param_1 + 0xfd0);
  lVar1 = uVar9 + 7;
  uVar3 = (*(int *)(uVar9 + 0xf) >> 1) - 1;
  uVar6 = uVar3 & *(uint *)(param_2 + 8) >> 3;
  piVar10 = (int *)(lVar1 + (int)(uVar6 * 4 + 0xc));
  iVar7 = *piVar10;
  iVar2 = *(int *)((uVar9 & 0xffffffff00000000) + 0xa8);
  if (iVar7 != iVar2) {
    iVar8 = 1;
    do {
      if (iVar7 == *(int *)((uVar9 & 0xffffffff00000000) + 0xa0)) {
        piVar10 = (int *)(lVar1 + (int)(uVar6 * 4 + 0xc));
        break;
      }
      uVar6 = uVar6 + iVar8 & uVar3;
      piVar10 = (int *)(lVar1 + (int)(uVar6 * 4 + 0xc));
      iVar7 = *piVar10;
      iVar8 = iVar8 + 1;
    } while (iVar7 != iVar2);
  }
  uVar11 = *puVar4;
  *piVar10 = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar5 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,piVar10,uVar11);
      uVar5 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,piVar10,uVar11);
    }
  }
  *(uint *)(*(long *)(param_1 + 0xfd0) + 7) =
       *(uint *)(*(long *)(param_1 + 0xfd0) + 7) + 2 & 0xfffffffe;
  return puVar4;
}

