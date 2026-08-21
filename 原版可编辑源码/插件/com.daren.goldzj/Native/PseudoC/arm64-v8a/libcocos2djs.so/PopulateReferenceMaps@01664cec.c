
/* v8::internal::compiler::ReferenceMapPopulator::PopulateReferenceMaps() */

void __thiscall
v8::internal::compiler::ReferenceMapPopulator::PopulateReferenceMaps(ReferenceMapPopulator *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar20;
  int iVar21;
  long *plVar22;
  ReferenceMap *this_00;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  uint *puVar27;
  int iVar28;
  ulong local_68;
  undefined8 *puVar19;
  
  lVar8 = *(long *)this;
  puVar26 = *(undefined8 **)(lVar8 + 0x150);
  puVar18 = *(undefined8 **)(lVar8 + 0x148);
  if (*(undefined8 **)(lVar8 + 0x148) != puVar26) {
    do {
      puVar19 = puVar18 + 2;
      local_68 = *(ulong *)puVar18[1];
      ReferenceMap::RecordReference((ReferenceMap *)*puVar18,(AllocatedOperand *)&local_68);
      puVar18 = puVar19;
    } while (puVar19 != puVar26);
    lVar8 = *(long *)this;
  }
  lVar23 = *(long *)(lVar8 + 0x10);
  plVar25 = (long *)(*(long *)(lVar23 + 0xe0) +
                    (*(ulong *)(lVar23 + 0x108) >> 6 & 0x3fffffffffffff8));
  if (*(long *)(lVar23 + 0xe8) == *(long *)(lVar23 + 0xe0)) {
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = (long *)(*plVar25 + (*(ulong *)(lVar23 + 0x108) & 0x1ff) * 8);
  }
  puVar26 = *(undefined8 **)(lVar8 + 0x88);
  puVar18 = *(undefined8 **)(lVar8 + 0x90);
  lVar5 = (long)puVar18 - (long)puVar26;
  if (puVar18 == puVar26) {
    return;
  }
  iVar21 = 0;
  do {
    puVar27 = (uint *)*puVar26;
    if ((((puVar27 != (uint *)0x0) &&
         (cVar6 = InstructionSequence::GetRepresentation
                            (*(InstructionSequence **)(lVar8 + 0x10),puVar27[0x17]),
         (byte)(cVar6 - 7U) < 4)) && (*(int **)(puVar27 + 4) != (int *)0x0)) &&
       ((char)puVar27[0x28] == '\0')) {
      iVar2 = **(int **)(puVar27 + 4);
      puVar10 = puVar27;
      iVar28 = 0;
      do {
        puVar12 = puVar10 + 2;
        puVar10 = *(uint **)(puVar10 + 10);
        iVar3 = *(int *)(*(long *)puVar12 + 4);
        iVar1 = iVar3 + 3;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        iVar3 = iVar1 >> 2;
        if (iVar1 >> 2 <= iVar28) {
          iVar3 = iVar28;
        }
        iVar28 = iVar3;
      } while (puVar10 != (uint *)0x0);
      iVar28 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar28 = iVar2;
      }
      iVar28 = iVar28 >> 2;
      if (iVar28 < iVar21) {
        uVar9 = *(ulong *)(lVar23 + 0x108);
        lVar8 = *(long *)(lVar23 + 0xe0);
        lVar13 = *(long *)(lVar23 + 0xe8);
        plVar25 = (long *)(lVar8 + (uVar9 >> 6 & 0x3fffffffffffff8));
        if (lVar13 == lVar8) {
          plVar20 = (long *)0x0;
        }
        else {
          plVar20 = (long *)(*plVar25 + (uVar9 & 0x1ff) * 8);
        }
      }
      else {
        uVar9 = *(ulong *)(lVar23 + 0x108);
        lVar8 = *(long *)(lVar23 + 0xe0);
        lVar13 = *(long *)(lVar23 + 0xe8);
      }
      lVar16 = *(long *)(lVar23 + 0x110);
LAB_01664e58:
      if (lVar13 == lVar8) goto LAB_01664e74;
      while (plVar20 !=
             (long *)(*(long *)(lVar8 + (uVar9 + lVar16 >> 9) * 8) + (uVar9 + lVar16 & 0x1ff) * 8))
      {
        while( true ) {
          if (iVar28 <= *(int *)(*plVar20 + 0x20)) goto LAB_01664eb4;
          plVar20 = plVar20 + 1;
          if ((long)plVar20 - *plVar25 != 0x1000) goto LAB_01664e58;
          plVar25 = plVar25 + 1;
          plVar20 = (long *)*plVar25;
          if (lVar13 != lVar8) break;
LAB_01664e74:
          if (plVar20 == (long *)0x0) goto LAB_01664eb4;
        }
      }
LAB_01664eb4:
      uVar4 = puVar27[1];
      if (((uVar4 & 0x60) != 0x20) || (uVar17 = **(ulong **)(puVar27 + 0x1c), (uVar17 & 7) == 2)) {
        if ((uVar4 >> 6 & 1) == 0) {
          uVar17 = 0;
        }
        else if ((uVar4 & 0x60) == 0x20) {
          uVar17 = **(ulong **)(puVar27 + 0x1c);
        }
        else {
          uVar17 = (ulong)(uVar4 >> 8) & 0x1fe0 |
                   (ulong)*(uint *)(*(long *)(puVar27 + 0x1c) + 0x2c) << 0x23 | 0xc;
        }
      }
      plVar22 = plVar20;
      puVar10 = puVar27;
      plVar24 = plVar25;
      iVar21 = iVar28;
      if (lVar13 != lVar8) goto LAB_01664f48;
LAB_01664f6c:
      if (plVar22 != (long *)0x0) {
        do {
          this_00 = (ReferenceMap *)*plVar22;
          uVar4 = *(uint *)(this_00 + 0x20);
          if (iVar3 < (int)(uVar4 - 1)) break;
          uVar7 = uVar4 << 2 | 2;
          puVar12 = puVar10;
          do {
            puVar10 = puVar12;
            puVar12 = puVar10 + 4;
            if (((*(int **)puVar12 != (int *)0x0) && (**(int **)puVar12 <= (int)uVar7)) &&
               ((int)uVar7 < *(int *)(*(long *)(puVar10 + 2) + 4))) {
              puVar11 = puVar10 + 0xc;
              puVar14 = puVar12;
              if ((*(int **)puVar11 != (int *)0x0) &&
                 (puVar14 = puVar11, (int)uVar7 < **(int **)puVar11)) {
                puVar11[0] = 0;
                puVar11[1] = 0;
                puVar14 = puVar12;
              }
              for (puVar14 = *(uint **)puVar14; puVar14 != (uint *)0x0;
                  puVar14 = *(uint **)(puVar14 + 2)) {
                uVar15 = *puVar14;
                if ((int)uVar15 <= (int)uVar7) {
                  if (*(int **)puVar11 == (int *)0x0) {
                    if (uVar15 < 0x80000000) goto LAB_01665010;
                  }
                  else if (**(int **)puVar11 < (int)uVar15) {
LAB_01665010:
                    *(uint **)puVar11 = puVar14;
                    uVar15 = *puVar14;
                  }
                }
                if ((int)uVar7 < (int)uVar15) break;
                if ((int)uVar7 < (int)puVar14[1]) {
                  if ((*(uint *)(*(long *)this + 0x1d0) & 1) == 0) {
                    if ((char)puVar27[0x20] == '\0') goto LAB_01665148;
LAB_0166507c:
                    iVar28 = **(int **)(puVar10 + 4);
                    iVar2 = iVar28 + 3;
                    if (-1 < iVar28) {
                      iVar2 = iVar28;
                    }
                    uVar7 = iVar2 >> 2;
                  }
                  else {
                    if ((~puVar27[1] & 0x60) == 0) goto LAB_0166507c;
LAB_01665148:
                    uVar7 = puVar27[0x21];
                  }
                  if (((uVar17 & 7) != 0) && ((int)uVar7 <= (int)uVar4)) {
                    if ((*(uint *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
                      PrintF("Pointer for range %d (spilled at %d) at safe point %d\n",
                             (ulong)puVar27[0x17],(ulong)uVar7,(ulong)uVar4);
                    }
                    local_68 = uVar17;
                    ReferenceMap::RecordReference(this_00,(AllocatedOperand *)&local_68);
                  }
                  uVar7 = puVar10[1];
                  if ((uVar7 & 1) == 0) {
                    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
                      PrintF("Pointer in register for range %d:%d (start at %d) at safe point %d\n",
                             (ulong)puVar27[0x17],(ulong)*puVar10,(ulong)**(uint **)(puVar10 + 4),
                             (ulong)uVar4);
                      uVar7 = puVar10[1];
                    }
                    if ((uVar7 & 0x1f80) == 0x1000) {
                      lVar8 = *(long *)(puVar10 + 8);
                      if ((*(uint *)(lVar8 + 4) & 0x60) == 0x20) {
                        local_68 = **(ulong **)(lVar8 + 0x70);
                      }
                      else {
                        local_68 = (ulong)(*(uint *)(lVar8 + 4) >> 8) & 0x1fe0 |
                                   (ulong)*(uint *)(*(long *)(lVar8 + 0x70) + 0x2c) << 0x23 | 0xc;
                      }
                    }
                    else {
                      local_68 = (ulong)(uVar7 >> 8 & 0x1fe0 | 4) |
                                 (ulong)(uVar7 >> 7 & 0x3f) << 0x23;
                    }
                    ReferenceMap::RecordReference(this_00,(AllocatedOperand *)&local_68);
                  }
                  goto LAB_01665198;
                }
              }
            }
            puVar12 = *(uint **)(puVar10 + 10);
          } while ((puVar12 != (uint *)0x0) && (**(int **)(puVar12 + 4) <= (int)uVar7));
LAB_01665198:
          plVar22 = plVar22 + 1;
          if ((long)plVar22 - *plVar24 == 0x1000) {
            plVar24 = plVar24 + 1;
            plVar22 = (long *)*plVar24;
          }
          uVar9 = *(ulong *)(lVar23 + 0x108);
          lVar16 = *(long *)(lVar23 + 0x110);
          lVar8 = *(long *)(lVar23 + 0xe0);
          if (*(long *)(lVar23 + 0xe8) == lVar8) goto LAB_01664f6c;
LAB_01664f48:
          if (plVar22 ==
              (long *)(*(long *)(lVar8 + (uVar9 + lVar16 >> 6 & 0x3fffffffffffff8)) +
                      (uVar9 + lVar16 & 0x1ff) * 8)) break;
        } while( true );
      }
    }
    puVar26 = puVar26 + 1;
    if (puVar26 == puVar18) {
      return;
    }
    lVar8 = *(long *)this;
    if (lVar5 != *(long *)(lVar8 + 0x90) - *(long *)(lVar8 + 0x88)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","live_ranges_size == data()->live_ranges().size()");
    }
  } while( true );
}

