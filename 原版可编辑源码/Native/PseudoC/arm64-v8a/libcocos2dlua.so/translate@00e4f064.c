
/* cocos2d::CCPUMaterialTranslator::translate(cocos2d::PUScriptCompiler*, cocos2d::PUAbstractNode*)
    */

void __thiscall
cocos2d::CCPUMaterialTranslator::translate
          (CCPUMaterialTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  int iVar5;
  PUMaterial *this_00;
  PUMaterialTechniqueTranslator *this_01;
  char *__s2;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  void *__s1;
  PUAbstractNode *pPVar9;
  undefined **local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00e4f034 with catch @ 00e4f094 */
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e4f0a8 to 00f4f0d3 has its CatchHandler @ 00e4f0a8
                       catch() { ... } // from try @ 00e4f0a8 with catch @ 00e4f0a8
                       catch() { ... } // from try @ 00e4f0d8 with catch @ 00e4f0a8 */
  if (this_00 != (PUMaterial *)0x0) {
    PUMaterial::PUMaterial(this_00);
  }
  *(PUMaterial **)(this + 8) = this_00;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this_00 + 0x28) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_2 + 8)) {
    uVar6 = *(ulong *)(param_2 + 0x10);
    pPVar9 = *(PUAbstractNode **)(param_2 + 0x18);
                    /* try { // try from 00e4f0d4 to 00f4f0d7 has its CatchHandler @ 00e4f13c */
                    /* try { // try from 00e4f0d8 to 00f4f14f has its CatchHandler @ 00e4f0a8 */
    if (((byte)param_2[8] & 1) == 0) {
      pPVar9 = param_2 + 9;
      uVar6 = (ulong)((byte)param_2[8] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x28),(char *)pPVar9,uVar6);
    this_00 = *(PUMaterial **)(this + 8);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this_00 + 0x40) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_2 + 0x60)) {
    bVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_2 + 0x60);
    uVar6 = *(ulong *)(param_2 + 0x68);
    pPVar9 = *(PUAbstractNode **)(param_2 + 0x70);
    if (((byte)bVar3 & 1) == 0) {
      pPVar9 = param_2 + 0x61;
      uVar6 = (ulong)((byte)bVar3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x40),(char *)pPVar9,uVar6);
    this_00 = *(PUMaterial **)(this + 8);
  }
  Ref::autorelease((Ref *)this_00);
  PUMaterialCache::addMaterial(*(PUMaterialCache **)(this + 0x10),*(PUMaterial **)(this + 8));
  pPVar9 = *(PUAbstractNode **)(param_2 + 0xb8);
                    /* catch() { ... } // from try @ 00e4f0d4 with catch @ 00e4f13c */
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(this + 8);
  if (pPVar9 != param_2 + 0xb0) {
                    /* try { // try from 00e4f150 to 00f4f17b has its CatchHandler @ 00e4f150
                       catch() { ... } // from try @ 00e4f150 with catch @ 00e4f150
                       catch() { ... } // from try @ 00e4f180 with catch @ 00e4f150 */
    do {
      lVar8 = *(long *)(pPVar9 + 0x10);
      if (*(int *)(lVar8 + 0x24) == 2) {
        bVar2 = *(byte *)(lVar8 + 0x78);
        uVar6 = (ulong)(bVar2 >> 1);
        __n = uVar6;
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar8 + 0x80);
        }
        sVar1 = (ulong)(DAT_0178ef20 >> 1);
        if ((DAT_0178ef20 & 1) != 0) {
          sVar1 = DAT_0178ef28;
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar8 + 0x88);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar8 + 0x79);
          }
          __s2 = &DAT_0178ef21;
          if ((DAT_0178ef20 & 1) != 0) {
            __s2 = DAT_0178ef30;
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pcVar7 = (char *)(lVar8 + 0x79);
              do {
                    /* catch() { ... } // from try @ 00e4f17c with catch @ 00e4f1fc */
                if (*pcVar7 != *__s2) goto LAB_00e4f184;
                uVar6 = uVar6 - 1;
                pcVar7 = pcVar7 + 1;
                    /* try { // try from 00e4f210 to 00f4f23b has its CatchHandler @ 00e4f210
                       catch() { ... } // from try @ 00e4f210 with catch @ 00e4f210
                       catch() { ... } // from try @ 00e4f240 with catch @ 00e4f210 */
                __s2 = __s2 + 1;
              } while (uVar6 != 0);
            }
          }
          else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00e4f184;
          this_01 = (PUMaterialTechniqueTranslator *)
                    PUScriptTranslator::PUScriptTranslator((PUScriptTranslator *)&local_60);
          local_60 = &PTR__PUScriptTranslator_016f2630;
          PUMaterialTechniqueTranslator::translate
                    (this_01,param_1,*(PUAbstractNode **)(pPVar9 + 0x10));
                    /* try { // try from 00e4f17c to 00f4f17f has its CatchHandler @ 00e4f1fc */
                    /* try { // try from 00e4f180 to 00f4f20f has its CatchHandler @ 00e4f150 */
          PUScriptTranslator::~PUScriptTranslator((PUScriptTranslator *)&local_60);
        }
      }
LAB_00e4f184:
      pPVar9 = *(PUAbstractNode **)(pPVar9 + 8);
    } while (pPVar9 != param_2 + 0xb0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* try { // try from 00e4f23c to 00f4f23f has its CatchHandler @ 00e4f2a4 */
                    /* try { // try from 00e4f240 to 00f4f2b7 has its CatchHandler @ 00e4f210 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

