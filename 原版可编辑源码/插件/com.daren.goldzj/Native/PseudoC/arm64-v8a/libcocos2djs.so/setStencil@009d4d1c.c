
/* cocos2d::renderer::EffectBase::setStencil(cocos2d::renderer::ComparisonFunc, unsigned int,
   unsigned char, cocos2d::renderer::StencilOp, cocos2d::renderer::StencilOp,
   cocos2d::renderer::StencilOp, unsigned char, int) */

void __thiscall
cocos2d::renderer::EffectBase::setStencil
          (EffectBase *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  Pass *pPVar4;
  ulong uVar5;
  
                    /* try { // try from 009d4d30 to 00ad4d37 has its CatchHandler @ 009d4e3c */
                    /* try { // try from 009d4d38 to 00ad4d93 has its CatchHandler @ 009d4e44 */
  plVar1 = (long *)(**(code **)(*(long *)this + 0x10))();
  lVar2 = *plVar1;
  uVar3 = plVar1[1] - lVar2 >> 3;
  if (param_9 == -1) {
    uVar5 = 0;
    if (uVar3 == 0) {
      return;
    }
  }
  else {
    uVar5 = (ulong)param_9;
    if ((long)uVar3 <= (long)uVar5) {
                    /* catch() { ... } // from try @ 009d4d30 with catch @ 009d4e3c */
                    /* catch() { ... } // from try @ 009d4d38 with catch @ 009d4e44 */
                    /* try { // try from 009d4e60 to 00ad4e9f has its CatchHandler @ 009d4e60
                       catch() { ... } // from try @ 009d4e60 with catch @ 009d4e60
                       catch() { ... } // from try @ 009d4f3c with catch @ 009d4e60 */
      __android_log_print(3,"renderer"," (203): EffectBase::setStencil error passIdx [%d]\n",param_9
                         );
      return;
    }
    uVar3 = (ulong)(param_9 + 1);
                    /* try { // try from 009d4d94 to 00ad4e5f has its CatchHandler @ 009d4cf0 */
    if (uVar3 <= uVar5) {
      return;
    }
  }
  while( true ) {
    pPVar4 = *(Pass **)(lVar2 + uVar5 * 8);
    Pass::setStencilFront(pPVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    Pass::setStencilBack(pPVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (uVar3 - 1 == uVar5) break;
    uVar5 = uVar5 + 1;
    lVar2 = *plVar1;
  }
  return;
}

