
/* v8::internal::BytecodeArray::Disassemble(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::BytecodeArray::Disassemble(BytecodeArray *this,basic_ostream *param_1)

{
  uchar *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  basic_ostream *pbVar8;
  long *plVar9;
  undefined8 uVar10;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_128;
  iterator aiStack_120 [32];
  ulong local_100 [7];
  long *local_c8;
  int local_c0;
  SourcePositionTableIterator aSStack_b0 [24];
  int local_98;
  int local_90;
  uint local_88;
  char local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Parameter count ",0x10);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                      *(int *)(*(long *)this + 0x17) >> 3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Register count ",0xf);
  iVar3 = *(int *)(*(long *)this + 0x13);
  iVar7 = iVar3 + 7;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar7 >> 3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Frame size ",0xb);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                      *(int *)(*(long *)this + 0x13));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,"\n",1);
  uVar13 = *(ulong *)this;
  uVar4 = *(uint *)(uVar13 + 0xf);
  uVar12 = uVar13 & 0xffffffff00000000;
  if (((uVar4 & 1) == 0) ||
     ((uVar4 != *(uint *)(uVar12 + 0xa0) && (uVar4 != *(uint *)(uVar12 + 0x180))))) {
    uVar11 = uVar12 | uVar4;
    if (((uVar4 & 1) != 0) && (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x85))
    goto LAB_01074390;
    if (uVar4 != *(uint *)(uVar12 + 0x180)) {
      uVar11 = uVar12 | *(uint *)(uVar11 + 3);
      goto LAB_01074390;
    }
  }
  uVar11 = *(ulong *)(uVar12 + 0x3c0);
LAB_01074390:
  SourcePositionTableIterator::SourcePositionTableIterator(aSStack_b0,uVar11,0);
  local_128 = *(undefined8 *)this;
  interpreter::BytecodeArrayIterator::BytecodeArrayIterator
            ((BytecodeArrayIterator *)&local_c8,&local_128);
  uVar12 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)&local_c8);
  if ((uVar12 & 1) == 0) {
    do {
      if ((local_98 == -1) || (local_c0 != local_90)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"         ",9);
      }
      else {
        *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 5;
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                   (local_88 >> 1 & 0x3fffffff) - 1);
        pcVar2 = " E> ";
        if (local_80 != '\0') {
          pcVar2 = " S> ";
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,4)
        ;
        SourcePositionTableIterator::Advance(aSStack_b0);
      }
      puVar1 = (uchar *)(uVar13 + 0x21 + (long)local_c0);
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,puVar1);
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8," @ ",3);
      *(undefined8 *)(pbVar8 + *(long *)(*(long *)pbVar8 + -0x18) + 0x18) = 4;
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,local_c0);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," : ",3);
      interpreter::BytecodeDecoder::Decode(param_1,puVar1,*(int *)(*(long *)this + 0x17) >> 3);
      cVar6 = interpreter::BytecodeArrayAccessor::current_bytecode
                        ((BytecodeArrayAccessor *)&local_c8);
      if ((byte)(cVar6 + 0x76U) < 0x17) {
        iVar7 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                          ((BytecodeArrayAccessor *)&local_c8);
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1," (",2);
        pbVar8 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                            (void *)(uVar13 + 0x21 + (long)iVar7));
        pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar8," @ ",3);
        iVar7 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                          ((BytecodeArrayAccessor *)&local_c8);
        pbVar8 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,iVar7);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")",1);
      }
      cVar6 = interpreter::BytecodeArrayAccessor::current_bytecode
                        ((BytecodeArrayAccessor *)&local_c8);
      if ((cVar6 == -0x51) || (cVar6 == -0x5f)) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," {",2);
        interpreter::BytecodeArrayAccessor::GetJumpTableTargetOffsets();
        interpreter::JumpTableTargetOffsets::begin();
        interpreter::JumpTableTargetOffsets::end();
        uVar12 = interpreter::JumpTableTargetOffsets::iterator::operator!=
                           ((iterator *)local_100,aiStack_120);
        if ((uVar12 & 1) != 0) {
          uVar10 = interpreter::JumpTableTargetOffsets::iterator::operator*((iterator *)local_100);
          pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1," ",1);
          pbVar8 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                              (int)uVar10);
          this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                              (pbVar8,": @",3);
          while( true ) {
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (this_00,(int)((ulong)uVar10 >> 0x20));
            interpreter::JumpTableTargetOffsets::iterator::operator++((iterator *)local_100);
            uVar12 = interpreter::JumpTableTargetOffsets::iterator::operator!=
                               ((iterator *)local_100,aiStack_120);
            if ((uVar12 & 1) == 0) break;
            uVar10 = interpreter::JumpTableTargetOffsets::iterator::operator*((iterator *)local_100)
            ;
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,",",1);
            pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                               (param_1," ",1);
            pbVar8 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                                (int)uVar10);
            this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar8,": @",3);
          }
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," }",2);
      }
      std::__ndk1::ios_base::getloc();
      plVar9 = (long *)std::__ndk1::locale::use_facet
                                 ((locale *)local_100,(id *)&std::__ndk1::ctype<char>::id);
      cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,10);
      std::__ndk1::locale::~locale((locale *)local_100);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar6);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
      interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)&local_c8);
      uVar12 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)&local_c8);
    } while ((uVar12 & 1) == 0);
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Constant pool (size = ",0x16);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                      *(int *)((*(ulong *)this & 0xffffffff00000000 |
                               (ulong)*(uint *)(*(ulong *)this + 7)) + 3) >> 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
  uVar12 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 7);
  if (1 < *(int *)(uVar12 + 3)) {
    local_100[0] = uVar12;
    Object::Print((Object *)local_100,param_1);
  }
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"Handler Table (size = ",0x16);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                      *(int *)((*(ulong *)this & 0xffffffff00000000 |
                               (ulong)*(uint *)(*(ulong *)this + 0xb)) + 3) >> 1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8,")\n",2);
  if (1 < *(int *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb)) +
                  3)) {
    HandlerTable::HandlerTable((HandlerTable *)local_100);
    HandlerTable::HandlerTableRangePrint((HandlerTable *)local_100,param_1);
  }
  plVar9 = local_c8;
  local_c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x48))();
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

