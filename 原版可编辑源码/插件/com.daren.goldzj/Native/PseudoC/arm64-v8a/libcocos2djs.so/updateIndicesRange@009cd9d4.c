
/* cocos2d::renderer::Assembler::updateIndicesRange(unsigned long, int, int) */

void __thiscall
cocos2d::renderer::Assembler::updateIndicesRange
          (Assembler *this,ulong param_1,int param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
  *this_00;
  undefined8 *puVar6;
  
  this_00 = (vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
             *)(this + 0x40);
  lVar3 = *(long *)this_00;
  lVar4 = *(long *)(this + 0x48);
  uVar5 = lVar4 - lVar3 >> 5;
  if (uVar5 <= param_1) {
    uVar1 = param_1 + 1;
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
      std::__ndk1::
      vector<cocos2d::renderer::Assembler::IARenderData,std::__ndk1::allocator<cocos2d::renderer::Assembler::IARenderData>>
      ::__append(this_00,uVar1 - uVar5);
    }
  }
  lVar3 = *(long *)this_00 + param_1 * 0x20;
  *(int *)(lVar3 + 0x14) = param_2;
  *(int *)(lVar3 + 0x18) = param_3;
  return;
}

