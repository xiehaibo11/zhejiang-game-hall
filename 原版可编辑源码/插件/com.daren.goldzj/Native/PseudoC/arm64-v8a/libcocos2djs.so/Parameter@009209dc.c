
/* cocos2d::renderer::Technique::Parameter::Parameter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter::Type) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter(Parameter *this,byte *param_1,uint param_3)

{
  byte *pbVar1;
  Parameter PVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  void *pvVar6;
  size_t __size;
  Parameter *pPVar7;
  Parameter *__dest;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_60 [8];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pPVar7 = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)pPVar7 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if ((*param_1 & 1) == 0) {
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar10;
    *(undefined8 *)pPVar7 = uVar5;
    goto LAB_00920a9c;
  }
  uVar8 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar6 = *(void **)(param_1 + 0x10);
  if (uVar8 < 0x17) {
    __dest = this + 0x11;
    *pPVar7 = SUB41((int)uVar8 << 1,0);
    if (uVar8 != 0) goto LAB_00920a88;
  }
  else {
    uVar9 = uVar8 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar9);
    *(ulong *)(this + 0x18) = uVar8;
    *(Parameter **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar9 | 1;
LAB_00920a88:
    memcpy(__dest,pvVar6,uVar8);
  }
  __dest[uVar8] = (Parameter)0x0;
LAB_00920a9c:
  *(undefined8 *)(this + 0x28) = 0;
  this[0x31] = SUB41(param_3,0);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x42] = (Parameter)0x0;
  this[0x30] = (Parameter)0x1;
  uVar8 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar8 = (ulong)(*param_1 >> 1);
  }
  uVar5 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_60,pbVar1,uVar8);
  PVar2 = this[0x31];
  *(undefined8 *)(this + 0x28) = uVar5;
  if ((0x1f < (byte)PVar2) || ((1 << (ulong)((byte)PVar2 & 0x1f) & 0xa0000001U) == 0)) {
    uVar4 = getElements(param_3);
    switch(param_3 & 0xff) {
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x12:
    case 0x16:
    case 0x1a:
    case 99:
    case 100:
      uVar4 = (uVar4 & 0xff) << 2;
      __size = (size_t)uVar4;
      *(short *)(this + 0x40) = (short)uVar4;
      break;
    default:
      __size = (size_t)*(ushort *)(this + 0x40);
    }
    pvVar6 = malloc(__size);
    *(void **)(this + 0x38) = pvVar6;
    memset(pvVar6,0,__size);
    if ((byte)PVar2 == 100) {
      *(undefined4 *)((long)pvVar6 + 0xc) = 0x3f800000;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

