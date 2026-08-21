
/* cocos2d::renderer::Assembler::updateEffect(unsigned long, cocos2d::renderer::EffectVariant*) */

void __thiscall
cocos2d::renderer::Assembler::updateEffect(Assembler *this,ulong param_1,EffectVariant *param_2)

{
  ulong uVar1;
  long lVar2;
  Ref *this_00;
  long lVar3;
  long lVar4;
  ulong uVar5;
  vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
  *this_01;
  undefined8 *puVar6;
  
                    /* try { // try from 009cdb64 to 00acdb7b has its CatchHandler @ 009cdefc */
  this_01 = (vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
             *)(this + 0x40);
  lVar3 = *(long *)this_01;
  lVar4 = *(long *)(this + 0x48);
  uVar5 = lVar4 - lVar3 >> 5;
                    /* try { // try from 009cdb84 to 00acdb8f has its CatchHandler @ 009cdef8 */
  if (uVar5 <= param_1) {
    uVar1 = param_1 + 1;
                    /* try { // try from 009cdb90 to 00acdb9b has its CatchHandler @ 009cdef4 */
    if (uVar1 < uVar5 || uVar1 - uVar5 == 0) {
      if (uVar1 < uVar5) {
        lVar2 = lVar3 + uVar1 * 0x20;
        if (lVar2 != lVar4) {
          puVar6 = (undefined8 *)(lVar4 + -0x20);
          do {
            if ((Ref *)*puVar6 != (Ref *)0x0) {
              Ref::release((Ref *)*puVar6);
            }
            puVar6 = puVar6 + -4;
          } while ((undefined8 *)(lVar3 + param_1 * 0x20) != puVar6);
        }
        *(long *)(this + 0x48) = lVar2;
      }
    }
    else {
                    /* try { // try from 009cdb9c to 00acde47 has its CatchHandler @ 009cdf0c */
      std::__ndk1::
      vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
      ::__append(this_01,uVar1 - uVar5);
    }
  }
  puVar6 = (undefined8 *)(*(long *)this_01 + param_1 * 0x20);
  this_00 = (Ref *)*puVar6;
  if (this_00 != (Ref *)param_2) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *puVar6 = param_2;
    if (param_2 != (EffectVariant *)0x0) {
      Ref::retain((Ref *)param_2);
      return;
    }
  }
  return;
}

