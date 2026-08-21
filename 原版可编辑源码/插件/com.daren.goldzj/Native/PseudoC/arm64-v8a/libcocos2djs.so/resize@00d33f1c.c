
/* std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >::resize(unsigned long, bool) */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
          (vector<bool,std::__ndk1::allocator<bool>> *this,ulong param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  size_t __n;
  void *pvVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong *local_80;
  long lStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < param_1) {
    uVar9 = param_1 - uVar2;
    uVar5 = *(long *)(this + 0x10) * 0x40;
    if ((uVar5 < uVar9) || (uVar5 - uVar9 < uVar2)) {
      local_80 = (ulong *)0x0;
      lStack_78 = 0;
      local_70 = 0;
      if ((long)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar5 < 0x3fffffffffffffff) {
        uVar5 = *(long *)(this + 0x10) << 7;
        uVar2 = param_1 + 0x3f & 0xffffffffffffffc0;
        if (uVar2 <= uVar5) {
          uVar2 = uVar5;
        }
      }
      else {
        uVar2 = 0x7fffffffffffffff;
      }
      reserve((vector<bool,std::__ndk1::allocator<bool>> *)&local_80,uVar2);
      puVar7 = local_80;
      uVar5 = *(ulong *)(this + 8);
      lStack_78 = uVar5 + uVar9;
      if ((long)uVar5 < 1) {
        uVar5 = 0;
      }
      else {
        pvVar8 = *(void **)this;
        uVar2 = uVar5 >> 6;
        memmove(local_80,pvVar8,uVar2 * 8);
        uVar5 = uVar5 & 0x3f;
        puVar7 = puVar7 + uVar2;
        if (uVar5 != 0) {
          uVar3 = 0xffffffffffffffff >> (-uVar5 & 0x3f);
          *puVar7 = *puVar7 & (uVar3 ^ 0xffffffffffffffff) |
                    *(ulong *)((long)pvVar8 + uVar2 * 8) & uVar3;
        }
      }
      uVar11 = *(undefined8 *)(this + 8);
      pvVar8 = *(void **)this;
      *(long *)(this + 8) = lStack_78;
      *(ulong **)this = local_80;
      uVar4 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = local_70;
      local_80 = pvVar8;
      lStack_78 = uVar11;
      local_70 = uVar4;
      if (pvVar8 != (void *)0x0) {
        operator_delete(pvVar8);
      }
    }
    else {
      uVar5 = (ulong)((uint)uVar2 & 0x3f);
      puVar7 = (ulong *)(*(long *)this + (uVar2 >> 3 & 0x1ffffffffffffff8));
      *(ulong *)(this + 8) = param_1;
    }
    if (uVar9 != 0) {
      iVar10 = (int)uVar5;
      puVar6 = puVar7;
      if (param_2) {
        if (iVar10 != 0) {
          uVar3 = (ulong)(0x40 - iVar10);
          uVar2 = uVar9;
          if (uVar3 <= uVar9) {
            uVar2 = uVar3;
          }
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar7 | 0xffffffffffffffffU >> (uVar3 - uVar2 & 0x3f) & -1L << uVar5;
          uVar9 = uVar9 - uVar2;
        }
        __n = (uVar9 >> 6) * 8;
        memset(puVar6,0xff,__n);
        if ((uVar9 & 0x3f) == 0) goto LAB_00d3415c;
        uVar2 = puVar6[uVar9 >> 6] | 0xffffffffffffffffU >> (-(uVar9 & 0x3f) & 0x3f);
      }
      else {
        if (iVar10 != 0) {
          uVar3 = (ulong)(0x40 - iVar10);
          uVar2 = uVar9;
          if (uVar3 <= uVar9) {
            uVar2 = uVar3;
          }
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar7 & (0xffffffffffffffffU >> (uVar3 - uVar2 & 0x3f) & -1L << uVar5 ^
                              0xffffffffffffffff);
          uVar9 = uVar9 - uVar2;
        }
        __n = (uVar9 >> 6) * 8;
        memset(puVar6,0,__n);
        if ((uVar9 & 0x3f) == 0) goto LAB_00d3415c;
        uVar2 = puVar6[uVar9 >> 6] &
                (0xffffffffffffffffU >> (-(uVar9 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
      }
      *(ulong *)((long)puVar6 + __n) = uVar2;
    }
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
LAB_00d3415c:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

