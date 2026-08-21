
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>
   >(std::__ndk1::__wrap_iter<char*>, std::__ndk1::__wrap_iter<char*>) const */

void std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>>
               (undefined8 param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar13 = (long)param_4 - (long)param_3;
  local_68 = 0;
  local_60 = (undefined1 *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    uVar1 = (int)uVar13 << 1;
    uVar6 = (ulong)uVar1;
    local_70 = (ulong)(byte)uVar1;
    puVar5 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    uVar6 = uVar13 + 0x10 & 0xfffffffffffffff0;
    puVar5 = operator_new(uVar6);
    uVar6 = uVar6 | 1;
    local_68 = uVar13;
    local_70 = uVar6;
    local_60 = puVar5;
  }
  if (param_3 != param_4) {
    if ((0x1f < uVar13) && ((param_4 <= puVar5 || (puVar5 + uVar13 <= param_3)))) {
      uVar8 = uVar13 & 0xffffffffffffffe0;
      puVar9 = (undefined8 *)(param_3 + 0x10);
      puVar7 = puVar5 + uVar8;
      param_3 = param_3 + uVar8;
      puVar10 = (undefined8 *)(puVar5 + 0x10);
      uVar11 = uVar8;
      do {
        puVar3 = puVar9 + -1;
        uVar14 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar15 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar11 = uVar11 - 0x20;
        puVar10[-1] = *puVar3;
        puVar10[-2] = uVar14;
        puVar10[1] = uVar16;
        *puVar10 = uVar15;
        puVar10 = puVar10 + 4;
      } while (uVar11 != 0);
      puVar5 = puVar7;
      if (uVar8 == uVar13) goto LAB_00eaf5b0;
    }
    do {
      puVar12 = param_3 + 1;
      puVar7 = puVar5 + 1;
      *puVar5 = *param_3;
      puVar5 = puVar7;
      param_3 = puVar12;
    } while (param_4 != puVar12);
  }
LAB_00eaf5b0:
  *puVar5 = 0;
  bVar4 = (uVar6 & 1) != 0;
  puVar5 = (undefined1 *)((ulong)&local_70 | 1);
  if (bVar4) {
    puVar5 = local_60;
  }
  uVar13 = (ulong)((uint)uVar6 >> 1 & 0x7f);
  if (bVar4) {
    uVar13 = local_68;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (param_1,*(long **)(param_2 + 0x10),puVar5,puVar5 + uVar13);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

