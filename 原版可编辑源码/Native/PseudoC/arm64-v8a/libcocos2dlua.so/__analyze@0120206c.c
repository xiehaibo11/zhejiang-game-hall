
/* std::__ndk1::__time_get_storage<wchar_t>::__analyze(char, std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::__analyze(char param_1,ctype *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  byte bVar4;
  long lVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  wchar_t *pwVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  __locale_t __dataset;
  size_t sVar11;
  ulong uVar12;
  long lVar13;
  long *in_x2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  int iVar14;
  int iVar15;
  wchar_t *pwVar16;
  wchar_t *local_2b8;
  char *local_2b0;
  mbstate_t mStack_2a8;
  tm local_2a0;
  undefined4 local_268;
  wchar_t local_264 [100];
  char acStack_d4 [100];
  long local_70;
  
  puVar10 = (undefined8 *)(ulong)(byte)param_1;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  local_2a0.tm_gmtoff = 0;
  local_2a0.tm_isdst = -1;
  local_2a0._36_4_ = 0;
  local_2a0.tm_zone = (char *)0x0;
  local_2a0.tm_hour = 0x17;
  local_2a0.tm_mday = 0x1f;
  local_2a0.tm_sec = 0x3b;
  local_2a0.tm_min = 0x37;
  local_2a0.tm_wday = 6;
  local_2a0.tm_yday = 0x16c;
  local_2a0.tm_mon = 0xb;
  local_2a0.tm_year = 0xa1;
  local_268._2_1_ = 0;
  local_268._0_2_ = CONCAT11((char)param_2,0x25);
  strftime(acStack_d4,100,(char *)&local_268,&local_2a0);
  mStack_2a8.__count = 0;
  mStack_2a8.__value = (_union_27)0x0;
  local_2b0 = acStack_d4;
  __dataset = uselocale((__locale_t)*puVar10);
  sVar11 = mbsrtowcs(local_264,&local_2b0,100,&mStack_2a8);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (sVar11 == 0xffffffffffffffff) {
    __throw_runtime_error("locale not supported");
  }
  else {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    if (sVar11 != 0) {
      pbVar1 = (byte *)(puVar10 + 0x73);
      pwVar3 = local_264 + sVar11;
      puVar2 = puVar10 + 0x2b;
      pwVar16 = local_264;
      do {
        while (uVar12 = (**(code **)(*in_x2 + 0x18))(), (uVar12 & 1) != 0) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(in_x8,L' ');
          do {
            pwVar7 = pwVar3;
            if (&local_268 + sVar11 == pwVar16) break;
            uVar12 = (**(code **)(*in_x2 + 0x18))();
            pwVar16 = pwVar16 + 1;
            pwVar7 = pwVar16;
          } while ((uVar12 & 1) != 0);
joined_r0x0120255c:
          pwVar16 = pwVar7;
          if (pwVar3 == pwVar7) goto LAB_012026d0;
        }
        local_2b8 = pwVar16;
        lVar13 = FUN_01202764(&local_2b8,pwVar3,puVar10 + 1,puVar2);
        lVar13 = lVar13 - (long)(puVar10 + 1);
        if (lVar13 < 0x150) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(in_x8,L'%');
          if (lVar13 < 0xa8) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'A');
            pwVar7 = local_2b8;
          }
          else {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'a');
            pwVar7 = local_2b8;
          }
          goto joined_r0x0120255c;
        }
        local_2b8 = pwVar16;
        lVar13 = FUN_01202764(&local_2b8,pwVar3,puVar2,pbVar1);
        if (lVar13 - (long)puVar2 < 0x240) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(in_x8,L'%');
          if (lVar13 - (long)puVar2 < 0x120) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'B');
          }
          else {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'b');
          }
          pwVar7 = local_2b8;
          if ((((uint)param_2 & 0xff) == 0x78) &&
             (uVar12 = (**(code **)(*in_x2 + 0x18))(), pwVar7 = local_2b8, (uVar12 & 1) != 0)) {
            uVar12 = (ulong)((byte)*in_x8 >> 1);
            pbVar6 = in_x8 + 4;
            if (((byte)*in_x8 & 1) != 0) {
              uVar12 = *(ulong *)(in_x8 + 8);
              pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                         **)(in_x8 + 0x10);
            }
            *(undefined4 *)(pbVar6 + uVar12 * 4 + -4) = 0x6d;
          }
          goto joined_r0x0120255c;
        }
        if ((*pbVar1 & 1) == 0) {
          uVar12 = (ulong)(*pbVar1 >> 1);
          bVar4 = *(byte *)(puVar10 + 0x76);
          if ((bVar4 & 1) == 0) goto LAB_012022d8;
LAB_012022bc:
          if (uVar12 + puVar10[0x77] != 0) goto LAB_012022e4;
LAB_01202340:
          local_2b8 = pwVar16;
          uVar12 = (**(code **)(*in_x2 + 0x18))();
          if ((uVar12 & 1) == 0) {
            cVar8 = (**(code **)(*in_x2 + 0x68))();
            if (cVar8 == '%') {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
            }
            else {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,*pwVar16);
            }
            pwVar7 = pwVar16 + 1;
            goto joined_r0x0120255c;
          }
          uVar12 = (**(code **)(*in_x2 + 0x18))();
          if ((uVar12 & 1) == 0) {
switchD_01202588_caseD_8:
            for (; pwVar7 = pwVar16, local_2b8 != pwVar16; local_2b8 = local_2b8 + 1) {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,*local_2b8);
            }
          }
          else {
            uVar9 = (**(code **)(*in_x2 + 0x68))();
            pwVar16 = pwVar16 + 1;
            iVar14 = (uVar9 & 0xff) - 0x30;
            if (pwVar16 != pwVar3) {
              iVar15 = -2;
              while (uVar12 = (**(code **)(*in_x2 + 0x18))(), (uVar12 & 1) != 0) {
                uVar9 = (**(code **)(*in_x2 + 0x68))();
                pwVar16 = pwVar16 + 1;
                iVar14 = iVar14 * 10 + (uVar9 & 0xff) + -0x30;
                if ((iVar15 == 0) || (iVar15 = iVar15 + 1, pwVar16 == pwVar3)) break;
              }
            }
            pwVar7 = pwVar16;
            switch(iVar14) {
            case 6:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'w');
              break;
            case 7:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'u');
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
              goto switchD_01202588_caseD_8;
            case 0xb:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'I');
              break;
            case 0xc:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'm');
              break;
            case 0x17:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'H');
              break;
            case 0x1f:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'd');
              break;
            case 0x37:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'M');
              break;
            case 0x3b:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'S');
              break;
            case 0x3d:
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'y');
              break;
            default:
              if (iVar14 == 0x16c) {
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'%');
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'j');
              }
              else {
                if (iVar14 != 0x80d) goto switchD_01202588_caseD_8;
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'%');
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'Y');
              }
            }
          }
          goto joined_r0x0120255c;
        }
        uVar12 = puVar10[0x74];
        bVar4 = *(byte *)(puVar10 + 0x76);
        if ((bVar4 & 1) != 0) goto LAB_012022bc;
LAB_012022d8:
        if (uVar12 + (bVar4 >> 1) == 0) goto LAB_01202340;
LAB_012022e4:
        local_2b8 = pwVar16;
        lVar13 = FUN_01202764(&local_2b8,pwVar3,pbVar1,puVar10 + 0x79);
        if (0x2f < lVar13 - (long)pbVar1) goto LAB_01202340;
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back(in_x8,L'%');
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back(in_x8,L'p');
        pwVar16 = local_2b8;
      } while (pwVar3 != local_2b8);
    }
LAB_012026d0:
    if (*(long *)(lVar5 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

