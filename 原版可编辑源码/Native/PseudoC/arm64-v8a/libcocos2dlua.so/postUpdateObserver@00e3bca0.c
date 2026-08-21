
/* cocos2d::PUOnQuotaObserver::postUpdateObserver(float) */

void cocos2d::PUOnQuotaObserver::postUpdateObserver(float param_1)

{
  int iVar1;
  int iVar2;
  long in_x0;
  long *plVar3;
  float extraout_s0;
  
  *(undefined1 *)(in_x0 + 0xa1) = 0;
  if (*(char *)(in_x0 + 0x78) == '\0') {
                    /* catch() { ... } // from try @ 00e3bcc0 with catch @ 00e3bce4 */
    iVar1 = ParticleSystem3D::getParticleQuota(*(ParticleSystem3D **)(in_x0 + 0x28));
    plVar3 = *(long **)(in_x0 + 0x28);
                    /* try { // try from 00e3bd00 to 00f3bd9b has its CatchHandler @ 00e3bd00
                       catch() { ... } // from try @ 00e3bd00 with catch @ 00e3bd00
                       catch() { ... } // from try @ 00e3bda8 with catch @ 00e3bd00 */
    iVar1 = (int)plVar3[0x80] + iVar1 + *(int *)((long)plVar3 + 0x404);
    iVar2 = (**(code **)(*plVar3 + 0x560))(plVar3);
  }
  else {
    iVar1 = *(int *)(in_x0 + 0x74);
                    /* try { // try from 00e3bcc0 to 00f3bccb has its CatchHandler @ 00e3bce4 */
    if (iVar1 == 2) {
      iVar1 = *(int *)(*(long *)(in_x0 + 0x28) + 0x400);
    }
    else {
                    /* try { // try from 00e3bccc to 00f3bcff has its CatchHandler @ 00e3bc98 */
      if (iVar1 == 1) {
        iVar1 = *(int *)(*(long *)(in_x0 + 0x28) + 0x404);
      }
      else if (iVar1 == 0) {
        iVar1 = ParticleSystem3D::getParticleQuota(*(ParticleSystem3D **)(in_x0 + 0x28));
        param_1 = extraout_s0;
      }
      else {
        iVar1 = 0;
      }
    }
    iVar2 = (**(code **)(**(long **)(in_x0 + 0x28) + 0x560))(param_1);
  }
  *(bool *)(in_x0 + 0xa1) = iVar1 <= iVar2;
  return;
}

