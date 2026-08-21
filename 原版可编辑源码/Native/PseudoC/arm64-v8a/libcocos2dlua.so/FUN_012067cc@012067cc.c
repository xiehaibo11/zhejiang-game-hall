
/* WARNING: Type propagation algorithm not settling */

void FUN_012067cc(undefined4 *param_1,
                 basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *param_2,ulong param_3,char param_4,char param_5,undefined1 param_6)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  bool bVar5;
  undefined2 uVar6;
  long lVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  
  if ((param_3 & 1) == 0) {
    bVar5 = false;
  }
  else {
    uVar1 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    bVar5 = uVar1 == 4;
  }
  if (param_4 != '\x01') {
    if (param_4 != '\0') goto switchD_01206898_default;
    if (bVar5) {
      bVar3 = *param_2;
      pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(param_2 + 0x10);
      pbVar2 = param_2 + 0x10;
      pbVar4 = param_2 + (ulong)((byte)bVar3 >> 1) * 4 + 4;
      if (((byte)bVar3 & 1) != 0) {
        pbVar2 = pbVar8 + 0xc;
        pbVar4 = pbVar8 + *(long *)(param_2 + 8) * 4;
      }
      if (pbVar2 != pbVar4) {
        pbVar2 = param_2 + 4;
        if (((byte)bVar3 & 1) != 0) {
          pbVar2 = pbVar8;
        }
        FUN_012083b4(pbVar2);
      }
    }
    switch(param_6) {
    case 0:
      *param_1 = 0x2000403;
      goto joined_r0x012068ac;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 2;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          *(undefined2 *)((long)param_1 + 1) = 4;
          goto joined_r0x01206944;
        }
        if (param_5 == '\0') {
          uVar6 = 4;
          goto LAB_01206af8;
        }
        goto switchD_01206898_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 0x401;
      goto joined_r0x01206b6c;
    case 2:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') {
LAB_01206abc:
        *(undefined2 *)((long)param_1 + 1) = 0x102;
joined_r0x01206b6c:
        if (!bVar5) {
          return;
        }
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        erase(param_2,0,1);
        return;
      }
      if (param_5 != '\x01') goto LAB_012069a0;
      if (!bVar5) {
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        insert(param_2,0,1,L' ');
      }
      break;
    case 3:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 2;
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          *(undefined2 *)((long)param_1 + 1) = 0x301;
          goto joined_r0x01206b6c;
        }
        if (param_5 == '\0') {
          uVar6 = 0x300;
          goto LAB_01206af8;
        }
        goto switchD_01206898_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 3;
      goto joined_r0x01206944;
    case 4:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') goto LAB_01206abc;
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 0x200;
        goto joined_r0x01206944;
      }
LAB_012069a0:
      if (param_5 != '\0') goto switchD_01206898_default;
      break;
    default:
      goto switchD_01206898_default;
    }
    uVar6 = 0x200;
    goto LAB_01206af8;
  }
  switch(param_6) {
  case 0:
    *param_1 = 0x4000203;
joined_r0x012068ac:
    if (param_5 == '\0') {
      return;
    }
    if (param_5 == '\x02') {
      return;
    }
    if (param_5 == '\x01') {
joined_r0x01206944:
      if (bVar5) {
        return;
      }
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      insert(param_2,0,1,L' ');
      return;
    }
    goto switchD_01206898_default;
  case 1:
    *(undefined1 *)param_1 = 3;
    *(undefined1 *)((long)param_1 + 3) = 4;
    break;
  case 2:
    *(undefined1 *)param_1 = 2;
    *(undefined1 *)((long)param_1 + 3) = 3;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 0x400;
        goto joined_r0x01206b08;
      }
      if (param_5 != '\0') goto switchD_01206898_default;
      uVar6 = 0x400;
      goto LAB_01206af8;
    }
    *(undefined2 *)((long)param_1 + 1) = 0x104;
    goto joined_r0x01206b18;
  case 3:
    *(undefined1 *)param_1 = 3;
    *(undefined1 *)((long)param_1 + 3) = 4;
    break;
  case 4:
    *(undefined1 *)param_1 = 2;
    *(undefined1 *)((long)param_1 + 3) = 4;
    if (param_5 == '\x02') {
      *(undefined2 *)((long)param_1 + 1) = 0x300;
      goto joined_r0x01206b08;
    }
    if (param_5 != '\x01') {
      if (param_5 == '\0') {
        uVar6 = 3;
        goto LAB_01206af8;
      }
      goto switchD_01206898_default;
    }
    *(undefined2 *)((long)param_1 + 1) = 0x103;
joined_r0x01206b18:
    if (!bVar5) {
      return;
    }
    goto LAB_01206b90;
  default:
    goto switchD_01206898_default;
  }
  if (param_5 != '\x02') {
    if (param_5 == '\x01') {
      *(undefined2 *)((long)param_1 + 1) = 2;
joined_r0x01206b08:
      if (bVar5) {
        return;
      }
      std::__ndk1::
      basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
      push_back(param_2,L' ');
      return;
    }
    if (param_5 != '\0') {
switchD_01206898_default:
      *param_1 = 0x4000302;
      return;
    }
    uVar6 = 2;
LAB_01206af8:
    *(undefined2 *)((long)param_1 + 1) = uVar6;
    return;
  }
  *(undefined2 *)((long)param_1 + 1) = 0x201;
  if (!bVar5) {
    return;
  }
LAB_01206b90:
  if (((byte)*param_2 & 1) == 0) {
    lVar7 = (ulong)((byte)*param_2 >> 1) - 1;
    *param_2 = SUB41((int)lVar7 << 1,0);
    *(undefined4 *)(param_2 + lVar7 * 4 + 4) = 0;
    return;
  }
  lVar7 = *(long *)(param_2 + 8);
  *(long *)(param_2 + 8) = lVar7 + -1;
  *(undefined4 *)(*(long *)(param_2 + 0x10) + (lVar7 + -1) * 4) = 0;
  return;
}

