
/* v8::internal::compiler::BytecodeAnalysis::PrintLivenessTo(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

basic_ostream * __thiscall
v8::internal::compiler::BytecodeAnalysis::PrintLivenessTo
          (BytecodeAnalysis *this,basic_ostream *param_1)

{
  uint uVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  basic_ostream *pbVar7;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  int *piVar11;
  locale alStack_88 [8];
  long *local_80;
  int local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  interpreter::BytecodeArrayIterator::BytecodeArrayIterator
            ((BytecodeArrayIterator *)&local_80,*(undefined8 *)this);
  uVar6 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)&local_80);
  if ((uVar6 & 1) == 0) {
    do {
      iVar4 = local_78;
      if (this[0x14] == (BytecodeAnalysis)0x0) {
        lVar9 = 0;
        piVar11 = (int *)&DAT_00000008;
      }
      else {
        plVar8 = (long *)BytecodeLivenessMap::GetLiveness
                                   ((BytecodeLivenessMap *)(this + 0xf0),local_78);
        piVar11 = (int *)(*plVar8 + 8);
        if (this[0x14] == (BytecodeAnalysis)0x0) {
          lVar9 = 0;
        }
        else {
          lVar9 = BytecodeLivenessMap::GetLiveness((BytecodeLivenessMap *)(this + 0xf0),iVar4);
          lVar9 = *(long *)(lVar9 + 8);
        }
      }
      if (0 < *piVar11) {
        uVar6 = 0;
        do {
          puVar10 = (ulong *)(piVar11 + 2);
          if (piVar11[1] != 1) {
            puVar10 = (ulong *)(*(ulong *)(piVar11 + 2) + (ulong)((uint)uVar6 >> 6) * 8);
          }
          pcVar2 = ".";
          if ((*puVar10 >> (uVar6 & 0x3f) & 1) != 0) {
            pcVar2 = "L";
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,pcVar2,1);
          uVar1 = (uint)uVar6 + 1;
          uVar6 = (ulong)uVar1;
        } while ((int)uVar1 < *piVar11);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," -> ",4);
      if (0 < *(int *)(lVar9 + 8)) {
        uVar6 = 0;
        do {
          puVar10 = (ulong *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0xc) != 1) {
            puVar10 = (ulong *)(*(ulong *)(lVar9 + 0x10) + (ulong)((uint)uVar6 >> 6) * 8);
          }
          pcVar2 = ".";
          if ((*puVar10 >> (uVar6 & 0x3f) & 1) != 0) {
            pcVar2 = "L";
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,pcVar2,1);
          uVar1 = (uint)uVar6 + 1;
          uVar6 = (ulong)uVar1;
        } while ((int)uVar1 < *(int *)(lVar9 + 8));
      }
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1," | ",3);
      pbVar7 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,": ",2);
      this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
                interpreter::BytecodeArrayAccessor::PrintTo
                          ((BytecodeArrayAccessor *)&local_80,param_1);
      std::__ndk1::ios_base::getloc();
      plVar8 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_88,(id *)&std::__ndk1::ctype<char>::id);
      cVar5 = (**(code **)(*plVar8 + 0x38))(plVar8,10);
      std::__ndk1::locale::~locale(alStack_88);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(this_00,cVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush(this_00);
      interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)&local_80);
      uVar6 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)&local_80);
    } while ((uVar6 & 1) == 0);
  }
  plVar8 = local_80;
  local_80 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x48))();
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

