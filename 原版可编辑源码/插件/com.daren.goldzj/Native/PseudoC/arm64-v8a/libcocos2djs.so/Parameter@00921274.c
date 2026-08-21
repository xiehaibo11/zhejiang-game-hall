
/* cocos2d::renderer::Technique::Parameter::Parameter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter::Type, cocos2d::renderer::Texture*) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter
          (Parameter *this,byte *param_1,Parameter param_3,Ref *param_4)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  Parameter *pPVar4;
  ulong uVar5;
  void *__src;
  Parameter *__dest;
  ulong uVar6;
  undefined8 uVar7;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pPVar4 = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)pPVar4 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if ((*param_1 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar7;
    *(undefined8 *)pPVar4 = uVar3;
    goto LAB_00921340;
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
    if (uVar5 != 0) goto LAB_0092132c;
  }
  else {
    uVar6 = uVar5 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    *(ulong *)(this + 0x18) = uVar5;
    *(Parameter **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar6 | 1;
LAB_0092132c:
    memcpy(__dest,__src,uVar5);
  }
  __dest[uVar5] = (Parameter)0x0;
LAB_00921340:
  *(undefined8 *)(this + 0x28) = 0;
  this[0x31] = param_3;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x42] = (Parameter)0x0;
  this[0x30] = (Parameter)0x1;
  uVar5 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar5 = (ulong)(*param_1 >> 1);
  }
  uVar3 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_70,pbVar1,uVar5);
  *(undefined8 *)(this + 0x28) = uVar3;
  if (param_4 != (Ref *)0x0) {
    *(Ref **)(this + 0x38) = param_4;
    Ref::retain(param_4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

