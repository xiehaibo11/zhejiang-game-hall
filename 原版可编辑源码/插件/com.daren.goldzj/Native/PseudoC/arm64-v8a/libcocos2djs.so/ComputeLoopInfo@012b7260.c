
/* v8::internal::compiler::SpecialRPONumberer::ComputeLoopInfo(v8::internal::ZoneVector<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame>*,
   unsigned long, v8::internal::ZoneVector<std::__ndk1::pair<v8::internal::compiler::BasicBlock*,
   unsigned long> >*) */

void __thiscall
v8::internal::compiler::SpecialRPONumberer::ComputeLoopInfo
          (SpecialRPONumberer *this,ZoneVector *param_1,ulong param_2,ZoneVector *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  Zone *pZVar4;
  ulong *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  vector<v8::internal::compiler::SpecialRPONumberer::LoopInfo,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::LoopInfo>>
  *this_00;
  long lVar21;
  int *piVar22;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  this_00 = (vector<v8::internal::compiler::SpecialRPONumberer::LoopInfo,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::LoopInfo>>
             *)(this + 0x20);
  lVar20 = *(long *)this_00;
  lVar21 = *(long *)(this + 0x28);
  if (lVar20 != lVar21) {
    do {
      BitVector::Resize(*(BitVector **)(lVar20 + 0x10),
                        (int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                                     *(long *)(*(long *)(this + 8) + 8)) >> 3),*(Zone **)this);
      lVar20 = lVar20 + 0x30;
    } while (lVar21 != lVar20);
    lVar20 = *(long *)(this + 0x20);
    lVar21 = *(long *)(this + 0x28);
  }
  lVar21 = lVar21 - lVar20 >> 4;
  uVar10 = lVar21 * -0x5555555555555555;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (uVar10 < param_2) {
    std::__ndk1::
    vector<v8::internal::compiler::SpecialRPONumberer::LoopInfo,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::LoopInfo>>
    ::__append(this_00,param_2 + lVar21 * 0x5555555555555555,(LoopInfo *)&local_90);
  }
  else if (uVar10 - param_2 != 0) {
    *(ulong *)(this + 0x28) = lVar20 + param_2 * 0x30;
  }
  lVar20 = *(long *)param_3;
  if (*(long *)(param_3 + 8) != lVar20) {
    uVar10 = 0;
    do {
      plVar11 = (long *)(lVar20 + uVar10 * 0x10);
      piVar17 = (int *)*plVar11;
      piVar22 = *(int **)(*(long *)(piVar17 + 0x18) + plVar11[1] * 8);
      lVar20 = (long)*piVar22;
      plVar11 = (long *)(*(long *)this_00 + lVar20 * 0x30);
      if (*plVar11 == 0) {
        *plVar11 = (long)piVar22;
        pZVar4 = *(Zone **)this;
        piVar7 = *(int **)(pZVar4 + 0x10);
        if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)piVar7) < 0x10) {
          piVar7 = (int *)Zone::NewExpand(pZVar4,0x10);
        }
        else {
          *(int **)(pZVar4 + 0x10) = piVar7 + 4;
        }
        pZVar4 = *(Zone **)this;
        iVar9 = (int)((ulong)(*(long *)(*(long *)(this + 8) + 0x10) -
                             *(long *)(*(long *)(this + 8) + 8)) >> 3);
        *piVar7 = iVar9;
        if (iVar9 < 0x41) {
          piVar7[1] = 1;
          piVar7[2] = 0;
          piVar7[3] = 0;
        }
        else {
          iVar2 = iVar9 + 0x3e;
          if (-1 < iVar9 + -1) {
            iVar2 = iVar9 + -1;
          }
          uVar1 = (iVar2 >> 6) + 1;
          piVar7[2] = 0;
          piVar7[3] = 0;
          piVar7[1] = uVar1;
          puVar8 = *(undefined8 **)(pZVar4 + 0x10);
          uVar14 = (ulong)uVar1 * 8;
          if (uVar14 < (ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar8) ||
              uVar14 - (*(long *)(pZVar4 + 0x18) - (long)puVar8) == 0) {
            *(undefined8 **)(pZVar4 + 0x10) = puVar8 + uVar1;
          }
          else {
            puVar8 = (undefined8 *)Zone::NewExpand(pZVar4,uVar14);
          }
          *(undefined8 **)(piVar7 + 2) = puVar8;
          if (piVar7[1] == 1) {
            piVar7[2] = 0;
            piVar7[3] = 0;
          }
          else if ((0 < piVar7[1]) && (*puVar8 = 0, 1 < piVar7[1])) {
            lVar21 = 1;
            do {
              *(undefined8 *)(*(long *)(piVar7 + 2) + lVar21 * 8) = 0;
              lVar21 = lVar21 + 1;
            } while (lVar21 < piVar7[1]);
          }
        }
        *(int **)(*(long *)this_00 + lVar20 * 0x30 + 0x10) = piVar7;
      }
      if (piVar17 != piVar22) {
        uVar14 = *(ulong *)(piVar17 + 0x28);
        lVar21 = *(long *)(*(long *)this_00 + lVar20 * 0x30 + 0x10);
        puVar12 = (ulong *)(lVar21 + 8);
        iVar9 = (int)uVar14;
        puVar5 = puVar12;
        if (*(int *)(lVar21 + 4) != 1) {
          iVar2 = iVar9 + 0x3f;
          if (-1 < iVar9) {
            iVar2 = iVar9;
          }
          puVar5 = (ulong *)(*puVar12 + (long)(iVar2 >> 6) * 8);
        }
        iVar2 = iVar9 + 0x3f;
        if (-1 < iVar9) {
          iVar2 = iVar9;
        }
        uVar15 = 1L << (uVar14 & 0x3f);
        if ((*puVar5 & uVar15) == 0) {
          if (*(int *)(lVar21 + 4) == 1) {
            uVar15 = 1L << (uVar14 & 0x3f);
          }
          else {
            puVar12 = (ulong *)(*(long *)(lVar21 + 8) + (long)(iVar2 >> 6) * 8);
          }
          *puVar12 = *puVar12 | uVar15;
        }
        **(long **)param_1 = (long)piVar17;
        uVar14 = 1;
        do {
          uVar14 = (long)(int)uVar14 - 1;
          lVar13 = *(long *)(*(long *)param_1 + uVar14 * 0x10);
          lVar21 = *(long *)(lVar13 + 0x80);
          lVar16 = *(long *)(lVar13 + 0x88);
          if (lVar16 != lVar21) {
            uVar15 = 0;
            do {
              piVar17 = *(int **)(lVar21 + uVar15 * 8);
              if (piVar17 != piVar22) {
                uVar19 = *(ulong *)(piVar17 + 0x28);
                lVar18 = *(long *)(*(long *)this_00 + lVar20 * 0x30 + 0x10);
                puVar12 = (ulong *)(lVar18 + 8);
                iVar9 = (int)uVar19;
                puVar5 = puVar12;
                if (*(int *)(lVar18 + 4) != 1) {
                  iVar2 = iVar9 + 0x3f;
                  if (-1 < iVar9) {
                    iVar2 = iVar9;
                  }
                  puVar5 = (ulong *)(*puVar12 + (long)(iVar2 >> 6) * 8);
                }
                iVar2 = iVar9 + 0x3f;
                if (-1 < iVar9) {
                  iVar2 = iVar9;
                }
                uVar6 = 1L << (uVar19 & 0x3f);
                if ((*puVar5 & uVar6) == 0) {
                  if (*(int *)(lVar18 + 4) == 1) {
                    uVar6 = 1L << (uVar19 & 0x3f);
                  }
                  else {
                    puVar12 = (ulong *)(*(long *)(lVar18 + 8) + (long)(iVar2 >> 6) * 8);
                  }
                  uVar3 = uVar14 & 0xffffffff;
                  uVar19 = uVar14 >> 0x1f;
                  uVar14 = (ulong)((int)uVar14 + 1);
                  *puVar12 = *puVar12 | uVar6;
                  *(int **)(*(long *)param_1 + (-(uVar19 & 1) & 0xfffffff000000000 | uVar3 << 4)) =
                       piVar17;
                  lVar21 = *(long *)(lVar13 + 0x80);
                  lVar16 = *(long *)(lVar13 + 0x88);
                }
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < (ulong)(lVar16 - lVar21 >> 3));
          }
        } while (0 < (int)uVar14);
      }
      lVar20 = *(long *)param_3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(*(long *)(param_3 + 8) - lVar20 >> 4));
  }
  return;
}

