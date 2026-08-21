
/* cocos2d::renderer::Technique::Parameter::Parameter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter::Type, float*, unsigned char) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter
          (Parameter *this,byte *param_1,Parameter param_3,void *param_4,Parameter param_5)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  Parameter *pPVar5;
  ulong uVar6;
  void *pvVar7;
  Parameter *__dest;
  ulong uVar8;
  undefined8 uVar9;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pPVar5 = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if ((*param_1 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar9;
    *(undefined8 *)pPVar5 = uVar4;
  }
  else {
    uVar6 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar7 = *(void **)(param_1 + 0x10);
    if (uVar6 < 0x17) {
      __dest = this + 0x11;
      *pPVar5 = SUB41((int)uVar6 << 1,0);
      if (uVar6 != 0) goto LAB_00920e8c;
    }
    else {
      uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar8);
      *(ulong *)(this + 0x18) = uVar6;
      *(Parameter **)(this + 0x20) = __dest;
      *(ulong *)(this + 0x10) = uVar8 | 1;
LAB_00920e8c:
      memcpy(__dest,pvVar7,uVar6);
    }
    __dest[uVar6] = (Parameter)0x0;
  }
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = param_5;
  this[0x31] = param_3;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x42] = (Parameter)0x0;
  uVar6 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar6 = (ulong)(*param_1 >> 1);
  }
  uVar4 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_70,pbVar1,uVar6);
  *(undefined8 *)(this + 0x28) = uVar4;
  switch(this[0x31]) {
  case (Parameter)0xd:
    uVar6 = (ulong)(byte)this[0x30] << 2;
    goto joined_r0x00920f40;
  case (Parameter)0xe:
    uVar6 = (ulong)(byte)this[0x30] << 3;
joined_r0x00920f40:
    if (param_4 == (void *)0x0) goto LAB_00920fa4;
    goto LAB_00920f68;
  case (Parameter)0xf:
  case (Parameter)0x63:
    uVar2 = (uint)(byte)this[0x30] * 0xc;
    goto joined_r0x00920f54;
  case (Parameter)0x10:
  case (Parameter)0x12:
  case (Parameter)0x64:
    uVar6 = (ulong)(byte)this[0x30] << 4;
    break;
  default:
    __android_log_print(5,"renderer",
                        " (191): This constructor only supports FLAOT/FLOAT2/FLOAT3/FLOAT4/MAT2/MAT3/MAT4/COLOR3/COLOR4.\n"
                       );
    goto LAB_00920fa4;
  case (Parameter)0x16:
    uVar2 = (uint)(byte)this[0x30] * 0x24;
joined_r0x00920f54:
    uVar6 = (ulong)uVar2;
    break;
  case (Parameter)0x1a:
    uVar6 = (ulong)(byte)this[0x30] << 6;
  }
  if (param_4 != (void *)0x0) {
LAB_00920f68:
    *(short *)(this + 0x40) = (short)uVar6;
    pvVar7 = malloc(uVar6);
    *(void **)(this + 0x38) = pvVar7;
    if (pvVar7 != (void *)0x0) {
      memcpy(pvVar7,param_4,uVar6);
    }
  }
LAB_00920fa4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

