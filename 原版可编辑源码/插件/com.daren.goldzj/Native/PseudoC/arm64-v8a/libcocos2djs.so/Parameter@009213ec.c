
/* cocos2d::renderer::Technique::Parameter::Parameter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter::Type, std::__ndk1::vector<cocos2d::renderer::Texture*,
   std::__ndk1::allocator<cocos2d::renderer::Texture*> > const&) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter
          (Parameter *this,byte *param_1,Parameter param_3,long *param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  Ref *this_00;
  Parameter *pPVar6;
  size_t __size;
  ulong uVar7;
  long lVar8;
  Parameter *__dest;
  ulong uVar9;
  undefined8 uVar10;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pPVar6 = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)pPVar6 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if ((*param_1 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar10;
    *(undefined8 *)pPVar6 = uVar4;
    goto LAB_009214b8;
  }
  uVar7 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar5 = *(void **)(param_1 + 0x10);
  if (uVar7 < 0x17) {
    __dest = this + 0x11;
    *pPVar6 = SUB41((int)uVar7 << 1,0);
    if (uVar7 != 0) goto LAB_009214a4;
  }
  else {
    uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    *(ulong *)(this + 0x18) = uVar7;
    *(Parameter **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar9 | 1;
LAB_009214a4:
    memcpy(__dest,pvVar5,uVar7);
  }
  __dest[uVar7] = (Parameter)0x0;
LAB_009214b8:
  *(undefined8 *)(this + 0x28) = 0;
  lVar8 = param_4[1];
  lVar3 = *param_4;
  this[0x31] = param_3;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x42] = (Parameter)0x0;
  this[0x30] = SUB41((uint)((int)lVar8 - (int)lVar3) >> 3,0);
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar7 = (ulong)(*param_1 >> 1);
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_70,pbVar1,uVar7);
  *(undefined8 *)(this + 0x28) = uVar4;
  lVar8 = *param_4;
  if (lVar8 != param_4[1]) {
    __size = param_4[1] - lVar8;
    pvVar5 = malloc(__size);
    *(void **)(this + 0x38) = pvVar5;
    if (__size != 0) {
      uVar7 = 0;
      while( true ) {
        this_00 = *(Ref **)(lVar8 + uVar7 * 8);
        *(Ref **)((long)pvVar5 + uVar7 * 8) = this_00;
        if (this_00 != (Ref *)0x0) {
          Ref::retain(this_00);
        }
        uVar7 = uVar7 + 1;
        if ((ulong)((long)__size >> 3) <= uVar7) break;
        lVar8 = *param_4;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

