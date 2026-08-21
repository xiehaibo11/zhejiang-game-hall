
/* cocos2d::renderer::EffectBase::setStencilTest(bool, int) */

void __thiscall
cocos2d::renderer::EffectBase::setStencilTest(EffectBase *this,bool param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  plVar3 = (long *)(**(code **)(*(long *)this + 0x10))();
  lVar2 = *plVar3;
  uVar5 = plVar3[1] - lVar2 >> 3;
  if (param_2 == -1) {
    uVar4 = 0;
    uVar7 = uVar5;
    if (uVar5 == 0) {
      return;
    }
  }
  else {
    uVar4 = (ulong)param_2;
    if ((long)uVar5 <= (long)uVar4) {
      __android_log_print(3,"renderer"," (185): EffectBase::setStencilTest error passIdx [%d]\n",
                          param_2);
      return;
    }
    uVar5 = (ulong)(param_2 + 1);
    uVar7 = uVar5 - uVar4;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      return;
    }
  }
  if (1 < uVar7) {
    lVar6 = uVar4 * 8;
    uVar8 = uVar7 & 0xfffffffffffffffe;
    uVar4 = uVar4 + uVar8;
    plVar3 = (long *)(lVar2 + lVar6 + 8);
    uVar9 = uVar8;
    do {
      plVar1 = plVar3 + -1;
      lVar6 = *plVar3;
      uVar9 = uVar9 - 2;
      plVar3 = plVar3 + 2;
      *(uint *)(*plVar1 + 0xb0) = (uint)param_1;
      *(uint *)(lVar6 + 0xb0) = (uint)param_1;
    } while (uVar9 != 0);
    if (uVar7 == uVar8) {
      return;
    }
  }
  lVar6 = uVar5 - uVar4;
  plVar3 = (long *)(lVar2 + uVar4 * 8);
  do {
    lVar6 = lVar6 + -1;
    *(uint *)(*plVar3 + 0xb0) = (uint)param_1;
    plVar3 = plVar3 + 1;
  } while (lVar6 != 0);
                    /* try { // try from 009d4cf0 to 00ad4d2f has its CatchHandler @ 009d4cf0
                       catch() { ... } // from try @ 009d4cf0 with catch @ 009d4cf0
                       catch() { ... } // from try @ 009d4d94 with catch @ 009d4cf0 */
  return;
}

