
/* cocos2d::PULinearForceAffectorTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

uint __thiscall
cocos2d::PULinearForceAffectorTranslator::translateChildProperty
          (PULinearForceAffectorTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  long lVar1;
  uint uVar2;
  PUBaseForceAffectorTranslator aPStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e29fac to 00f29faf has its CatchHandler @ 00e29ffc */
                    /* try { // try from 00e29fb0 to 00f29ff3 has its CatchHandler @ 00e29f74 */
  PUBaseForceAffectorTranslator::PUBaseForceAffectorTranslator(aPStack_40);
  uVar2 = PUBaseForceAffectorTranslator::translateChildProperty(aPStack_40,param_1,param_2);
  PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)aPStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00e29ff4 to 00f29ffb has its CatchHandler @ 00e29ffc */
                    /* catch() { ... } // from try @ 00e29fac with catch @ 00e29ffc
                       catch() { ... } // from try @ 00e29ff4 with catch @ 00e29ffc
                       try { // try from 00e29ffc to 00f2a01b has its CatchHandler @ 00e29f74 */
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

