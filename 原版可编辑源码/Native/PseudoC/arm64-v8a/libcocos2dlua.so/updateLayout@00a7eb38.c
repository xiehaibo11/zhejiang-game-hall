
/* fairygui::GLoader::updateLayout() */

void __thiscall fairygui::GLoader::updateLayout(GLoader *this)

{
  Size *pSVar1;
  GLoader *pGVar2;
  int iVar3;
  GLoader GVar4;
  long lVar5;
  ulong uVar6;
  GObject *pGVar7;
  long *plVar8;
  Rect *pRVar9;
  long lVar10;
  code *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Rect aRStack_60 [16];
  float local_50;
  float local_4c;
  long local_48;
  
  pRVar9 = aRStack_60;
                    /* try { // try from 00a7eb44 to 00b7eb53 has its CatchHandler @ 00a7eea0 */
  lVar5 = tpidr_el0;
                    /* try { // try from 00a7eb54 to 00b7eb6b has its CatchHandler @ 00a7ee9c */
  local_48 = *(long *)(lVar5 + 0x28);
  if ((*(long *)(this + 0x228) == 0) && (*(int *)(this + 0x210) == 0)) {
    if (this[0x1f8] != (GLoader)0x0) {
      this[0x201] = (GLoader)0x1;
      GObject::setSize((GObject *)this,50.0,30.0,false);
      this[0x201] = (GLoader)0x0;
    }
    goto LAB_00a7ef0c;
  }
  pSVar1 = (Size *)(this + 0x78);
  cocos2d::Size::Size((Size *)&local_50,pSVar1);
  if (this[0x1f8] != (GLoader)0x0) {
    this[0x201] = (GLoader)0x1;
                    /* try { // try from 00a7eb90 to 00b7eb9b has its CatchHandler @ 00a7eea8 */
    if (local_50 == 0.0) {
      local_50 = 50.0;
    }
    if (local_4c == 0.0) {
                    /* try { // try from 00a7ebb4 to 00b7ec37 has its CatchHandler @ 00a7eec8 */
      local_4c = 30.0;
    }
    GObject::setSize((GObject *)this,local_50,local_4c,false);
    this[0x201] = (GLoader)0x0;
    uVar6 = cocos2d::Size::equals((Size *)(this + 200),(Size *)&local_50);
    if ((uVar6 & 1) == 0) goto LAB_00a7ec08;
    if (*(GObject **)(this + 0x228) == (GObject *)0x0) {
                    /* try { // try from 00a7ed48 to 00b7ed57 has its CatchHandler @ 00a7ee98 */
                    /* try { // try from 00a7ed58 to 00b7ed6f has its CatchHandler @ 00a7ee94 */
      (**(code **)(**(long **)(this + 0x220) + 0x90))(0x3f800000,0x3f800000);
      (**(code **)(**(long **)(this + 0x220) + 0x148))
                (*(long **)(this + 0x220),&cocos2d::Vec2::ZERO);
      plVar8 = *(long **)(this + 0x220);
      fVar13 = 0.0;
      fVar12 = 0.0;
      goto LAB_00a7eef0;
    }
    GObject::setScale(*(GObject **)(this + 0x228),1.0,1.0);
    pGVar7 = *(GObject **)(this + 0x228);
    fVar12 = -*(float *)(this + 0xcc);
    fVar13 = 0.0;
    goto LAB_00a7ef08;
  }
LAB_00a7ec08:
  if (*(int *)(this + 0x1fc) == 0) {
    pGVar7 = *(GObject **)(this + 0x228);
joined_r0x00a7ec60:
    fVar13 = 1.0;
    fVar14 = fVar13;
    if (pGVar7 == (GObject *)0x0) goto LAB_00a7ec64;
    goto LAB_00a7ec44;
  }
  fVar13 = *(float *)(this + 200) / *(float *)(this + 0x78);
  fVar12 = *(float *)(this + 0xcc) / *(float *)(this + 0x7c);
  if ((fVar13 == 1.0) && (fVar12 == 1.0)) {
    pGVar7 = *(GObject **)(this + 0x228);
    goto joined_r0x00a7ec60;
  }
  switch(*(int *)(this + 0x1fc)) {
  case 1:
    if (fVar13 <= fVar12) {
      fVar12 = fVar13;
    }
  case 2:
    GVar4 = this[0x200];
    break;
  case 3:
    GVar4 = this[0x200];
    fVar12 = fVar13;
    break;
  default:
    GVar4 = this[0x200];
    goto joined_r0x00a7ef58;
  case 5:
    if (fVar13 <= fVar12) {
      fVar13 = fVar12;
    }
    GVar4 = this[0x200];
    fVar12 = fVar13;
joined_r0x00a7ef58:
    if (GVar4 != (GLoader)0x0) goto LAB_00a7ece0;
    goto LAB_00a7ecf0;
  }
  fVar13 = fVar12;
  if (GVar4 == (GLoader)0x0) {
LAB_00a7ecf0:
    fVar14 = fVar12;
  }
  else {
LAB_00a7ece0:
    fVar14 = 1.0;
    if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
    if (fVar12 <= 1.0) goto LAB_00a7ecf0;
  }
  local_50 = (float)(int)(*(float *)(this + 0x78) * fVar13);
  local_4c = (float)(int)(*(float *)(this + 0x7c) * fVar14);
  pGVar7 = *(GObject **)(this + 0x228);
                    /* try { // try from 00a7ed0c to 00b7ed3f has its CatchHandler @ 00a7eeb8 */
  if (pGVar7 == (GObject *)0x0) {
LAB_00a7ec64:
    lVar10 = *(long *)(this + 0x208);
    if (lVar10 == 0) {
                    /* try { // try from 00a7ed84 to 00b7ed8f has its CatchHandler @ 00a7eeb8 */
                    /* try { // try from 00a7ed90 to 00b7edbb has its CatchHandler @ 00a7eaac */
      (**(code **)(**(long **)(this + 0x220) + 0x160))(*(long **)(this + 0x220),pSVar1);
      plVar8 = *(long **)(this + 0x220);
LAB_00a7eda0:
      (**(code **)(*plVar8 + 0x90))(fVar13,fVar14);
    }
    else {
      if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* try { // try from 00a7edbc to 00b7edcf has its CatchHandler @ 00a7eea8 */
        plVar8 = *(long **)(this + 0x220);
        pGVar2 = this + 0x220;
        if (*(char *)(lVar10 + 0xb0) == '\0') {
          (**(code **)(*plVar8 + 0x160))(plVar8,pSVar1);
          plVar8 = *(long **)pGVar2;
          goto LAB_00a7eda0;
        }
        (**(code **)(*plVar8 + 0x90))(0x3f800000,0x3f800000);
                    /* try { // try from 00a7ede0 to 00b7edf3 has its CatchHandler @ 00a7eeb8 */
        (**(code **)(**(long **)pGVar2 + 0x160))(*(long **)pGVar2,pSVar1);
        plVar8 = *(long **)pGVar2;
                    /* try { // try from 00a7ee04 to 00b7ee17 has its CatchHandler @ 00a7eec8 */
        cocos2d::Rect::Rect(aRStack_60,(Vec2 *)&cocos2d::Vec2::ZERO,(Size *)&local_50);
        pcVar11 = *(code **)(*plVar8 + 0x558);
      }
      else {
        (**(code **)(**(long **)(this + 0x220) + 0x90))(0x3f800000,0x3f800000);
        plVar8 = *(long **)(this + 0x220);
        pRVar9 = (Rect *)&local_50;
        pcVar11 = *(code **)(*plVar8 + 0x160);
      }
      (*pcVar11)(plVar8,pRVar9);
    }
                    /* try { // try from 00a7ee1c to 00b7ee2f has its CatchHandler @ 00a7eecc */
                    /* try { // try from 00a7ee30 to 00b7ef1f has its CatchHandler @ 00a7eaac */
    (**(code **)(**(long **)(this + 0x220) + 0x148))(*(long **)(this + 0x220),&cocos2d::Vec2::ZERO);
  }
  else {
LAB_00a7ec44:
    GObject::setScale(pGVar7,fVar13,fVar14);
                    /* try { // try from 00a7ec50 to 00b7ecf3 has its CatchHandler @ 00a7eecc */
  }
  if (*(int *)(this + 0x1f0) == 2) {
    fVar13 = *(float *)(this + 200) - local_50;
LAB_00a7ee70:
    fVar13 = (float)(int)fVar13;
  }
  else {
    fVar13 = 0.0;
    if (*(int *)(this + 0x1f0) == 1) {
      fVar13 = (*(float *)(this + 200) - local_50) * 0.5;
      goto LAB_00a7ee70;
    }
  }
  iVar3 = *(int *)(this + 500);
  pGVar7 = *(GObject **)(this + 0x228);
  if (pGVar7 == (GObject *)0x0) {
                    /* catch() { ... } // from try @ 00a7eb18 with catch @ 00a7eea8
                       catch() { ... } // from try @ 00a7eb90 with catch @ 00a7eea8
                       catch() { ... } // from try @ 00a7edbc with catch @ 00a7eea8 */
    if (iVar3 != 1) {
      fVar12 = 0.0;
      if (iVar3 != 2) {
        fVar12 = *(float *)(this + 0xcc) - local_4c;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a7ed0c with catch @ 00a7eeb8
                       catch() { ... } // from try @ 00a7ed84 with catch @ 00a7eeb8
                       catch() { ... } // from try @ 00a7ede0 with catch @ 00a7eeb8 */
      fVar12 = (float)(int)((*(float *)(this + 0xcc) - local_4c) * 0.5);
    }
    plVar8 = *(long **)(this + 0x220);
LAB_00a7eef0:
    (**(code **)(*plVar8 + 200))(fVar13,fVar12);
  }
  else {
    if (iVar3 != 1) {
      fVar12 = local_4c;
                    /* catch() { ... } // from try @ 00a7ebb4 with catch @ 00a7eec8
                       catch() { ... } // from try @ 00a7ee04 with catch @ 00a7eec8 */
      if (iVar3 != 2) {
        fVar12 = *(float *)(this + 0xcc);
      }
      fVar12 = -fVar12;
    }
    else {
                    /* catch() { ... } // from try @ 00a7ed58 with catch @ 00a7ee94 */
                    /* catch() { ... } // from try @ 00a7ed48 with catch @ 00a7ee98 */
                    /* catch() { ... } // from try @ 00a7eb54 with catch @ 00a7ee9c */
                    /* catch() { ... } // from try @ 00a7eb44 with catch @ 00a7eea0 */
      fVar12 = (float)(int)((*(float *)(this + 0xcc) - local_4c) * -0.5 - local_4c);
                    /* catch() { ... } // from try @ 00a7eb34 with catch @ 00a7eea4 */
    }
LAB_00a7ef08:
    GObject::setPosition(pGVar7,fVar13,fVar12);
  }
LAB_00a7ef0c:
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

