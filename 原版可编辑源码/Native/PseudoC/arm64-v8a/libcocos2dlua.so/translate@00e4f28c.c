
/* cocos2d::PUMaterialTechniqueTranslator::translate(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUMaterialTechniqueTranslator::translate
          (PUMaterialTechniqueTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  char *__s2;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  PUAbstractNode *pPVar8;
  undefined **local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 00e4f23c with catch @ 00e4f2a4 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e4f2b8 to 00f4f2e3 has its CatchHandler @ 00e4f2b8
                       catch() { ... } // from try @ 00e4f2b8 with catch @ 00e4f2b8
                       catch() { ... } // from try @ 00e4f2e8 with catch @ 00e4f2b8 */
  if (*(long *)(param_2 + 0x28) != 0) {
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x30);
  }
  pPVar8 = *(PUAbstractNode **)(param_2 + 0xb8);
  if (pPVar8 != param_2 + 0xb0) {
                    /* try { // try from 00e4f2e4 to 00f4f2e7 has its CatchHandler @ 00e4f364 */
                    /* try { // try from 00e4f2e8 to 00f4f377 has its CatchHandler @ 00e4f2b8 */
    do {
      lVar7 = *(long *)(pPVar8 + 0x10);
      if (*(int *)(lVar7 + 0x24) == 2) {
        bVar2 = *(byte *)(lVar7 + 0x78);
        uVar5 = (ulong)(bVar2 >> 1);
        __n = uVar5;
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar7 + 0x80);
        }
        sVar1 = (ulong)(DAT_0178ef38 >> 1);
        if ((DAT_0178ef38 & 1) != 0) {
          sVar1 = DAT_0178ef40;
        }
                    /* catch() { ... } // from try @ 00e4f2e4 with catch @ 00e4f364 */
        if (__n == sVar1) {
          this = *(PUMaterialTechniqueTranslator **)(lVar7 + 0x88);
          if ((bVar2 & 1) == 0) {
            this = (PUMaterialTechniqueTranslator *)(lVar7 + 0x79);
          }
          __s2 = &DAT_0178ef39;
          if ((DAT_0178ef38 & 1) != 0) {
            __s2 = DAT_0178ef48;
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pcVar6 = (char *)(lVar7 + 0x79);
              do {
                if (*pcVar6 != *__s2) goto LAB_00e4f31c;
                uVar5 = uVar5 - 1;
                pcVar6 = pcVar6 + 1;
                __s2 = __s2 + 1;
              } while (uVar5 != 0);
            }
          }
          else if (__n != 0) {
            uVar4 = memcmp(this,__s2,__n);
            this = (PUMaterialTechniqueTranslator *)(ulong)uVar4;
            if (uVar4 != 0) goto LAB_00e4f31c;
          }
          PUScriptTranslator::PUScriptTranslator((PUScriptTranslator *)&local_60);
          local_60 = &PTR__PUScriptTranslator_016f2688;
          PUMaterialPassTranslator::translate
                    ((PUMaterialPassTranslator *)&local_60,param_1,
                     *(PUAbstractNode **)(pPVar8 + 0x10));
          this = (PUMaterialTechniqueTranslator *)
                 PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)&local_60);
        }
      }
LAB_00e4f31c:
      pPVar8 = *(PUAbstractNode **)(pPVar8 + 8);
    } while (pPVar8 != param_2 + 0xb0);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

