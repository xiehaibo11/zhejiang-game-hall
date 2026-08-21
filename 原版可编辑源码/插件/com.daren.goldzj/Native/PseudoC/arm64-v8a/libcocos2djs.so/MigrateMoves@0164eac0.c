
/* v8::internal::compiler::MoveOptimizer::MigrateMoves(v8::internal::compiler::Instruction*,
   v8::internal::compiler::Instruction*) */

void __thiscall
v8::internal::compiler::MoveOptimizer::MigrateMoves
          (MoveOptimizer *this,Instruction *param_1,Instruction *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong *puVar5;
  bool bVar6;
  __tree_node_base *p_Var7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  __tree_node_base *p_Var11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  __tree_node_base *p_Var16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ZoneVector *pZVar25;
  long *plVar26;
  Zone *pZVar27;
  Instruction *pIVar28;
  __tree_node_base *p_Var29;
  InstructionOperand *pIVar30;
  undefined8 uVar31;
  long *plVar32;
  vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
  *this_00;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  __tree_node_base *local_80;
  __tree_node_base *local_78;
  Zone *local_70;
  long local_68;
  
  if (((((byte)param_2[7] >> 6 & 1) == 0) &&
      (plVar32 = *(long **)(param_2 + 8), plVar32 != (long *)0x0)) && (*plVar32 != plVar32[1])) {
    puVar14 = *(undefined8 **)(this + 0x30);
    *(undefined8 **)(this + 0x38) = puVar14;
    this_00 = (vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
               *)(this + 0x50);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)this_00;
    uVar8 = *(uint *)(param_2 + 4);
    if ((uVar8 & 0xffff00) != 0) {
      uVar22 = 0;
      while( true ) {
        if (puVar14 == *(undefined8 **)(this + 0x40)) {
          std::__ndk1::
          vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
          ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                    ((vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
                      *)(this + 0x30),
                     (InstructionOperand *)(param_2 + (uVar22 + (uVar8 & 0xff)) * 8 + 0x28));
        }
        else {
          *puVar14 = *(undefined8 *)(param_2 + (uVar22 + (uVar8 & 0xff)) * 8 + 0x28);
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
        }
        uVar8 = *(uint *)(param_2 + 4);
        uVar22 = uVar22 + 1;
        if ((ushort)(uVar8 >> 8) <= uVar22) break;
        puVar14 = *(undefined8 **)(this + 0x38);
      }
    }
    if ((uVar8 & 0xff) != 0) {
      uVar22 = 0;
      pIVar28 = param_2 + 0x28;
      do {
        if (*(undefined8 **)(this + 0x58) == *(undefined8 **)(this + 0x60)) {
          std::__ndk1::
          vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
          ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                    (this_00,(InstructionOperand *)pIVar28);
        }
        else {
          **(undefined8 **)(this + 0x58) = *(undefined8 *)pIVar28;
          *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
        }
        uVar8 = *(uint *)(param_2 + 4);
        uVar22 = uVar22 + 1;
        pIVar28 = pIVar28 + 8;
      } while (uVar22 < (byte)uVar8);
    }
    if ((uVar8 & 0x3f000000) != 0) {
      uVar22 = 0;
      do {
        if (*(undefined8 **)(this + 0x58) == *(undefined8 **)(this + 0x60)) {
          std::__ndk1::
          vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
          ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                    (this_00,(InstructionOperand *)
                             (param_2 +
                             (uVar22 + ((uVar8 >> 8 & 0xffff) + (uVar8 & 0xff))) * 8 + 0x28));
        }
        else {
          **(undefined8 **)(this + 0x58) =
               *(undefined8 *)
                (param_2 + (uVar22 + ((uVar8 >> 8 & 0xffff) + (uVar8 & 0xff))) * 8 + 0x28);
          *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
        }
        uVar8 = *(uint *)(param_2 + 4);
        uVar22 = uVar22 + 1;
      } while (uVar22 < ((ulong)(uVar8 >> 0x18) & 0x3f));
    }
    plVar4 = (long *)plVar32[1];
    for (plVar26 = (long *)*plVar32; plVar26 != plVar4; plVar26 = plVar26 + 1) {
      puVar9 = (ulong *)*plVar26;
      uVar22 = *puVar9;
      if ((uVar22 & 7) != 0) {
        if (((uint)uVar22 >> 2 & 1) != 0) {
          uVar19 = 0x180;
          if (((uint)uVar22 >> 5 & 0xff) < 0xb || (uVar22 & 0x1c) != 4) {
            uVar19 = 0;
          }
          uVar22 = uVar22 & 0xffffffffffffe018 | uVar19 | 4;
        }
        uVar18 = puVar9[1];
        uVar19 = uVar18;
        if (((uint)uVar18 >> 2 & 1) != 0) {
          uVar19 = 0x180;
          if (((uint)uVar18 >> 5 & 0xff) < 0xb || (uVar18 & 0x1c) != 4) {
            uVar19 = 0;
          }
          uVar19 = uVar18 & 0xffffffffffffe018 | uVar19 | 4;
        }
        if (uVar22 != uVar19) {
          if (*(ulong **)(this + 0x58) == *(ulong **)(this + 0x60)) {
            std::__ndk1::
            vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
            ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                      (this_00,(InstructionOperand *)(puVar9 + 1));
          }
          else {
            **(ulong **)(this + 0x58) = uVar18;
            *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
          }
        }
      }
    }
    local_78 = (__tree_node_base *)0x0;
    local_70 = *(Zone **)this;
    local_68 = 0;
    plVar26 = (long *)*plVar32;
    plVar4 = (long *)plVar32[1];
    if (plVar26 != plVar4) {
      lVar10 = 0;
      local_80 = (__tree_node_base *)&local_78;
      do {
        uVar22 = *(ulong *)*plVar26;
        if ((uVar22 & 7) != 0) {
          uVar8 = (uint)uVar22;
          uVar19 = uVar22;
          if ((uVar8 >> 2 & 1) != 0) {
            uVar19 = 0x180;
            if ((uVar8 >> 5 & 0xff) < 0xb || (uVar22 & 0x1c) != 4) {
              uVar19 = 0;
            }
            uVar19 = uVar22 & 0xffffffffffffe018 | uVar19 | 4;
          }
          uVar23 = ((ulong *)*plVar26)[1];
          uVar13 = (uint)uVar23;
          uVar18 = uVar23;
          if ((uVar13 >> 2 & 1) != 0) {
            uVar18 = 0x180;
            if ((uVar13 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
              uVar18 = 0;
            }
            uVar18 = uVar23 & 0xffffffffffffe018 | uVar18 | 4;
          }
          if (uVar19 != uVar18) {
            puVar9 = *(ulong **)(this + 0x30);
            if (puVar9 != *(ulong **)(this + 0x38)) {
              uVar19 = 0x180;
              if ((uVar13 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                uVar19 = 0;
              }
              uVar18 = uVar23;
              if ((uVar23 & 4) != 0) {
                uVar18 = uVar23 & 0xffffffffffffe018 | uVar19 | 4;
              }
              do {
                uVar19 = *puVar9;
                if (((uint)uVar19 >> 2 & 1) != 0) {
                  uVar1 = 0x180;
                  if (((uint)uVar19 >> 5 & 0xff) < 0xb || (uVar19 & 0x1c) != 4) {
                    uVar1 = 0;
                  }
                  uVar19 = uVar19 & 0xffffffffffffe018 | uVar1 | 4;
                }
                if (uVar19 == uVar18) goto LAB_0164ed44;
                puVar9 = puVar9 + 1;
              } while (*(ulong **)(this + 0x38) != puVar9);
            }
            p_Var16 = (__tree_node_base *)&local_78;
            p_Var29 = (__tree_node_base *)&local_78;
            if (local_78 == (__tree_node_base *)0x0) {
LAB_0164efdc:
              lVar15 = *(long *)p_Var29;
            }
            else {
              uVar19 = 0x180;
              if ((uVar8 >> 5 & 0xff) < 0xb || (uVar22 & 0x1c) != 4) {
                uVar19 = 0;
              }
              uVar18 = 0x180;
              if ((uVar13 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                uVar18 = 0;
              }
              uVar1 = uVar22;
              if ((uVar22 & 4) != 0) {
                uVar1 = uVar22 & 0xffffffffffffe018 | uVar19 | 4;
              }
              p_Var7 = local_78;
              uVar19 = uVar23;
              if ((uVar23 & 4) != 0) {
                uVar19 = uVar23 & 0xffffffffffffe018 | uVar18 | 4;
              }
              do {
                while( true ) {
                  p_Var16 = p_Var7;
                  uVar20 = *(ulong *)(p_Var16 + 0x20);
                  uVar8 = (uint)uVar20;
                  uVar18 = uVar20;
                  if ((uVar8 >> 2 & 1) != 0) {
                    uVar18 = 0x180;
                    if ((uVar8 >> 5 & 0xff) < 0xb || (uVar20 & 0x1c) != 4) {
                      uVar18 = 0;
                    }
                    uVar18 = uVar20 & 0xffffffffffffe018 | uVar18 | 4;
                  }
                  if (uVar1 == uVar18) break;
                  uVar18 = uVar20;
                  if ((uVar8 >> 2 & 1) != 0) {
                    uVar18 = 0x180;
                    if ((uVar8 >> 5 & 0xff) < 0xb || (uVar20 & 0x1c) != 4) {
                      uVar18 = 0;
                    }
                    uVar18 = uVar20 & 0xffffffffffffe018 | uVar18 | 4;
                  }
                  if (uVar1 < uVar18) goto LAB_0164ef80;
LAB_0164eeec:
                  uVar18 = uVar20;
                  if ((uVar8 >> 2 & 1) != 0) {
                    uVar18 = 0x180;
                    if ((uVar8 >> 5 & 0xff) < 0xb || (uVar20 & 0x1c) != 4) {
                      uVar18 = 0;
                    }
                    uVar18 = uVar20 & 0xffffffffffffe018 | uVar18 | 4;
                  }
                  if (uVar18 == uVar1) {
                    uVar18 = *(ulong *)(p_Var16 + 0x28);
                    if (((uint)uVar18 >> 2 & 1) != 0) {
                      uVar20 = 0x180;
                      if (((uint)uVar18 >> 5 & 0xff) < 0xb || (uVar18 & 0x1c) != 4) {
                        uVar20 = 0;
                      }
                      uVar18 = uVar18 & 0xffffffffffffe018 | uVar20 | 4;
                    }
                    if (uVar19 <= uVar18) goto LAB_0164efdc;
                  }
                  else {
                    if ((uVar8 >> 2 & 1) != 0) {
                      uVar18 = 0x180;
                      if ((uVar8 >> 5 & 0xff) < 0xb || (uVar20 & 0x1c) != 4) {
                        uVar18 = 0;
                      }
                      uVar20 = uVar20 & 0xffffffffffffe018 | uVar18 | 4;
                    }
                    if (uVar1 <= uVar20) goto LAB_0164efdc;
                  }
                  p_Var29 = p_Var16 + 8;
                  p_Var7 = *(__tree_node_base **)p_Var29;
                  if (*(__tree_node_base **)p_Var29 == (__tree_node_base *)0x0) goto LAB_0164efdc;
                }
                uVar18 = *(ulong *)(p_Var16 + 0x28);
                if (((uint)uVar18 >> 2 & 1) != 0) {
                  uVar2 = 0x180;
                  if (((uint)uVar18 >> 5 & 0xff) < 0xb || (uVar18 & 0x1c) != 4) {
                    uVar2 = 0;
                  }
                  uVar18 = uVar18 & 0xffffffffffffe018 | uVar2 | 4;
                }
                if (uVar18 <= uVar19) goto LAB_0164eeec;
LAB_0164ef80:
                p_Var7 = *(__tree_node_base **)p_Var16;
                p_Var29 = p_Var16;
              } while (*(__tree_node_base **)p_Var16 != (__tree_node_base *)0x0);
              lVar15 = *(long *)p_Var16;
            }
            if (lVar15 == 0) {
              p_Var7 = *(__tree_node_base **)(local_70 + 0x10);
              if ((ulong)(*(long *)(local_70 + 0x18) - (long)p_Var7) < 0x30) {
                p_Var7 = (__tree_node_base *)Zone::NewExpand(local_70,0x30);
              }
              else {
                *(__tree_node_base **)(local_70 + 0x10) = p_Var7 + 0x30;
              }
              *(ulong *)(p_Var7 + 0x20) = uVar22;
              *(ulong *)(p_Var7 + 0x28) = uVar23;
              *(undefined8 *)p_Var7 = 0;
              *(undefined8 *)(p_Var7 + 8) = 0;
              *(__tree_node_base **)(p_Var7 + 0x10) = p_Var16;
              *(__tree_node_base **)p_Var29 = p_Var7;
              if (*(__tree_node_base **)local_80 != (__tree_node_base *)0x0) {
                p_Var7 = *(__tree_node_base **)p_Var29;
                local_80 = *(__tree_node_base **)local_80;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (local_78,p_Var7);
              lVar10 = local_68 + 1;
              local_68 = lVar10;
            }
          }
        }
LAB_0164ed44:
        plVar26 = plVar26 + 1;
      } while (plVar26 != plVar4);
      if (lVar10 != 0) {
LAB_0164f060:
        if ((__tree_node_base *)&local_78 != local_80) {
          bVar6 = false;
          p_Var16 = *(__tree_node_base **)(local_80 + 8);
          p_Var29 = local_80;
          p_Var7 = local_80;
          if (*(__tree_node_base **)(local_80 + 8) != (__tree_node_base *)0x0) goto LAB_0164f0ac;
LAB_0164f0bc:
          p_Var16 = p_Var29 + 0x10;
          p_Var11 = *(__tree_node_base **)p_Var16;
          if (*(__tree_node_base **)*(__tree_node_base **)p_Var16 != p_Var29) {
            do {
              lVar10 = *(long *)p_Var16;
              p_Var16 = (__tree_node_base *)(lVar10 + 0x10);
              p_Var11 = *(__tree_node_base **)p_Var16;
            } while (*(long *)*(__tree_node_base **)p_Var16 != lVar10);
          }
          do {
            p_Var7 = p_Var11;
            puVar9 = *(ulong **)(this + 0x50);
            puVar5 = *(ulong **)(this + 0x58);
            if (puVar9 != puVar5) {
              uVar19 = *(ulong *)(p_Var29 + 0x20);
              uVar22 = 0x180;
              if (((uint)uVar19 >> 5 & 0xff) < 0xb || (uVar19 & 0x1c) != 4) {
                uVar22 = 0;
              }
              if ((uVar19 & 4) != 0) {
                uVar19 = uVar19 & 0xffffffffffffe018 | uVar22 | 4;
              }
LAB_0164f120:
              uVar22 = *puVar9;
              if (((uint)uVar22 >> 2 & 1) != 0) {
                uVar18 = 0x180;
                if (((uint)uVar22 >> 5 & 0xff) < 0xb || (uVar22 & 0x1c) != 4) {
                  uVar18 = 0;
                }
                uVar22 = uVar22 & 0xffffffffffffe018 | uVar18 | 4;
              }
              if (uVar22 != uVar19) goto code_r0x0164f150;
              if (puVar5 == *(ulong **)(this + 0x60)) {
                std::__ndk1::
                vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
                ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                          (this_00,(InstructionOperand *)(p_Var29 + 0x28));
                p_Var16 = *(__tree_node_base **)(p_Var29 + 8);
              }
              else {
                *puVar5 = *(ulong *)(p_Var29 + 0x28);
                *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
                p_Var16 = *(__tree_node_base **)(p_Var29 + 8);
              }
              if (p_Var16 == (__tree_node_base *)0x0) {
                p_Var16 = p_Var29 + 0x10;
                p_Var11 = *(__tree_node_base **)p_Var16;
                if (*(__tree_node_base **)p_Var11 != p_Var29) {
                  do {
                    lVar10 = *(long *)p_Var16;
                    p_Var16 = (__tree_node_base *)(lVar10 + 0x10);
                    p_Var11 = *(__tree_node_base **)p_Var16;
                  } while (*(long *)p_Var11 != lVar10);
                }
              }
              else {
                do {
                  p_Var11 = p_Var16;
                  p_Var16 = *(__tree_node_base **)p_Var11;
                } while (*(__tree_node_base **)p_Var11 != (__tree_node_base *)0x0);
              }
              if (local_80 == p_Var29) {
                local_80 = p_Var11;
              }
              local_68 = local_68 + -1;
              std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>(local_78,p_Var29);
              bVar6 = true;
            }
LAB_0164f098:
            if ((__tree_node_base *)&local_78 == p_Var7) {
              if (bVar6) goto LAB_0164f060;
              break;
            }
            p_Var16 = *(__tree_node_base **)(p_Var7 + 8);
            p_Var29 = p_Var7;
            if (*(__tree_node_base **)(p_Var7 + 8) == (__tree_node_base *)0x0) goto LAB_0164f0bc;
LAB_0164f0ac:
            do {
              p_Var11 = p_Var16;
              p_Var16 = *(__tree_node_base **)p_Var11;
              p_Var29 = p_Var7;
            } while (p_Var16 != (__tree_node_base *)0x0);
          } while( true );
        }
        uStack_88 = *(undefined8 *)this;
        local_a0 = (undefined8 *)0x0;
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        puVar14 = (undefined8 *)*plVar32;
        puVar12 = (undefined8 *)plVar32[1];
        if (puVar14 != puVar12) {
          do {
            pIVar30 = (InstructionOperand *)*puVar14;
            uVar22 = *(ulong *)pIVar30;
            if ((uVar22 & 7) != 0) {
              uVar8 = (uint)uVar22;
              uVar19 = uVar22;
              if ((uVar8 >> 2 & 1) != 0) {
                uVar19 = 0x180;
                if ((uVar8 >> 5 & 0xff) < 0xb || (uVar22 & 0x1c) != 4) {
                  uVar19 = 0;
                }
                uVar19 = uVar22 & 0xffffffffffffe018 | uVar19 | 4;
              }
              uVar18 = *(ulong *)(pIVar30 + 8);
              uVar13 = (uint)uVar18;
              uVar23 = uVar18;
              if ((uVar13 >> 2 & 1) != 0) {
                uVar23 = 0x180;
                if ((uVar13 >> 5 & 0xff) < 0xb || (uVar18 & 0x1c) != 4) {
                  uVar23 = 0;
                }
                uVar23 = uVar18 & 0xffffffffffffe018 | uVar23 | 4;
              }
              if ((uVar19 != uVar23) && (local_78 != (__tree_node_base *)0x0)) {
                uVar19 = 0x180;
                if ((uVar8 >> 5 & 0xff) < 0xb || (uVar22 & 0x1c) != 4) {
                  uVar19 = 0;
                }
                uVar23 = 0x180;
                if ((uVar13 >> 5 & 0xff) < 0xb || (uVar18 & 0x1c) != 4) {
                  uVar23 = 0;
                }
                if ((uVar22 & 4) != 0) {
                  uVar22 = uVar22 & 0xffffffffffffe018 | uVar19 | 4;
                }
                p_Var16 = (__tree_node_base *)&local_78;
                p_Var29 = local_78;
                if ((uVar18 & 4) != 0) {
                  uVar18 = uVar18 & 0xffffffffffffe018 | uVar23 | 4;
                }
                do {
                  uVar23 = *(ulong *)(p_Var29 + 0x20);
                  uVar8 = (uint)uVar23;
                  uVar19 = uVar23;
                  if ((uVar8 >> 2 & 1) != 0) {
                    uVar19 = 0x180;
                    if ((uVar8 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                      uVar19 = 0;
                    }
                    uVar19 = uVar23 & 0xffffffffffffe018 | uVar19 | 4;
                  }
                  if (uVar19 == uVar22) {
                    uVar19 = *(ulong *)(p_Var29 + 0x28);
                    if (((uint)uVar19 >> 2 & 1) != 0) {
                      uVar23 = 0x180;
                      if (((uint)uVar19 >> 5 & 0xff) < 0xb || (uVar19 & 0x1c) != 4) {
                        uVar23 = 0;
                      }
                      uVar19 = uVar19 & 0xffffffffffffe018 | uVar23 | 4;
                    }
                    bVar6 = uVar18 <= uVar19;
                  }
                  else {
                    if ((uVar8 >> 2 & 1) != 0) {
                      uVar19 = 0x180;
                      if ((uVar8 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                        uVar19 = 0;
                      }
                      uVar23 = uVar23 & 0xffffffffffffe018 | uVar19 | 4;
                    }
                    bVar6 = uVar22 <= uVar23;
                  }
                  lVar10 = 8;
                  if (bVar6) {
                    lVar10 = 0;
                    p_Var16 = p_Var29;
                  }
                  p_Var7 = p_Var29 + lVar10;
                  p_Var29 = *(__tree_node_base **)p_Var7;
                } while (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0);
                if (p_Var16 != (__tree_node_base *)&local_78) {
                  uVar23 = *(ulong *)(p_Var16 + 0x20);
                  uVar8 = (uint)uVar23;
                  uVar19 = uVar23;
                  if ((uVar8 >> 2 & 1) != 0) {
                    uVar19 = 0x180;
                    if ((uVar8 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                      uVar19 = 0;
                    }
                    uVar19 = uVar23 & 0xffffffffffffe018 | uVar19 | 4;
                  }
                  if (uVar22 == uVar19) {
                    uVar22 = *(ulong *)(p_Var16 + 0x28);
                    if (((uint)uVar22 >> 2 & 1) != 0) {
                      uVar19 = 0x180;
                      if (((uint)uVar22 >> 5 & 0xff) < 0xb || (uVar22 & 0x1c) != 4) {
                        uVar19 = 0;
                      }
                      uVar22 = uVar22 & 0xffffffffffffe018 | uVar19 | 4;
                    }
                    if (uVar22 <= uVar18) {
LAB_0164f218:
                      ParallelMove::AddMove
                                ((ParallelMove *)&local_a0,pIVar30,pIVar30 + 8,
                                 *(Zone **)(*(long *)(this + 8) + 8));
                      *(undefined8 *)pIVar30 = 0;
                      *(undefined8 *)(pIVar30 + 8) = 0;
                    }
                  }
                  else {
                    if ((uVar8 >> 2 & 1) != 0) {
                      uVar19 = 0x180;
                      if ((uVar8 >> 5 & 0xff) < 0xb || (uVar23 & 0x1c) != 4) {
                        uVar19 = 0;
                      }
                      uVar23 = uVar23 & 0xffffffffffffe018 | uVar19 | 4;
                    }
                    if (uVar23 <= uVar22) goto LAB_0164f218;
                  }
                }
              }
            }
            puVar14 = puVar14 + 1;
          } while (puVar14 != puVar12);
          if (local_a0 != local_98) {
            pZVar25 = *(ZoneVector **)(param_1 + 8);
            if (pZVar25 == (ZoneVector *)0x0) {
              pZVar27 = *(Zone **)(*(long *)(this + 8) + 8);
              pZVar25 = *(ZoneVector **)(pZVar27 + 0x10);
              if ((ulong)(*(long *)(pZVar27 + 0x18) - (long)pZVar25) < 0x20) {
                pZVar25 = (ZoneVector *)Zone::NewExpand(pZVar27,0x20);
              }
              else {
                *(ZoneVector **)(pZVar27 + 0x10) = pZVar25 + 0x20;
              }
              *(undefined8 *)pZVar25 = 0;
              *(undefined8 *)(pZVar25 + 8) = 0;
              *(undefined8 *)(pZVar25 + 0x10) = 0;
              *(Zone **)(pZVar25 + 0x18) = pZVar27;
              *(ZoneVector **)(param_1 + 8) = pZVar25;
            }
            CompressMoves(this,(ParallelMove *)&local_a0,pZVar25);
            puVar14 = local_98;
            if (local_a0 != local_98) {
              puVar12 = *(undefined8 **)(pZVar25 + 8);
              puVar24 = local_a0;
              do {
                uVar31 = *puVar24;
                if (puVar12 == *(undefined8 **)(pZVar25 + 0x10)) {
                  lVar10 = (long)puVar12 - *(long *)pZVar25 >> 3;
                  uVar22 = lVar10 + 1;
                  if (uVar22 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar15 = (long)*(undefined8 **)(pZVar25 + 0x10) - *(long *)pZVar25;
                  uVar19 = lVar15 >> 2;
                  if (uVar22 <= uVar19) {
                    uVar22 = uVar19;
                  }
                  if (0x7fffffe < (ulong)(lVar15 >> 3)) {
                    uVar22 = 0xfffffff;
                  }
                  if (uVar22 == 0) {
                    lVar15 = 0;
                  }
                  else {
                    pZVar27 = *(Zone **)(pZVar25 + 0x18);
                    uVar19 = uVar22 * 8;
                    lVar15 = *(long *)(pZVar27 + 0x10);
                    if (uVar19 < (ulong)(*(long *)(pZVar27 + 0x18) - lVar15) ||
                        uVar19 - (*(long *)(pZVar27 + 0x18) - lVar15) == 0) {
                      *(ulong *)(pZVar27 + 0x10) = lVar15 + uVar19;
                    }
                    else {
                      lVar15 = Zone::NewExpand(pZVar27,uVar19);
                    }
                  }
                  puVar17 = (undefined8 *)(lVar15 + lVar10 * 8);
                  puVar12 = puVar17 + 1;
                  *puVar17 = uVar31;
                  puVar3 = *(undefined8 **)pZVar25;
                  puVar21 = *(undefined8 **)(pZVar25 + 8);
                  while (puVar21 != puVar3) {
                    puVar21 = puVar21 + -1;
                    puVar17 = puVar17 + -1;
                    *puVar17 = *puVar21;
                  }
                  *(undefined8 **)pZVar25 = puVar17;
                  *(undefined8 **)(pZVar25 + 8) = puVar12;
                  *(ulong *)(pZVar25 + 0x10) = lVar15 + uVar22 * 8;
                }
                else {
                  *puVar12 = uVar31;
                  puVar12 = (undefined8 *)(*(long *)(pZVar25 + 8) + 8);
                  *(undefined8 **)(pZVar25 + 8) = puVar12;
                }
                puVar24 = puVar24 + 1;
              } while (puVar24 != puVar14);
            }
          }
        }
      }
    }
  }
  return;
code_r0x0164f150:
  puVar9 = puVar9 + 1;
  if (puVar5 == puVar9) goto LAB_0164f098;
  goto LAB_0164f120;
}

