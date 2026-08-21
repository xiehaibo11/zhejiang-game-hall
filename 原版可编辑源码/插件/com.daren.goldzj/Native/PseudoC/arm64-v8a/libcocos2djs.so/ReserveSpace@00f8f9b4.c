
/* v8::internal::Heap::ReserveSpace(std::__ndk1::vector<v8::internal::Heap::Chunk,
   std::__ndk1::allocator<v8::internal::Heap::Chunk> >*, std::__ndk1::vector<unsigned long,
   std::__ndk1::allocator<unsigned long> >*) */

undefined8 __thiscall v8::internal::Heap::ReserveSpace(Heap *this,vector *param_1,vector *param_2)

{
  int *piVar1;
  int iVar2;
  Heap HVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  vector *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  SpaceWithLinearArea *pSVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  undefined4 *local_68;
  
  bVar4 = false;
  iVar7 = 1;
LAB_00f8fa1c:
  lVar19 = 0;
  do {
    pvVar8 = param_1 + lVar19 * 0x18;
    piVar20 = *(int **)(pvVar8 + 8);
    piVar12 = *(int **)pvVar8;
    if ((long)piVar20 - (long)piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar16 = *piVar12;
    if (iVar16 != 0) {
      if ((int)lVar19 == 5) {
        if (piVar12 == piVar20) {
          iVar16 = 0;
        }
        else {
          piVar9 = piVar12 + 6;
          if (piVar9 != piVar20) {
            uVar6 = (((long)piVar20 - (long)piVar12) - 0x30U) / 0x18 + 1;
            if (2 < uVar6) {
              uVar15 = uVar6 & 0x1ffffffffffffffe;
              iVar13 = 0;
              uVar14 = uVar15;
              do {
                uVar14 = uVar14 - 2;
                iVar16 = piVar12[6] + iVar16;
                iVar13 = piVar12[0xc] + iVar13;
                piVar12 = piVar12 + 0xc;
              } while (uVar14 != 0);
              iVar16 = iVar13 + iVar16;
              piVar9 = piVar9 + uVar15 * 6;
              if (uVar6 == uVar15) goto LAB_00f8fa2c;
            }
            do {
              piVar12 = piVar9 + 6;
              iVar16 = *piVar9 + iVar16;
              piVar9 = piVar12;
            } while (piVar20 != piVar12);
          }
        }
LAB_00f8fa2c:
        uVar6 = CanExpandOldGeneration(this,(long)iVar16);
        if ((uVar6 & 1) == 0) break;
      }
      else if ((int)lVar19 == 4) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
        piVar12 = *(int **)pvVar8;
        piVar20 = *(int **)(pvVar8 + 8);
        if (piVar12 != piVar20) {
          uVar6 = (ulong)((long)piVar20 + (-0x18 - (long)piVar12)) / 0x18 + 1;
          if (uVar6 < 3) {
            iVar13 = 0;
            piVar9 = piVar12;
LAB_00f8fca0:
            do {
              piVar12 = piVar9 + 6;
              iVar13 = *piVar9 + iVar13;
              piVar9 = piVar12;
            } while (piVar20 != piVar12);
          }
          else {
            uVar15 = uVar6 & 0x1ffffffffffffffe;
            iVar16 = 0;
            iVar13 = 0;
            piVar9 = piVar12 + uVar15 * 6;
            uVar14 = uVar15;
            do {
              iVar2 = *piVar12;
              piVar1 = piVar12 + 6;
              uVar14 = uVar14 - 2;
              piVar12 = piVar12 + 0xc;
              iVar16 = iVar2 + iVar16;
              iVar13 = *piVar1 + iVar13;
            } while (uVar14 != 0);
            iVar13 = iVar13 + iVar16;
            if (uVar6 != uVar15) goto LAB_00f8fca0;
          }
          if (0x27 < iVar13) {
            iVar13 = iVar13 / 0x28;
LAB_00f8fce8:
            do {
              pSVar17 = *(SpaceWithLinearArea **)(this + 0x100);
              puVar11 = *(undefined4 **)(pSVar17 + 0x68);
              puVar10 = puVar11 + 10;
              if (*(undefined4 **)(pSVar17 + 0x70) < puVar10) {
                uVar6 = (**(code **)(*(long *)pSVar17 + 0xb8))(pSVar17,0x28,1);
                if ((uVar6 & 1) != 0) {
                  puVar11 = *(undefined4 **)(pSVar17 + 0x68);
                  puVar10 = puVar11 + 10;
                  goto LAB_00f8fd20;
                }
LAB_00f8fd9c:
                lVar19 = 4;
LAB_00f8fda0:
                iVar16 = (int)lVar19;
                HVar3 = this[0xb44];
                goto joined_r0x00f8fdcc;
              }
LAB_00f8fd20:
              *(undefined4 **)(pSVar17 + 0x68) = puVar10;
              if (FLAG_trace_allocations_origins != '\0') {
                SpaceWithLinearArea::UpdateAllocationOrigins(pSVar17,1);
              }
              if (((long)puVar11 + 1U & 1) == 0) {
LAB_00f8fe40:
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","!object.IsSmi()");
              }
              if (((long)puVar11 + 1U & 1) == 0) goto LAB_00f8fd9c;
              *puVar11 = *(undefined4 *)(this + -0x87d0);
              puVar11[1] = 0x50;
              local_68 = puVar11;
              if (*(undefined8 **)(param_2 + 8) == *(undefined8 **)(param_2 + 0x10)) {
                std::__ndk1::vector<unsigned_long,std::__ndk1::allocator<unsigned_long>>::
                __push_back_slow_path<unsigned_long_const&>
                          ((vector<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)param_2,
                           (ulong *)&local_68);
                iVar13 = iVar13 + -1;
                if (iVar13 == 0) break;
                goto LAB_00f8fce8;
              }
              **(undefined8 **)(param_2 + 8) = puVar11;
              *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
      }
      else if (piVar12 != piVar20) {
        piVar12 = piVar12 + 6;
        if (lVar19 != 1) goto LAB_00f8fb78;
LAB_00f8fbb0:
        pSVar17 = *(SpaceWithLinearArea **)(this + 0xe8);
        lVar18 = (long)iVar16;
        puVar10 = *(undefined4 **)(pSVar17 + 0x68);
        uVar6 = (long)puVar10 + lVar18;
        piVar9 = piVar12;
        if (uVar6 <= *(ulong *)(pSVar17 + 0x70)) goto LAB_00f8fbe4;
        uVar6 = NewSpace::EnsureAllocation((NewSpace *)pSVar17,iVar16,0);
        if ((uVar6 & 1) != 0) {
          do {
            puVar10 = *(undefined4 **)(pSVar17 + 0x68);
            uVar6 = (long)puVar10 + lVar18;
            piVar9 = piVar12;
LAB_00f8fbe4:
            do {
              *(ulong *)(pSVar17 + 0x68) = uVar6;
              if (FLAG_trace_allocations_origins != '\0') {
                SpaceWithLinearArea::UpdateAllocationOrigins(pSVar17,1);
              }
              if (((long)puVar10 + 1U & 1) == 0) goto LAB_00f8fe40;
              if (iVar16 != 0) {
                if (iVar16 == 8) {
                  *puVar10 = *(undefined4 *)(this + -0x87c0);
                }
                else if (iVar16 == 4) {
                  *puVar10 = *(undefined4 *)(this + -0x87c8);
                }
                else {
                  *puVar10 = *(undefined4 *)(this + -0x87d0);
                  puVar10[1] = iVar16 << 1;
                }
              }
              *(undefined4 **)(piVar9 + -4) = puVar10;
              *(long *)(piVar9 + -2) = (long)puVar10 + (long)iVar16;
              if (piVar20 == piVar9) goto LAB_00f8fa3c;
              piVar12 = piVar9 + 6;
              iVar16 = *piVar9;
              if (lVar19 == 1) goto LAB_00f8fbb0;
LAB_00f8fb78:
              pSVar17 = *(SpaceWithLinearArea **)(this + lVar19 * 8 + 0x128);
              lVar18 = (long)iVar16;
              puVar10 = *(undefined4 **)(pSVar17 + 0x68);
              uVar6 = (long)puVar10 + lVar18;
              piVar9 = piVar12;
            } while (uVar6 <= *(ulong *)(pSVar17 + 0x70));
            uVar6 = (**(code **)(*(long *)pSVar17 + 0xb8))(pSVar17,iVar16,1);
          } while ((uVar6 & 1) != 0);
          goto LAB_00f8fda0;
        }
        iVar16 = 1;
        HVar3 = this[0xb44];
        goto joined_r0x00f8fdcc;
      }
    }
LAB_00f8fa3c:
    lVar19 = lVar19 + 1;
    if (lVar19 == 6) {
      return 1;
    }
  } while( true );
  iVar16 = 5;
  HVar3 = this[0xb44];
joined_r0x00f8fdcc:
  if (HVar3 == (Heap)0x0) {
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory
              ((Isolate *)(this + -0x8850),"insufficient memory to create an Isolate",false);
  }
  if (iVar16 == 1) {
    CollectGarbage(this,1,6,0);
  }
  else {
    if (bVar4) {
      *(undefined4 *)(this + 0xad4) = 1;
    }
    else {
      *(undefined4 *)(this + 0xad4) = 0;
    }
    CollectGarbage(this,2,6,0);
    *(undefined4 *)(this + 0xad4) = 0;
  }
  bVar5 = iVar7 == 0x14;
  iVar7 = iVar7 + 1;
  bVar4 = true;
  if (bVar5) {
    return 0;
  }
  goto LAB_00f8fa1c;
}

