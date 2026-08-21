
/* cocos2d::PUPositionEmitterTranslator::translateChildProperty(cocos2d::PUScriptCompiler*,
   cocos2d::PUAbstractNode*) */

void __thiscall
cocos2d::PUPositionEmitterTranslator::translateChildProperty
          (PUPositionEmitterTranslator *this,PUScriptCompiler *param_1,PUAbstractNode *param_2)

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
  PUPositionEmitter *this_00;
  ulong uVar9;
  Vec3 local_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  PVar2 = param_2[0x38];
  uVar9 = (ulong)((byte)PVar2 >> 1);
  this_00 = *(PUPositionEmitter **)(*(long *)(param_2 + 0x28) + 0x30);
  __n = uVar9;
  if (((byte)PVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x40);
  }
  sVar1 = (ulong)(token[0x14b8] >> 1);
  if ((token[0x14b8] & 1) != 0) {
    sVar1 = token._5312_8_;
  }
                    /* try { // try from 00e386f4 to 00f386ff has its CatchHandler @ 00e3966c */
                    /* try { // try from 00e38700 to 00f38723 has its CatchHandler @ 00e39668 */
  if (__n == sVar1) {
    pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
    if (((byte)PVar2 & 1) == 0) {
      pPVar7 = param_2 + 0x39;
    }
    pPVar6 = (PUAbstractNode *)(token + 0x14b9);
    if ((token[0x14b8] & 1) != 0) {
      pPVar6 = (PUAbstractNode *)token._5320_8_;
    }
    if (((byte)PVar2 & 1) == 0) {
      if (__n != 0) {
        pPVar7 = param_2 + 0x39;
        uVar8 = uVar9;
        do {
          if (*pPVar7 != *pPVar6) goto LAB_00e3876c;
          uVar8 = uVar8 - 1;
          pPVar7 = pPVar7 + 1;
          pPVar6 = pPVar6 + 1;
        } while (uVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e3876c;
    uVar9 = PUScriptTranslator::passValidateProperty
                      ((PUScriptTranslator *)this,param_1,param_2,0x178a548,6);
    if ((uVar9 & 1) != 0) {
      Vec3::Vec3(local_78);
                    /* try { // try from 00e38814 to 00f3883b has its CatchHandler @ 00e39630 */
      uVar9 = PUScriptTranslator::getVector3
                        ((PUScriptTranslator *)this,*(undefined8 *)(param_2 + 0x60),param_2 + 0x58,
                         local_78,3);
      if ((uVar9 & 1) != 0) {
        PUPositionEmitter::addPosition(this_00,local_78);
LAB_00e38884:
        uVar5 = 1;
                    /* try { // try from 00e38888 to 00f38893 has its CatchHandler @ 00e39600 */
        goto LAB_00e38890;
      }
    }
  }
  else {
LAB_00e3876c:
                    /* try { // try from 00e3877c to 00f387bf has its CatchHandler @ 00e3971c */
    sVar1 = (ulong)(token[0x14d0] >> 1);
    if ((token[0x14d0] & 1) != 0) {
      sVar1 = token._5336_8_;
    }
    if (__n == sVar1) {
      pPVar7 = *(PUAbstractNode **)(param_2 + 0x48);
      if (((byte)PVar2 & 1) == 0) {
        pPVar7 = param_2 + 0x39;
      }
      pPVar6 = (PUAbstractNode *)(token + 0x14d1);
      if ((token[0x14d0] & 1) != 0) {
        pPVar6 = (PUAbstractNode *)token._5344_8_;
      }
      if (((byte)PVar2 & 1) == 0) {
        if (__n != 0) {
          pPVar7 = param_2 + 0x39;
          do {
            if (*pPVar7 != *pPVar6) goto LAB_00e3888c;
            uVar9 = uVar9 - 1;
            pPVar7 = pPVar7 + 1;
            pPVar6 = pPVar6 + 1;
                    /* try { // try from 00e387d8 to 00f387e3 has its CatchHandler @ 00e3960c */
          } while (uVar9 != 0);
        }
      }
      else {
                    /* try { // try from 00e38840 to 00f38883 has its CatchHandler @ 00e3965c */
        if ((__n != 0) && (iVar4 = memcmp(pPVar7,pPVar6,__n), iVar4 != 0)) goto LAB_00e3888c;
      }
      uVar9 = PUScriptTranslator::passValidateProperty
                        ((PUScriptTranslator *)this,param_1,param_2,0x178a560,1);
      if (((uVar9 & 1) != 0) &&
         (uVar9 = PUScriptTranslator::getBoolean
                            (*(PUAbstractNode **)(*(long *)(param_2 + 0x60) + 0x10),(bool *)local_78
                            ), (uVar9 & 1) != 0)) {
        PUPositionEmitter::setRandomized(this_00,(bool)local_78[0]);
        goto LAB_00e38884;
      }
    }
  }
LAB_00e3888c:
  uVar5 = 0;
LAB_00e38890:
                    /* try { // try from 00e38898 to 00f388a3 has its CatchHandler @ 00e395fc */
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

