
/* std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >::resize(unsigned long, bool) */

void __thiscall
std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::resize
          (vector<bool,v8::internal::ZoneAllocator<bool>> *this,ulong param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong *local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < param_1) {
    uVar7 = param_1 - uVar2;
    uVar5 = *(long *)(this + 0x10) * 0x40;
    if ((uVar5 < uVar7) || (uVar5 - uVar7 < uVar2)) {
      uStack_78 = *(undefined8 *)(this + 0x18);
      local_90 = 0;
      lStack_88 = 0;
      local_80 = 0;
      if (0x3ffffffc0 < param_1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar5 < 0x1ffffffe0) {
        uVar5 = *(long *)(this + 0x10) << 7;
        uVar2 = param_1 + 0x3f & 0xffffffffffffffc0;
        if (uVar2 <= uVar5) {
          uVar2 = uVar5;
        }
      }
      else {
        uVar2 = 0x3ffffffc0;
      }
      reserve((vector<bool,v8::internal::ZoneAllocator<bool>> *)&local_90,uVar2);
      uVar2 = *(ulong *)(this + 8);
      lStack_88 = uVar2 + uVar7;
      local_58 = local_90;
      local_50 = 0;
      __copy_aligned<std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>,true>
                (&local_68,*(long *)this,0,*(long *)this + (uVar2 >> 3 & 0x1ffffffffffffff8),
                 uVar2 & 0x3f,&local_58);
      uVar3 = *(undefined8 *)this;
      uVar4 = *(undefined8 *)(this + 8);
      *(long *)(this + 8) = lStack_88;
      *(undefined8 *)this = local_90;
      *(undefined8 *)(this + 0x10) = local_80;
      local_90 = uVar3;
      lStack_88 = uVar4;
    }
    else {
      local_60 = (uint)uVar2 & 0x3f;
      local_68 = (ulong *)(*(long *)this + (uVar2 >> 3 & 0x1ffffffffffffff8));
      *(ulong *)(this + 8) = param_1;
    }
    if (uVar7 != 0) {
      if (param_2) {
        puVar6 = local_68;
        if (local_60 != 0) {
          uVar5 = (ulong)(0x40 - local_60);
          uVar2 = uVar7;
          if (uVar5 <= uVar7) {
            uVar2 = uVar5;
          }
          puVar6 = local_68 + 1;
          *local_68 = *local_68 |
                      0xffffffffffffffffU >> (uVar5 - uVar2 & 0x3f) &
                      -1L << ((ulong)local_60 & 0x3f);
          uVar7 = uVar7 - uVar2;
        }
        uVar2 = uVar7 >> 6;
        memset(puVar6,0xff,uVar2 * 8);
        if ((uVar7 & 0x3f) != 0) {
          puVar6[uVar2] = puVar6[uVar2] | 0xffffffffffffffffU >> (-(uVar7 & 0x3f) & 0x3f);
        }
      }
      else {
        puVar6 = local_68;
        if (local_60 != 0) {
          uVar5 = (ulong)(0x40 - local_60);
          uVar2 = uVar7;
          if (uVar5 <= uVar7) {
            uVar2 = uVar5;
          }
          puVar6 = local_68 + 1;
          *local_68 = *local_68 &
                      (0xffffffffffffffffU >> (uVar5 - uVar2 & 0x3f) &
                       -1L << ((ulong)local_60 & 0x3f) ^ 0xffffffffffffffff);
          uVar7 = uVar7 - uVar2;
        }
        uVar2 = uVar7 >> 6;
        memset(puVar6,0,uVar2 * 8);
        if ((uVar7 & 0x3f) != 0) {
          puVar6[uVar2] =
               puVar6[uVar2] &
               (0xffffffffffffffffU >> (-(uVar7 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
        }
      }
    }
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

