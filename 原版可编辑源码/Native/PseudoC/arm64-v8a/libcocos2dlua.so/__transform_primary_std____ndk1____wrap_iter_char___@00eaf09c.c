
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__transform_primary<std::__ndk1::__wrap_iter<char*>
   >(std::__ndk1::__wrap_iter<char*>, std::__ndk1::__wrap_iter<char*>, char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__transform_primary<std::__ndk1::__wrap_iter<char*>>
          (byte *param_1,regex_traits<char> *this,undefined1 *param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar16 = (long)param_4 - (long)param_3;
  local_68 = 0;
  local_60 = (undefined1 *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar16 < 0x17) {
    uVar3 = (int)uVar16 << 1;
    uVar8 = (ulong)uVar3;
    local_70 = (ulong)(byte)uVar3;
    puVar7 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    uVar8 = uVar16 + 0x10 & 0xfffffffffffffff0;
    puVar7 = operator_new(uVar8);
    uVar8 = uVar8 | 1;
    local_68 = uVar16;
    local_70 = uVar8;
    local_60 = puVar7;
  }
  if (param_3 != param_4) {
    if ((0x1f < uVar16) && ((param_4 <= puVar7 || (puVar7 + uVar16 <= param_3)))) {
      uVar11 = uVar16 & 0xffffffffffffffe0;
      puVar12 = (undefined8 *)(param_3 + 0x10);
      puVar9 = puVar7 + uVar11;
      param_3 = param_3 + uVar11;
      puVar13 = (undefined8 *)(puVar7 + 0x10);
      uVar14 = uVar11;
      do {
        puVar5 = puVar12 + -1;
        uVar17 = puVar12[-2];
        uVar19 = puVar12[1];
        uVar18 = *puVar12;
        puVar12 = puVar12 + 4;
        uVar14 = uVar14 - 0x20;
        puVar13[-1] = *puVar5;
        puVar13[-2] = uVar17;
        puVar13[1] = uVar19;
        *puVar13 = uVar18;
        puVar13 = puVar13 + 4;
      } while (uVar14 != 0);
      puVar7 = puVar9;
      if (uVar11 == uVar16) goto LAB_00eaf1a8;
    }
    do {
      puVar15 = param_3 + 1;
      puVar9 = puVar7 + 1;
      *puVar7 = *param_3;
      puVar7 = puVar9;
      param_3 = puVar15;
    } while (param_4 != puVar15);
  }
LAB_00eaf1a8:
  *puVar7 = 0;
  bVar6 = (uVar8 & 1) != 0;
  puVar7 = (undefined1 *)((ulong)&local_70 | 1);
  if (bVar6) {
    puVar7 = local_60;
  }
  uVar16 = (ulong)((uint)uVar8 >> 1 & 0x7f);
  if (bVar6) {
    uVar16 = local_68;
  }
  (**(code **)(**(long **)(this + 0x10) + 0x20))
            (param_1,*(long **)(this + 0x10),puVar7,puVar7 + uVar16);
  bVar2 = *param_1;
  uVar16 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8);
  }
  if (uVar16 != 1) {
    if (uVar16 == 0xc) {
      pbVar10 = *(byte **)(param_1 + 0x10);
      bVar6 = (bVar2 & 1) != 0;
      pbVar1 = param_1 + 4;
      if (bVar6) {
        pbVar1 = pbVar10 + 3;
      }
      if (!bVar6) {
        pbVar10 = param_1 + 1;
      }
      pbVar10[0xb] = *pbVar1;
    }
    else if ((bVar2 & 1) == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
    }
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

