
/* v8::internal::compiler::GraphC1Visualizer::PrintSchedule(char const*,
   v8::internal::compiler::Schedule const*, v8::internal::compiler::SourcePositionTable const*,
   v8::internal::compiler::InstructionSequence const*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintSchedule
          (GraphC1Visualizer *this,char *param_1,Schedule *param_2,SourcePositionTable *param_3,
          InstructionSequence *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  Node *this_00;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  Tag aTStack_a0 [16];
  Tag aTStack_90 [16];
  Tag aTStack_80 [16];
  Tag aTStack_70 [16];
  
  Tag::Tag(aTStack_70,this,"cfg");
  PrintStringProperty(this,"name",param_1);
  lVar17 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != lVar17) {
    uVar16 = 0;
    do {
      lVar17 = *(long *)(lVar17 + uVar16 * 8);
      Tag::Tag(aTStack_80,this,"block");
      PrintBlockProperty(this,"name",*(int *)(lVar17 + 4));
      PrintIntProperty(this,"from_bci",-1);
      PrintIntProperty(this,"to_bci",-1);
      if (0 < *(int *)(this + 8)) {
        iVar2 = 0;
        do {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (*(basic_ostream **)this,"  ",2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(this + 8));
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"predecessors",0xc);
      plVar6 = *(long **)(lVar17 + 0x88);
      for (plVar15 = *(long **)(lVar17 + 0x80); plVar15 != plVar6; plVar15 = plVar15 + 1) {
        lVar14 = *plVar15;
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (*(basic_ostream **)this," \"B",3);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                            *(int *)(lVar14 + 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"\n",1);
      if (0 < *(int *)(this + 8)) {
        iVar2 = 0;
        do {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (*(basic_ostream **)this,"  ",2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(this + 8));
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"successors",10);
      plVar6 = *(long **)(lVar17 + 0x68);
      for (plVar15 = *(long **)(lVar17 + 0x60); plVar15 != plVar6; plVar15 = plVar15 + 1) {
        lVar14 = *plVar15;
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (*(basic_ostream **)this," \"B",3);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                            *(int *)(lVar14 + 4));
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\"",1);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"\n",1);
      if (0 < *(int *)(this + 8)) {
        iVar2 = 0;
        do {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (*(basic_ostream **)this,"  ",2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(this + 8));
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"xhandlers\n",10);
      if (0 < *(int *)(this + 8)) {
        iVar2 = 0;
        do {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (*(basic_ostream **)this,"  ",2);
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(this + 8));
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (*(basic_ostream **)this,"flags\n",6);
      if (*(long *)(lVar17 + 0x10) != 0) {
        PrintBlockProperty(this,"dominator",*(int *)(*(long *)(lVar17 + 0x10) + 4));
      }
      PrintIntProperty(this,"loop_depth",*(int *)(lVar17 + 0x30));
      lVar14 = **(long **)(param_4 + 0x10);
      if ((ulong)((*(long **)(param_4 + 0x10))[1] - lVar14 >> 3) <=
          (ulong)(long)*(int *)(lVar17 + 4)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar14 = *(long *)(lVar14 + (long)*(int *)(lVar17 + 4) * 8);
      if (-1 < *(int *)(lVar14 + 0x70)) {
        iVar2 = *(int *)(lVar14 + 0x74);
        PrintIntProperty(this,"first_lir_id",*(int *)(lVar14 + 0x70) << 2);
        PrintIntProperty(this,"last_lir_id",iVar2 * 4 + -2);
      }
      Tag::Tag(aTStack_90,this,"states");
      Tag::Tag(aTStack_a0,this,"locals");
      puVar11 = *(undefined8 **)(lVar17 + 0x40);
      puVar7 = *(undefined8 **)(lVar17 + 0x48);
      if (puVar11 == puVar7) {
        iVar2 = 0;
      }
      else {
        uVar4 = ((ulong)((long)puVar7 + (-8 - (long)puVar11)) >> 3) + 1;
        if (uVar4 < 2) {
          iVar2 = 0;
          puVar8 = puVar11;
        }
        else {
          uVar10 = uVar4 & 0x3ffffffffffffffe;
          iVar9 = 0;
          iVar2 = 0;
          puVar8 = puVar11 + uVar10;
          puVar11 = puVar11 + 1;
          uVar12 = uVar10;
          do {
            puVar1 = puVar11 + -1;
            plVar15 = (long *)*puVar11;
            puVar11 = puVar11 + 2;
            if (*(short *)(*(long *)*puVar1 + 0x10) == 0x23) {
              iVar9 = iVar9 + 1;
            }
            if (*(short *)(*plVar15 + 0x10) == 0x23) {
              iVar2 = iVar2 + 1;
            }
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
          iVar2 = iVar2 + iVar9;
          if (uVar4 == uVar10) goto LAB_016cd314;
        }
        do {
          puVar11 = puVar8 + 1;
          if (*(short *)(*(long *)*puVar8 + 0x10) == 0x23) {
            iVar2 = iVar2 + 1;
          }
          puVar8 = puVar11;
        } while (puVar7 != puVar11);
      }
LAB_016cd314:
      PrintIntProperty(this,"size",iVar2);
      PrintStringProperty(this,"method","None");
      plVar15 = *(long **)(lVar17 + 0x40);
      plVar6 = *(long **)(lVar17 + 0x48);
      if (plVar15 != plVar6) {
        iVar2 = 0;
        do {
          if (*(short *)(*(long *)*plVar15 + 0x10) == 0x23) {
            if (0 < *(int *)(this + 8)) {
              iVar9 = 0;
              do {
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (*(basic_ostream **)this,"  ",2);
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(this + 8));
            }
            pbVar3 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)this,iVar2);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1)
            ;
            lVar13 = *plVar15;
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (*(basic_ostream **)this,"n",1);
            if (lVar13 == 0) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = *(uint *)(lVar13 + 0x14) & 0xffffff;
            }
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,uVar5);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (*(basic_ostream **)this," [",2);
            PrintInputs(this,(Node *)*plVar15);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (*(basic_ostream **)this,"]\n",2);
            plVar6 = *(long **)(lVar17 + 0x48);
            iVar2 = iVar2 + 1;
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar6);
      }
      Tag::~Tag(aTStack_a0);
      Tag::~Tag(aTStack_90);
      Tag::Tag(aTStack_90,this,"HIR");
      puVar11 = *(undefined8 **)(lVar17 + 0x40);
      puVar7 = *(undefined8 **)(lVar17 + 0x48);
      if (puVar11 != puVar7) {
        do {
          this_00 = (Node *)*puVar11;
          if (*(short *)(*(long *)this_00 + 0x10) != 0x23) {
            iVar2 = Node::UseCount(this_00);
            if (0 < *(int *)(this + 8)) {
              iVar9 = 0;
              do {
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (*(basic_ostream **)this,"  ",2);
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(this + 8));
            }
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (*(basic_ostream **)this,"0 ",2);
            pbVar3 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,iVar2);
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1)
            ;
            PrintNode(this,this_00);
            if (FLAG_trace_turbo_types != '\0') {
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (*(basic_ostream **)this," ",1);
              lVar13 = *(long *)(this_00 + 8);
              if (lVar13 != 0) {
                pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (*(basic_ostream **)this," type:",6);
                compiler::operator<<(pbVar3,lVar13);
              }
            }
            if ((param_3 != (SourcePositionTable *)0x0) &&
               (uVar4 = SourcePositionTable::GetSourcePosition(param_3,this_00),
               (uVar4 & 0x7fffffffffff) != 0)) {
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (*(basic_ostream **)this," pos:",5);
              if (((uVar4 & 1) == 0) && ((uVar4 & 0x7fff80000000) != 0)) {
                pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                   (*(basic_ostream **)this,"inlining(",9);
                pbVar3 = (basic_ostream *)
                         std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                   ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                                    ((uint)(uVar4 >> 0x1f) & 0xffff) - 1);
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar3,"),",2);
              }
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)this,
                         ((uint)uVar4 >> 1 & 0x3fffffff) - 1);
            }
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (*(basic_ostream **)this," <|@\n",5);
            puVar7 = *(undefined8 **)(lVar17 + 0x48);
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar7);
      }
      if (*(int *)(lVar17 + 0x34) != 0) {
        if (0 < *(int *)(this + 8)) {
          iVar2 = 0;
          do {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (*(basic_ostream **)this,"  ",2);
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(this + 8));
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (*(basic_ostream **)this,"0 0 ",4);
        if (*(Node **)(lVar17 + 0x38) == (Node *)0x0) {
          pbVar3 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)this,
                              ~*(uint *)(lVar17 + 4));
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar3," Goto",5);
        }
        else {
          PrintNode(this,*(Node **)(lVar17 + 0x38));
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (*(basic_ostream **)this," ->",3);
        plVar6 = *(long **)(lVar17 + 0x68);
        for (plVar15 = *(long **)(lVar17 + 0x60); plVar15 != plVar6; plVar15 = plVar15 + 1) {
          lVar13 = *plVar15;
          pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (*(basic_ostream **)this," B",2);
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                     *(int *)(lVar13 + 4));
        }
        if ((FLAG_trace_turbo_types != '\0') && (*(long *)(lVar17 + 0x38) != 0)) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (*(basic_ostream **)this," ",1);
          lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 8);
          if (lVar17 != 0) {
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (*(basic_ostream **)this," type:",6);
            compiler::operator<<(pbVar3,lVar17);
          }
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (*(basic_ostream **)this," <|@\n",5);
      }
      Tag::~Tag(aTStack_90);
      if (param_4 != (InstructionSequence *)0x0) {
        Tag::Tag(aTStack_90,this,"LIR");
        lVar17 = (long)*(int *)(lVar14 + 0x70);
        if (*(int *)(lVar14 + 0x70) < *(int *)(lVar14 + 0x74)) {
          do {
            if (0 < *(int *)(this + 8)) {
              iVar2 = 0;
              do {
                std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (*(basic_ostream **)this,"  ",2);
                iVar2 = iVar2 + 1;
              } while (iVar2 < *(int *)(this + 8));
            }
            pbVar3 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               (*(basic_ostream<char,std::__ndk1::char_traits<char>> **)this,
                                (int)lVar17);
            pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (pbVar3," ",1);
            pbVar3 = (basic_ostream *)
                     compiler::operator<<
                               (pbVar3,*(Instruction **)
                                        (*(long *)(*(long *)(param_4 + 0x88) +
                                                  ((ulong)(*(long *)(param_4 + 0xb0) + lVar17) >> 6
                                                  & 0x3fffffffffffff8)) +
                                        (*(long *)(param_4 + 0xb0) + lVar17 & 0x1ffU) * 8));
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar3," <|@\n",5);
            lVar17 = lVar17 + 1;
          } while (lVar17 < *(int *)(lVar14 + 0x74));
        }
        Tag::~Tag(aTStack_90);
      }
      Tag::~Tag(aTStack_80);
      uVar16 = uVar16 + 1;
      lVar17 = *(long *)(param_2 + 0x48);
    } while (uVar16 < (ulong)(*(long *)(param_2 + 0x50) - lVar17 >> 3));
  }
  Tag::~Tag(aTStack_70);
  return;
}

