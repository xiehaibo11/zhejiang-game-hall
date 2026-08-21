
/* cocos2d::ParticleSystemQuad::setTotalParticles(int) */

void __thiscall cocos2d::ParticleSystemQuad::setTotalParticles(ParticleSystemQuad *this,int param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  void *__s;
  void *__s_00;
  Configuration *this_00;
  uint uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  size_t __size;
  size_t __size_00;
  Rect aRStack_70 [16];
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00f36e08 to 01036e3f has its CatchHandler @ 00f36e08
                       catch() { ... } // from try @ 00f36e08 with catch @ 00f36e08
                       catch() { ... } // from try @ 00f36e44 with catch @ 00f36e08 */
  if (*(int *)(this + 0x470) < param_1) {
    ParticleData::release((ParticleData *)(this + 0x368));
    uVar5 = ParticleData::init((ParticleData *)(this + 0x368),param_1);
    if ((uVar5 & 1) == 0) goto LAB_00f36f84;
                    /* try { // try from 00f36e40 to 01036e43 has its CatchHandler @ 00f36e78 */
                    /* try { // try from 00f36e44 to 01036e9b has its CatchHandler @ 00f36e08 */
    lVar9 = (long)param_1 + (long)param_1 * 2;
    __size_00 = lVar9 * 0x20;
    __size = lVar9 * 4;
    __s = realloc(*(void **)(this + 0x530),__size_00);
    __s_00 = realloc(*(void **)(this + 0x538),__size);
    if ((__s == (void *)0x0) || (__s_00 == (void *)0x0)) {
      if (__s != (void *)0x0) {
        *(void **)(this + 0x530) = __s;
      }
      if (__s_00 != (void *)0x0) {
        *(void **)(this + 0x538) = __s_00;
      }
      goto LAB_00f36f84;
    }
                    /* catch() { ... } // from try @ 00f36e40 with catch @ 00f36e78 */
    *(void **)(this + 0x530) = __s;
    *(void **)(this + 0x538) = __s_00;
    memset(__s,0,__size_00);
    memset(__s_00,0,__size);
    *(int *)(this + 0x470) = param_1;
    *(int *)(this + 0x508) = param_1;
    if (*(long *)(this + 0x460) == 0) {
LAB_00f36ed4:
      if (0 < param_1) {
        lVar7 = *(long *)(this + 0x538);
        uVar6 = 0;
        lVar9 = 0;
        do {
          iVar8 = (int)lVar9;
          *(short *)(lVar7 + (ulong)uVar6 * 2) = (short)(iVar8 << 2);
          uVar2 = (ushort)(iVar8 << 2) | 1;
          *(ushort *)(lVar7 + (ulong)(uVar6 + 1) * 2) = uVar2;
          uVar3 = (ushort)(iVar8 << 2) | 2;
          *(ushort *)(lVar7 + (ulong)(uVar6 + 2) * 2) = uVar3;
          *(ushort *)(lVar7 + (ulong)(uVar6 + 5) * 2) = uVar2;
          lVar9 = lVar9 + 1;
          *(ushort *)(lVar7 + (ulong)(uVar6 + 4) * 2) = uVar3;
          uVar1 = uVar6 + 3;
          uVar6 = uVar6 + 6;
          *(ushort *)(lVar7 + (ulong)uVar1 * 2) = (ushort)(iVar8 << 2) | 3;
        } while (param_1 != lVar9);
      }
    }
    else if (0 < param_1) {
      lVar7 = *(long *)(this + 0x3f0);
      lVar9 = 0;
      do {
        *(int *)(lVar7 + lVar9 * 4) = (int)lVar9;
        param_1 = *(int *)(this + 0x508);
        lVar9 = lVar9 + 1;
      } while (lVar9 < param_1);
      goto LAB_00f36ed4;
    }
    this_00 = (Configuration *)Configuration::getInstance();
    uVar5 = Configuration::supportsShareableVAO(this_00);
    if ((uVar5 & 1) == 0) {
      setupVBO(this);
      lVar9 = *(long *)(this + 0x510);
    }
    else {
      setupVBOandVAO(this);
      lVar9 = *(long *)(this + 0x510);
    }
    if (lVar9 != 0) {
      Texture2D::getContentSize();
      Rect::Rect(aRStack_70,0.0,0.0,local_60,fStack_5c);
      initTexCoordsWithRect(this,aRStack_70);
    }
  }
  else {
    *(int *)(this + 0x508) = param_1;
  }
  *(float *)(this + 0x504) = (float)*(int *)(this + 0x508) / *(float *)(this + 0x490);
  ParticleSystem::resetSystem((ParticleSystem *)this);
LAB_00f36f84:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

