
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__transform_primary<std::__ndk1::__wrap_iter<char*>
   >(std::__ndk1::__wrap_iter<char*>, std::__ndk1::__wrap_iter<char*>, char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__transform_primary<std::__ndk1::__wrap_iter<char*>>
          (byte *param_1,regex_traits<char> *this,undefined1 *param_3,undefined1 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_70;
  ulong local_68;
  undefined1 *local_60;
  long local_58;
  undefined1 *puVar10;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar15 = (long)param_4 - (long)param_3;
  local_70 = 0;
  local_68 = 0;
  local_60 = (undefined1 *)0x0;
  if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar15 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar15 << 1);
    puVar6 = (undefined1 *)((ulong)&local_70 | 1);
  }
  else {
    uVar14 = uVar15 + 0x10 & 0xfffffffffffffff0;
    puVar6 = operator_new(uVar14);
    local_70 = uVar14 | 1;
    local_68 = uVar15;
    local_60 = puVar6;
  }
  if (param_3 == param_4) goto LAB_00868bd8;
  puVar7 = puVar6;
  puVar10 = param_3;
  if ((uVar15 < 0x20) || ((puVar6 < param_4 && (param_3 < puVar6 + uVar15)))) {
LAB_00868bc0:
    do {
      puVar9 = puVar10 + 1;
      *puVar7 = *puVar10;
      puVar7 = puVar7 + 1;
      puVar10 = puVar9;
    } while (param_4 != puVar9);
  }
  else {
    uVar11 = uVar15 & 0xffffffffffffffe0;
    puVar12 = (undefined8 *)(param_3 + 0x10);
    puVar13 = (undefined8 *)(puVar6 + 0x10);
    uVar14 = uVar11;
    do {
      puVar4 = puVar12 + -1;
      uVar16 = puVar12[-2];
      uVar18 = puVar12[1];
      uVar17 = *puVar12;
      puVar12 = puVar12 + 4;
      uVar14 = uVar14 - 0x20;
      puVar13[-1] = *puVar4;
      puVar13[-2] = uVar16;
      puVar13[1] = uVar18;
      *puVar13 = uVar17;
      puVar13 = puVar13 + 4;
    } while (uVar14 != 0);
    puVar7 = puVar6 + uVar11;
    puVar10 = param_3 + uVar11;
    if (uVar11 != uVar15) goto LAB_00868bc0;
  }
  puVar6 = puVar6 + ((long)param_4 - (long)param_3);
LAB_00868bd8:
  *puVar6 = 0;
  uVar15 = local_70 >> 1 & 0x7f;
  puVar6 = (undefined1 *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    uVar15 = local_68;
    puVar6 = local_60;
  }
  (**(code **)(**(long **)(this + 0x10) + 0x20))
            (param_1,*(long **)(this + 0x10),puVar6,puVar6 + uVar15);
  bVar2 = *param_1;
  uVar15 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8);
  }
  if (uVar15 != 1) {
    if (uVar15 == 0xc) {
      pbVar8 = *(byte **)(param_1 + 0x10);
      bVar5 = (bVar2 & 1) != 0;
      pbVar1 = param_1 + 4;
      if (bVar5) {
        pbVar1 = pbVar8 + 3;
      }
      if (!bVar5) {
        pbVar8 = param_1 + 1;
      }
      pbVar8[0xb] = *pbVar1;
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
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

