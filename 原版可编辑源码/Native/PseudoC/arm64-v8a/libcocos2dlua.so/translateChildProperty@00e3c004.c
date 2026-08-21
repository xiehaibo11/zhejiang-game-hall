
/* cocos2d::PUOnRandomObserverTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUOnRandomObserverTranslator::translateChildProperty
          (PUOnRandomObserverTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  PUAbstractNode PVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  PUAbstractNode *__s2;
  ulong uVar6;
  PUAbstractNode *pPVar7;
  long lVar8;
  float local_4c;
  long local_48;
  
                    /* try { // try from 00e3c014 to 00f3c04b has its CatchHandler @ 00e3c014
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3c014 with catch @ 00e3c014
                       catch(type#1 @ 00000000) { ... } // from try @ 00e3c0e0 with catch @ 00e3c014
                        */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
                    /* try { // try from 00e3c04c to 00f3c057 has its CatchHandler @ 00e3c140 */
  uVar6 = (ulong)((byte)PVar2 >> 1);
  __n = uVar6;
                    /* try { // try from 00e3c05c to 00f3c063 has its CatchHandler @ 00e3c128 */
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x1fe0] >> 1);
  if ((token[0x1fe0] & 1) != 0) {
    sVar1 = token._8168_8_;
  }
                    /* try { // try from 00e3c068 to 00f3c06f has its CatchHandler @ 00e3c110 */
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    lVar8 = *(long *)(*(long *)(param_2 + 0x28) + 0x30);
                    /* try { // try from 00e3c084 to 00f3c08b has its CatchHandler @ 00e3c0c4 */
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
                    /* try { // try from 00e3c090 to 00f3c093 has its CatchHandler @ 00e3c0b4 */
    __s2 = (PUAbstractNode *)(token + 0x1fe1);
    if ((token[0x1fe0] & 1) != 0) {
      __s2 = (PUAbstractNode *)token._8176_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c090 with catch @ 00e3c0b4
                        */
          if (*pPVar7 != *__s2) goto LAB_00e3c12c;
          uVar6 = uVar6 - 1;
          pPVar7 = pPVar7 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c084 with catch @ 00e3c0c4
                        */
          __s2 = __s2 + 1;
        } while (uVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,__s2,__n), iVar4 != 0)) goto LAB_00e3c12c;
                    /* try { // try from 00e3c0dc to 00f3c0df has its CatchHandler @ 00e3c154 */
                    /* try { // try from 00e3c0e0 to 00f3c167 has its CatchHandler @ 00e3c014 */
    uVar6 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178b070,0);
    uVar5 = 0;
    if ((uVar6 & 1) == 0) goto LAB_00e3c130;
    local_4c = 0.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c068 with catch @ 00e3c110
                        */
    uVar6 = PUScriptTranslator::getFloat
                      (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),&local_4c);
    if ((uVar6 & 1) != 0) {
      uVar5 = 1;
      *(float *)(lVar8 + 0xa4) = local_4c;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c05c with catch @ 00e3c128
                        */
      goto LAB_00e3c130;
    }
  }
LAB_00e3c12c:
  uVar5 = 0;
LAB_00e3c130:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c04c with catch @ 00e3c140
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3c0dc with catch @ 00e3c154
                        */
  return;
}

