
/* cocos2d::ParticleSystemQuad::setBatchNode(cocos2d::ParticleBatchNode*) */

void __thiscall
cocos2d::ParticleSystemQuad::setBatchNode(ParticleSystemQuad *this,ParticleBatchNode *param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  Configuration *pCVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ParticleBatchNode *pPVar12;
  
  pPVar12 = *(ParticleBatchNode **)(this + 0x460);
  if (pPVar12 != param_1) {
    ParticleSystem::setBatchNode((ParticleSystem *)this,param_1);
    if (param_1 == (ParticleBatchNode *)0x0) {
      allocMemory(this);
      iVar2 = *(int *)(this + 0x508);
      if (0 < iVar2) {
        lVar10 = *(long *)(this + 0x538);
        uVar9 = 0;
        lVar5 = 0;
        do {
          iVar11 = (int)lVar5;
          *(short *)(lVar10 + (ulong)uVar9 * 2) = (short)(iVar11 << 2);
          uVar3 = (ushort)(iVar11 << 2) | 1;
          *(ushort *)(lVar10 + (ulong)(uVar9 + 1) * 2) = uVar3;
          uVar4 = (ushort)(iVar11 << 2) | 2;
          *(ushort *)(lVar10 + (ulong)(uVar9 + 2) * 2) = uVar4;
          *(ushort *)(lVar10 + (ulong)(uVar9 + 5) * 2) = uVar3;
          lVar5 = lVar5 + 1;
          *(ushort *)(lVar10 + (ulong)(uVar9 + 4) * 2) = uVar4;
          uVar1 = uVar9 + 3;
          uVar9 = uVar9 + 6;
          *(ushort *)(lVar10 + (ulong)uVar1 * 2) = (ushort)(iVar11 << 2) | 3;
        } while (iVar2 != lVar5);
      }
      uVar8 = (**(code **)(*(long *)pPVar12 + 0x530))(pPVar12);
                    /* try { // try from 00f37164 to 0103716b has its CatchHandler @ 00f37324 */
                    /* try { // try from 00f3716c to 01037177 has its CatchHandler @ 00f37314 */
      (**(code **)(*(long *)this + 0x678))(this,uVar8);
      pCVar6 = (Configuration *)Configuration::getInstance();
      uVar7 = Configuration::supportsShareableVAO(pCVar6);
      if ((uVar7 & 1) != 0) {
        setupVBOandVAO(this);
        return;
      }
                    /* try { // try from 00f3719c to 010371bb has its CatchHandler @ 00f3732c */
      setupVBO(this);
      return;
    }
    if (pPVar12 == (ParticleBatchNode *)0x0) {
      lVar5 = TextureAtlas::getQuads(*(TextureAtlas **)(*(long *)(this + 0x460) + 0x300));
      memcpy((void *)(lVar5 + (long)*(int *)(this + 0x468) * 0x60),*(void **)(this + 0x530),
             (long)*(int *)(this + 0x508) * 0x60);
      if (*(void **)(this + 0x530) != (void *)0x0) {
        free(*(void **)(this + 0x530));
        *(undefined8 *)(this + 0x530) = 0;
      }
      if (*(void **)(this + 0x538) != (void *)0x0) {
        free(*(void **)(this + 0x538));
        *(undefined8 *)(this + 0x538) = 0;
      }
                    /* try { // try from 00f37080 to 01037163 has its CatchHandler @ 00f37080
                       catch() { ... } // from try @ 00f37080 with catch @ 00f37080
                       catch() { ... } // from try @ 00f371bc with catch @ 00f37080
                       catch() { ... } // from try @ 00f37280 with catch @ 00f37080 */
      glDeleteBuffers(2,this + 0x544);
      *(undefined8 *)(this + 0x544) = 0;
      pCVar6 = (Configuration *)Configuration::getInstance();
      uVar7 = Configuration::supportsShareableVAO(pCVar6);
      if ((uVar7 & 1) != 0) {
        (*glDeleteVertexArraysOESEXT)(1,this + 0x540);
        GL::bindVAO(0);
        *(undefined4 *)(this + 0x540) = 0;
      }
    }
  }
  return;
}

