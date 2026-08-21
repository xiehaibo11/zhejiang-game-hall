
void FUN_011f97d0(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                  *param_1,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  char acStack_70 [8];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  bVar3 = *param_2;
  if (((byte)bVar3 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar3 >> 1);
    uVar2 = 0x16;
    if (uVar7 == 0x16) goto LAB_011f9838;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    uVar2 = (*(ulong *)param_2 & 0xfffffffffffffffe) - 1;
    if (uVar7 == uVar2) {
LAB_011f9838:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by(param_2,uVar2,1,uVar2,uVar2,0,0);
      bVar3 = *param_2;
    }
  }
  if (((byte)bVar3 & 1) == 0) {
    pbVar5 = param_2 + 1;
    *param_2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
               ((char)uVar7 * '\x02' + '\x02');
  }
  else {
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_2 + 0x10);
    *(ulong *)(param_2 + 8) = uVar7 + 1;
  }
  *(undefined2 *)(pbVar5 + uVar7) = 0x22;
  bVar3 = *param_1;
  if (bVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0)
  {
    pbVar5 = param_1 + 1;
LAB_011f98e8:
    do {
      switch(bVar3) {
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x8:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\\b");
        bVar3 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if (bVar3 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )0x0) goto LAB_011f9a9c;
        goto LAB_011f98e8;
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x9:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\\t");
        bVar3 = *pbVar5;
        break;
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xa:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\\n");
        bVar3 = *pbVar5;
        break;
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xb:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xe:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xf:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x10:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x11:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x12:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x13:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x14:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x15:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x16:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x17:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x18:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x19:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1a:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1b:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1c:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1d:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1e:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x1f:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x20:
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x21:
switchD_011f9904_caseD_b:
        if (((byte)bVar3 < 0x20) ||
           (bVar3 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )0x7f)) {
          v8::base::OS::SNPrintF(acStack_70,8,"\\u%04X");
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (param_2,acStack_70);
          bVar3 = *pbVar5;
        }
        else {
          bVar4 = *param_2;
          if (((byte)bVar4 & 1) == 0) {
            uVar7 = (ulong)((byte)bVar4 >> 1);
            uVar2 = 0x16;
            if (uVar7 == 0x16) goto LAB_011f9a28;
          }
          else {
            uVar7 = *(ulong *)(param_2 + 8);
            uVar2 = (*(ulong *)param_2 & 0xfffffffffffffffe) - 1;
            if (uVar7 == uVar2) {
LAB_011f9a28:
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              __grow_by(param_2,uVar2,1,uVar2,uVar2,0,0);
              bVar4 = *param_2;
            }
          }
          if (((byte)bVar4 & 1) == 0) {
            *param_2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        )((char)uVar7 * '\x02' + '\x02');
            pbVar6 = param_2 + 1;
          }
          else {
            *(ulong *)(param_2 + 8) = uVar7 + 1;
            pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       **)(param_2 + 0x10);
          }
          pbVar6[uVar7] = bVar3;
          (pbVar6 + uVar7)[1] =
               (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
          bVar3 = *pbVar5;
        }
        break;
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xc:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\\f");
        bVar3 = *pbVar5;
        break;
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xd:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\\r");
        bVar3 = *pbVar5;
        break;
      case (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x22:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\\\"");
        bVar3 = *pbVar5;
        break;
      default:
        if (bVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )0x5c) goto switchD_011f9904_caseD_b;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(param_2,"\\\\");
        bVar3 = *pbVar5;
      }
      pbVar5 = pbVar5 + 1;
    } while (bVar3 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       )0x0);
  }
LAB_011f9a9c:
  bVar3 = *param_2;
  if (((byte)bVar3 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar3 >> 1);
    uVar2 = 0x16;
    if (uVar7 != 0x16) goto LAB_011f9aec;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 8);
    uVar2 = (*(ulong *)param_2 & 0xfffffffffffffffe) - 1;
    if (uVar7 != uVar2) goto LAB_011f9aec;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __grow_by(param_2,uVar2,1,uVar2,uVar2,0,0);
  bVar3 = *param_2;
LAB_011f9aec:
  if (((byte)bVar3 & 1) == 0) {
    pbVar5 = param_2 + 1;
    *param_2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
               ((char)uVar7 * '\x02' + '\x02');
  }
  else {
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_2 + 0x10);
    *(ulong *)(param_2 + 8) = uVar7 + 1;
  }
  *(undefined2 *)(pbVar5 + uVar7) = 0x22;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

