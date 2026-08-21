
/* v8::internal::EhFrameDisassembler::DumpDwarfDirectives(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned char const*, unsigned char const*) */

void v8::internal::EhFrameDisassembler::DumpDwarfDirectives
               (basic_ostream *param_1,uchar *param_2,uchar *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  basic_ostream *pbVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  char local_74 [4];
  char local_70 [4];
  char local_6c [4];
  char local_68 [4];
  char local_64 [4];
  
  lVar9 = *(long *)(*(long *)param_1 + -0x18);
  uVar1 = *(undefined4 *)(param_1 + lVar9 + 8);
  if (param_2 != param_3) {
    uVar12 = 0;
    do {
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,param_2);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"  ",2);
      pbVar15 = param_2 + 1;
      bVar2 = *param_2;
      bVar3 = bVar2 >> 6;
      if (bVar3 == 1) {
        uVar8 = bVar2 & 0x3f;
        goto LAB_014eba50;
      }
      if (bVar3 == 3) {
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| ",2);
        pcVar5 = (char *)DwarfRegisterCodeToString(bVar2 & 0x3f);
        sVar6 = strlen(pcVar5);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,pcVar5,sVar6);
        uVar7 = 0x15;
        pcVar5 = " follows rule in CIE\n";
        goto LAB_014eb940;
      }
      iVar14 = (int)pbVar15;
      if (bVar3 == 2) {
        uVar13 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar3 = *pbVar11;
          uVar13 = (bVar3 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar13;
          uVar8 = uVar8 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar3 < '\0');
        pbVar15 = pbVar15 + ((int)pbVar10 - iVar14);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| ",2);
        pcVar5 = (char *)DwarfRegisterCodeToString(bVar2 & 0x3f);
        sVar6 = strlen(pcVar5);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,pcVar5,sVar6);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," saved at base",0xe);
        *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) =
             *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) | 0x800;
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar13 * -8
                           );
        pcVar5 = local_74;
        uVar7 = 1;
        *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) =
             *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) & 0xfffff7ff;
        local_74[0] = '\n';
        goto LAB_014eb940;
      }
      switch(bVar2) {
      case 0:
        uVar7 = 6;
        pcVar5 = "| nop\n";
        pbVar4 = param_1;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      case 2:
        uVar8 = (uint)param_2[1];
        pbVar15 = param_2 + 2;
        goto LAB_014eba50;
      case 3:
        uVar8 = (uint)*(ushort *)(param_2 + 1);
        pbVar15 = param_2 + 3;
        goto LAB_014eba50;
      case 4:
        uVar8 = *(uint *)(param_2 + 1);
        pbVar15 = param_2 + 5;
LAB_014eba50:
        uVar12 = uVar8 * 4 + uVar12;
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| pc_offset=",0xc);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar12);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4," (delta=",8);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar8 * 4);
        uVar7 = 2;
        pcVar5 = ")\n";
        break;
      case 8:
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| ",2);
        uVar13 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar13 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar13;
          uVar8 = uVar8 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < '\0');
        pbVar15 = pbVar15 + ((int)pbVar10 - iVar14);
        pcVar5 = (char *)DwarfRegisterCodeToString(uVar13);
        sVar6 = strlen(pcVar5);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,pcVar5,sVar6);
        uVar7 = 0x22;
        pcVar5 = " not modified from previous frame\n";
        break;
      case 0xc:
        uVar13 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar13 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar13;
          uVar8 = uVar8 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < '\0');
        pbVar15 = pbVar15 + ((int)pbVar10 - iVar14);
        uVar16 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar16 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar16;
          uVar8 = uVar8 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < '\0');
        pbVar15 = pbVar15 + ((int)pbVar10 - (int)pbVar15);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| base_register=",0x10);
        pcVar5 = (char *)DwarfRegisterCodeToString(uVar13);
        sVar6 = strlen(pcVar5);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,pcVar5,sVar6);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,", base_offset=",0xe);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar16);
        local_6c[0] = '\n';
        pcVar5 = local_6c;
        uVar7 = 1;
        break;
      case 0xd:
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| base_register=",0x10);
        uVar13 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar13 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar13;
          uVar8 = uVar8 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < '\0');
        pbVar15 = pbVar15 + ((int)pbVar10 - iVar14);
        pcVar5 = (char *)DwarfRegisterCodeToString(uVar13);
        sVar6 = strlen(pcVar5);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar4,pcVar5,sVar6);
        local_64[0] = '\n';
        pcVar5 = local_64;
        uVar7 = 1;
        break;
      case 0xe:
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| base_offset=",0xe);
        uVar13 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar13 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar13;
          uVar8 = uVar8 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < '\0');
        pbVar15 = pbVar15 + ((int)pbVar10 - iVar14);
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar13);
        local_68[0] = '\n';
        pcVar5 = local_68;
        uVar7 = 1;
        break;
      case 0x11:
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"| ",2);
        uVar13 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar13 = (bVar2 & 0x7f) << (ulong)(uVar8 & 0x1f) | uVar13;
          uVar8 = uVar8 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < '\0');
        pbVar15 = pbVar15 + ((int)pbVar10 - iVar14);
        pcVar5 = (char *)DwarfRegisterCodeToString(uVar13);
        sVar6 = strlen(pcVar5);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar4,pcVar5,sVar6);
        uVar7 = 0;
        uVar8 = 0;
        pbVar11 = pbVar15;
        do {
          pbVar10 = pbVar11 + 1;
          bVar2 = *pbVar11;
          uVar8 = (bVar2 & 0x7f) << (ulong)((uint)uVar7 & 0x1f) | uVar8;
          uVar7 = uVar7 + 7;
          pbVar11 = pbVar10;
        } while ((char)bVar2 < 0);
        pbVar15 = pbVar15 + ((int)pbVar10 - (int)pbVar15);
        pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1," saved at base",0xe);
        *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) =
             *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) | 0x800;
        pbVar4 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                            (uVar8 | (uint)(-1L << (uVar7 & 0x3f)) &
                                     ((int)(char)bVar2 << 0x19) >> 0x1f) * -8);
        pcVar5 = local_70;
        uVar7 = 1;
        *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) =
             *(uint *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 8) & 0xfffff7ff;
        local_70[0] = '\n';
      }
LAB_014eb940:
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar4,pcVar5,uVar7);
      param_2 = pbVar15;
    } while (pbVar15 != param_3);
    lVar9 = *(long *)(*(long *)param_1 + -0x18);
  }
  *(undefined4 *)(param_1 + lVar9 + 8) = uVar1;
  return;
}

