
/* v8::internal::compiler::LiveRangeBuilder::ProcessPhis(v8::internal::compiler::InstructionBlock
   const*, v8::internal::BitVector*) */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::ProcessPhis
          (LiveRangeBuilder *this,InstructionBlock *param_1,BitVector *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  InstructionOperand *pIVar10;
  long lVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  InstructionBlock IVar15;
  long *plVar16;
  uint *puVar17;
  BitVector *pBVar18;
  byte bVar19;
  byte bVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  int iVar24;
  InstructionOperand *pIVar25;
  undefined8 *puVar26;
  InstructionOperand *local_70;
  undefined8 uStack_68;
  undefined8 *puVar14;
  
  puVar26 = *(undefined8 **)(param_1 + 0x40);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar26 != puVar3) {
    do {
      puVar17 = (uint *)*puVar26;
      uVar4 = *puVar17;
      pBVar18 = param_2 + 8;
      if (*(int *)(param_2 + 4) != 1) {
        uVar1 = uVar4 + 0x3f;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        pBVar18 = (BitVector *)(*(long *)(param_2 + 8) + (long)((int)uVar1 >> 6) * 8);
      }
      *(ulong *)pBVar18 = *(ulong *)pBVar18 & (1L << ((ulong)uVar4 & 0x3f) ^ 0xffffffffffffffffU);
      iVar24 = 2;
      lVar22 = *(long *)(*(long *)this + 0x10);
      lVar2 = **(long **)(lVar22 + 0x10);
      piVar23 = *(int **)(param_1 + 0x20);
      pIVar25 = (InstructionOperand *)0x0;
      bVar20 = 0;
      do {
        iVar5 = *piVar23;
        if ((ulong)((*(long **)(lVar22 + 0x10))[1] - lVar2 >> 3) <= (ulong)(long)iVar5) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pIVar10 = pIVar25;
        bVar19 = bVar20;
        if (iVar5 < *(int *)(param_1 + 100)) {
          lVar7 = *(long *)(lVar2 + (long)iVar5 * 8);
          lVar8 = (long)*(int *)(lVar7 + 0x74) + -1;
          uVar21 = *(long *)(lVar22 + 0xb0) + lVar8;
          lVar11 = *(long *)(*(long *)(*(long *)(lVar22 + 0x88) + (uVar21 >> 6 & 0x3fffffffffffff8))
                            + (uVar21 & 0x1ff) * 8);
          plVar9 = *(long **)(lVar11 + 0x10);
          for (plVar16 = (long *)*plVar9; plVar16 != (long *)plVar9[1]; plVar16 = plVar16 + 1) {
            pIVar10 = (InstructionOperand *)*plVar16;
            if ((*(ulong *)(pIVar10 + 8) & 7) == 1 && uVar4 == (uint)(*(ulong *)(pIVar10 + 8) >> 3))
            goto LAB_0165c15c;
          }
          pIVar10 = (InstructionOperand *)0x0;
LAB_0165c15c:
          plVar16 = *(long **)(lVar11 + 8);
          bVar6 = (*(char *)(lVar7 + 0x78) == '\0') << 2;
          bVar19 = bVar6;
          if (plVar16 != (long *)0x0) {
            if ((undefined8 *)*plVar16 != (undefined8 *)plVar16[1]) {
              puVar13 = (undefined8 *)*plVar16;
              do {
                puVar14 = puVar13 + 1;
                if (*(ulong *)pIVar10 == ((ulong *)*puVar13)[1]) {
                  bVar19 = bVar6 | 2;
                  if ((*(ulong *)*puVar13 & 7) != 4) {
                    bVar19 = bVar6;
                  }
                  break;
                }
                puVar13 = puVar14;
              } while ((undefined8 *)plVar16[1] != puVar14);
            }
          }
          bVar19 = bVar19 | (int)lVar8 == *(int *)(lVar7 + 0x70);
          if (pIVar25 != (InstructionOperand *)0x0 && bVar19 <= bVar20) {
            pIVar10 = pIVar25;
            bVar19 = bVar20;
          }
          if (iVar24 < 2) break;
          iVar24 = iVar24 + -1;
        }
        piVar23 = piVar23 + 1;
        pIVar25 = pIVar10;
        bVar20 = bVar19;
      } while (piVar23 != *(int **)(param_1 + 0x28));
      uVar21 = *(ulong *)pIVar10;
      uVar4 = (uint)uVar21 & 7;
      if (uVar4 - 2 < 2) {
        uVar12 = 0;
      }
      else if (uVar4 == 4) {
        if (((uVar21 & 0x1c) == 4) && (((uint)(uVar21 >> 5) & 0xff) < 0xb)) {
          uVar12 = 1;
        }
        else {
          uVar12 = (uVar21 & 0x1c) == 4 && 10 < ((uint)uVar21 >> 5 & 0xff);
        }
      }
      else {
        if (uVar4 != 1) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        uVar12 = 4;
      }
      if ((*(byte *)(*(long *)this + 0x1d0) & 1) == 0) {
        IVar15 = (InstructionBlock)0x0;
      }
      else {
        IVar15 = param_1[0x78];
      }
      uStack_68 = Define(this,*(int *)(param_1 + 0x70) << 2,puVar17 + 2,pIVar10,uVar12,IVar15);
      local_70 = pIVar10;
      std::__ndk1::
      __tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand*,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::less<v8::internal::compiler::InstructionOperand*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>>
      ::
      __emplace_unique_key_args<v8::internal::compiler::InstructionOperand*,std::__ndk1::pair<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>
                ((__tree<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::__map_value_compare<v8::internal::compiler::InstructionOperand*,std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>,std::__ndk1::less<v8::internal::compiler::InstructionOperand*>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<v8::internal::compiler::InstructionOperand*,v8::internal::compiler::UsePosition*>>>
                  *)(this + 8),&local_70,(pair *)&local_70);
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar3);
  }
  return;
}

