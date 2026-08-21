
/* std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >::resize(unsigned long, bool) */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
          (vector<bool,std::__ndk1::allocator<bool>> *this,ulong param_1,bool param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  void *local_90;
  long lStack_88;
  undefined8 local_80;
  long local_78;
  uint local_70;
  long local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00da18fc to 00ea190b has its CatchHandler @ 00da1910 */
  uVar4 = *(ulong *)(this + 8);
                    /* try { // try from 00da190c to 00ea195b has its CatchHandler @ 00da164c */
  if (uVar4 < param_1) {
                    /* catch() { ... } // from try @ 00da1718 with catch @ 00da1910
                       catch() { ... } // from try @ 00da18fc with catch @ 00da1910 */
    uVar7 = param_1 - uVar4;
    uVar6 = *(long *)(this + 0x10) * 0x40;
                    /* catch() { ... } // from try @ 00da17e8 with catch @ 00da192c */
    if ((uVar6 < uVar7) || (uVar6 - uVar7 < uVar4)) {
      lStack_88 = 0;
      local_80 = 0;
      local_90 = (void *)0x0;
      if ((long)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uVar6 < 0x3fffffffffffffff) {
        uVar6 = *(long *)(this + 0x10) << 7;
        uVar4 = param_1 + 0x3f & 0xffffffffffffffc0;
        if (uVar4 <= uVar6) {
          uVar4 = uVar6;
        }
      }
      else {
        uVar4 = 0x7fffffffffffffff;
      }
      reserve((vector<bool,std::__ndk1::allocator<bool>> *)&local_90,uVar4);
      uVar4 = *(ulong *)(this + 8);
      lStack_88 = uVar4 + uVar7;
      local_58 = local_90;
      local_50 = 0;
      __copy_aligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,true>
                (&local_68,*(long *)this,0,*(long *)this + (uVar4 >> 3 & 0x1ffffffffffffff8),
                 uVar4 & 0x3f,&local_58);
      pvVar1 = *(void **)this;
      uVar2 = *(undefined8 *)(this + 8);
      *(long *)(this + 8) = lStack_88;
      *(void **)this = local_90;
      uVar5 = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = local_80;
                    /* try { // try from 00da19ec to 00ea1a2b has its CatchHandler @ 00da19ec
                       catch() { ... } // from try @ 00da19ec with catch @ 00da19ec
                       catch() { ... } // from try @ 00da1a54 with catch @ 00da19ec */
      local_90 = pvVar1;
      lStack_88 = uVar2;
      local_80 = uVar5;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      local_60 = (uint)uVar4 & 0x3f;
      local_68 = *(long *)this + (uVar4 >> 3 & 0x1ffffffffffffff8);
      *(ulong *)(this + 8) = param_1;
    }
    local_78 = local_68;
    local_70 = local_60;
    FUN_00da2344(&local_78,uVar7,param_2);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00da1a2c to 00ea1a43 has its CatchHandler @ 00da1ad4 */
  return;
}

