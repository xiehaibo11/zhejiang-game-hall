
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool> >, false, 0ul> >::value, void>::type std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool>
   >::__construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool> >, false, 0ul>
   >(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false,
   0ul>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0ul>) */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::
__construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false,0ul>>
          (vector<bool,std::__ndk1::allocator<bool>> *this,undefined8 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *__src;
  ulong *__dest;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *local_98;
  uint local_90;
  ulong *local_88;
  uint local_80;
  long local_78;
  uint local_70;
  ulong *local_68;
  uint local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 009d3b28 with catch @ 009d3bf4 */
  local_58 = *(long *)(lVar3 + 0x28);
  puVar8 = (ulong *)*param_2;
  uVar9 = *(uint *)(param_2 + 1);
  uVar10 = (ulong)uVar9;
                    /* catch() { ... } // from try @ 009d3ac0 with catch @ 009d3c04 */
  lVar4 = *param_3;
  uVar2 = *(uint *)(param_3 + 1);
  uVar6 = *(ulong *)(this + 8);
  uVar11 = (uVar2 - uVar10) + (lVar4 - (long)puVar8) * 8;
  uVar5 = uVar11 + uVar6;
  *(ulong *)(this + 8) = uVar5;
  if ((uVar6 == 0) || (0x3f < (uVar5 - 1 ^ uVar6 - 1))) {
    puVar7 = *(undefined8 **)this;
    if (uVar5 < 0x41) {
      *puVar7 = 0;
    }
    else {
      *(undefined8 *)((long)puVar7 + (uVar5 - 1 >> 3 & 0x1ffffffffffffff8)) = 0;
    }
  }
  else {
    puVar7 = *(undefined8 **)this;
  }
  uVar1 = (uint)uVar6 & 0x3f;
  __dest = (ulong *)((long)puVar7 + (uVar6 >> 3 & 0x1ffffffffffffff8));
  if (uVar9 == uVar1) {
    local_98 = __dest;
    local_90 = uVar9;
    if (0 < (long)uVar11) {
      __src = puVar8;
      if (uVar9 != 0) {
        uVar6 = (ulong)(0x40 - uVar9);
        uVar5 = uVar11;
        if ((long)uVar6 <= (long)uVar11) {
          uVar5 = uVar6;
        }
        __src = puVar8 + 1;
        uVar11 = uVar11 - uVar5;
        lVar4 = uVar5 + uVar10;
        uVar5 = 0xffffffffffffffffU >> (uVar6 - uVar5 & 0x3f) & -1L << (uVar10 & 0x3f);
        lVar12 = lVar4 + 0x3f;
        if (-1 < lVar4) {
          lVar12 = lVar4;
        }
        *__dest = *__dest & (uVar5 ^ 0xffffffffffffffff) | *puVar8 & uVar5;
        __dest = __dest + (lVar12 >> 6);
        uVar9 = (int)lVar4 + (int)(lVar12 >> 6) * -0x40;
      }
      uVar5 = uVar11 + 0x3f;
      if (-1 < (long)uVar11) {
        uVar5 = uVar11;
      }
      lVar12 = (long)uVar5 >> 6;
      memmove(__dest,__src,lVar12 * 8);
      lVar4 = (long)uVar11 % 0x40;
      local_98 = __dest + lVar12;
      local_90 = uVar9;
      if (0 < lVar4) {
        uVar11 = 0xffffffffffffffff >> (-lVar4 & 0x3fU);
        local_90 = (uint)lVar4;
        *local_98 = *local_98 & (uVar11 ^ 0xffffffffffffffff) | __src[lVar12] & uVar11;
      }
    }
  }
  else {
    local_88 = __dest;
    local_80 = uVar1;
    local_78 = lVar4;
    local_70 = uVar2;
    local_68 = puVar8;
    local_60 = uVar9;
    __copy_unaligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
              ((__ndk1 *)&local_98,&local_68,&local_78,&local_88);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

