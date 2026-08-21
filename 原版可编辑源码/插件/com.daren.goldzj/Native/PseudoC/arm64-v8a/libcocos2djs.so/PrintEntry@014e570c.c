
/* v8::internal::SafepointTable::PrintEntry(unsigned int, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
v8::internal::SafepointTable::PrintEntry(SafepointTable *this,uint param_1,basic_ostream *param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  
  lVar8 = tpidr_el0;
  lVar9 = *(long *)(lVar8 + 0x28);
  iVar5 = *(int *)(this + 0x10);
  if (iVar5 != 0) {
    uVar10 = iVar5 - 1;
    pcVar1 = "1";
    pbVar3 = (byte *)(*(long *)(this + 0x20) + (ulong)(iVar5 * param_1));
    pcVar2 = "0";
    if (0 < (int)uVar10) {
      uVar11 = (ulong)uVar10;
      pbVar12 = pbVar3;
      do {
        bVar6 = *pbVar12;
        pcVar4 = pcVar2;
        if ((bVar6 & 1) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        pcVar4 = pcVar2;
        if ((bVar6 & 2) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        pcVar4 = pcVar2;
        if ((bVar6 & 4) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        pcVar4 = pcVar2;
        if ((bVar6 & 8) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        pcVar4 = pcVar2;
        if ((bVar6 & 0x10) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        pcVar4 = pcVar2;
        if ((bVar6 & 0x20) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        pcVar4 = pcVar2;
        if ((bVar6 & 0x40) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        pcVar4 = pcVar2;
        if ((bVar6 & 0x80) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        uVar11 = uVar11 - 1;
        pbVar12 = pbVar12 + 1;
      } while (uVar11 != 0);
    }
    uVar7 = *(int *)(this + 8) + uVar10 * -8;
    if (0 < (int)uVar7) {
      bVar6 = pbVar3[(int)uVar10];
      uVar10 = 0;
      do {
        pcVar4 = pcVar2;
        if ((bVar6 >> (ulong)(uVar10 & 0x1f) & 1) != 0) {
          pcVar4 = pcVar1;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,pcVar4,1)
        ;
        uVar10 = uVar10 + 1;
      } while (uVar7 != uVar10);
    }
  }
  if (*(long *)(lVar8 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

