
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>
   >(std::__ndk1::__wrap_iter<char*>, std::__ndk1::__wrap_iter<char*>) const */

void std::__ndk1::regex_traits<char>::transform<std::__ndk1::__wrap_iter<char*>>
               (undefined8 param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  undefined1 *puVar6;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar11 = (long)param_4 - (long)param_3;
  local_70 = 0;
  local_68 = 0;
  local_60 = (undefined1 *)0x0;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar11 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar11 << 1);
    puVar3 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    puVar3 = operator_new(uVar10);
    local_70 = uVar10 | 1;
    local_68 = uVar11;
    local_60 = puVar3;
  }
  if (param_3 == param_4) goto LAB_00869124;
  puVar4 = puVar3;
  puVar6 = param_3;
  if ((uVar11 < 0x20) || ((puVar3 < param_4 && (param_3 < puVar3 + uVar11)))) {
LAB_0086910c:
    do {
      puVar5 = puVar6 + 1;
      *puVar4 = *puVar6;
      puVar4 = puVar4 + 1;
      puVar6 = puVar5;
    } while (param_4 != puVar5);
  }
  else {
    uVar7 = uVar11 & 0xffffffffffffffe0;
    puVar8 = (undefined8 *)(param_3 + 0x10);
    puVar9 = (undefined8 *)(puVar3 + 0x10);
    uVar10 = uVar7;
    do {
      puVar2 = puVar8 + -1;
      uVar12 = puVar8[-2];
      uVar14 = puVar8[1];
      uVar13 = *puVar8;
      puVar8 = puVar8 + 4;
      uVar10 = uVar10 - 0x20;
      puVar9[-1] = *puVar2;
      puVar9[-2] = uVar12;
      puVar9[1] = uVar14;
      *puVar9 = uVar13;
      puVar9 = puVar9 + 4;
    } while (uVar10 != 0);
    puVar4 = puVar3 + uVar7;
    puVar6 = param_3 + uVar7;
    if (uVar7 != uVar11) goto LAB_0086910c;
  }
  puVar3 = puVar3 + ((long)param_4 - (long)param_3);
LAB_00869124:
  *puVar3 = 0;
  uVar11 = local_70 >> 1 & 0x7f;
  puVar3 = (undefined1 *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    uVar11 = local_68;
    puVar3 = local_60;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (param_1,*(long **)(param_2 + 0x10),puVar3,puVar3 + uVar11);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

