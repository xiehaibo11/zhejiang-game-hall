
/* std::__ndk1::__time_get_storage<char>::__analyze(char, std::__ndk1::ctype<char> const&) */

void std::__ndk1::__time_get_storage<char>::__analyze(char param_1,ctype *param_2)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  uint uVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  long *in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  byte *pbVar17;
  byte *local_118;
  tm local_110;
  undefined2 local_d8;
  undefined1 local_d6;
  byte local_d4 [100];
  long local_70;
  
  uVar8 = (ulong)(byte)param_1;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_110.tm_gmtoff = 0;
  local_110.tm_isdst = -1;
  local_110._36_4_ = 0;
  local_110.tm_zone = (char *)0x0;
  local_110.tm_hour = 0x17;
  local_110.tm_mday = 0x1f;
  local_110.tm_sec = 0x3b;
  local_110.tm_min = 0x37;
  local_110.tm_wday = 6;
  local_110.tm_yday = 0x16c;
  local_110.tm_mon = 0xb;
  local_110.tm_year = 0xa1;
  local_d6 = 0;
  local_d8 = CONCAT11((char)param_2,0x25);
  sVar9 = strftime((char *)local_d4,100,(char *)&local_d8,&local_110);
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)in_x8 = 0;
  if (sVar9 == 0) {
LAB_01201cb0:
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pbVar3 = local_d4 + sVar9;
  lVar1 = uVar8 + 0x158;
  pbVar2 = (byte *)(uVar8 + 0x398);
  pbVar15 = local_d4;
  do {
    if (((char)local_d4[0] < '\0') || ((*(ulong *)(in_x2[2] + (ulong)local_d4[0] * 8) & 1) == 0)) {
      local_118 = pbVar15;
      lVar10 = FUN_01201d14(&local_118,pbVar3,uVar8 + 8,lVar1);
      lVar10 = lVar10 - (uVar8 + 8);
      if (lVar10 < 0x150) {
        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                  (in_x8,'%');
        if (lVar10 < 0xa8) {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (in_x8,'A');
          pbVar17 = local_118;
        }
        else {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (in_x8,'a');
          pbVar17 = local_118;
        }
      }
      else {
        local_118 = pbVar15;
        lVar10 = FUN_01201d14(&local_118,pbVar3,lVar1,pbVar2);
        lVar10 = lVar10 - lVar1;
        if (lVar10 < 0x240) {
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                    (in_x8,'%');
          if (lVar10 < 0x120) {
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(in_x8,'B');
          }
          else {
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(in_x8,'b');
          }
          pbVar17 = local_118;
          if (((uint)param_2 & 0xff) == 0x78) {
            lVar13 = uVar8 + (lVar10 >> 3) * 8;
            if ((*(byte *)(lVar13 + 0x158) & 1) == 0) {
              bVar4 = *(byte *)(lVar13 + 0x159);
            }
            else {
              bVar4 = **(byte **)(uVar8 + (lVar10 >> 3) * 8 + 0x168);
            }
            if ((-1 < (char)bVar4) &&
               (((uint)*(undefined8 *)(in_x2[2] + (ulong)bVar4 * 8) >> 6 & 1) != 0)) {
              uVar12 = (ulong)((byte)*in_x8 >> 1);
              pbVar6 = in_x8 + 1;
              if (((byte)*in_x8 & 1) != 0) {
                uVar12 = *(ulong *)(in_x8 + 8);
                pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           **)(in_x8 + 0x10);
              }
              pbVar6[uVar12 - 1] =
                   (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   0x6d;
            }
          }
        }
        else {
          if ((*pbVar2 & 1) == 0) {
            uVar12 = (ulong)(*pbVar2 >> 1);
            bVar4 = *(byte *)(uVar8 + 0x3b0);
            if ((bVar4 & 1) != 0) goto LAB_01201920;
LAB_0120194c:
            lVar10 = uVar12 + (bVar4 >> 1);
          }
          else {
            uVar12 = *(ulong *)(uVar8 + 0x3a0);
            bVar4 = *(byte *)(uVar8 + 0x3b0);
            if ((bVar4 & 1) == 0) goto LAB_0120194c;
LAB_01201920:
            lVar10 = uVar12 + *(long *)(uVar8 + 0x3b8);
          }
          if ((lVar10 == 0) ||
             (local_118 = pbVar15, lVar10 = FUN_01201d14(&local_118,pbVar3,pbVar2,uVar8 + 0x3c8),
             0x2f < lVar10 - (long)pbVar2)) {
            bVar4 = *pbVar15;
            if ((char)bVar4 < '\0') {
LAB_01201a2c:
              local_118 = pbVar15;
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(in_x8,bVar4);
            }
            else {
              if (((uint)*(undefined8 *)(in_x2[2] + (ulong)bVar4 * 8) >> 6 & 1) != 0) {
                local_118 = pbVar15;
                uVar7 = (**(code **)(*in_x2 + 0x48))();
                pbVar17 = pbVar15 + 1;
                iVar14 = (uVar7 & 0xff) - 0x30;
                if (pbVar17 != pbVar3) {
                  iVar16 = -2;
                  while ((-1 < (char)*pbVar17 &&
                         (((uint)*(undefined8 *)(in_x2[2] + (ulong)*pbVar17 * 8) >> 6 & 1) != 0))) {
                    uVar7 = (**(code **)(*in_x2 + 0x48))();
                    pbVar17 = pbVar17 + 1;
                    iVar14 = iVar14 * 10 + (uVar7 & 0xff) + -0x30;
                    if ((iVar16 == 0) || (iVar16 = iVar16 + 1, pbVar17 == pbVar3)) break;
                  }
                }
                switch(iVar14) {
                case 6:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'w');
                  break;
                case 7:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'u');
                  break;
                case 8:
                case 9:
                case 10:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                case 0x14:
                case 0x15:
                case 0x16:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                case 0x2f:
                case 0x30:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
                case 0x36:
                case 0x38:
                case 0x39:
                case 0x3a:
                case 0x3c:
switchD_01201b38_caseD_8:
                  for (; local_118 != pbVar17; local_118 = local_118 + 1) {
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,*local_118);
                  }
                  break;
                case 0xb:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'I');
                  break;
                case 0xc:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'m');
                  break;
                case 0x17:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'H');
                  break;
                case 0x1f:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'d');
                  break;
                case 0x37:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'M');
                  break;
                case 0x3b:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'S');
                  break;
                case 0x3d:
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'%');
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  push_back(in_x8,'y');
                  break;
                default:
                  if (iVar14 == 0x16c) {
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,'%');
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,'j');
                  }
                  else {
                    if (iVar14 != 0x80d) goto switchD_01201b38_caseD_8;
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,'%');
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    push_back(in_x8,'Y');
                  }
                }
                goto LAB_012017fc;
              }
              if (bVar4 != 0x25) goto LAB_01201a2c;
              local_118 = pbVar15;
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(in_x8,'%');
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              push_back(in_x8,'%');
            }
            pbVar17 = pbVar15 + 1;
          }
          else {
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(in_x8,'%');
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            push_back(in_x8,'p');
            pbVar17 = local_118;
          }
        }
      }
    }
    else {
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
                (in_x8,' ');
      pbVar11 = pbVar15;
      while (pbVar11 = pbVar11 + 1, pbVar17 = pbVar3, pbVar3 != pbVar11) {
        pbVar15 = pbVar15 + 1;
        pbVar17 = pbVar15;
        if (((char)*pbVar11 < '\0') ||
           (pbVar17 = pbVar11, (*(ulong *)(in_x2[2] + (ulong)*pbVar11 * 8) & 1) == 0)) break;
      }
    }
LAB_012017fc:
    if (pbVar3 == pbVar17) goto LAB_01201cb0;
    local_d4[0] = *pbVar17;
    pbVar15 = pbVar17;
  } while( true );
}

