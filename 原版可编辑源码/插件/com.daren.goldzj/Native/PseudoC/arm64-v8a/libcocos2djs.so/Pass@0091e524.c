
/* cocos2d::renderer::Pass::Pass(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::renderer::Pass*) */

void __thiscall cocos2d::renderer::Pass::Pass(Pass *this,basic_string *param_1,Pass *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  undefined8 uVar3;
  Pass *pPVar4;
  Pass *__dest;
  ulong uVar5;
  void *__src;
  ulong uVar6;
  undefined8 uVar7;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__Pass_01c69448;
  pPVar4 = this + 0x10;
  *(undefined8 *)pPVar4 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (((byte)*param_1 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar7;
    *(undefined8 *)pPVar4 = uVar3;
    goto LAB_0091e5f0;
  }
  uVar5 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (uVar5 < 0x17) {
    __dest = this + 0x11;
    *pPVar4 = SUB41((int)uVar5 << 1,0);
    if (uVar5 != 0) goto LAB_0091e5dc;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    *(ulong *)(this + 0x18) = uVar5;
    *(Pass **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar6 | 1;
LAB_0091e5dc:
    memcpy(__dest,__src,uVar5);
  }
  __dest[uVar5] = (Pass)0x0;
LAB_0091e5f0:
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Pass **)(this + 0x30) = param_2;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x58) = 0x3f800000;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(Pass **)(this + 0x60) = this + 0x68;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  this[0xf1] = (Pass)0x0;
  uVar5 = *(ulong *)(param_1 + 8);
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar5 = (ulong)((byte)*param_1 >> 1);
  }
  uVar3 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_60,pbVar1,uVar5);
  *(undefined8 *)(this + 0x28) = uVar3;
  *(undefined8 *)(this + 0xe4) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xdc) = 0xffffffffffffffff;
  *(undefined8 *)(this + 200) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xc0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xd8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xd0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x90) = 0xffffffffffffffff;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

