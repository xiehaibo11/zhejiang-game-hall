
/* fairygui::Transition::applyValue(fairygui::TransitionItem*) */

void __thiscall fairygui::Transition::applyValue(Transition *this,TransitionItem *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  Transition *this_00;
  byte *pbVar7;
  undefined8 uVar8;
  float *pfVar9;
  code *pcVar10;
  GObject *pGVar11;
  GObject *this_01;
  long *plVar12;
  long lVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  Color4B aCStack_ac [4];
  Color3B aCStack_a8 [8];
  Value aVStack_a0 [16];
  undefined **local_90;
  Transition *pTStack_88;
  TransitionItem *local_80;
  undefined ***local_70;
  long local_58;
  
                    /* catch() { ... } // from try @ 00a99c48 with catch @ 00a9a048 */
                    /* catch() { ... } // from try @ 00a99b2c with catch @ 00a9a04c */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  this_01 = *(GObject **)(param_1 + 0x88);
  this_01[0x99] = (GObject)0x1;
                    /* catch() { ... } // from try @ 00a999bc with catch @ 00a9a06c
                       catch() { ... } // from try @ 00a99ebc with catch @ 00a9a06c */
                    /* catch() { ... } // from try @ 00a99c24 with catch @ 00a9a070 */
                    /* catch() { ... } // from try @ 00a99b08 with catch @ 00a9a074 */
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
                    /* catch() { ... } // from try @ 00a9999c with catch @ 00a9a094 */
    pGVar11 = *(GObject **)(this + 0x40);
                    /* catch() { ... } // from try @ 00a99a5c with catch @ 00a9a098
                       catch() { ... } // from try @ 00a99e84 with catch @ 00a9a098 */
    pfVar9 = *(float **)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 00a99c00 with catch @ 00a9a09c */
                    /* catch() { ... } // from try @ 00a99ae4 with catch @ 00a9a0a0 */
    if (this_01 == pGVar11) {
      if (*(char *)(pfVar9 + 4) == '\0') {
        fVar17 = pfVar9[1] + *(float *)(this + 0x70);
        goto LAB_00a9a49c;
      }
      fVar17 = *pfVar9 + *(float *)(this + 0x6c);
      if (*(char *)((long)pfVar9 + 0x11) == '\0') goto LAB_00a9a434;
      fVar15 = pfVar9[1] + *(float *)(this + 0x70);
    }
    else {
                    /* catch() { ... } // from try @ 00a99a40 with catch @ 00a9a0a4 */
                    /* catch() { ... } // from try @ 00a99980 with catch @ 00a9a0a8 */
      cVar2 = *(char *)((long)pfVar9 + 0x11);
      if (*(char *)((long)pfVar9 + 0x12) == '\0') {
        if (*(char *)(pfVar9 + 4) == '\0') {
          if (cVar2 == '\0') break;
          fVar17 = pfVar9[1];
          goto LAB_00a9a49c;
        }
        fVar17 = *pfVar9;
        if (cVar2 == '\0') goto LAB_00a9a434;
        fVar15 = pfVar9[1];
      }
      else {
        if (*(char *)(pfVar9 + 4) == '\0') {
          if (cVar2 == '\0') break;
          fVar17 = pfVar9[1] * *(float *)(pGVar11 + 0xcc);
LAB_00a9a49c:
          GObject::setY(this_01,fVar17);
          break;
        }
        fVar17 = *pfVar9 * *(float *)(pGVar11 + 200);
        if (cVar2 == '\0') {
LAB_00a9a434:
          GObject::setX(this_01,fVar17);
          break;
        }
                    /* catch() { ... } // from try @ 00a99bdc with catch @ 00a9a0c8 */
                    /* catch() { ... } // from try @ 00a99ac0 with catch @ 00a9a0cc */
                    /* catch() { ... } // from try @ 00a99a1c with catch @ 00a9a0d0 */
        fVar15 = pfVar9[1] * *(float *)(pGVar11 + 0xcc);
                    /* catch() { ... } // from try @ 00a9995c with catch @ 00a9a0d4 */
      }
    }
    GObject::setPosition(this_01,fVar17,fVar15);
    break;
  case 1:
    pfVar9 = *(float **)(param_1 + 0x48);
    if (*(char *)(pfVar9 + 4) == '\0') {
      *pfVar9 = *(float *)(this_01 + 200);
    }
    if (*(char *)((long)pfVar9 + 0x11) == '\0') {
      fVar17 = *(float *)(this_01 + 0xcc);
      pfVar9[1] = fVar17;
    }
    else {
      fVar17 = pfVar9[1];
    }
    GObject::setSize(this_01,*pfVar9,fVar17,false);
    break;
  case 2:
    GObject::setScale(this_01,**(float **)(param_1 + 0x48),(*(float **)(param_1 + 0x48))[1]);
    break;
  case 3:
    GObject::setPivot(this_01,**(float **)(param_1 + 0x48),(*(float **)(param_1 + 0x48))[1],
                      (bool)this_01[0xe8]);
    break;
  case 4:
    GObject::setAlpha(this_01,**(float **)(param_1 + 0x48));
    break;
  case 5:
    GObject::setRotation(this_01,**(float **)(param_1 + 0x48));
    break;
  case 6:
    pfVar9 = *(float **)(param_1 + 0x48);
    cocos2d::Color4B::Color4B
              (aCStack_ac,(uchar)(int)*pfVar9,(uchar)(int)pfVar9[1],(uchar)(int)pfVar9[2],
               (uchar)(int)pfVar9[3]);
    cocos2d::Color3B::Color3B(aCStack_a8,aCStack_ac);
    uVar6 = ToolSet::colorToInt(aCStack_a8);
    cocos2d::Value::Value(aVStack_a0,uVar6);
    (**(code **)(*(long *)this_01 + 0x38))(this_01,2,aVStack_a0);
    goto LAB_00a9a338;
  case 7:
                    /* try { // try from 00a9a2ac to 00b9a2df has its CatchHandler @ 00a9a3ac */
    piVar14 = *(int **)(param_1 + 0x48);
    iVar1 = *piVar14;
    if (-1 < iVar1) {
      cocos2d::Value::Value(aVStack_a0,iVar1);
      (**(code **)(*(long *)this_01 + 0x38))(this_01,5,aVStack_a0);
      cocos2d::Value::~Value(aVStack_a0);
                    /* try { // try from 00a9a2e0 to 00b9a2f3 has its CatchHandler @ 00a9a378 */
      this_01 = *(GObject **)(param_1 + 0x88);
    }
    cocos2d::Value::Value(aVStack_a0,SUB41(piVar14[1],0));
                    /* try { // try from 00a9a2f8 to 00b9a32b has its CatchHandler @ 00a9a37c */
    (**(code **)(*(long *)this_01 + 0x38))(this_01,4,aVStack_a0);
    cocos2d::Value::~Value(aVStack_a0);
    plVar12 = *(long **)(param_1 + 0x88);
    cocos2d::Value::Value(aVStack_a0,*(float *)(this + 200));
                    /* try { // try from 00a9a32c to 00b9a3c7 has its CatchHandler @ 00a9a11c */
    (**(code **)(*plVar12 + 0x38))(plVar12,7,aVStack_a0);
LAB_00a9a338:
    cocos2d::Value::~Value(aVStack_a0);
    break;
  case 8:
    GObject::setVisible(this_01,*(bool *)*(undefined8 *)(param_1 + 0x48));
    break;
  case 9:
                    /* catch() { ... } // from try @ 00a9a2e0 with catch @ 00a9a378 */
                    /* catch() { ... } // from try @ 00a9a2f8 with catch @ 00a9a37c */
    if ((this[0x68] != (Transition)0x0) && (*(float *)(this + 0xcc) <= *(float *)param_1)) {
      pbVar7 = *(byte **)(param_1 + 0x48);
      if ((*pbVar7 & 1) == 0) {
        if (*pbVar7 >> 1 == 0) break;
      }
      else if (*(long *)(pbVar7 + 8) == 0) break;
      GRoot::playSound(GRoot::_inst,*(float *)(pbVar7 + 0x18));
    }
    break;
  case 10:
    if (this[0x68] != (Transition)0x0) {
      lVar13 = *(long *)(param_1 + 0x48);
                    /* catch() { ... } // from try @ 00a99bb8 with catch @ 00a9a0f4 */
      this_00 = *(Transition **)(lVar13 + 0x20);
                    /* catch() { ... } // from try @ 00a99a9c with catch @ 00a9a0f8 */
      if (this_00 != (Transition *)0x0) {
                    /* catch() { ... } // from try @ 00a999f8 with catch @ 00a9a0fc */
                    /* catch() { ... } // from try @ 00a99938 with catch @ 00a9a100 */
        *(int *)(this + 100) = *(int *)(this + 100) + 1;
        fVar16 = *(float *)param_1;
        fVar15 = *(float *)(lVar13 + 0x28);
                    /* try { // try from 00a9a11c to 00b9a2ab has its CatchHandler @ 00a9a11c
                       catch() { ... } // from try @ 00a9a11c with catch @ 00a9a11c
                       catch() { ... } // from try @ 00a9a32c with catch @ 00a9a11c */
        fVar17 = *(float *)(this + 0xcc) - fVar16;
        if (*(float *)(this + 0xcc) <= fVar16) {
          fVar17 = 0.0;
        }
        fVar4 = -1.0;
        if (0.0 <= *(float *)(this + 0xd0)) {
          fVar4 = *(float *)(this + 0xd0) - fVar16;
        }
        fVar16 = fVar4;
        if (0.0 <= fVar15) {
          bVar5 = true;
          if ((fVar4 <= fVar15) && (bVar5 = false, !NAN(fVar4))) {
            bVar5 = fVar4 < 0.0;
          }
          fVar16 = fVar15;
          if (!bVar5) {
            fVar16 = fVar4;
          }
        }
        setTimeScale(this_00,*(float *)(this + 200));
        local_90 = &PTR_FUN_016a76c0;
        pTStack_88 = this;
        local_80 = param_1;
        local_70 = &local_90;
        play((Transition *)0x0,fVar17,fVar16,*(undefined8 *)(lVar13 + 0x20),
             *(undefined4 *)(lVar13 + 0x18),&local_90,this[0xb4]);
        if (&local_90 == local_70) {
          (*(code *)(*local_70)[4])();
        }
        else if (local_70 != (undefined ***)0x0) {
          (*(code *)(*local_70)[5])();
        }
      }
    }
    break;
  case 0xb:
    lVar13 = *(long *)(param_1 + 0x48);
    GObject::setPosition
              (this_01,(*(float *)(this_01 + 0xc0) - *(float *)(lVar13 + 8)) +
                       *(float *)(lVar13 + 0x10),
               (*(float *)(this_01 + 0xc4) - *(float *)(lVar13 + 0xc)) + *(float *)(lVar13 + 0x14));
    *(undefined8 *)(lVar13 + 8) = *(undefined8 *)(lVar13 + 0x10);
    break;
  case 0xd:
    GObject::setSkewX(**(float **)(param_1 + 0x48));
    GObject::setSkewY(*(float *)(*(long *)(param_1 + 0x48) + 4));
    break;
  case 0xe:
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    pcVar10 = *(code **)(*(long *)this_01 + 0x18);
    goto LAB_00a9a3ac;
  case 0xf:
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    pcVar10 = *(code **)(*(long *)this_01 + 0x28);
LAB_00a9a3ac:
                    /* catch() { ... } // from try @ 00a9a2ac with catch @ 00a9a3ac */
    (*pcVar10)(this_01,uVar8);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x99) = 0;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

