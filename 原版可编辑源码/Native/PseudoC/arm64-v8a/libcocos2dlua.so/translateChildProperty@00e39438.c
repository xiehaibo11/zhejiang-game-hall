
/* cocos2d::PUSlaveEmitterTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUSlaveEmitterTranslator::translateChildProperty
          (PUSlaveEmitterTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUAbstractNode *pPVar6;
  PUAbstractNode *pPVar7;
  ulong uVar8;
  PUSlaveEmitter *this_00;
  ulong uVar9;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUSlaveEmitter **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x14e8] >> 1);
  if ((token[0x14e8] & 1) != 0) {
    sVar1 = token._5360_8_;
  }
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x14e9);
    if ((token[0x14e8] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._5368_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e39520;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e39520;
                    /* try { // try from 00e3959c to 00f395a3 has its CatchHandler @ 00e395d4 */
                    /* try { // try from 00e395a4 to 00f395ab has its CatchHandler @ 00e395d0 */
                    /* try { // try from 00e395ac to 00f395b3 has its CatchHandler @ 00e395cc */
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178a578,4);
    if ((uVar9 & 1) != 0) {
                    /* try { // try from 00e395b4 to 00f395bb has its CatchHandler @ 00e395c8 */
      local_80[1] = 0;
      local_70 = (void *)0x0;
      local_80[0] = 0;
                    /* try { // try from 00e395bc to 00f395bf has its CatchHandler @ 00e37bc0 */
                    /* try { // try from 00e395c0 to 00f395c7 has its CatchHandler @ 00e395ec */
                    /* catch() { ... } // from try @ 00e395b4 with catch @ 00e395c8
                       try { // try from 00e395c8 to 00f399b3 has its CatchHandler @ 00e37bc0 */
      uVar9 = PUScriptTranslator::getString
                        (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                         (basic_string *)local_80);
                    /* catch() { ... } // from try @ 00e395ac with catch @ 00e395cc */
      if ((uVar9 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e395a4 with catch @ 00e395d0 */
                    /* catch() { ... } // from try @ 00e3959c with catch @ 00e395d4 */
                    /* catch() { ... } // from try @ 00e3958c with catch @ 00e395d8 */
        PUSlaveEmitter::setMasterTechniqueName(this_00,(basic_string *)local_80);
                    /* catch() { ... } // from try @ 00e39584 with catch @ 00e395dc */
LAB_00e39638:
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        uVar5 = 1;
        goto LAB_00e39664;
      }
LAB_00e39650:
      if ((local_80[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 00e38840 with catch @ 00e3965c */
        operator_delete(local_70);
      }
    }
  }
  else {
LAB_00e39520:
    sVar1 = (ulong)(token[0x1500] >> 1);
    if ((token[0x1500] & 1) != 0) {
      sVar1 = token._5384_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x1501);
      if ((token[0x1500] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._5392_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          do {
                    /* try { // try from 00e3957c to 00f39583 has its CatchHandler @ 00e395e0 */
            if (*pPVar7 != *pPVar6) goto LAB_00e39660;
            uVar9 = uVar9 - 1;
                    /* try { // try from 00e39584 to 00f3958b has its CatchHandler @ 00e395dc */
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
                    /* try { // try from 00e3958c to 00f3959b has its CatchHandler @ 00e395d8 */
          } while (uVar9 != 0);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00e3957c with catch @ 00e395e0 */
                    /* catch() { ... } // from try @ 00e39060 with catch @ 00e395e4 */
                    /* catch() { ... } // from try @ 00e38ba8 with catch @ 00e395e8 */
                    /* catch() { ... } // from try @ 00e3934c with catch @ 00e395ec
                       catch() { ... } // from try @ 00e395c0 with catch @ 00e395ec */
        if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e39660;
      }
                    /* catch() { ... } // from try @ 00e38908 with catch @ 00e395f4 */
                    /* catch() { ... } // from try @ 00e38898 with catch @ 00e395fc */
                    /* catch() { ... } // from try @ 00e38888 with catch @ 00e39600 */
                    /* catch() { ... } // from try @ 00e390a0 with catch @ 00e39604 */
                    /* catch() { ... } // from try @ 00e38bdc with catch @ 00e39608 */
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x178a590,4);
                    /* catch() { ... } // from try @ 00e387d8 with catch @ 00e3960c */
      if ((uVar9 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e3937c with catch @ 00e39610 */
        local_80[1] = 0;
        local_70 = (void *)0x0;
        local_80[0] = 0;
        uVar9 = PUScriptTranslator::getString
                          (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),
                           (basic_string *)local_80);
        if ((uVar9 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e38814 with catch @ 00e39630 */
                    /* catch() { ... } // from try @ 00e38948 with catch @ 00e39634 */
          PUSlaveEmitter::setMasterEmitterName(this_00,(basic_string *)local_80);
          goto LAB_00e39638;
        }
        goto LAB_00e39650;
      }
    }
  }
LAB_00e39660:
                    /* catch() { ... } // from try @ 00e38fd4 with catch @ 00e39660 */
  uVar5 = 0;
LAB_00e39664:
                    /* catch() { ... } // from try @ 00e39220 with catch @ 00e39664 */
                    /* catch() { ... } // from try @ 00e38700 with catch @ 00e39668 */
                    /* catch() { ... } // from try @ 00e386f4 with catch @ 00e3966c */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00e392a0 with catch @ 00e39694 */
    __stack_chk_fail(uVar5);
  }
                    /* catch() { ... } // from try @ 00e384f4 with catch @ 00e3967c */
                    /* catch() { ... } // from try @ 00e384e8 with catch @ 00e39680 */
                    /* catch() { ... } // from try @ 00e383c8 with catch @ 00e39690 */
  return;
}

