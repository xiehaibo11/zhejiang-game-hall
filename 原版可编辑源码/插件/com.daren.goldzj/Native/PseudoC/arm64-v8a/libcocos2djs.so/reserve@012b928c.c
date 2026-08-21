
/* std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::reserve
          (vector<bool,v8::internal::ZoneAllocator<bool>> *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  Zone *pZStack_68;
  long local_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((ulong)(*(long *)(this + 0x10) * 0x40) < param_1) {
    pZStack_68 = *(Zone **)(this + 0x18);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    if (0x3ffffffc0 < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = *(long *)(pZStack_68 + 0x10);
    lVar1 = (param_1 - 1 >> 6) + 1;
    uVar4 = lVar1 * 8;
    if (uVar4 < (ulong)(*(long *)(pZStack_68 + 0x18) - lVar3) ||
        uVar4 - (*(long *)(pZStack_68 + 0x18) - lVar3) == 0) {
      *(ulong *)(pZStack_68 + 0x10) = lVar3 + uVar4;
    }
    else {
      lVar3 = v8::internal::Zone::NewExpand(pZStack_68,uVar4);
    }
    uStack_78 = 0;
    local_48 = *(long *)this;
    local_50 = (uint)*(ulong *)(this + 8) & 0x3f;
    local_58 = local_48 + (*(ulong *)(this + 8) >> 3 & 0x1ffffffffffffff8);
    local_40 = 0;
    local_80 = lVar3;
    local_70 = lVar1;
    __construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>,false,0ul>>
              ((vector<bool,v8::internal::ZoneAllocator<bool>> *)&local_80,&local_48,&local_58);
    uVar5 = *(undefined8 *)this;
    uVar6 = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 8) = uStack_78;
    *(long *)this = local_80;
    *(long *)(this + 0x10) = local_70;
    local_80 = uVar5;
    uStack_78 = uVar6;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

