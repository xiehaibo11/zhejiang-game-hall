
/* void std::__ndk1::vector<cocos2d::renderer::Technique::Parameter,
   std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>
   >::__push_back_slow_path<cocos2d::renderer::Technique::Parameter>(cocos2d::renderer::Technique::Parameter&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
::__push_back_slow_path<cocos2d::renderer::Technique::Parameter>
          (vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
           *this,Parameter *param_1)

{
  ulong uVar1;
  Parameter *pPVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  Parameter *this_00;
  Parameter *this_01;
  Parameter *pPVar7;
  Parameter *pPVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar9 = 0x38e38e38e38e38e;
  uVar1 = lVar4 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
  if ((ulong)(lVar5 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
    uVar6 = lVar5 * 0x1c71c71c71c71c72;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_008e14e4;
    }
  }
  pvVar3 = operator_new(uVar9 * 0x48);
LAB_008e14e4:
  this_00 = (Parameter *)((long)pvVar3 + lVar4 * 8);
  cocos2d::renderer::Technique::Parameter::Parameter(this_00,param_1);
  this_01 = *(Parameter **)this;
  pPVar7 = *(Parameter **)(this + 8);
  pPVar2 = this_00 + 0x48;
  pPVar8 = this_01;
  if (pPVar7 != this_01) {
    do {
      pPVar7 = pPVar7 + -0x48;
      cocos2d::renderer::Technique::Parameter::Parameter(this_00 + -0x48,pPVar7);
      this_00 = this_00 + -0x48;
    } while (this_01 != pPVar7);
    this_01 = *(Parameter **)(this + 8);
    pPVar8 = *(Parameter **)this;
  }
  *(Parameter **)this = this_00;
  *(Parameter **)(this + 8) = pPVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar9 * 0x48);
  while (this_01 != pPVar8) {
    this_01 = this_01 + -0x48;
    cocos2d::renderer::Technique::Parameter::~Parameter(this_01);
  }
  if (pPVar8 != (Parameter *)0x0) {
    operator_delete(pPVar8);
    return;
  }
  return;
}

