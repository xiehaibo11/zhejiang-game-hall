
/* cocos2d::Repeat::update(float) */

void __thiscall cocos2d::Repeat::update(Repeat *this,float param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  Action *pAVar5;
  float fVar6;
  float local_4c;
  long local_48;
  
                    /* try { // try from 00edd278 to 00fdd283 has its CatchHandler @ 00edd6b0 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(float *)(this + 0x60) <= param_1) {
    uVar3 = *(uint *)(this + 0x5c);
    do {
      if (*(uint *)(this + 0x58) <= uVar3) break;
      pAVar5 = *(Action **)(this + 0x68);
      local_4c = 1.0;
      if (*(int *)(this + 0x48) == 2) {
                    /* try { // try from 00edd3ac to 00fdd3b3 has its CatchHandler @ 00edd67c */
        uVar2 = ScriptEngineManager::sendActionEventToJS(pAVar5,0,&local_4c);
        if ((uVar2 & 1) == 0) {
          pAVar5 = *(Action **)(this + 0x68);
          goto LAB_00edd318;
        }
      }
      else {
LAB_00edd318:
                    /* try { // try from 00edd320 to 00fdd32b has its CatchHandler @ 00edd6ac */
        (**(code **)(*(long *)pAVar5 + 0x48))(0x3f800000);
      }
                    /* try { // try from 00edd32c to 00fdd34b has its CatchHandler @ 00edd6b8 */
      *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
      (**(code **)(**(long **)(this + 0x68) + 0x38))();
                    /* try { // try from 00edd34c to 00fdd35f has its CatchHandler @ 00edd69c */
      (**(code **)(**(long **)(this + 0x68) + 0x30))
                (*(long **)(this + 0x68),*(undefined8 *)(this + 0x38));
      uVar3 = *(uint *)(this + 0x5c);
                    /* try { // try from 00edd360 to 00fdd373 has its CatchHandler @ 00edd68c */
      fVar6 = (*(float *)(*(long *)(this + 0x68) + 0x4c) / *(float *)(this + 0x4c)) *
              (float)(uVar3 + 1);
      *(float *)(this + 0x60) = fVar6;
    } while (fVar6 <= param_1);
                    /* try { // try from 00edd3cc to 00fdd3df has its CatchHandler @ 00edd62c */
    if ((ABS(param_1 + -1.0) < 1.1920929e-07) && (*(uint *)(this + 0x5c) < *(uint *)(this + 0x58)))
    {
      pAVar5 = *(Action **)(this + 0x68);
      local_4c = 1.0;
      if (*(int *)(this + 0x48) == 2) {
        uVar2 = ScriptEngineManager::sendActionEventToJS(pAVar5,0,&local_4c);
        if ((uVar2 & 1) == 0) {
          pAVar5 = *(Action **)(this + 0x68);
          goto LAB_00edd410;
        }
      }
      else {
LAB_00edd410:
                    /* try { // try from 00edd418 to 00fdd41f has its CatchHandler @ 00edd60c */
        (**(code **)(*(long *)pAVar5 + 0x48))(0x3f800000);
      }
      *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
    }
    if (this[100] != (Repeat)0x0) goto LAB_00edd490;
                    /* try { // try from 00edd438 to 00fdd44b has its CatchHandler @ 00edd5b8 */
    if (*(int *)(this + 0x5c) == *(int *)(this + 0x58)) {
                    /* try { // try from 00edd44c to 00fdd59b has its CatchHandler @ 00edd1e4 */
      (**(code **)(**(long **)(this + 0x68) + 0x38))();
      goto LAB_00edd490;
    }
    pAVar5 = *(Action **)(this + 0x68);
    local_4c = param_1 - (*(float *)(this + 0x60) -
                         *(float *)(pAVar5 + 0x4c) / *(float *)(this + 0x4c));
    if (*(int *)(this + 0x48) == 2) {
      uVar2 = ScriptEngineManager::sendActionEventToJS(pAVar5,0,&local_4c);
      if ((uVar2 & 1) != 0) goto LAB_00edd490;
      pAVar5 = *(Action **)(this + 0x68);
    }
    lVar4 = *(long *)pAVar5;
  }
  else {
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x58));
    local_4c = fmodf(fVar6 * param_1,1.0);
    pAVar5 = *(Action **)(this + 0x68);
    if (*(int *)(this + 0x48) == 2) {
      uVar2 = ScriptEngineManager::sendActionEventToJS(pAVar5,0,&local_4c);
      if ((uVar2 & 1) != 0) goto LAB_00edd490;
      pAVar5 = *(Action **)(this + 0x68);
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x58));
      fmodf(fVar6 * param_1,1.0);
    }
    lVar4 = *(long *)pAVar5;
                    /* try { // try from 00edd2f8 to 00fdd31f has its CatchHandler @ 00edd6d0 */
  }
  (**(code **)(lVar4 + 0x48))(pAVar5);
LAB_00edd490:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

