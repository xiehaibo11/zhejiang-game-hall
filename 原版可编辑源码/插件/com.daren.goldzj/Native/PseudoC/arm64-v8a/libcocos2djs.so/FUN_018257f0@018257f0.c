
/* WARNING: Type propagation algorithm not settling */

void FUN_018257f0(undefined4 *param_1,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2,ulong param_3,char param_4,char param_5,undefined1 param_6)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  size_t sVar3;
  byte bVar4;
  bool bVar5;
  undefined2 uVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  ulong uVar9;
  ulong uVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  ulong uVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((param_3 & 1) == 0) {
    bVar5 = false;
  }
  else {
    uVar10 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar10 = *(ulong *)(param_2 + 8);
    }
    bVar5 = uVar10 == 4;
  }
  if (param_4 == '\x01') {
    switch(param_6) {
    case 0:
      *param_1 = 0x4000203;
joined_r0x01825bb0:
      if (param_5 == '\0') {
        return;
      }
      if (param_5 == '\x02') {
        return;
      }
      if (param_5 == '\x01') {
joined_r0x01825bf8:
        if (bVar5) {
          return;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::insert(param_2,0,1,' ');
        return;
      }
      goto switchD_01825b9c_default;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 2:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') {
        *(undefined2 *)((long)param_1 + 1) = 0x104;
        goto joined_r0x01825ab8;
      }
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 0x400;
        goto joined_r0x01825a98;
      }
      if (param_5 != '\0') goto switchD_01825b9c_default;
      uVar6 = 0x400;
      goto LAB_01825cdc;
    case 3:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 4:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 4;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          *(undefined2 *)((long)param_1 + 1) = 0x103;
          goto joined_r0x01825ab8;
        }
        if (param_5 == '\0') {
          uVar6 = 3;
          goto LAB_01825cdc;
        }
        goto switchD_01825b9c_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 0x300;
      goto joined_r0x01825a98;
    default:
      goto switchD_01825b9c_default;
    }
    if (param_5 == '\x02') {
      *(undefined2 *)((long)param_1 + 1) = 0x201;
joined_r0x01825ab8:
      if (!bVar5) {
        return;
      }
      if (((byte)*param_2 & 1) == 0) {
        bVar4 = (byte)*param_2 >> 1;
        *param_2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   ((bVar4 - 1) * '\x02');
        param_2[bVar4] =
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
        return;
      }
      lVar2 = *(long *)(param_2 + 8);
      *(long *)(param_2 + 8) = lVar2 + -1;
      *(undefined1 *)(*(long *)(param_2 + 0x10) + lVar2 + -1) = 0;
      return;
    }
    if (param_5 == '\x01') {
      *(undefined2 *)((long)param_1 + 1) = 2;
joined_r0x01825a98:
      if (bVar5) {
        return;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_2,' ');
      return;
    }
    if (param_5 != '\0') {
switchD_01825b9c_default:
      *param_1 = 0x4000302;
      return;
    }
    uVar6 = 2;
  }
  else {
    if (param_4 != '\0') goto switchD_01825b9c_default;
    if (bVar5) {
      if (((byte)*param_2 & 1) == 0) {
        __dest = param_2 + 1;
        pbVar11 = param_2 + 4;
        pbVar8 = __dest + ((byte)*param_2 >> 1);
        if (pbVar11 != pbVar8) {
LAB_018258d8:
          if (__dest + 1 == pbVar11) {
            bVar1 = *__dest;
            sVar3 = (long)pbVar8 - (long)pbVar11;
            if (sVar3 != 0) {
              memmove(__dest,pbVar11,sVar3);
            }
            __dest[sVar3] = bVar1;
          }
          else if (pbVar11 + 1 == pbVar8) {
            bVar1 = pbVar8[-1];
            sVar3 = (long)(pbVar8 + -1) - (long)__dest;
            if (sVar3 != 0) {
              memmove(pbVar8 + -sVar3,__dest,sVar3);
            }
            *__dest = bVar1;
          }
          else {
            uVar7 = (long)pbVar11 - (long)__dest;
            uVar10 = (long)pbVar8 - (long)pbVar11;
            uVar12 = uVar7;
            if (uVar7 == (long)pbVar8 - (long)pbVar11) {
              pbVar8 = pbVar11;
              if (0x1f < uVar7) {
                uVar12 = uVar7 & 0xffffffffffffffe0;
                pbVar8 = __dest + 0x10;
                __dest = __dest + uVar12;
                pbVar15 = pbVar11 + 0x10;
                uVar10 = uVar12;
                do {
                  uVar17 = *(undefined8 *)(pbVar8 + -8);
                  uVar16 = *(undefined8 *)(pbVar8 + -0x10);
                  uVar22 = *(undefined8 *)(pbVar8 + 8);
                  uVar21 = *(undefined8 *)pbVar8;
                  uVar18 = *(undefined8 *)(pbVar15 + -0x10);
                  uVar20 = *(undefined8 *)(pbVar15 + 8);
                  uVar19 = *(undefined8 *)pbVar15;
                  uVar10 = uVar10 - 0x20;
                  *(undefined8 *)(pbVar8 + -8) = *(undefined8 *)(pbVar15 + -8);
                  *(undefined8 *)(pbVar8 + -0x10) = uVar18;
                  *(undefined8 *)(pbVar8 + 8) = uVar20;
                  *(undefined8 *)pbVar8 = uVar19;
                  *(undefined8 *)(pbVar15 + -8) = uVar17;
                  *(undefined8 *)(pbVar15 + -0x10) = uVar16;
                  *(undefined8 *)(pbVar15 + 8) = uVar22;
                  *(undefined8 *)pbVar15 = uVar21;
                  pbVar8 = pbVar8 + 0x20;
                  pbVar15 = pbVar15 + 0x20;
                } while (uVar10 != 0);
                pbVar8 = pbVar11 + uVar12;
                if (uVar12 == uVar7) goto code_r0x01825b84;
              }
              do {
                bVar1 = *__dest;
                pbVar15 = __dest + 1;
                *__dest = *pbVar8;
                *pbVar8 = bVar1;
                pbVar8 = pbVar8 + 1;
                __dest = pbVar15;
              } while (pbVar11 != pbVar15);
            }
            else {
              do {
                uVar9 = uVar10;
                lVar2 = 0;
                if (uVar9 != 0) {
                  lVar2 = (long)uVar12 / (long)uVar9;
                }
                uVar10 = uVar12 - lVar2 * uVar9;
                uVar12 = uVar9;
              } while (uVar10 != 0);
              if (uVar9 != 0) {
                pbVar11 = __dest + uVar9;
                do {
                  pbVar11 = pbVar11 + -1;
                  bVar1 = *pbVar11;
                  pbVar13 = pbVar11;
                  pbVar15 = pbVar11 + uVar7;
                  do {
                    pbVar14 = pbVar15;
                    pbVar15 = pbVar14 + uVar7;
                    if ((long)pbVar8 - (long)pbVar14 <= (long)uVar7) {
                      pbVar15 = __dest + (uVar7 - ((long)pbVar8 - (long)pbVar14));
                    }
                    *pbVar13 = *pbVar14;
                    pbVar13 = pbVar14;
                  } while (pbVar15 != pbVar11);
                  *pbVar14 = bVar1;
                } while (pbVar11 != __dest);
              }
            }
          }
        }
      }
      else {
        __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **
                  )(param_2 + 0x10);
        pbVar11 = __dest + 3;
        pbVar8 = __dest + *(long *)(param_2 + 8);
        if (pbVar11 != pbVar8) goto LAB_018258d8;
      }
    }
code_r0x01825b84:
    switch(param_6) {
    case 0:
      *param_1 = 0x2000403;
      goto joined_r0x01825bb0;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 2;
      if (param_5 == '\x02') {
        *(undefined2 *)((long)param_1 + 1) = 0x401;
        goto joined_r0x01825cb8;
      }
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 4;
        goto joined_r0x01825bf8;
      }
      if (param_5 != '\0') goto switchD_01825b9c_default;
      uVar6 = 4;
      goto LAB_01825cdc;
    case 2:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') {
LAB_01825cb0:
        *(undefined2 *)((long)param_1 + 1) = 0x102;
joined_r0x01825cb8:
        if (!bVar5) {
          return;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::erase(param_2,0,1);
        return;
      }
      if (param_5 != '\x01') goto LAB_01825c54;
      if (!bVar5) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::insert(param_2,0,1,' ');
      }
      break;
    case 3:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 2;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          *(undefined2 *)((long)param_1 + 1) = 0x301;
          goto joined_r0x01825cb8;
        }
        if (param_5 == '\0') {
          uVar6 = 0x300;
          goto LAB_01825cdc;
        }
        goto switchD_01825b9c_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 3;
      goto joined_r0x01825bf8;
    case 4:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') goto LAB_01825cb0;
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 0x200;
        goto joined_r0x01825bf8;
      }
LAB_01825c54:
      if (param_5 != '\0') goto switchD_01825b9c_default;
      break;
    default:
      goto switchD_01825b9c_default;
    }
    uVar6 = 0x200;
  }
LAB_01825cdc:
  *(undefined2 *)((long)param_1 + 1) = uVar6;
  return;
}

