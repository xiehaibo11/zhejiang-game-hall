
/* cocos2d::renderer::Technique::Parameter::Parameter(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::renderer::Technique::Parameter::Type, se::Object*, unsigned char) */

void __thiscall
cocos2d::renderer::Technique::Parameter::Parameter
          (Parameter *this,byte *param_1,Parameter param_3,Object *param_4,Parameter param_5)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  Object *this_00;
  Parameter *pPVar5;
  ulong uVar6;
  void *__src;
  Parameter *__dest;
  ulong uVar7;
  undefined8 uVar8;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pPVar5 = this + 0x10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)pPVar5 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  if ((*param_1 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar8;
    *(undefined8 *)pPVar5 = uVar3;
    goto LAB_009210d8;
  }
  uVar6 = *(ulong *)(param_1 + 8);
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_1 + 0x10);
  if (uVar6 < 0x17) {
    __dest = this + 0x11;
    *pPVar5 = SUB41((int)uVar6 << 1,0);
    if (uVar6 != 0) goto LAB_009210c4;
  }
  else {
    uVar7 = uVar6 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar7);
    *(ulong *)(this + 0x18) = uVar6;
    *(Parameter **)(this + 0x20) = __dest;
    *(ulong *)(this + 0x10) = uVar7 | 1;
LAB_009210c4:
    memcpy(__dest,__src,uVar6);
  }
  __dest[uVar6] = (Parameter)0x0;
LAB_009210d8:
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = param_5;
  this[0x31] = param_3;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x42] = (Parameter)0x0;
  uVar6 = *(ulong *)(param_1 + 8);
  pbVar1 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
    uVar6 = (ulong)(*param_1 >> 1);
  }
  uVar3 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_80,pbVar1,uVar6);
  *(undefined8 *)(this + 0x28) = uVar3;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope((HandleScope *)a_Stack_80,pIVar4);
  if (param_4 != (Object *)0x0) {
    pPVar5 = this + 8;
    this_00 = *(Object **)pPVar5;
    if (this_00 != param_4) {
      if (this_00 != (Object *)0x0) {
        se::Object::unroot(this_00);
        se::RefCounter::decRef(*(RefCounter **)pPVar5);
      }
      *(Object **)pPVar5 = param_4;
      se::Object::root(param_4);
      se::RefCounter::incRef(*(RefCounter **)pPVar5);
      *(undefined8 *)this = 0;
      *(undefined2 *)(this + 0x40) = 0;
      se::Object::getTypedArrayData(*(Object **)(this + 8),(uchar **)this,(ulong *)(this + 0x40));
    }
  }
  v8::HandleScope::~HandleScope((HandleScope *)a_Stack_80);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

