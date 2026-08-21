
/* std::__ndk1::to_wstring(unsigned int) */

void __thiscall std::__ndk1::to_wstring(__ndk1 *this,uint param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  ulong *in_x8;
  byte *pbVar4;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  byte abStack_54 [12];
  long local_48;
  byte *pbVar5;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar3 = (byte *)__itoa::__u32toa((uint)this,(char *)abStack_54);
  uVar9 = (long)pbVar3 - (long)abStack_54;
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  if (0x3fffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 5) {
    puVar8 = (uint *)((long)in_x8 + 4);
    *(char *)in_x8 = (char)((int)uVar9 << 1);
  }
  else {
    if (uVar9 + 4 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    uVar10 = uVar9 + 4 & 0xfffffffffffffffc;
    puVar8 = operator_new(uVar10 << 2);
    in_x8[1] = uVar9;
    in_x8[2] = (ulong)puVar8;
    *in_x8 = uVar10 | 1;
  }
  if (abStack_54 != pbVar3) {
    uVar9 = (long)pbVar3 - (long)abStack_54;
    pbVar5 = abStack_54;
    puVar7 = puVar8;
    if (1 < uVar9) {
      uVar6 = uVar9 & 0xfffffffffffffffe;
      puVar7 = puVar8 + 1;
      puVar8 = puVar8 + uVar6;
      pbVar5 = (byte *)((ulong)abStack_54 | 1);
      uVar10 = uVar6;
      do {
        bVar1 = *pbVar5;
        uVar10 = uVar10 - 2;
        puVar7[-1] = (uint)pbVar5[-1];
        *puVar7 = (uint)bVar1;
        puVar7 = puVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (uVar10 != 0);
      pbVar5 = abStack_54 + uVar6;
      puVar7 = puVar8;
      if (uVar9 == uVar6) goto LAB_01210e18;
    }
    do {
      pbVar4 = pbVar5 + 1;
      puVar8 = puVar7 + 1;
      *puVar7 = (uint)*pbVar5;
      pbVar5 = pbVar4;
      puVar7 = puVar8;
    } while (pbVar3 != pbVar4);
  }
LAB_01210e18:
  *puVar8 = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

