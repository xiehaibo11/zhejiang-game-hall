
/* cocos2d::renderer::Technique::Parameter::copyValue(cocos2d::renderer::Technique::Parameter
   const&) */

void __thiscall
cocos2d::renderer::Technique::Parameter::copyValue(Parameter *this,Parameter *param_1)

{
  Parameter *pPVar1;
  Parameter PVar2;
  Parameter PVar3;
  ushort uVar4;
  Ref *pRVar5;
  Object *this_00;
  void *pvVar6;
  ulong uVar7;
  Object *this_01;
  ulong uVar8;
  
  if (this != param_1) {
    uVar8 = *(ulong *)(param_1 + 0x18);
    pPVar1 = *(Parameter **)(param_1 + 0x20);
    if (((byte)param_1[0x10] & 1) == 0) {
      pPVar1 = param_1 + 0x11;
      uVar8 = (ulong)((byte)param_1[0x10] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x10),(char *)pPVar1,uVar8);
  }
  PVar2 = param_1[0x31];
  this[0x31] = PVar2;
  PVar3 = param_1[0x30];
  uVar8 = (ulong)(byte)PVar3;
  this[0x30] = PVar3;
  uVar4 = *(ushort *)(param_1 + 0x40);
  *(ushort *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  if (((byte)PVar2 | 2) == 0x1f) {
    if (PVar3 != (Parameter)0x0) {
      if (PVar3 == (Parameter)0x1) {
        pRVar5 = *(Ref **)(param_1 + 0x38);
        *(Ref **)(this + 0x38) = pRVar5;
        if (pRVar5 != (Ref *)0x0) {
          Ref::retain(pRVar5);
          return;
        }
      }
      else {
        pvVar6 = malloc(uVar8 << 3);
        *(void **)(this + 0x38) = pvVar6;
        memcpy(pvVar6,*(void **)(param_1 + 0x38),uVar8 << 3);
        uVar7 = 0;
        do {
          pRVar5 = *(Ref **)((long)pvVar6 + uVar7 * 8);
          if (pRVar5 != (Ref *)0x0) {
            Ref::retain(pRVar5);
            uVar8 = (ulong)(byte)this[0x30];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
    }
  }
  else if (PVar3 != (Parameter)0x0) {
    this_01 = *(Object **)(param_1 + 8);
    if (this_01 == (Object *)0x0) {
      pvVar6 = malloc((ulong)uVar4);
      *(void **)(this + 0x38) = pvVar6;
      memcpy(pvVar6,*(void **)(param_1 + 0x38),(ulong)uVar4);
      return;
    }
    this_00 = *(Object **)(this + 8);
    if (this_00 != this_01) {
      if (this_00 != (Object *)0x0) {
        se::Object::unroot(this_00);
        se::RefCounter::decRef(*(RefCounter **)(this + 8));
      }
      *(Object **)(this + 8) = this_01;
      se::Object::root(this_01);
      se::RefCounter::incRef(*(RefCounter **)(this + 8));
      *(undefined8 *)this = 0;
      *(undefined2 *)(this + 0x40) = 0;
      se::Object::getTypedArrayData(*(Object **)(this + 8),(uchar **)this,(ulong *)(this + 0x40));
      return;
    }
  }
  return;
}

