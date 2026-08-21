
/* dragonBones::CCSlot::_updateTransform() */

void __thiscall dragonBones::CCSlot::_updateTransform(CCSlot *this)

{
  int iVar1;
  long *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* try { // try from 00d9fed8 to 00e9fee3 has its CatchHandler @ 00da054c */
  if (((DAT_01787e58 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01787e58), iVar1 != 0)) {
    cocos2d::Mat4::Mat4((Mat4 *)&DAT_01787e18);
    __cxa_atexit(cocos2d::Mat4::~Mat4,&DAT_01787e18,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01787e58);
  }
  DAT_01787e18 = *(float *)(this + 0x10);
  DAT_01787e1c = *(float *)(this + 0x14);
  fVar4 = (float)*(undefined8 *)(this + 0x18);
  fVar5 = -fVar4;
  fVar6 = -(float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20);
  DAT_01787e28 = CONCAT44(fVar6,fVar5);
  plVar2 = *(long **)(this + 400);
  if ((*(long **)(this + 0xe0) == plVar2) || (*(long **)(this + 0xe8) == plVar2)) {
    fVar7 = *(float *)(this + 0x188);
    if (fVar7 != 1.0) {
      DAT_01787e18 = fVar7 * DAT_01787e18;
      DAT_01787e1c = fVar7 * DAT_01787e1c;
      DAT_01787e28 = CONCAT44(fVar6 * fVar7,fVar5 * fVar7);
    }
    DAT_01787e48 = *(float *)(this + 0x20) -
                   (*(float *)(this + 0x10) * *(float *)(this + 0x9c) -
                   *(float *)(this + 0xa0) * fVar4);
    DAT_01787e4c = *(float *)(this + 0x24) -
                   (*(float *)(this + 0x9c) * *(float *)(this + 0x14) -
                   *(float *)(this + 0xa0) * *(float *)(this + 0x1c));
  }
  else if (*(long *)(this + 0x178) == 0) {
    pfVar3 = (float *)(**(code **)(*plVar2 + 0x150))();
    DAT_01787e48 = *(float *)(this + 0x20) -
                   (*(float *)(this + 0x10) * *pfVar3 - *(float *)(this + 0x18) * pfVar3[1]);
    DAT_01787e4c = *(float *)(this + 0x24) -
                   (*(float *)(this + 0x14) * *pfVar3 - *(float *)(this + 0x1c) * pfVar3[1]);
    plVar2 = *(long **)(this + 400);
  }
  else {
    DAT_01787e48 = *(float *)(this + 0x20);
    DAT_01787e4c = *(float *)(this + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x00d9fe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x408))(plVar2,&DAT_01787e18);
  return;
}

