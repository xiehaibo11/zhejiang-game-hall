
/* v8::internal::compiler::BundleBuilder::BuildBundles() */

void __thiscall v8::internal::compiler::BundleBuilder::BuildBundles(BundleBuilder *this)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  LiveRange *pLVar7;
  Zone *this_00;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  LiveRangeBundle *pLVar16;
  ulong uVar17;
  LiveRangeBundle *this_01;
  uint *puVar18;
  
  lVar11 = *(long *)this;
  if ((*(byte *)(lVar11 + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Build bundles\n");
    lVar11 = *(long *)this;
  }
  plVar13 = *(long **)(*(long *)(lVar11 + 0x10) + 0x10);
  lVar15 = *plVar13;
  uVar14 = plVar13[1] - lVar15;
  if ((int)(uVar14 >> 3) < 1) {
    return;
  }
  uVar17 = ((long)(uVar14 * 0x20000000) >> 0x20) - 1;
  if (uVar17 < (ulong)((long)uVar14 >> 3)) {
    do {
      lVar15 = *(long *)(lVar15 + uVar17 * 8);
      if ((*(byte *)(lVar11 + 0x1d0) >> 2 & 1) != 0) {
        PrintF("Block B%d\n",uVar17 & 0xffffffff);
      }
      puVar3 = *(undefined8 **)(lVar15 + 0x48);
      for (puVar1 = *(undefined8 **)(lVar15 + 0x40); puVar1 != puVar3; puVar1 = puVar1 + 1) {
        puVar18 = (uint *)*puVar1;
        pLVar7 = (LiveRange *)
                 RegisterAllocationData::GetOrCreateLiveRangeFor
                           (*(RegisterAllocationData **)this,*puVar18);
        this_01 = *(LiveRangeBundle **)(pLVar7 + 0x50);
        if (this_01 == (LiveRangeBundle *)0x0) {
          this_00 = (Zone *)**(undefined8 **)this;
          this_01 = *(LiveRangeBundle **)(this_00 + 0x10);
          if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x48) {
            this_01 = (LiveRangeBundle *)Zone::NewExpand(this_00,0x48);
          }
          else {
            *(LiveRangeBundle **)(this_00 + 0x10) = this_01 + 0x48;
          }
          iVar5 = *(int *)(this + 8);
          uVar12 = **(undefined8 **)this;
          *(int *)(this + 8) = iVar5 + 1;
          *(undefined8 *)(this_01 + 8) = 0;
          *(LiveRangeBundle **)this_01 = this_01 + 8;
          *(undefined8 *)(this_01 + 0x10) = uVar12;
          *(undefined8 *)(this_01 + 0x18) = 0;
          *(undefined8 *)(this_01 + 0x28) = 0;
          *(undefined8 *)(this_01 + 0x30) = uVar12;
          *(undefined8 *)(this_01 + 0x38) = 0;
          *(LiveRangeBundle **)(this_01 + 0x20) = this_01 + 0x28;
          *(int *)(this_01 + 0x40) = iVar5;
          *(undefined4 *)(this_01 + 0x44) = 0x20;
          LiveRangeBundle::TryAddRange(this_01,pLVar7);
        }
        if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
          PrintF("Processing phi for v%d with %d:%d\n",(ulong)*puVar18,
                 (ulong)*(uint *)(*(long *)(pLVar7 + 0x20) + 0x5c),(ulong)*(uint *)pLVar7);
        }
        puVar4 = *(uint **)(puVar18 + 6);
        for (puVar2 = *(uint **)(puVar18 + 4); puVar2 != puVar4; puVar2 = puVar2 + 1) {
          uVar6 = *puVar2;
          pLVar7 = (LiveRange *)
                   RegisterAllocationData::GetOrCreateLiveRangeFor
                             (*(RegisterAllocationData **)this,uVar6);
          if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) == 0) {
            uVar9 = 0;
            pLVar16 = *(LiveRangeBundle **)(pLVar7 + 0x50);
            if (pLVar16 == (LiveRangeBundle *)0x0) goto LAB_0165d000;
LAB_0165cf80:
            uVar10 = 0;
            if (uVar9 != 0) {
              PrintF("Merge\n");
              uVar10 = *(uint *)(*(long *)this + 0x1d0) & 4;
            }
            uVar14 = LiveRangeBundle::TryMerge(this_01,pLVar16,uVar10 != 0);
            if (((uVar14 & 1) != 0) && ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0)) {
              uVar9 = *puVar18;
              uVar10 = *(uint *)(this_01 + 0x40);
              pcVar8 = "Merged %d and %d to %d\n";
              goto LAB_0165cf40;
            }
          }
          else {
            PrintF("Input value v%d with range %d:%d\n",(ulong)uVar6,
                   (ulong)*(uint *)(*(long *)(pLVar7 + 0x20) + 0x5c),(ulong)*(uint *)pLVar7);
            uVar9 = *(uint *)(*(long *)this + 0x1d0) & 4;
            pLVar16 = *(LiveRangeBundle **)(pLVar7 + 0x50);
            if (pLVar16 != (LiveRangeBundle *)0x0) goto LAB_0165cf80;
LAB_0165d000:
            if (uVar9 != 0) {
              PrintF("Add\n");
            }
            uVar14 = LiveRangeBundle::TryAddRange(this_01,pLVar7);
            if (((uVar14 & 1) != 0) && ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0)) {
              uVar9 = *puVar18;
              uVar10 = *(uint *)(this_01 + 0x40);
              pcVar8 = "Added %d and %d to %d\n";
LAB_0165cf40:
              PrintF(pcVar8,(ulong)uVar9,(ulong)uVar6,(ulong)uVar10);
            }
          }
        }
      }
      if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
        PrintF("Done block B%d\n",uVar17 & 0xffffffff);
      }
      uVar14 = uVar17 - 1;
      if ((long)uVar17 < 1) {
        return;
      }
      lVar11 = *(long *)this;
      plVar13 = *(long **)(*(long *)(lVar11 + 0x10) + 0x10);
      lVar15 = *plVar13;
      uVar17 = uVar14;
    } while (uVar14 < (ulong)(plVar13[1] - lVar15 >> 3));
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

