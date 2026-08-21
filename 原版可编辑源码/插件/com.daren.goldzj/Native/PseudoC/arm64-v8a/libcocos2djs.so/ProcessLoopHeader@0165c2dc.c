
/* v8::internal::compiler::LiveRangeBuilder::ProcessLoopHeader(v8::internal::compiler::InstructionBlock
   const*, v8::internal::BitVector*) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::ProcessLoopHeader
          (LiveRangeBuilder *this,InstructionBlock *param_1,BitVector *param_2)

{
  uint uVar1;
  BitVector *pBVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  RegisterAllocationData *this_00;
  long lVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  Zone *this_01;
  
  iVar4 = *(int *)(param_2 + 4);
  pBVar2 = param_2 + 8;
  if (iVar4 == 1) {
    uVar11 = *(ulong *)pBVar2;
    if (uVar11 != 0) goto LAB_0165c320;
LAB_0165c4cc:
    if (1 < iVar4) {
      uVar11 = *(ulong *)(*(long *)(param_2 + 8) + 8);
      if (uVar11 == 0) {
        iVar16 = iVar4 * 0x40 + -0x40;
        lVar6 = 2;
        do {
          if (iVar4 == lVar6) {
            uVar11 = 0;
            iVar10 = iVar4;
            goto LAB_0165c33c;
          }
          uVar11 = *(ulong *)(*(long *)(param_2 + 8) + lVar6 * 8);
          lVar6 = lVar6 + 1;
        } while (uVar11 == 0);
        iVar10 = (int)lVar6 + -1;
      }
      else {
        iVar10 = 1;
      }
      iVar16 = iVar10 << 6;
      goto LAB_0165c328;
    }
    uVar11 = 0;
    iVar16 = 0;
    iVar10 = 1;
  }
  else {
    uVar11 = **(ulong **)pBVar2;
    if (uVar11 == 0) goto LAB_0165c4cc;
LAB_0165c320:
    iVar10 = 0;
    iVar16 = 0;
LAB_0165c328:
    uVar14 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
    iVar16 = iVar16 + (int)uVar14;
    uVar11 = (uVar11 >> (uVar14 & 0x3f)) >> 1;
  }
LAB_0165c33c:
  this_00 = *(RegisterAllocationData **)this;
  iVar8 = *(int *)(param_1 + 0x6c);
  lVar6 = **(long **)(*(long *)(this_00 + 0x10) + 0x10);
  if ((ulong)((*(long **)(*(long *)(this_00 + 0x10) + 0x10))[1] - lVar6 >> 3) <= (long)iVar8 - 1U) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (iVar10 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x70);
    uVar5 = *(int *)(*(long *)(lVar6 + ((long)iVar8 - 1U) * 8) + 0x74) * 4;
    do {
      lVar6 = RegisterAllocationData::GetOrCreateLiveRangeFor(this_00,iVar16);
      this_01 = (Zone *)**(undefined8 **)this;
      if ((*(byte *)(*(undefined8 **)this + 0x3a) >> 2 & 1) != 0) {
        PrintF("Ensure live range %d in interval [%d %d[\n",(ulong)*(uint *)(lVar6 + 0x5c),
               (ulong)(uint)(iVar4 << 2),(ulong)uVar5);
      }
      piVar9 = *(int **)(lVar6 + 0x10);
      uVar1 = uVar5;
      while ((piVar9 != (int *)0x0 && (*piVar9 <= (int)uVar5))) {
        puVar7 = (uint *)(piVar9 + 1);
        piVar9 = *(int **)(piVar9 + 2);
        uVar3 = *puVar7;
        if ((int)*puVar7 <= (int)uVar5) {
          uVar3 = uVar1;
        }
        *(int **)(lVar6 + 0x10) = piVar9;
        uVar1 = uVar3;
      }
      puVar7 = *(uint **)(this_01 + 0x10);
      if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar7) < 0x10) {
        puVar7 = (uint *)Zone::NewExpand(this_01,0x10);
      }
      else {
        *(uint **)(this_01 + 0x10) = puVar7 + 4;
      }
      *puVar7 = iVar4 << 2;
      puVar7[1] = uVar1;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(lVar6 + 0x10);
      *(uint **)(lVar6 + 0x10) = puVar7;
      if (*(long *)(puVar7 + 2) == 0) {
        *(uint **)(lVar6 + 8) = puVar7;
        if (uVar11 == 0) goto LAB_0165c454;
LAB_0165c424:
        iVar16 = iVar16 + 1;
        iVar8 = *(int *)(param_2 + 4);
LAB_0165c428:
        uVar14 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20);
        iVar16 = iVar16 + (int)uVar14;
        uVar11 = (uVar11 >> (uVar14 & 0x3f)) >> 1;
        if (iVar8 <= iVar10) goto LAB_0165c4e8;
      }
      else {
        if (uVar11 != 0) goto LAB_0165c424;
LAB_0165c454:
        iVar16 = iVar16 + 1;
        iVar8 = *(int *)(param_2 + 4);
        uVar1 = iVar10 + 1;
        uVar14 = (ulong)uVar1;
        if ((int)uVar1 < iVar8) {
          uVar14 = (ulong)(int)uVar1;
          iVar16 = iVar10 << 6;
          do {
            uVar11 = *(ulong *)(*(long *)(param_2 + 8) + uVar14 * 8);
            if (uVar11 != 0) {
              iVar16 = iVar16 + 0x40;
              iVar10 = (int)uVar14;
              goto LAB_0165c428;
            }
            uVar14 = uVar14 + 1;
            iVar16 = iVar16 + 0x40;
          } while ((long)uVar14 < (long)iVar8);
        }
        uVar11 = 0;
        iVar10 = (int)uVar14;
        if (iVar8 <= iVar10) goto LAB_0165c4e8;
      }
      this_00 = *(RegisterAllocationData **)this;
    } while( true );
  }
LAB_0165c4f0:
  if (*(int *)(param_1 + 100) + 1 < iVar8) {
    lVar6 = (long)(*(int *)(param_1 + 100) + 1);
    do {
      lVar12 = *(long *)(*(long *)(*(long *)this + 0x48) + lVar6 * 8);
      if (*(int *)(lVar12 + 4) == 1) {
        *(ulong *)(lVar12 + 8) = *(ulong *)(lVar12 + 8) | *(ulong *)pBVar2;
      }
      else if (0 < *(int *)(lVar12 + 4)) {
        lVar13 = 0;
        do {
          lVar15 = lVar13 * 8;
          lVar13 = lVar13 + 1;
          *(ulong *)(*(long *)(lVar12 + 8) + lVar15) =
               *(ulong *)(*(long *)(lVar12 + 8) + lVar15) |
               *(ulong *)(*(long *)(param_2 + 8) + lVar15);
        } while (lVar13 < *(int *)(lVar12 + 4));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x6c));
  }
  return;
LAB_0165c4e8:
  iVar8 = *(int *)(param_1 + 0x6c);
  goto LAB_0165c4f0;
}

