
/* v8::internal::EmbeddedData::PrintStatistics() const */

void __thiscall v8::internal::EmbeddedData::PrintStatistics(EmbeddedData *this)

{
  long lVar1;
  int *piVar2;
  long lVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_1720 [2];
  undefined8 auStack_1718 [366];
  uint local_ba8;
  uint local_5ec;
  uint local_27c;
  uint local_6c;
  undefined8 auStack_40 [2];
  __less a_Stack_18 [8];
  int *piVar3;
  
  lVar4 = *(long *)this;
  if ((local_1720 < (undefined1 *)(lVar4 + 0x2df0U)) &&
     ((undefined1 *)(lVar4 + 0x14U) < &stack0xffffffffffffffd0)) {
    lVar6 = 0;
    uVar8 = 0;
  }
  else {
    piVar5 = (int *)(lVar4 + 0x34);
    iVar7 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    lVar6 = -0x16e0;
    do {
      iVar16 = *piVar5;
      iVar17 = piVar5[2];
      piVar2 = piVar5 + 4;
      piVar3 = piVar5 + 6;
      iVar18 = piVar5[-8];
      iVar19 = piVar5[-6];
      iVar20 = piVar5[-4];
      iVar21 = piVar5[-2];
      lVar1 = lVar6 + 0x20;
      iVar12 = iVar16 + iVar12;
      iVar13 = iVar17 + iVar13;
      iVar14 = *piVar2 + iVar14;
      iVar15 = *piVar3 + iVar15;
      iVar7 = iVar18 + iVar7;
      iVar9 = iVar19 + iVar9;
      iVar10 = iVar20 + iVar10;
      iVar11 = iVar21 + iVar11;
      piVar5 = piVar5 + 0x10;
      *(ulong *)(&stack0xffffffffffffffd8 + lVar6) = CONCAT44(*piVar3,*piVar2);
      *(ulong *)(&stack0xffffffffffffffd0 + lVar6) = CONCAT44(iVar17,iVar16);
      *(ulong *)((long)auStack_40 + lVar6 + 8) = CONCAT44(iVar21,iVar20);
      *(ulong *)((long)auStack_40 + lVar6) = CONCAT44(iVar19,iVar18);
      lVar6 = lVar1;
    } while (lVar1 != 0);
    uVar8 = iVar12 + iVar7 + iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11;
    lVar6 = 0x5b8;
  }
  piVar5 = (int *)(lVar4 + lVar6 * 8 + 0x14);
  do {
    iVar7 = *piVar5;
    local_1720[lVar6] = iVar7;
    lVar6 = lVar6 + 1;
    uVar8 = iVar7 + uVar8;
    piVar5 = piVar5 + 2;
  } while (lVar6 != 0x5bc);
  std::__ndk1::__sort<std::__ndk1::__less<int,int>&,int*>
            (local_1720,(int *)&stack0xffffffffffffffd0,a_Stack_18);
  PrintF("EmbeddedData:\n");
  PrintF("  Total size:                         %d\n",(ulong)*(uint *)(this + 8));
  PrintF("  Metadata size:                      %d\n",0x2df0);
  PrintF("  Instruction size:                   %d\n",(ulong)uVar8);
  PrintF("  Padding:                            %d\n",(ulong)((*(int *)(this + 8) - uVar8) - 0x2df0)
        );
  PrintF("  Embedded builtin count:             %d\n",0x5bc);
  PrintF("  Instruction size (50th percentile): %d\n",(ulong)local_ba8);
  PrintF("  Instruction size (75th percentile): %d\n",(ulong)local_5ec);
  PrintF("  Instruction size (90th percentile): %d\n",(ulong)local_27c);
  PrintF("  Instruction size (99th percentile): %d\n",(ulong)local_6c);
  PrintF("\n");
  return;
}

