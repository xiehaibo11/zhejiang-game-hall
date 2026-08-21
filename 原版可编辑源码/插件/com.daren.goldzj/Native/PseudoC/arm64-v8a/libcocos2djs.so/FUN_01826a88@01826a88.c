
void FUN_01826a88(undefined4 *param_1,
                 basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 *param_2,ulong param_3,char param_4,char param_5,undefined1 param_6)

{
  ulong uVar1;
  size_t sVar2;
  bool bVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  ulong uVar10;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar11;
  long lVar12;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar13;
  ulong uVar14;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar15;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if ((param_3 & 1) == 0) {
    bVar3 = false;
  }
  else {
    uVar1 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    bVar3 = uVar1 == 4;
  }
  if (param_4 == '\x01') {
    switch(param_6) {
    case 0:
      uVar5 = 0x4000203;
LAB_01826e7c:
      *param_1 = uVar5;
      if (param_5 == '\0') {
        return;
      }
      if (param_5 == '\x02') {
        return;
      }
      if (param_5 == '\x01') {
joined_r0x01827008:
        if (bVar3) {
          return;
        }
        std::__ndk1::
        basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
        insert(param_2,0,1,L' ');
        return;
      }
      goto switchD_01826e70_default;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 2:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') {
        *(undefined2 *)((long)param_1 + 1) = 0x104;
        if (!bVar3) {
          return;
        }
        goto LAB_01826d94;
      }
      if (param_5 != '\x01') {
        if (param_5 == '\0') {
          *(undefined2 *)((long)param_1 + 1) = 0x400;
          return;
        }
        goto switchD_01826e70_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 0x400;
      goto joined_r0x01826d54;
    case 3:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 4:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 4;
      if (param_5 == '\x02') {
        *(undefined2 *)((long)param_1 + 1) = 0x300;
        if (bVar3) {
          return;
        }
        goto LAB_01826d68;
      }
      if (param_5 != '\x01') {
        if (param_5 == '\0') {
          *(undefined2 *)((long)param_1 + 1) = 3;
          return;
        }
        goto switchD_01826e70_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 0x103;
      goto joined_r0x01826d90;
    default:
      goto switchD_01826e70_default;
    }
    if (param_5 == '\x02') {
      *(undefined2 *)((long)param_1 + 1) = 0x201;
joined_r0x01826d90:
      if (!bVar3) {
        return;
      }
LAB_01826d94:
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
    if (param_5 != '\x01') {
      if (param_5 == '\0') {
        *(undefined2 *)((long)param_1 + 1) = 2;
        return;
      }
switchD_01826e70_default:
      *param_1 = 0x4000302;
      return;
    }
    *(undefined2 *)((long)param_1 + 1) = 2;
joined_r0x01826d54:
    if (bVar3) {
      return;
    }
LAB_01826d68:
    std::__ndk1::
    basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
    push_back(param_2,L' ');
    return;
  }
  if (param_4 != '\0') goto switchD_01826e70_default;
  if (bVar3) {
    pbVar11 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(param_2 + 0x10);
    __dest = param_2 + 4;
    pbVar9 = param_2 + 0x10;
    pbVar4 = param_2 + 4 + (ulong)((byte)*param_2 >> 1) * 4;
    if (((byte)*param_2 & 1) != 0) {
      __dest = pbVar11;
      pbVar9 = pbVar11 + 0xc;
      pbVar4 = pbVar11 + *(long *)(param_2 + 8) * 4;
    }
    if (pbVar9 != pbVar4) {
      if (__dest + 4 == pbVar9) {
        uVar5 = *(undefined4 *)__dest;
        sVar2 = (long)pbVar4 - (long)pbVar9;
        if (sVar2 != 0) {
          memmove(__dest,pbVar9,sVar2);
        }
        *(undefined4 *)(__dest + ((long)sVar2 >> 2) * 4) = uVar5;
      }
      else if (pbVar9 + 4 == pbVar4) {
        uVar5 = *(undefined4 *)(pbVar4 + -4);
        sVar2 = (long)(pbVar4 + -4) - (long)__dest;
        if (sVar2 != 0) {
          memmove(pbVar4 + -sVar2,__dest,sVar2);
        }
        *(undefined4 *)__dest = uVar5;
      }
      else {
        lVar6 = (long)pbVar9 - (long)__dest >> 2;
        lVar7 = (long)pbVar4 - (long)pbVar9 >> 2;
        lVar12 = lVar6;
        if (lVar6 == lVar7) {
          uVar1 = ((ulong)(pbVar9 + (-4 - (long)__dest)) >> 2) + 1;
          pbVar4 = pbVar9;
          if ((7 < uVar1) &&
             ((lVar7 = ((ulong)(pbVar9 + (-4 - (long)__dest)) & 0xfffffffffffffffc) + 4,
              pbVar9 + lVar7 <= __dest || (__dest + lVar7 <= pbVar9)))) {
            uVar10 = uVar1 & 0x7ffffffffffffff8;
            pbVar4 = __dest + 0x10;
            __dest = __dest + uVar10 * 4;
            pbVar11 = pbVar9 + 0x10;
            uVar14 = uVar10;
            do {
              uVar17 = *(undefined8 *)(pbVar4 + -8);
              uVar16 = *(undefined8 *)(pbVar4 + -0x10);
              uVar22 = *(undefined8 *)(pbVar4 + 8);
              uVar21 = *(undefined8 *)pbVar4;
              uVar18 = *(undefined8 *)(pbVar11 + -0x10);
              uVar20 = *(undefined8 *)(pbVar11 + 8);
              uVar19 = *(undefined8 *)pbVar11;
              uVar14 = uVar14 - 8;
              *(undefined8 *)(pbVar4 + -8) = *(undefined8 *)(pbVar11 + -8);
              *(undefined8 *)(pbVar4 + -0x10) = uVar18;
              *(undefined8 *)(pbVar4 + 8) = uVar20;
              *(undefined8 *)pbVar4 = uVar19;
              *(undefined8 *)(pbVar11 + -8) = uVar17;
              *(undefined8 *)(pbVar11 + -0x10) = uVar16;
              *(undefined8 *)(pbVar11 + 8) = uVar22;
              *(undefined8 *)pbVar11 = uVar21;
              pbVar4 = pbVar4 + 0x20;
              pbVar11 = pbVar11 + 0x20;
            } while (uVar14 != 0);
            pbVar4 = pbVar9 + uVar10 * 4;
            if (uVar1 == uVar10) goto code_r0x01826e58;
          }
          do {
            uVar5 = *(undefined4 *)__dest;
            pbVar11 = __dest + 4;
            *(undefined4 *)__dest = *(undefined4 *)pbVar4;
            *(undefined4 *)pbVar4 = uVar5;
            pbVar4 = pbVar4 + 4;
            __dest = pbVar11;
          } while (pbVar9 != pbVar11);
        }
        else {
          do {
            lVar8 = lVar7;
            lVar7 = 0;
            if (lVar8 != 0) {
              lVar7 = lVar12 / lVar8;
            }
            lVar7 = lVar12 - lVar7 * lVar8;
            lVar12 = lVar8;
          } while (lVar7 != 0);
          if (lVar8 != 0) {
            pbVar9 = __dest + lVar8 * 4;
            do {
              pbVar9 = pbVar9 + -4;
              uVar5 = *(undefined4 *)pbVar9;
              pbVar13 = pbVar9;
              pbVar11 = pbVar9 + lVar6 * 4;
              do {
                pbVar15 = pbVar11;
                lVar7 = (long)pbVar4 - (long)pbVar15 >> 2;
                pbVar11 = pbVar15 + lVar6 * 4;
                if (lVar7 <= lVar6) {
                  pbVar11 = __dest + (lVar6 - lVar7) * 4;
                }
                *(undefined4 *)pbVar13 = *(undefined4 *)pbVar15;
                pbVar13 = pbVar15;
              } while (pbVar11 != pbVar9);
              *(undefined4 *)pbVar15 = uVar5;
            } while (pbVar9 != __dest);
          }
        }
      }
    }
  }
code_r0x01826e58:
  switch(param_6) {
  case 0:
    uVar5 = 0x2000403;
    goto LAB_01826e7c;
  case 1:
    *(undefined1 *)param_1 = 3;
    *(undefined1 *)((long)param_1 + 3) = 2;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 4;
        goto joined_r0x01827008;
      }
      if (param_5 == '\0') {
        *(undefined2 *)((long)param_1 + 1) = 4;
        return;
      }
      goto switchD_01826e70_default;
    }
    *(undefined2 *)((long)param_1 + 1) = 0x401;
    break;
  case 2:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 3;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        if (!bVar3) {
          std::__ndk1::
          basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::
          insert(param_2,0,1,L' ');
        }
        goto LAB_01826f70;
      }
LAB_01826f6c:
      if (param_5 == '\0') {
LAB_01826f70:
        *(undefined2 *)((long)param_1 + 1) = 0x200;
        return;
      }
      goto switchD_01826e70_default;
    }
    goto LAB_01826fa0;
  case 3:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 2;
    if (param_5 == '\x02') {
      *(undefined2 *)((long)param_1 + 1) = 3;
      goto joined_r0x01827008;
    }
    if (param_5 != '\x01') {
      if (param_5 == '\0') {
        *(undefined2 *)((long)param_1 + 1) = 0x300;
        return;
      }
      goto switchD_01826e70_default;
    }
    *(undefined2 *)((long)param_1 + 1) = 0x301;
    break;
  case 4:
    *(undefined1 *)param_1 = 4;
    *(undefined1 *)((long)param_1 + 3) = 3;
    if (param_5 != '\x02') {
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 0x200;
        goto joined_r0x01827008;
      }
      goto LAB_01826f6c;
    }
LAB_01826fa0:
    *(undefined2 *)((long)param_1 + 1) = 0x102;
    if (!bVar3) {
      return;
    }
    goto LAB_01826fec;
  default:
    goto switchD_01826e70_default;
  }
  if (!bVar3) {
    return;
  }
LAB_01826fec:
  std::__ndk1::
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::erase
            (param_2,0,1);
  return;
}

