
/* v8::internal::compiler::InstructionSelector::InitializeCallBuffer(v8::internal::compiler::Node*,
   v8::internal::compiler::CallBuffer*,
   v8::base::Flags<v8::internal::compiler::InstructionSelector::CallBufferFlag, int>, bool, int) */

void __thiscall
v8::internal::compiler::InstructionSelector::InitializeCallBuffer
          (InstructionSelector *this,long param_1,long *param_2,uint param_4,uint param_5,
          int param_6)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  InstructionSelector *pIVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  Zone *pZVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  vector<v8::internal::compiler::PushParameter,v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter>>
  *this_00;
  ulong uVar26;
  Node *pNVar27;
  InstructionSequence *pIVar28;
  long *plVar29;
  ulong uVar30;
  undefined8 *puVar31;
  long *plVar32;
  InstructionSelector *local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar25 = **(ulong **)(*param_2 + 0x10);
  local_90 = this;
  if (uVar25 != 0) {
    if (uVar25 == 1) {
      plVar29 = (long *)param_2[3];
      lVar24 = *(long *)(*(ulong **)(*param_2 + 0x10))[2];
      if (plVar29 == (long *)param_2[4]) {
        lVar12 = (long)plVar29 - param_2[2] >> 4;
        uVar25 = lVar12 + 1;
        if (uVar25 >> 0x1b != 0) goto LAB_01637168;
        lVar16 = param_2[4] - param_2[2];
        uVar30 = lVar16 >> 3;
        if (uVar25 <= uVar30) {
          uVar25 = uVar30;
        }
        if (0x3fffffe < (ulong)(lVar16 >> 4)) {
          uVar25 = 0x7ffffff;
        }
        if (uVar25 == 0) {
          lVar16 = 0;
        }
        else {
          pZVar14 = (Zone *)param_2[5];
          uVar30 = uVar25 * 0x10;
          lVar16 = *(long *)(pZVar14 + 0x10);
          if (uVar30 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar16) ||
              uVar30 - (*(long *)(pZVar14 + 0x18) - lVar16) == 0) {
            *(ulong *)(pZVar14 + 0x10) = lVar16 + uVar30;
          }
          else {
            lVar16 = Zone::NewExpand(pZVar14,uVar30);
          }
        }
        plVar29 = (long *)(lVar16 + lVar12 * 0x10);
        *plVar29 = param_1;
        plVar29[1] = lVar24;
        lVar24 = param_2[2];
        plVar32 = plVar29;
        for (lVar12 = param_2[3]; lVar12 != lVar24; lVar12 = lVar12 + -0x10) {
          lVar17 = *(long *)(lVar12 + -0x10);
          plVar32[-1] = *(long *)(lVar12 + -8);
          plVar32[-2] = lVar17;
          plVar32 = plVar32 + -2;
        }
        param_2[2] = (long)plVar32;
        param_2[3] = (long)(plVar29 + 2);
        param_2[4] = lVar16 + uVar25 * 0x10;
        lVar24 = param_2[1];
      }
      else {
        *plVar29 = param_1;
        plVar29[1] = lVar24;
        param_2[3] = param_2[3] + 0x10;
        lVar24 = param_2[1];
      }
      if (lVar24 == 0) goto LAB_01636264;
LAB_0163619c:
      uVar25 = (ulong)(*(long *)(lVar24 + 8) != -1);
    }
    else {
      this_00 = (vector<v8::internal::compiler::PushParameter,v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter>>
                 *)(param_2 + 2);
      uVar30 = param_2[3] - *(long *)this_00 >> 4;
      if (uVar25 < uVar30 || uVar25 - uVar30 == 0) {
        if (uVar25 < uVar30) {
          param_2[3] = *(long *)this_00 + uVar25 * 0x10;
        }
      }
      else {
        std::__ndk1::
        vector<v8::internal::compiler::PushParameter,v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter>>
        ::__append(this_00,uVar25 - uVar30);
      }
      lVar24 = 0;
      iVar8 = 0;
      uVar30 = 0;
      do {
        lVar12 = param_2[2];
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + uVar30 * 8);
        *(undefined8 *)(lVar12 + lVar24) = 0;
        ((undefined8 *)(lVar12 + lVar24))[1] = uVar11;
        if ((~(uint)uVar11 & 0x80000001) == 0) {
          uVar9 = (int)((ulong)uVar11 >> 0x20) - 1;
          if (0xc < (uVar9 & 0xff)) goto LAB_0163715c;
          iVar8 = iVar8 + ((1 << (ulong)(*(uint *)(&DAT_01a573e4 + (long)(char)uVar9 * 4) & 0x1f)) +
                           7U >> 3);
        }
        uVar30 = uVar30 + 1;
        lVar24 = lVar24 + 0x10;
      } while (uVar25 != uVar30);
      plVar29 = (long *)*(long *)(param_1 + 0x18);
      while (plVar32 = plVar29, plVar32 != (long *)0x0) {
        plVar29 = (long *)*plVar32;
        lVar24 = 0x10;
        if ((*(uint *)(plVar32 + 2) & 1) != 0) {
          lVar24 = 0x20;
        }
        uVar25 = NodeProperties::IsValueEdge
                           (plVar32,(long)plVar32 +
                                    lVar24 + (ulong)(*(uint *)(plVar32 + 2) >> 1) * 0x20 + 0x18);
        if ((uVar25 & 1) != 0) {
          puVar31 = plVar32 + (ulong)(*(uint *)(plVar32 + 2) >> 1) * 3 + 3;
          if ((*(uint *)(plVar32 + 2) & 1) == 0) {
            puVar31 = (undefined8 *)*puVar31;
          }
          lVar24 = ProjectionIndexOf((Operator *)*puVar31);
          *(undefined8 **)(*(long *)this_00 + lVar24 * 0x10) = puVar31;
        }
      }
      lVar24 = *(long *)(this + 0x170);
      iVar4 = iVar8 - *(int *)(lVar24 + 0xc);
      if (iVar4 != 0 && *(int *)(lVar24 + 0xc) <= iVar8) {
        *(int *)(lVar24 + 0xc) = iVar8;
        *(int *)(lVar24 + 4) = iVar4 + *(int *)(lVar24 + 4);
      }
      lVar24 = param_2[1];
      if (lVar24 != 0) goto LAB_0163619c;
LAB_01636264:
      uVar25 = 0;
    }
    lVar24 = param_2[2];
    if (param_2[3] != lVar24) {
      uVar30 = 0;
      do {
        lVar12 = *(long *)(lVar24 + uVar30 * 0x10);
        if ((uVar30 < uVar25) || (lVar12 != 0)) {
          uVar26 = *(ulong *)(lVar24 + uVar30 * 0x10 + 8);
          if (lVar12 == 0) {
            uVar10 = InstructionSequence::NextVirtualRegister
                               (*(InstructionSequence **)(local_90 + 0x10));
            if (((uint)uVar26 < 0xfffffffe) || ((uVar26 & 1) != 0)) {
              uVar9 = (uint)uVar26 & 0x80000001;
              if ((uVar9 == 1) || (uVar9 == 0x80000001)) {
                uVar10 = (uVar26 & 0x1ffffffe) << 0x23 | (uVar10 & 0xffffffff) << 3 | 1;
              }
              else {
                uVar10 = (uVar26 & 0xfffffe) << 0x28 | (uVar10 & 0xffffffff) << 3;
                if (((uint)(uVar26 >> 0x20) & 0xff) < 0xb) {
                  uVar10 = uVar10 | 0xb800000001;
                }
                else {
                  uVar10 = uVar10 | 0xc800000001;
                }
              }
            }
            else {
              uVar10 = (uVar10 & 0xffffffff) << 3 | 0xd800000001;
            }
          }
          else {
            uVar10 = OperandGenerator::DefineAsLocation((OperandGenerator *)&local_90,lVar12,uVar26)
            ;
          }
          InstructionSequence::MarkAsRepresentation
                    (*(InstructionSequence **)(this + 0x10),uVar26 >> 0x20,uVar10 >> 3);
          if ((uVar10 >> 0x23 & 1) != 0) {
            puVar15 = (ulong *)param_2[7];
            if (puVar15 == (ulong *)param_2[8]) {
              lVar24 = (long)puVar15 - param_2[6] >> 3;
              uVar26 = lVar24 + 1;
              if (uVar26 >> 0x1c != 0) goto LAB_01637168;
              lVar12 = param_2[8] - param_2[6];
              uVar21 = lVar12 >> 2;
              if (uVar26 <= uVar21) {
                uVar26 = uVar21;
              }
              if (0x7fffffe < (ulong)(lVar12 >> 3)) {
                uVar26 = 0xfffffff;
              }
              if (uVar26 == 0) {
                lVar12 = 0;
              }
              else {
                pZVar14 = (Zone *)param_2[9];
                uVar21 = uVar26 * 8;
                lVar12 = *(long *)(pZVar14 + 0x10);
                if (uVar21 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
                    uVar21 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
                  *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar21;
                }
                else {
                  lVar12 = Zone::NewExpand(pZVar14,uVar21);
                }
              }
              puVar15 = (ulong *)(lVar12 + lVar24 * 8);
              puVar18 = puVar15 + 1;
              *puVar15 = uVar10;
              puVar1 = (ulong *)param_2[6];
              puVar22 = (ulong *)param_2[7];
              while (puVar22 != puVar1) {
                puVar22 = puVar22 + -1;
                puVar15 = puVar15 + -1;
                *puVar15 = *puVar22;
              }
              param_2[6] = (long)puVar15;
              param_2[7] = (long)puVar18;
              param_2[8] = lVar12 + uVar26 * 8;
            }
            else {
              *puVar15 = uVar10;
              param_2[7] = param_2[7] + 8;
            }
            *(undefined8 *)(param_2[2] + uVar30 * 0x10) = 0;
          }
        }
        lVar24 = param_2[2];
        uVar30 = uVar30 + 1;
      } while (uVar30 < (ulong)(param_2[3] - lVar24 >> 4));
    }
  }
  pIVar6 = local_90;
  plVar32 = (long *)(param_1 + 0x20);
  plVar29 = plVar32;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar29 = (long *)(*plVar32 + 0x10);
  }
  uVar9 = *(uint *)*param_2;
  if (uVar9 < 7) {
    pNVar27 = (Node *)*plVar29;
    switch(uVar9) {
    case 0:
      if (((param_4 & 1) == 0) || (*(short *)(*(long *)pNVar27 + 0x10) != 0x1e)) {
        uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
        uVar9 = *(uint *)(*(long *)(local_90 + 0x118) + uVar25 * 4);
        if ((param_4 >> 3 & 1) == 0) {
          if ((param_5 & 1) == 0) {
            if (uVar9 == 0xffffffff) {
              uVar9 = InstructionSequence::NextVirtualRegister
                                (*(InstructionSequence **)(local_90 + 0x10));
              *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
              uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
            }
            lVar24 = *(long *)(local_90 + 0xd8);
            uVar30 = (ulong)uVar9;
            uVar26 = 0x5800000001;
          }
          else {
            if (uVar9 == 0xffffffff) {
              uVar9 = InstructionSequence::NextVirtualRegister
                                (*(InstructionSequence **)(local_90 + 0x10));
              *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
              uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
            }
            lVar24 = *(long *)(local_90 + 0xd8);
            uVar30 = (ulong)uVar9;
            uVar26 = 0xd800000001;
          }
        }
        else {
          if (uVar9 == 0xffffffff) {
            uVar9 = InstructionSequence::NextVirtualRegister
                              (*(InstructionSequence **)(local_90 + 0x10));
            *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
            uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
          }
          lVar24 = *(long *)(local_90 + 0xd8);
          uVar30 = (ulong)uVar9;
          uVar26 = 0x4b800000001;
        }
        uVar10 = uVar25 >> 3 & 0x1ffff8;
        uVar30 = uVar26 & 0xfffffff800000000 | uVar26 & 7 | uVar30 << 3;
        *(ulong *)(lVar24 + uVar10) = *(ulong *)(lVar24 + uVar10) | 1L << (uVar25 & 0x3f);
      }
      else {
        pIVar28 = *(InstructionSequence **)(local_90 + 0x10);
        local_88 = OperandGenerator::ToConstant(pNVar27);
        uVar30 = InstructionSequence::AddImmediate(pIVar28,(Constant *)local_88);
      }
      puVar15 = (ulong *)param_2[0xb];
      if ((ulong *)param_2[0xc] <= puVar15) {
        lVar24 = (long)puVar15 - param_2[10] >> 3;
        uVar25 = lVar24 + 1;
        if (uVar25 >> 0x1c != 0) goto LAB_01637168;
        lVar12 = param_2[0xc] - param_2[10];
        uVar26 = lVar12 >> 2;
        if (uVar25 <= uVar26) {
          uVar25 = uVar26;
        }
        if (0x7fffffe < (ulong)(lVar12 >> 3)) {
          uVar25 = 0xfffffff;
        }
        if (uVar25 == 0) {
          lVar12 = 0;
        }
        else {
          pZVar14 = (Zone *)param_2[0xd];
          uVar26 = uVar25 * 8;
          lVar12 = *(long *)(pZVar14 + 0x10);
          if (uVar26 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
              uVar26 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
            *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar26;
          }
          else {
            lVar12 = Zone::NewExpand(pZVar14,uVar26);
          }
        }
        puVar15 = (ulong *)(lVar12 + lVar24 * 8);
        puVar18 = puVar15 + 1;
        *puVar15 = uVar30;
        puVar1 = (ulong *)param_2[10];
        puVar22 = (ulong *)param_2[0xb];
        lVar12 = lVar12 + uVar25 * 8;
        while (puVar22 != puVar1) {
          puVar22 = puVar22 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *puVar22;
        }
LAB_01636b34:
        param_2[10] = (long)puVar15;
        param_2[0xb] = (long)puVar18;
        param_2[0xc] = lVar12;
        goto LAB_01636b3c;
      }
      break;
    case 1:
      uVar30 = OperandGenerator::UseLocation
                         ((OperandGenerator *)&local_90,pNVar27,
                          *(undefined8 *)((uint *)*param_2 + 2));
      puVar15 = (ulong *)param_2[0xb];
      if ((ulong *)param_2[0xc] <= puVar15) {
        lVar24 = (long)puVar15 - param_2[10] >> 3;
        uVar25 = lVar24 + 1;
        if (uVar25 >> 0x1c != 0) goto LAB_01637168;
        lVar12 = param_2[0xc] - param_2[10];
        uVar26 = lVar12 >> 2;
        if (uVar25 <= uVar26) {
          uVar25 = uVar26;
        }
        if (0x7fffffe < (ulong)(lVar12 >> 3)) {
          uVar25 = 0xfffffff;
        }
        if (uVar25 == 0) {
          lVar12 = 0;
        }
        else {
          pZVar14 = (Zone *)param_2[0xd];
          uVar26 = uVar25 * 8;
          lVar12 = *(long *)(pZVar14 + 0x10);
          if (uVar26 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
              uVar26 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
            *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar26;
          }
          else {
            lVar12 = Zone::NewExpand(pZVar14,uVar26);
          }
        }
        puVar15 = (ulong *)(lVar12 + lVar24 * 8);
        puVar18 = puVar15 + 1;
        *puVar15 = uVar30;
        puVar1 = (ulong *)param_2[10];
        puVar22 = (ulong *)param_2[0xb];
        lVar12 = lVar12 + uVar25 * 8;
        while (puVar22 != puVar1) {
          puVar22 = puVar22 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *puVar22;
        }
        goto LAB_01636b34;
      }
      break;
    case 2:
      if (((param_4 >> 1 & 1) == 0) || (*(short *)(*(long *)pNVar27 + 0x10) != 0x1b)) {
        uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
        uVar9 = *(uint *)(*(long *)(local_90 + 0x118) + uVar25 * 4);
        if ((param_4 >> 3 & 1) == 0) {
          if (uVar9 == 0xffffffff) {
            uVar9 = InstructionSequence::NextVirtualRegister
                              (*(InstructionSequence **)(local_90 + 0x10));
            *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
            uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
          }
          lVar24 = *(long *)(local_90 + 0xd8);
          uVar30 = 0x5800000001;
        }
        else {
          if (uVar9 == 0xffffffff) {
            uVar9 = InstructionSequence::NextVirtualRegister
                              (*(InstructionSequence **)(local_90 + 0x10));
            *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
            uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
          }
          lVar24 = *(long *)(local_90 + 0xd8);
          uVar30 = 0x4b800000001;
        }
        uVar26 = uVar25 >> 3 & 0x1ffff8;
        uVar30 = uVar30 & 0xfffffff800000000 | uVar30 & 7 | (ulong)uVar9 << 3;
        *(ulong *)(lVar24 + uVar26) = *(ulong *)(lVar24 + uVar26) | 1L << (uVar25 & 0x3f);
      }
      else {
        pIVar28 = *(InstructionSequence **)(local_90 + 0x10);
        local_88 = OperandGenerator::ToConstant(pNVar27);
        uVar30 = InstructionSequence::AddImmediate(pIVar28,(Constant *)local_88);
      }
      puVar15 = (ulong *)param_2[0xb];
      if ((ulong *)param_2[0xc] <= puVar15) {
        lVar24 = (long)puVar15 - param_2[10] >> 3;
        uVar25 = lVar24 + 1;
        if (uVar25 >> 0x1c != 0) goto LAB_01637168;
        lVar12 = param_2[0xc] - param_2[10];
        uVar26 = lVar12 >> 2;
        if (uVar25 <= uVar26) {
          uVar25 = uVar26;
        }
        if (0x7fffffe < (ulong)(lVar12 >> 3)) {
          uVar25 = 0xfffffff;
        }
        if (uVar25 == 0) {
          lVar12 = 0;
        }
        else {
          pZVar14 = (Zone *)param_2[0xd];
          uVar26 = uVar25 * 8;
          lVar12 = *(long *)(pZVar14 + 0x10);
          if (uVar26 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
              uVar26 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
            *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar26;
          }
          else {
            lVar12 = Zone::NewExpand(pZVar14,uVar26);
          }
        }
        puVar15 = (ulong *)(lVar12 + lVar24 * 8);
        puVar18 = puVar15 + 1;
        *puVar15 = uVar30;
        puVar1 = (ulong *)param_2[10];
        puVar22 = (ulong *)param_2[0xb];
        lVar12 = lVar12 + uVar25 * 8;
        while (puVar22 != puVar1) {
          puVar22 = puVar22 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *puVar22;
        }
        goto LAB_01636b34;
      }
      break;
    default:
      if (((param_4 >> 1 & 1) == 0) || ((*(ushort *)(*(long *)pNVar27 + 0x10) & 0xfffe) != 0x20)) {
        uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
        uVar9 = *(uint *)(*(long *)(local_90 + 0x118) + uVar25 * 4);
        if ((param_4 >> 3 & 1) == 0) {
          if (uVar9 == 0xffffffff) {
            uVar9 = InstructionSequence::NextVirtualRegister
                              (*(InstructionSequence **)(local_90 + 0x10));
            *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
            uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
          }
          lVar24 = *(long *)(local_90 + 0xd8);
          uVar30 = 0x5800000001;
        }
        else {
          if (uVar9 == 0xffffffff) {
            uVar9 = InstructionSequence::NextVirtualRegister
                              (*(InstructionSequence **)(local_90 + 0x10));
            *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
            uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
          }
          lVar24 = *(long *)(local_90 + 0xd8);
          uVar30 = 0x4b800000001;
        }
        uVar26 = uVar25 >> 3 & 0x1ffff8;
        uVar30 = uVar30 & 0xfffffff800000000 | uVar30 & 7 | (ulong)uVar9 << 3;
        *(ulong *)(lVar24 + uVar26) = *(ulong *)(lVar24 + uVar26) | 1L << (uVar25 & 0x3f);
      }
      else {
        pIVar28 = *(InstructionSequence **)(local_90 + 0x10);
        local_88 = OperandGenerator::ToConstant(pNVar27);
        uVar30 = InstructionSequence::AddImmediate(pIVar28,(Constant *)local_88);
      }
      puVar15 = (ulong *)param_2[0xb];
      if ((ulong *)param_2[0xc] <= puVar15) {
        lVar24 = (long)puVar15 - param_2[10] >> 3;
        uVar25 = lVar24 + 1;
        if (uVar25 >> 0x1c != 0) goto LAB_01637168;
        lVar12 = param_2[0xc] - param_2[10];
        uVar26 = lVar12 >> 2;
        if (uVar25 <= uVar26) {
          uVar25 = uVar26;
        }
        if (0x7fffffe < (ulong)(lVar12 >> 3)) {
          uVar25 = 0xfffffff;
        }
        if (uVar25 == 0) {
          lVar12 = 0;
        }
        else {
          pZVar14 = (Zone *)param_2[0xd];
          uVar26 = uVar25 * 8;
          lVar12 = *(long *)(pZVar14 + 0x10);
          if (uVar26 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
              uVar26 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
            *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar26;
          }
          else {
            lVar12 = Zone::NewExpand(pZVar14,uVar26);
          }
        }
        puVar15 = (ulong *)(lVar12 + lVar24 * 8);
        puVar18 = puVar15 + 1;
        *puVar15 = uVar30;
        puVar1 = (ulong *)param_2[10];
        puVar22 = (ulong *)param_2[0xb];
        lVar12 = lVar12 + uVar25 * 8;
        while (puVar22 != puVar1) {
          puVar22 = puVar22 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *puVar22;
        }
        goto LAB_01636b34;
      }
      break;
    case 6:
      uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
      uVar9 = *(uint *)(*(long *)(local_90 + 0x118) + uVar25 * 4);
      if ((param_4 >> 3 & 1) == 0) {
        uVar30 = 0x5800000001;
      }
      else {
        uVar30 = 0x4b800000001;
      }
      if (uVar9 == 0xffffffff) {
        uVar9 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(local_90 + 0x10))
        ;
        *(uint *)(*(long *)(pIVar6 + 0x118) + uVar25 * 4) = uVar9;
        uVar25 = (ulong)*(uint *)(pNVar27 + 0x14) & 0xffffff;
      }
      uVar26 = uVar25 >> 3 & 0x1ffff8;
      *(ulong *)(*(long *)(local_90 + 0xd8) + uVar26) =
           *(ulong *)(*(long *)(local_90 + 0xd8) + uVar26) | 1L << (uVar25 & 0x3f);
      puVar15 = (ulong *)param_2[0xb];
      uVar30 = uVar30 | (ulong)uVar9 << 3;
      if ((ulong *)param_2[0xc] <= puVar15) {
        lVar24 = (long)puVar15 - param_2[10] >> 3;
        uVar25 = lVar24 + 1;
        if (uVar25 >> 0x1c != 0) goto LAB_01637168;
        lVar12 = param_2[0xc] - param_2[10];
        uVar26 = lVar12 >> 2;
        if (uVar25 <= uVar26) {
          uVar25 = uVar26;
        }
        if (0x7fffffe < (ulong)(lVar12 >> 3)) {
          uVar25 = 0xfffffff;
        }
        if (uVar25 == 0) {
          lVar12 = 0;
        }
        else {
          pZVar14 = (Zone *)param_2[0xd];
          uVar26 = uVar25 * 8;
          lVar12 = *(long *)(pZVar14 + 0x10);
          if (uVar26 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
              uVar26 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
            *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar26;
          }
          else {
            lVar12 = Zone::NewExpand(pZVar14,uVar26);
          }
        }
        puVar15 = (ulong *)(lVar12 + lVar24 * 8);
        puVar18 = puVar15 + 1;
        *puVar15 = uVar30;
        puVar1 = (ulong *)param_2[10];
        puVar22 = (ulong *)param_2[0xb];
        lVar12 = lVar12 + uVar25 * 8;
        while (puVar22 != puVar1) {
          puVar22 = puVar22 + -1;
          puVar15 = puVar15 + -1;
          *puVar15 = *puVar22;
        }
        goto LAB_01636b34;
      }
      *puVar15 = uVar30;
      goto LAB_01636a94;
    }
    *puVar15 = uVar30;
LAB_01636a94:
    param_2[0xb] = param_2[0xb] + 8;
  }
LAB_01636b3c:
  plVar29 = param_2 + 10;
  pIVar28 = *(InstructionSequence **)(local_90 + 0x10);
  Constant::Constant((Constant *)local_88,-1);
  uVar11 = InstructionSequence::AddImmediate(pIVar28,(Constant *)local_88);
  puVar31 = (undefined8 *)param_2[0xb];
  if (puVar31 < (undefined8 *)param_2[0xc]) {
    *puVar31 = uVar11;
    param_2[0xb] = param_2[0xb] + 8;
    piVar13 = (int *)param_2[1];
  }
  else {
    lVar24 = (long)puVar31 - *plVar29 >> 3;
    uVar25 = lVar24 + 1;
    if (uVar25 >> 0x1c != 0) goto LAB_01637168;
    lVar12 = param_2[0xc] - *plVar29;
    uVar30 = lVar12 >> 2;
    if (uVar25 <= uVar30) {
      uVar25 = uVar30;
    }
    if (0x7fffffe < (ulong)(lVar12 >> 3)) {
      uVar25 = 0xfffffff;
    }
    if (uVar25 == 0) {
      lVar12 = 0;
    }
    else {
      pZVar14 = (Zone *)param_2[0xd];
      uVar30 = uVar25 * 8;
      lVar12 = *(long *)(pZVar14 + 0x10);
      if (uVar30 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
          uVar30 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
        *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar30;
      }
      else {
        lVar12 = Zone::NewExpand(pZVar14,uVar30);
      }
    }
    puVar31 = (undefined8 *)(lVar12 + lVar24 * 8);
    puVar19 = puVar31 + 1;
    *puVar31 = uVar11;
    puVar2 = (undefined8 *)param_2[10];
    puVar23 = (undefined8 *)param_2[0xb];
    while (puVar23 != puVar2) {
      puVar23 = puVar23 + -1;
      puVar31 = puVar31 + -1;
      *puVar31 = *puVar23;
    }
    param_2[10] = (long)puVar31;
    param_2[0xb] = (long)puVar19;
    param_2[0xc] = lVar12 + uVar25 * 8;
    piVar13 = (int *)param_2[1];
  }
  if (piVar13 != (int *)0x0) {
    plVar20 = plVar32;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      plVar20 = (long *)(*plVar32 + 0x10);
    }
    pNVar27 = *(Node **)((long)plVar20 +
                        ((*(long *)(*(long *)(*param_2 + 0x10) + 8) << 0x20) + 0x100000000 >> 0x1d))
    ;
    if ((param_5 & 1) != 0) {
      do {
        pNVar27 = (Node *)NodeProperties::GetFrameStateInput(pNVar27);
        piVar13 = *(int **)(param_2[1] + 0x78);
        param_2[1] = (long)piVar13;
        if (piVar13 == (int *)0x0) break;
      } while (*piVar13 == 1);
    }
    local_88._0_8_ = 0;
    local_88._8_4_ = 0xffffffff;
    iVar8 = InstructionSequence::AddDeoptimizationEntry
                      (*(InstructionSequence **)(this + 0x10),piVar13,2,0x21,local_88);
    pIVar28 = *(InstructionSequence **)(local_90 + 0x10);
    Constant::Constant((Constant *)local_88,iVar8);
    uVar11 = InstructionSequence::AddImmediate(pIVar28,(Constant *)local_88);
    puVar31 = (undefined8 *)param_2[0xb];
    if (puVar31 < (undefined8 *)param_2[0xc]) {
      *puVar31 = uVar11;
      param_2[0xb] = param_2[0xb] + 8;
    }
    else {
      lVar24 = (long)puVar31 - *plVar29 >> 3;
      uVar25 = lVar24 + 1;
      if (uVar25 >> 0x1c != 0) {
LAB_01637168:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar12 = param_2[0xc] - *plVar29;
      uVar30 = lVar12 >> 2;
      if (uVar25 <= uVar30) {
        uVar25 = uVar30;
      }
      if (0x7fffffe < (ulong)(lVar12 >> 3)) {
        uVar25 = 0xfffffff;
      }
      if (uVar25 == 0) {
        lVar12 = 0;
      }
      else {
        pZVar14 = (Zone *)param_2[0xd];
        uVar30 = uVar25 * 8;
        lVar12 = *(long *)(pZVar14 + 0x10);
        if (uVar30 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar12) ||
            uVar30 - (*(long *)(pZVar14 + 0x18) - lVar12) == 0) {
          *(ulong *)(pZVar14 + 0x10) = lVar12 + uVar30;
        }
        else {
          lVar12 = Zone::NewExpand(pZVar14,uVar30);
        }
      }
      puVar31 = (undefined8 *)(lVar12 + lVar24 * 8);
      puVar19 = puVar31 + 1;
      *puVar31 = uVar11;
      puVar2 = (undefined8 *)param_2[10];
      puVar23 = (undefined8 *)param_2[0xb];
      while (puVar23 != puVar2) {
        puVar23 = puVar23 + -1;
        puVar31 = puVar31 + -1;
        *puVar31 = *puVar23;
      }
      param_2[10] = (long)puVar31;
      param_2[0xb] = (long)puVar19;
      param_2[0xc] = lVar12 + uVar25 * 8;
    }
    uStack_70 = *(undefined8 *)(*(long *)(this + 0x10) + 8);
    local_88._0_8_ = 0;
    local_88._8_8_ = 0;
    local_78 = 0;
    AddInputsToFrameStateDescriptor(this,param_2[1],pNVar27,&local_90,local_88,plVar29,1);
    if (local_88._0_8_ != 0) {
      local_88._8_8_ = local_88._0_8_;
    }
  }
  lVar24 = *(long *)(*(long *)(*param_2 + 0x10) + 8);
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    plVar32 = (long *)(*plVar32 + 0x10);
  }
  if (lVar24 != -1) {
    lVar12 = 0;
    while( true ) {
      bVar7 = lVar12 == lVar24;
      lVar12 = lVar12 + 1;
      plVar32 = plVar32 + 1;
      if (bVar7) break;
      if (lVar12 != 0) {
        uVar30 = *(ulong *)((*(long **)(*param_2 + 0x10))[2] +
                            (lVar12 + **(long **)(*param_2 + 0x10)) * 8 + -8);
        uVar25 = uVar30;
        if ((param_4 >> 2 & 1) != 0) {
          uVar9 = (uint)uVar30;
          if ((uVar30 & 1) != 0) {
            uVar9 = param_6 * 2 + (uint)uVar30 | 1;
          }
          uVar25 = (ulong)uVar9;
        }
        uVar26 = uVar25 & 0xffffffff | uVar30 & 0xffff000000000000 | uVar30 & 0xffff00000000;
        uVar25 = OperandGenerator::UseLocation((OperandGenerator *)&local_90,*plVar32,uVar26);
        if (((param_4 >> 2 & 1) == 0) && ((uVar25 >> 0x23 & 1) == 0)) {
          lVar16 = param_2[0xe];
          uVar9 = ~(uint)((long)uVar25 >> 0x24);
          uVar25 = param_2[0xf] - lVar16 >> 4;
          if (uVar25 <= (ulong)(long)(int)uVar9) {
            uVar3 = ((uint)(uVar30 >> 0x20) & 0xffff) - 1;
            if (0xc < (uVar3 & 0xff)) {
LAB_0163715c:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            uVar3 = (uint)(1 << (ulong)(*(uint *)(&DAT_01a573e4 + (long)(char)uVar3 * 4) & 0x1f)) >>
                    3;
            if (uVar3 < 2) {
              uVar3 = 1;
            }
            uVar30 = (ulong)(int)(uVar3 + uVar9);
            if (uVar25 < uVar30) {
              std::__ndk1::
              vector<v8::internal::compiler::PushParameter,v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter>>
              ::__append((vector<v8::internal::compiler::PushParameter,v8::internal::ZoneAllocator<v8::internal::compiler::PushParameter>>
                          *)(param_2 + 0xe),uVar30 - uVar25);
              lVar16 = param_2[0xe];
            }
            else if (uVar30 < uVar25) {
              param_2[0xf] = lVar16 + uVar30 * 0x10;
            }
          }
          plVar20 = (long *)(lVar16 + (long)(int)uVar9 * 0x10);
          *plVar20 = *plVar32;
          plVar20[1] = uVar26;
        }
        else {
          if (((uVar25 & 0x7e7800000000) == 0x2e3800000000) && (*(int *)(this + 0x16c) != 1)) {
            pIVar28 = *(InstructionSequence **)(local_90 + 0x10);
            Constant::Constant((Constant *)local_88,(int)((ulong)(param_2[0xb] - param_2[10]) >> 3))
            ;
            uVar11 = InstructionSequence::AddImmediate(pIVar28,(Constant *)local_88);
            pIVar6 = local_90;
            *(undefined8 *)(param_2[10] + 8) = uVar11;
            lVar16 = *plVar32;
            uVar30 = (ulong)*(uint *)(lVar16 + 0x14) & 0xffffff;
            uVar9 = *(uint *)(*(long *)(local_90 + 0x118) + uVar30 * 4);
            if (uVar9 == 0xffffffff) {
              uVar9 = InstructionSequence::NextVirtualRegister
                                (*(InstructionSequence **)(local_90 + 0x10));
              *(uint *)(*(long *)(pIVar6 + 0x118) + uVar30 * 4) = uVar9;
              uVar30 = (ulong)*(uint *)(lVar16 + 0x14) & 0xffffff;
            }
            uVar26 = uVar30 >> 3 & 0x1ffff8;
            uVar25 = (ulong)uVar9 << 3 | 0x2800000001;
            *(ulong *)(*(long *)(local_90 + 0xd8) + uVar26) =
                 *(ulong *)(*(long *)(local_90 + 0xd8) + uVar26) | 1L << (uVar30 & 0x3f);
          }
          puVar15 = (ulong *)param_2[0xb];
          if (puVar15 == (ulong *)param_2[0xc]) {
            lVar16 = (long)puVar15 - *plVar29 >> 3;
            uVar30 = lVar16 + 1;
            if (uVar30 >> 0x1c != 0) goto LAB_01637168;
            lVar17 = param_2[0xc] - *plVar29;
            uVar26 = lVar17 >> 2;
            if (uVar30 <= uVar26) {
              uVar30 = uVar26;
            }
            if (0x7fffffe < (ulong)(lVar17 >> 3)) {
              uVar30 = 0xfffffff;
            }
            if (uVar30 == 0) {
              lVar17 = 0;
            }
            else {
              pZVar14 = (Zone *)param_2[0xd];
              uVar26 = uVar30 * 8;
              lVar17 = *(long *)(pZVar14 + 0x10);
              if (uVar26 < (ulong)(*(long *)(pZVar14 + 0x18) - lVar17) ||
                  uVar26 - (*(long *)(pZVar14 + 0x18) - lVar17) == 0) {
                *(ulong *)(pZVar14 + 0x10) = lVar17 + uVar26;
              }
              else {
                lVar17 = Zone::NewExpand(pZVar14,uVar26);
              }
            }
            puVar15 = (ulong *)(lVar17 + lVar16 * 8);
            puVar18 = puVar15 + 1;
            *puVar15 = uVar25;
            puVar1 = (ulong *)param_2[10];
            puVar22 = (ulong *)param_2[0xb];
            while (puVar22 != puVar1) {
              puVar22 = puVar22 + -1;
              puVar15 = puVar15 + -1;
              *puVar15 = *puVar22;
            }
            param_2[10] = (long)puVar15;
            param_2[0xb] = (long)puVar18;
            param_2[0xc] = lVar17 + uVar30 * 8;
          }
          else {
            *puVar15 = uVar25;
            param_2[0xb] = param_2[0xb] + 8;
          }
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

