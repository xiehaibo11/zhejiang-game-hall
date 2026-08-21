
/* std::__ndk1::__time_get_storage<wchar_t>::__analyze(char, std::__ndk1::ctype<wchar_t> const&) */

void std::__ndk1::__time_get_storage<wchar_t>::__analyze(char param_1,ctype *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  wchar_t *pwVar3;
  byte bVar4;
  long lVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  __locale_t __dataset;
  size_t sVar10;
  ulong uVar11;
  long lVar12;
  long *in_x2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *in_x8;
  long lVar13;
  int iVar14;
  int iVar15;
  wchar_t *pwVar16;
  wchar_t *local_2c8;
  char *local_2c0;
  mbstate_t mStack_2b8;
  tm local_2b0;
  undefined2 local_270;
  undefined1 local_26e;
  wchar_t local_26c [100];
  char acStack_dc [124];
  
  puVar9 = (undefined8 *)(ulong)(byte)param_1;
  lVar5 = tpidr_el0;
  lVar13 = *(long *)(lVar5 + 0x28);
  local_2b0.tm_gmtoff = 0;
  local_2b0.tm_isdst = -1;
  local_2b0._36_4_ = 0;
  local_2b0.tm_zone = (char *)0x0;
  local_2b0.tm_hour = 0x17;
  local_2b0.tm_mday = 0x1f;
  local_2b0.tm_sec = 0x3b;
  local_2b0.tm_min = 0x37;
  local_2b0.tm_wday = 6;
  local_2b0.tm_yday = 0x16c;
  local_2b0.tm_mon = 0xb;
  local_2b0.tm_year = 0xa1;
  local_26e = 0;
  local_270 = CONCAT11((char)param_2,0x25);
  strftime(acStack_dc,100,(char *)&local_270,&local_2b0);
  mStack_2b8.__count = 0;
  mStack_2b8.__value = (_union_27)0x0;
  local_2c0 = acStack_dc;
  __dataset = uselocale((__locale_t)*puVar9);
  sVar10 = mbsrtowcs(local_26c,&local_2c0,100,&mStack_2b8);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  if (sVar10 == 0xffffffffffffffff) {
    __throw_runtime_error("locale not supported");
  }
  else {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    if (sVar10 != 0) {
      puVar1 = puVar9 + 0x2b;
      pbVar2 = (byte *)(puVar9 + 0x73);
      pwVar3 = local_26c + sVar10;
      pwVar16 = local_26c;
      do {
        while (uVar11 = (**(code **)(*in_x2 + 0x18))(), (uVar11 & 1) != 0) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(in_x8,L' ');
          do {
            pwVar16 = pwVar16 + 1;
            if (pwVar3 == pwVar16) goto LAB_01822604;
            uVar11 = (**(code **)(*in_x2 + 0x18))();
          } while ((uVar11 & 1) != 0);
joined_r0x01822234:
          if (pwVar3 == pwVar16) goto LAB_01822604;
        }
        local_2c8 = pwVar16;
        lVar12 = FUN_0182269c(&local_2c8,pwVar3,puVar9 + 1,puVar1);
        lVar12 = lVar12 - (long)(puVar9 + 1);
        if (lVar12 < 0x150) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(in_x8,L'%');
          if (lVar12 < 0xa8) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'A');
            pwVar16 = local_2c8;
          }
          else {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'a');
            pwVar16 = local_2c8;
          }
          goto joined_r0x01822234;
        }
        local_2c8 = pwVar16;
        lVar12 = FUN_0182269c(&local_2c8,pwVar3,puVar1,pbVar2);
        if (lVar12 - (long)puVar1 < 0x240) {
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          push_back(in_x8,L'%');
          if (lVar12 - (long)puVar1 < 0x120) {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'B');
          }
          else {
            basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            ::push_back(in_x8,L'b');
          }
          pwVar16 = local_2c8;
          if ((((uint)param_2 & 0xff) == 0x78) &&
             (uVar11 = (**(code **)(*in_x2 + 0x18))(), pwVar16 = local_2c8, (uVar11 & 1) != 0)) {
            uVar11 = (ulong)((byte)*in_x8 >> 1);
            pbVar6 = in_x8 + 4;
            if (((byte)*in_x8 & 1) != 0) {
              uVar11 = *(ulong *)(in_x8 + 8);
              pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                         **)(in_x8 + 0x10);
            }
            *(undefined4 *)(pbVar6 + uVar11 * 4 + -4) = 0x6d;
          }
          goto joined_r0x01822234;
        }
        if ((*pbVar2 & 1) == 0) {
          uVar11 = (ulong)(*pbVar2 >> 1);
          bVar4 = *(byte *)(puVar9 + 0x76);
          if ((bVar4 & 1) != 0) goto LAB_01822328;
LAB_01822344:
          lVar12 = uVar11 + (bVar4 >> 1);
        }
        else {
          uVar11 = puVar9[0x74];
          bVar4 = *(byte *)(puVar9 + 0x76);
          if ((bVar4 & 1) == 0) goto LAB_01822344;
LAB_01822328:
          lVar12 = uVar11 + puVar9[0x77];
        }
        if ((lVar12 == 0) ||
           (local_2c8 = pwVar16, lVar12 = FUN_0182269c(&local_2c8,pwVar3,pbVar2,puVar9 + 0x79),
           0x2f < lVar12 - (long)pbVar2)) {
          local_2c8 = pwVar16;
          uVar11 = (**(code **)(*in_x2 + 0x18))();
          if ((uVar11 & 1) == 0) {
            cVar7 = (**(code **)(*in_x2 + 0x68))();
            if (cVar7 == '%') {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,L'%');
            }
            else {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,*pwVar16);
            }
            pwVar16 = pwVar16 + 1;
            goto joined_r0x01822234;
          }
          uVar11 = (**(code **)(*in_x2 + 0x18))();
          if ((uVar11 & 1) == 0) {
switchD_018224b0_caseD_8:
            for (; local_2c8 != pwVar16; local_2c8 = local_2c8 + 1) {
              basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
              ::push_back(in_x8,*local_2c8);
            }
          }
          else {
            uVar8 = (**(code **)(*in_x2 + 0x68))();
            pwVar16 = pwVar16 + 1;
            iVar15 = (uVar8 & 0xff) - 0x30;
            if (pwVar16 != pwVar3) {
              iVar14 = -2;
              while (uVar11 = (**(code **)(*in_x2 + 0x18))(), (uVar11 & 1) != 0) {
                uVar8 = (**(code **)(*in_x2 + 0x68))();
                pwVar16 = pwVar16 + 1;
                iVar15 = iVar15 * 10 + (uVar8 & 0xff) + -0x30;
                if ((iVar14 == 0) || (iVar14 = iVar14 + 1, pwVar16 == pwVar3)) break;
              }
            }
            switch(iVar15) {
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
              goto switchD_018224b0_caseD_8;
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
              if (iVar15 == 0x16c) {
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'%');
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'j');
              }
              else {
                if (iVar15 != 0x80d) goto switchD_018224b0_caseD_8;
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'%');
                basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                ::push_back(in_x8,L'Y');
              }
            }
          }
          goto joined_r0x01822234;
        }
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back(in_x8,L'%');
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        push_back(in_x8,L'p');
        pwVar16 = local_2c8;
      } while (pwVar3 != local_2c8);
    }
LAB_01822604:
    if (*(long *)(lVar5 + 0x28) == lVar13) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

