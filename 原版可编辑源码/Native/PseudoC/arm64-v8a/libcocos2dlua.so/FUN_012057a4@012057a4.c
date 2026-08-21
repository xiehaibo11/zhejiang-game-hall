
/* WARNING: Type propagation algorithm not settling */

void FUN_012057a4(undefined4 *param_1,
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 *param_2,ulong param_3,char param_4,char param_5,undefined1 param_6)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  undefined2 uVar5;
  
  if ((param_3 & 1) == 0) {
    bVar4 = false;
  }
  else {
    uVar1 = (ulong)((byte)*param_2 >> 1);
    if (((byte)*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
    }
    bVar4 = uVar1 == 4;
  }
  if (param_4 == '\x01') {
    switch(param_6) {
    case 0:
      *param_1 = 0x4000203;
joined_r0x012058c4:
      if (param_5 == '\0') {
        return;
      }
      if (param_5 == '\x02') {
        return;
      }
      if (param_5 == '\x01') {
joined_r0x0120590c:
        if (bVar4) {
          return;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::insert(param_2,0,1,' ');
        return;
      }
      goto switchD_012058b0_default;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 4;
      break;
    case 2:
      *(undefined1 *)param_1 = 2;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') {
        *(undefined2 *)((long)param_1 + 1) = 0x104;
        goto joined_r0x01205abc;
      }
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 0x400;
        goto joined_r0x01205aac;
      }
      if (param_5 != '\0') goto switchD_012058b0_default;
      uVar5 = 0x400;
      goto LAB_01205ae0;
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
          goto joined_r0x01205abc;
        }
        if (param_5 == '\0') {
          uVar5 = 3;
          goto LAB_01205ae0;
        }
        goto switchD_012058b0_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 0x300;
      goto joined_r0x01205aac;
    default:
      goto switchD_012058b0_default;
    }
    if (param_5 == '\x02') {
      *(undefined2 *)((long)param_1 + 1) = 0x201;
joined_r0x01205abc:
      if (!bVar4) {
        return;
      }
      if (((byte)*param_2 & 1) == 0) {
        bVar3 = (byte)*param_2 >> 1;
        *param_2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   ((bVar3 - 1) * '\x02');
        param_2[bVar3] =
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
joined_r0x01205aac:
      if (bVar4) {
        return;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back(param_2,' ');
      return;
    }
    if (param_5 != '\0') {
switchD_012058b0_default:
      *param_1 = 0x4000302;
      return;
    }
    uVar5 = 2;
  }
  else {
    if (param_4 != '\0') goto switchD_012058b0_default;
    if (bVar4) {
      if (((byte)*param_2 & 1) == 0) {
        if (param_2 + 4 != param_2 + (ulong)((byte)*param_2 >> 1) + 1) {
LAB_01205888:
          FUN_01208220();
        }
      }
      else if (*(long *)(param_2 + 0x10) + 3 != *(long *)(param_2 + 0x10) + *(long *)(param_2 + 8))
      goto LAB_01205888;
    }
    switch(param_6) {
    case 0:
      *param_1 = 0x2000403;
      goto joined_r0x012058c4;
    case 1:
      *(undefined1 *)param_1 = 3;
      *(undefined1 *)((long)param_1 + 3) = 2;
      if (param_5 == '\x02') {
        *(undefined2 *)((long)param_1 + 1) = 0x401;
        goto joined_r0x01205a9c;
      }
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 4;
        goto joined_r0x0120590c;
      }
      if (param_5 != '\0') goto switchD_012058b0_default;
      uVar5 = 4;
      goto LAB_01205ae0;
    case 2:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') {
LAB_01205a94:
        *(undefined2 *)((long)param_1 + 1) = 0x102;
joined_r0x01205a9c:
        if (!bVar4) {
          return;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::erase(param_2,0,1);
        return;
      }
      if (param_5 != '\x01') goto LAB_01205a2c;
      if (!bVar4) {
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
          goto joined_r0x01205a9c;
        }
        if (param_5 == '\0') {
          uVar5 = 0x300;
          goto LAB_01205ae0;
        }
        goto switchD_012058b0_default;
      }
      *(undefined2 *)((long)param_1 + 1) = 3;
      goto joined_r0x0120590c;
    case 4:
      *(undefined1 *)param_1 = 4;
      *(undefined1 *)((long)param_1 + 3) = 3;
      if (param_5 == '\x02') goto LAB_01205a94;
      if (param_5 == '\x01') {
        *(undefined2 *)((long)param_1 + 1) = 0x200;
        goto joined_r0x0120590c;
      }
LAB_01205a2c:
      if (param_5 != '\0') goto switchD_012058b0_default;
      break;
    default:
      goto switchD_012058b0_default;
    }
    uVar5 = 0x200;
  }
LAB_01205ae0:
  *(undefined2 *)((long)param_1 + 1) = uVar5;
  return;
}

