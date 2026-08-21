
/* v8::internal::interpreter::BytecodeDecoder::Decode(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, unsigned char const*, int) */

basic_ostream *
v8::internal::interpreter::BytecodeDecoder::Decode
          (basic_ostream *param_1,uchar *param_2,int param_3)

{
  bool bVar1;
  ios_base *this;
  uint *puVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  basic_ostream *pbVar6;
  long lVar7;
  size_t sVar8;
  long lVar9;
  uint uVar10;
  char *pcVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  char *pcVar21;
  long lVar22;
  int local_148 [2];
  uint local_140 [2];
  ulong local_138;
  char *local_130;
  int local_128 [2];
  Bytecodes local_120 [8];
  ulong local_118;
  char *local_110;
  undefined **local_108 [4];
  undefined4 local_e4;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_2;
  bVar1 = 3 < bVar3;
  if (bVar1) {
    uVar17 = 1;
  }
  else {
    uVar17 = (uint)bVar3;
    bVar3 = param_2[1];
    uVar17 = 0x4020402 >> (ulong)((uVar17 & 3) << 3);
  }
  bVar1 = !bVar1;
  uVar15 = (ulong)bVar1;
  uVar18 = (ulong)bVar3;
  local_108[0] = &PTR__ios_base_01caa698;
  std::__ndk1::ios_base::init((ios_base *)local_108,(void *)0x0);
  local_80 = 0;
  local_78 = 0xffffffff;
  uVar12 = (ulong)(uVar17 >> 1 & 0x7f);
  *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x90) = 0x30;
  *(undefined4 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) = 8;
  lVar9 = *(long *)(*(long *)param_1 + -0x18);
  uVar14 = *(int *)(Bytecodes::kBytecodeSizes + uVar18 * 4 + uVar12 * 0x2dc) + (uint)bVar1;
  if (0 < (int)uVar14) {
    uVar20 = (ulong)uVar14;
    pbVar16 = param_2;
    do {
      *(undefined8 *)(param_1 + lVar9 + 0x18) = 2;
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,
                          (uint)*pbVar16);
      local_120[0] = (Bytecodes)0x20;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar6,(char *)local_120,1);
      uVar20 = uVar20 - 1;
      lVar9 = *(long *)(*(long *)param_1 + -0x18);
      pbVar16 = pbVar16 + 1;
    } while (uVar20 != 0);
  }
  this = (ios_base *)(param_1 + lVar9);
  if ((ios_base *)local_108 != this) {
    std::__ndk1::ios_base::__call_callbacks(this,0);
    std::__ndk1::ios_base::copyfmt(this,(ios_base *)local_108);
    *(undefined8 *)(this + 0x88) = local_80;
    *(undefined4 *)(this + 0x90) = local_78;
    std::__ndk1::ios_base::__call_callbacks(this,2);
    *(undefined4 *)(this + 0x24) = local_e4;
    std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20));
  }
  if ((int)uVar14 < 6) {
    iVar13 = 6 - uVar14;
    do {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"   ",3);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  Bytecodes::ToString(local_120,uVar18,uVar17,".");
  uVar20 = (ulong)((byte)local_120[0] >> 1);
  pcVar11 = (char *)((ulong)local_120 | 1);
  if (((byte)local_120[0] & 1) != 0) {
    uVar20 = local_118;
    pcVar11 = local_110;
  }
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar11,uVar20);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6," ",1);
  if (((byte)local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  uVar20 = Bytecodes::IsDebugBreak(uVar18);
  if ((uVar20 & 1) == 0) {
    iVar13 = *(int *)(Bytecodes::kOperandCount + uVar18 * 4);
    if (0 < iVar13) {
      lVar22 = *(long *)(Bytecodes::kOperandTypes + uVar18 * 8);
      pcVar11 = (char *)((ulong)local_120 | 1);
      lVar9 = uVar12 * 0x10;
      iVar19 = 0;
      do {
        bVar3 = *(byte *)(lVar22 + iVar19);
        uVar20 = (ulong)bVar3;
        iVar5 = Bytecodes::GetOperandOffset(uVar18,iVar19,uVar17);
        if (0xf < bVar3) goto LAB_0103fde8;
        puVar2 = (uint *)(param_2 + uVar15 + (long)iVar5);
        switch(uVar20) {
        default:
          goto switchD_0103f7bc_caseD_0;
        case 1:
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"#",1);
          uVar14 = 0;
          switch(Bytecodes::kOperandKindSizes[lVar9 + 1]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(byte)*puVar2;
          default:
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,uVar14);
            break;
          case 2:
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                       (uint)(ushort)*puVar2);
            break;
          case 4:
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,*puVar2);
          }
          goto LAB_0103fde8;
        case 2:
          uVar14 = 0;
          switch(Bytecodes::kOperandKindSizes[lVar9 + 2]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(byte)*puVar2;
            break;
          case 2:
            uVar14 = (uint)(ushort)*puVar2;
            break;
          case 4:
            uVar14 = *puVar2;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"[",1);
          IntrinsicsHelper::ToRuntimeId(uVar14);
          lVar7 = Runtime::FunctionForId();
          pcVar21 = *(char **)(lVar7 + 8);
          sVar8 = strlen(pcVar21);
          goto LAB_0103fdd4;
        case 3:
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"[",1);
          uVar14 = 0;
          switch(Bytecodes::kOperandKindSizes[lVar9 + 3]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(byte)*puVar2;
            break;
          case 2:
            uVar14 = (uint)(ushort)*puVar2;
            break;
          case 4:
            uVar14 = *puVar2;
          }
          lVar7 = Runtime::FunctionForId(uVar14);
          pcVar21 = *(char **)(lVar7 + 8);
          sVar8 = strlen(pcVar21);
LAB_0103fdd4:
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,pcVar21,sVar8);
          break;
        case 4:
          switch(Bytecodes::kOperandKindSizes[lVar9 + 4]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(byte)*puVar2;
            break;
          case 2:
            uVar14 = (uint)(ushort)*puVar2;
            break;
          default:
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,"[",1);
            goto switchD_0103f7bc_caseD_0;
          case 4:
            uVar14 = *puVar2;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"[",1);
          if (0x100 < uVar14 - 3) {
switchD_0103f7bc_caseD_0:
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          pcVar21 = (&PTR_s_global_proxy_object_01caa6a8)[(int)(uVar14 - 3)];
          sVar8 = strlen(pcVar21);
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,pcVar21,sVar8);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]",1);
          goto LAB_0103fde8;
        case 5:
        case 6:
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"[",1);
          uVar14 = 0;
          switch(Bytecodes::kOperandKindSizes[uVar20 + uVar12 * 0x10]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(byte)*puVar2;
            break;
          case 2:
            uVar14 = (uint)(ushort)*puVar2;
            break;
          case 4:
            uVar14 = *puVar2;
          }
          pbVar6 = (basic_ostream *)
                   std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                             ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,uVar14);
          break;
        case 8:
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"[",1);
          iVar5 = 0;
          switch(Bytecodes::kOperandKindSizes[lVar9 + 8]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            iVar5 = (int)(char)*puVar2;
          default:
            pbVar6 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,iVar5);
            break;
          case 2:
            pbVar6 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                                (int)(short)*puVar2);
            break;
          case 4:
            pbVar6 = (basic_ostream *)
                     std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                               ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,*puVar2
                               );
          }
          break;
        case 9:
        case 0xc:
          uVar14 = 0;
          switch(Bytecodes::kOperandKindSizes[uVar20 + uVar12 * 0x10]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(char)*puVar2;
            break;
          case 2:
            uVar14 = (uint)(short)*puVar2;
            break;
          case 4:
            uVar14 = *puVar2;
          }
          local_140[0] = -uVar14 - 5;
          Register::ToString((int)local_140);
          pcVar21 = pcVar11;
          uVar20 = (ulong)((byte)local_120[0] >> 1);
          if (((byte)local_120[0] & 1) != 0) {
            pcVar21 = local_110;
            uVar20 = local_118;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (param_1,pcVar21,uVar20);
          if (((byte)local_120[0] & 1) == 0) goto LAB_0103fde8;
          goto LAB_0103fd7c;
        case 10:
        case 0xd:
          iVar19 = iVar19 + 1;
          iVar5 = Bytecodes::GetOperandOffset(uVar18,iVar19,uVar17);
          uVar14 = 0;
          if ((byte)Bytecodes::kOperandKindSizes[lVar9 + 7] < 5) {
            lVar7 = uVar15 + (long)iVar5;
            switch(Bytecodes::kOperandKindSizes[lVar9 + 7]) {
            case 0:
              goto switchD_0103f7bc_caseD_0;
            case 1:
              uVar14 = (uint)param_2[lVar7];
              break;
            case 2:
              uVar14 = (uint)*(ushort *)(param_2 + lVar7);
              break;
            case 4:
              uVar14 = *(uint *)(param_2 + lVar7);
            }
          }
          uVar10 = 0;
          switch(Bytecodes::kOperandKindSizes[uVar20 + uVar12 * 0x10]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar10 = (uint)(char)*puVar2;
            break;
          case 2:
            uVar10 = (uint)(short)*puVar2;
            break;
          case 4:
            uVar10 = *puVar2;
          }
          local_128[0] = 0;
          if (uVar14 != 0) {
            local_128[0] = -5 - uVar10;
          }
          iVar5 = 0;
          if (uVar14 != 0) {
            iVar5 = uVar14 + (-5 - uVar10) + -1;
          }
          Register::ToString((int)local_128);
          pcVar21 = pcVar11;
          uVar20 = (ulong)((byte)local_120[0] >> 1);
          if (((byte)local_120[0] & 1) != 0) {
            pcVar21 = local_110;
            uVar20 = local_118;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,pcVar21,uVar20);
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,"-",1);
          local_148[0] = iVar5;
          goto LAB_0103fd2c;
        case 0xb:
        case 0xe:
          uVar14 = 0;
          switch(Bytecodes::kOperandKindSizes[uVar20 + uVar12 * 0x10]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(char)*puVar2;
            break;
          case 2:
            uVar14 = (uint)(short)*puVar2;
            break;
          case 4:
            uVar14 = *puVar2;
          }
          local_128[0] = -5 - uVar14;
          Register::ToString((int)local_128);
          pcVar21 = pcVar11;
          uVar20 = (ulong)((byte)local_120[0] >> 1);
          if (((byte)local_120[0] & 1) != 0) {
            pcVar21 = local_110;
            uVar20 = local_118;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,pcVar21,uVar20);
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,"-",1);
          iVar5 = -4;
          goto LAB_0103fd24;
        case 0xf:
          uVar14 = 0;
          switch(Bytecodes::kOperandKindSizes[lVar9 + 0xf]) {
          case 0:
            goto switchD_0103f7bc_caseD_0;
          case 1:
            uVar14 = (uint)(char)*puVar2;
            break;
          case 2:
            uVar14 = (uint)(short)*puVar2;
            break;
          case 4:
            uVar14 = *puVar2;
          }
          local_128[0] = -5 - uVar14;
          Register::ToString((int)local_128);
          pcVar21 = pcVar11;
          uVar20 = (ulong)((byte)local_120[0] >> 1);
          if (((byte)local_120[0] & 1) != 0) {
            pcVar21 = local_110;
            uVar20 = local_118;
          }
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,pcVar21,uVar20);
          pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar6,"-",1);
          iVar5 = -3;
LAB_0103fd24:
          local_148[0] = iVar5 - uVar14;
LAB_0103fd2c:
          Register::ToString((int)local_148);
          pcVar21 = (char *)((ulong)local_140 | 1);
          uVar20 = (ulong)((byte)local_140[0] >> 1);
          if ((local_140[0] & 1) != 0) {
            pcVar21 = local_130;
            uVar20 = local_138;
          }
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    (pbVar6,pcVar21,uVar20);
          if ((local_140[0] & 1) != 0) {
            operator_delete(local_130);
          }
          if (((byte)local_120[0] & 1) != 0) {
LAB_0103fd7c:
            operator_delete(local_110);
          }
          goto LAB_0103fde8;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"]",1);
LAB_0103fde8:
        if (iVar19 != iVar13 + -1) {
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2)
          ;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar13);
    }
  }
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

