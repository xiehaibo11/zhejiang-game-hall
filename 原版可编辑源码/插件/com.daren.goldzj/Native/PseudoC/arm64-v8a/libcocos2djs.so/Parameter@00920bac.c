
/* cocos2d::renderer::Technique::Parameter::Parameter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter::Type, int*, unsigned char) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter
          (Parameter *this,byte *param_1,Parameter param_3,void *param_4,Parameter param_5)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  Parameter *pPVar4;
  ulong uVar5;
  void *pvVar6;
  Parameter *__dest;
  ulong uVar7;
  undefined8 uVar8;
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
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar8;
    *(undefined8 *)pPVar4 = uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar6 = *(void **)(param_1 + 0x10);
    if (uVar5 < 0x17) {
      __dest = this + 0x11;
      *pPVar4 = SUB41((int)uVar5 << 1,0);
      if (uVar5 != 0) goto LAB_00920c70;
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar7);
      *(ulong *)(this + 0x18) = uVar5;
      *(Parameter **)(this + 0x20) = __dest;
      *(ulong *)(this + 0x10) = uVar7 | 1;
LAB_00920c70:
      memcpy(__dest,pvVar6,uVar5);
    }
    __dest[uVar5] = (Parameter)0x0;
  }
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = param_5;
  this[0x31] = param_3;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  this[0x42] = (Parameter)0x0;
  uVar5 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar5 = (ulong)(*param_1 >> 1);
  }
  uVar3 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_70,pbVar1,uVar5);
  *(undefined8 *)(this + 0x28) = uVar3;
  switch(this[0x31]) {
  case (Parameter)0x5:
    uVar5 = (ulong)(byte)this[0x30] << 2;
    break;
  case (Parameter)0x6:
    uVar5 = (ulong)(byte)this[0x30] << 3;
    break;
  case (Parameter)0x7:
    uVar5 = (ulong)((uint)(byte)this[0x30] * 0xc);
    goto joined_r0x00920d14;
  case (Parameter)0x8:
    uVar5 = (ulong)(byte)this[0x30] << 4;
joined_r0x00920d14:
    if (param_4 == (void *)0x0) goto LAB_00920d64;
    goto LAB_00920d28;
  default:
    __android_log_print(5,"renderer"," (139): This constructor only supports INT/INT2/INT3/INT4.\n")
    ;
    goto LAB_00920d64;
  }
  if (param_4 != (void *)0x0) {
LAB_00920d28:
    pvVar6 = malloc(uVar5 & 0xff);
    *(void **)(this + 0x38) = pvVar6;
    if (pvVar6 != (void *)0x0) {
      memcpy(pvVar6,param_4,uVar5 & 0xff);
    }
  }
LAB_00920d64:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

