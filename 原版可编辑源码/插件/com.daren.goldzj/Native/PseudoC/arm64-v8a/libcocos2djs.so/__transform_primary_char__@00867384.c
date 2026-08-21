
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__transform_primary<char*>(char*, char*, char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__transform_primary<char*>
          (regex_traits<char> *this,char *param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  char *pcVar6;
  byte *in_x8;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar12 = (long)param_2 - (long)param_1;
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar12 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar12 << 1);
    pcVar6 = (char *)((ulong)&local_70 | 1);
  }
  else {
    uVar11 = uVar12 + 0x10 & 0xfffffffffffffff0;
    pcVar6 = operator_new(uVar11);
    local_70 = uVar11 | 1;
    local_68 = uVar12;
    local_60 = pcVar6;
  }
  if (param_1 == param_2) goto LAB_00867478;
  pcVar8 = pcVar6;
  if (uVar12 < 0x20) {
LAB_00867464:
    do {
      pcVar7 = param_1 + 1;
      *pcVar8 = *param_1;
      param_1 = pcVar7;
      pcVar8 = pcVar8 + 1;
    } while (param_2 != pcVar7);
  }
  else {
    uVar10 = uVar12 & 0xffffffffffffffe0;
    pcVar8 = pcVar6 + 0x10;
    pcVar7 = param_1 + 0x10;
    uVar11 = uVar10;
    do {
      pcVar4 = pcVar7 + -8;
      uVar13 = *(undefined8 *)(pcVar7 + -0x10);
      uVar15 = *(undefined8 *)(pcVar7 + 8);
      uVar14 = *(undefined8 *)pcVar7;
      uVar11 = uVar11 - 0x20;
      pcVar7 = pcVar7 + 0x20;
      *(undefined8 *)(pcVar8 + -8) = *(undefined8 *)pcVar4;
      *(undefined8 *)(pcVar8 + -0x10) = uVar13;
      *(undefined8 *)(pcVar8 + 8) = uVar15;
      *(undefined8 *)pcVar8 = uVar14;
      pcVar8 = pcVar8 + 0x20;
    } while (uVar11 != 0);
    param_1 = param_1 + uVar10;
    pcVar8 = pcVar6 + uVar10;
    if (uVar12 != uVar10) goto LAB_00867464;
  }
  pcVar6 = pcVar6 + uVar12;
LAB_00867478:
  *pcVar6 = '\0';
  uVar12 = local_70 >> 1 & 0x7f;
  pcVar6 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    uVar12 = local_68;
    pcVar6 = local_60;
  }
  (**(code **)(**(long **)(this + 0x10) + 0x20))(*(long **)(this + 0x10),pcVar6,pcVar6 + uVar12);
  bVar2 = *in_x8;
  uVar12 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar12 = *(ulong *)(in_x8 + 8);
  }
  if (uVar12 != 1) {
    if (uVar12 == 0xc) {
      pbVar9 = *(byte **)(in_x8 + 0x10);
      bVar5 = (bVar2 & 1) != 0;
      pbVar1 = in_x8 + 4;
      if (bVar5) {
        pbVar1 = pbVar9 + 3;
      }
      if (!bVar5) {
        pbVar9 = in_x8 + 1;
      }
      pbVar9[0xb] = *pbVar1;
    }
    else if ((bVar2 & 1) == 0) {
      in_x8[0] = 0;
      in_x8[1] = 0;
    }
    else {
      **(undefined1 **)(in_x8 + 0x10) = 0;
      in_x8[8] = 0;
      in_x8[9] = 0;
      in_x8[10] = 0;
      in_x8[0xb] = 0;
      in_x8[0xc] = 0;
      in_x8[0xd] = 0;
      in_x8[0xe] = 0;
      in_x8[0xf] = 0;
    }
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

