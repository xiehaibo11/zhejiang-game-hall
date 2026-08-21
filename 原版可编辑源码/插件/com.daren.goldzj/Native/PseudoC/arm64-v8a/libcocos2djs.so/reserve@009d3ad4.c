
/* std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::reserve
          (vector<bool,std::__ndk1::allocator<bool>> *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((ulong)(*(long *)(this + 0x10) * 0x40) < param_1) {
    local_70 = (void *)0x0;
    uStack_68 = 0;
    local_60 = 0;
    if ((long)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (param_1 - 1 >> 6) + 1;
    local_70 = operator_new(lVar1 * 8);
    uStack_68 = 0;
                    /* try { // try from 009d3b28 to 00ad3b2f has its CatchHandler @ 009d3bf4 */
    local_48 = *(long *)this;
    local_40 = 0;
                    /* try { // try from 009d3b30 to 00ad3c17 has its CatchHandler @ 009d39ec */
    local_50 = (uint)*(ulong *)(this + 8) & 0x3f;
    lStack_58 = local_48 + (*(ulong *)(this + 8) >> 3 & 0x1ffffffffffffff8);
    local_60 = lVar1;
    __construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false,0ul>>
              ((vector<bool,std::__ndk1::allocator<bool>> *)&local_70,&local_48,&lStack_58);
    uVar5 = *(undefined8 *)(this + 8);
    pvVar4 = *(void **)this;
    *(undefined8 *)(this + 8) = uStack_68;
    *(void **)this = local_70;
    uVar3 = *(undefined8 *)(this + 0x10);
    *(long *)(this + 0x10) = local_60;
    local_70 = pvVar4;
    uStack_68 = uVar5;
    local_60 = uVar3;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

