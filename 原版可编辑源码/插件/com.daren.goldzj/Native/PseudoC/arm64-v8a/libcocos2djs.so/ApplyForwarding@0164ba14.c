
/* v8::internal::compiler::JumpThreading::ApplyForwarding(v8::internal::Zone*,
   v8::internal::ZoneVector<v8::internal::compiler::RpoNumber> const&,
   v8::internal::compiler::InstructionSequence*) */

void v8::internal::compiler::JumpThreading::ApplyForwarding
               (Zone *param_1,ZoneVector *param_2,InstructionSequence *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  long *plVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  long *plVar7;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long local_98 [4];
  undefined8 local_78;
  bool local_64 [4];
  long *plVar8;
  
  if (FLAG_turbo_jt != '\0') {
    local_64[0] = false;
    local_78 = param_1;
    std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
              ((vector<bool,v8::internal::ZoneAllocator<bool>> *)local_98,
               (*(long *)(param_2 + 8) - *(long *)param_2) * 0x40000000 >> 0x20,local_64,
               (ZoneAllocator *)&local_78);
    plVar7 = (long *)**(long **)(param_3 + 0x10);
    plVar3 = (long *)(*(long **)(param_3 + 0x10))[1];
    if (plVar7 != plVar3) {
      bVar9 = true;
      do {
        lVar16 = *plVar7;
        uVar11 = (ulong)*(int *)(lVar16 + 100);
        if (bVar9) {
          uVar15 = 1L << (uVar11 & 0x3f);
          puVar5 = (ulong *)(local_98[0] + (uVar11 >> 6) * 8);
LAB_0164baf4:
          uVar10 = *puVar5 & (uVar15 ^ 0xffffffffffffffff);
        }
        else {
          puVar5 = (ulong *)(local_98[0] + (uVar11 >> 6) * 8);
          uVar15 = 1L << (uVar11 & 0x3f);
          if (*(int *)(*(long *)param_2 + uVar11 * 4) == *(int *)(lVar16 + 100)) goto LAB_0164baf4;
          uVar10 = *puVar5 | uVar15;
        }
        *puVar5 = uVar10;
        uVar14 = *(uint *)(lVar16 + 0x70);
        iVar4 = *(int *)(lVar16 + 0x74);
        if ((int)uVar14 < iVar4) {
          lVar12 = (long)(int)uVar14;
          bVar9 = true;
          do {
            puVar13 = *(uint **)(*(long *)(*(long *)(param_3 + 0x88) +
                                          ((ulong)(lVar12 + *(long *)(param_3 + 0xb0)) >> 6 &
                                          0x3fffffffffffff8)) +
                                (lVar12 + *(long *)(param_3 + 0xb0) & 0x1ffU) * 8);
            if ((*puVar13 >> 0xe & 7) - 1 < 2) {
LAB_0164bb30:
              bVar9 = false;
            }
            else if ((*puVar13 & 0x1ff) == 0xd) {
              if ((*(ulong *)(local_98[0] + (uVar11 >> 6) * 8) & uVar15) != 0) {
                if (FLAG_trace_turbo_jt != '\0') {
                  PrintF("jt-fw nop @%d\n",(ulong)uVar14);
                }
                puVar13[0] = 0x11;
                puVar13[1] = 0;
                puVar13[6] = 0;
                puVar13[7] = 0;
                iVar4 = *(int *)(lVar16 + 0x74);
              }
              goto LAB_0164bb30;
            }
            lVar12 = lVar12 + 1;
            uVar14 = uVar14 + 1;
          } while (lVar12 < iVar4);
        }
        else {
          bVar9 = true;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar3);
    }
    lVar16 = *(long *)(param_3 + 0x60);
    lVar12 = *(long *)(param_3 + 0x68);
    if (lVar12 != lVar16) {
      lVar6 = 0;
      uVar11 = 0;
      do {
        piVar1 = (int *)(lVar16 + lVar6);
        if (*piVar1 == 7) {
          uVar15 = *(ulong *)(piVar1 + 2);
          iVar4 = *(int *)(*(long *)param_2 +
                          (-(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar15 & 0xffffffff) << 2))
          ;
          if (iVar4 != (int)uVar15) {
            puVar2 = (undefined4 *)(lVar16 + lVar6);
            *puVar2 = 7;
            *(undefined1 *)(piVar1 + 1) = 0x13;
            *(undefined1 *)((long)puVar2 + 7) = local_78._2_1_;
            *(undefined2 *)((long)puVar2 + 5) = (undefined2)local_78;
            *(long *)(piVar1 + 2) = (long)iVar4;
            lVar16 = *(long *)(param_3 + 0x60);
            lVar12 = *(long *)(param_3 + 0x68);
          }
        }
        uVar11 = uVar11 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar11 < (ulong)(lVar12 - lVar16 >> 4));
    }
    plVar7 = (long *)**(long **)(param_3 + 0x18);
    plVar3 = (long *)(*(long **)(param_3 + 0x18))[1];
    if (plVar7 != plVar3) {
      iVar4 = 0;
      do {
        plVar8 = plVar7 + 1;
        uVar11 = (ulong)*(int *)(*plVar7 + 100);
        *(int *)(*plVar7 + 0x60) = iVar4;
        if ((*(ulong *)(local_98[0] + (uVar11 >> 3 & 0x1ffffffffffffff8)) >> (uVar11 & 0x3f) & 1) ==
            0) {
          iVar4 = iVar4 + 1;
        }
        plVar7 = plVar8;
      } while (plVar3 != plVar8);
    }
  }
  return;
}

