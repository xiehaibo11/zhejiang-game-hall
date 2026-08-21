
/* cocos2d::renderer::CustomAssembler::updateIARange(unsigned long, int, int) */

void __thiscall
cocos2d::renderer::CustomAssembler::updateIARange
          (CustomAssembler *this,ulong param_1,int param_2,int param_3)

{
  long lVar1;
  
                    /* try { // try from 009ce81c to 00ace87b has its CatchHandler @ 009ce81c
                       catch() { ... } // from try @ 009ce81c with catch @ 009ce81c
                       catch() { ... } // from try @ 009ceba4 with catch @ 009ce81c */
  lVar1 = (**(code **)(*(long *)this + 0x40))();
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x14) = param_2;
    *(int *)(lVar1 + 0x18) = param_3;
  }
  return;
}

