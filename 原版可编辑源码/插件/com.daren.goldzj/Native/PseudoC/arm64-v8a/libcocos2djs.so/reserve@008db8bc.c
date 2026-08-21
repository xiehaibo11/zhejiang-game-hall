
/* std::__ndk1::vector<cocos2d::renderer::Technique::Parameter,
   std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
::reserve(vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
          *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  Parameter *this_00;
  Parameter *pPVar3;
  long lVar4;
  
  this_00 = *(Parameter **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)this_00 >> 3) * -0x71c71c71c71c71c7) < param_1) {
    if (0x38e38e38e38e38e < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_00857170("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pPVar3 = *(Parameter **)(this + 8);
    pvVar2 = operator_new(param_1 * 0x48);
    lVar1 = (long)pvVar2 + ((long)pPVar3 - (long)this_00);
    lVar4 = lVar1;
    if ((long)pPVar3 - (long)this_00 != 0) {
      do {
        pPVar3 = pPVar3 + -0x48;
        cocos2d::renderer::Technique::Parameter::Parameter((Parameter *)(lVar4 + -0x48),pPVar3);
        lVar4 = lVar4 + -0x48;
      } while (this_00 != pPVar3);
      pPVar3 = *(Parameter **)this;
      this_00 = *(Parameter **)(this + 8);
    }
    *(long *)this = lVar4;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + param_1 * 0x48);
    while (this_00 != pPVar3) {
      this_00 = this_00 + -0x48;
      cocos2d::renderer::Technique::Parameter::~Parameter(this_00);
    }
    if (pPVar3 != (Parameter *)0x0) {
      operator_delete(pPVar3);
      return;
    }
  }
  return;
}

