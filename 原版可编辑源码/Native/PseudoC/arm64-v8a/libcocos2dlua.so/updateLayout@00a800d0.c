
/* fairygui::GLoader3D::updateLayout() */

void __thiscall fairygui::GLoader3D::updateLayout(GLoader3D *this)

{
  GLoader3D GVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  cocos2d::Size::Size((Size *)&local_30,(Size *)(this + 0x78));
  if (this[0x1f8] != (GLoader3D)0x0) {
    this[0x201] = (GLoader3D)0x1;
    if (local_30 == 0.0) {
      local_30 = 50.0;
    }
    if (local_2c == 0.0) {
      local_2c = 30.0;
    }
    GObject::setSize((GObject *)this,local_30,local_2c,false);
    this[0x201] = (GLoader3D)0x0;
    uVar3 = cocos2d::Size::equals((Size *)(this + 200),(Size *)&local_30);
    if ((uVar3 & 1) != 0) {
      (**(code **)(**(long **)(this + 600) + 0x90))(0x3f800000,0x3f800000);
      (**(code **)(**(long **)(this + 600) + 0x148))(*(long **)(this + 600),&cocos2d::Vec2::ZERO);
      plVar4 = *(long **)(this + 600);
      iVar7 = 0;
      fVar6 = 0.0;
      goto LAB_00a802ec;
    }
  }
  if (*(int *)(this + 0x1fc) == 0) {
    fVar6 = 1.0;
    fVar5 = fVar6;
    goto LAB_00a80240;
  }
  fVar9 = *(float *)(this + 200) / *(float *)(this + 0x78);
  fVar6 = 1.0;
  fVar8 = *(float *)(this + 0xcc) / *(float *)(this + 0x7c);
  if ((fVar9 == 1.0) && (fVar5 = fVar6, fVar8 == 1.0)) goto LAB_00a80240;
                    /* try { // try from 00a801d4 to 00b801db has its CatchHandler @ 00a80210 */
                    /* try { // try from 00a801ec to 00b801f3 has its CatchHandler @ 00a80208 */
                    /* try { // try from 00a801f4 to 00b80267 has its CatchHandler @ 00a7ff7c */
  switch(*(int *)(this + 0x1fc)) {
  case 1:
    if (fVar9 <= fVar8) {
      fVar8 = fVar9;
    }
  case 2:
    GVar1 = this[0x200];
                    /* catch() { ... } // from try @ 00a800a0 with catch @ 00a80208
                       catch() { ... } // from try @ 00a801ec with catch @ 00a80208 */
    break;
  case 3:
    GVar1 = this[0x200];
    fVar8 = fVar9;
    break;
  default:
    GVar1 = this[0x200];
    goto joined_r0x00a8033c;
  case 5:
    if (fVar9 <= fVar8) {
      fVar9 = fVar8;
    }
                    /* try { // try from 00a80334 to 00b80337 has its CatchHandler @ 00a8036c */
                    /* try { // try from 00a80338 to 00b8037f has its CatchHandler @ 00a802e8 */
    GVar1 = this[0x200];
    fVar8 = fVar9;
joined_r0x00a8033c:
    if (GVar1 != (GLoader3D)0x0) goto LAB_00a8020c;
    goto LAB_00a8021c;
  }
  fVar9 = fVar8;
  if (GVar1 == (GLoader3D)0x0) {
LAB_00a8021c:
    fVar6 = fVar8;
  }
  else {
LAB_00a8020c:
                    /* catch() { ... } // from try @ 00a80080 with catch @ 00a8020c */
    fVar6 = 1.0;
                    /* catch() { ... } // from try @ 00a80004 with catch @ 00a80210
                       catch() { ... } // from try @ 00a801d4 with catch @ 00a80210 */
                    /* catch() { ... } // from try @ 00a7ffe8 with catch @ 00a80214 */
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
                    /* catch() { ... } // from try @ 00a80064 with catch @ 00a80218 */
    if (fVar8 <= 1.0) goto LAB_00a8021c;
  }
  local_30 = (float)(int)(*(float *)(this + 0x78) * fVar9);
  local_2c = (float)(int)(*(float *)(this + 0x7c) * fVar6);
  fVar5 = fVar9;
LAB_00a80240:
                    /* catch() { ... } // from try @ 00a80040 with catch @ 00a80248 */
                    /* catch() { ... } // from try @ 00a7ffc4 with catch @ 00a8024c */
  (**(code **)(**(long **)(this + 600) + 0x90))(fVar5,fVar6);
  (**(code **)(**(long **)(this + 600) + 0x148))(*(long **)(this + 600),&cocos2d::Vec2::ZERO);
  if (*(int *)(this + 0x1f0) == 2) {
    fVar6 = *(float *)(this + 200) - local_30;
LAB_00a802a4:
    iVar7 = (int)fVar6;
  }
  else {
    iVar7 = 0;
    if (*(int *)(this + 0x1f0) == 1) {
      fVar6 = (*(float *)(this + 200) - local_30) * 0.5;
      goto LAB_00a802a4;
    }
  }
  if (*(int *)(this + 500) == 2) {
    fVar6 = 0.0;
  }
  else if (*(int *)(this + 500) == 1) {
    fVar6 = (float)(int)((*(float *)(this + 0xcc) - local_2c) * 0.5);
  }
  else {
    fVar6 = *(float *)(this + 0xcc) - local_2c;
  }
                    /* try { // try from 00a802e8 to 00b80333 has its CatchHandler @ 00a802e8
                       catch() { ... } // from try @ 00a802e8 with catch @ 00a802e8
                       catch() { ... } // from try @ 00a80338 with catch @ 00a802e8 */
  plVar4 = *(long **)(this + 600);
LAB_00a802ec:
  (**(code **)(*plVar4 + 200))(iVar7,fVar6);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

