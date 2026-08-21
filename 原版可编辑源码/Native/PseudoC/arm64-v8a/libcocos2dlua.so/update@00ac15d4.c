
/* fairygui::GTweener::update() */

void __thiscall fairygui::GTweener::update(GTweener *this)

{
  TweenValue *this_00;
  TweenValue *this_01;
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  long *plVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  double dVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  ulong uVar17;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x1b4) = 0;
  if (*(int *)(this + 0xd8) == 0) {
    if (*(float *)(this + 0xa0) + *(float *)(this + 0xa4) <= *(float *)(this + 0x1b8)) {
      *(undefined4 *)(this + 0x1b4) = 1;
    }
    goto LAB_00ac1a18;
  }
  if (this[0x1b0] == (GTweener)0x0) {
    if (*(float *)(this + 0x1b8) < *(float *)(this + 0xa0)) goto LAB_00ac1a18;
    plVar6 = *(long **)(this + 0x140);
    this[0x1b0] = (GTweener)0x1;
    if (plVar6 != (long *)0x0) {
      local_78 = this;
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
    }
    if (this[0x9c] != (GTweener)0x0) goto LAB_00ac1a18;
  }
  fVar14 = *(float *)(this + 0xa8);
  fVar10 = *(float *)(this + 0x1b8) - *(float *)(this + 0xa0);
  if ((0.0 <= fVar14) && (fVar14 <= fVar10)) {
    *(undefined4 *)(this + 0x1b4) = 2;
    fVar10 = fVar14;
  }
  uVar1 = *(uint *)(this + 0xb8);
  fVar14 = *(float *)(this + 0xa4);
  if (uVar1 == 0) {
    if (fVar14 <= fVar10) {
      *(undefined4 *)(this + 0x1b4) = 1;
      fVar10 = fVar14;
    }
  }
  else {
    iVar8 = (int)(fVar10 / fVar14);
    if (this[0xbc] == (GTweener)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)(iVar8 % 2 == 1);
    }
    fVar10 = fVar10 - fVar14 * (float)iVar8;
    if ((0 < (int)uVar1) && ((int)uVar1 < iVar8)) {
      if (this[0xbc] != (GTweener)0x0) {
        uVar7 = uVar1 & 1;
      }
      *(undefined4 *)(this + 0x1b4) = 1;
      fVar10 = fVar14;
    }
    if (uVar7 != 0) {
      fVar10 = fVar14 - fVar10;
    }
  }
  fVar15 = *(float *)(this + 0xb0);
  uVar11 = EaseManager::evaluate
                     (fVar10,fVar14,fVar15,*(undefined4 *)(this + 0xb4),*(undefined4 *)(this + 0xac)
                     );
  this_00 = (TweenValue *)(this + 0x58);
  *(undefined4 *)(this + 0x1bc) = uVar11;
  TweenValue::setZero(this_00);
  this_01 = (TweenValue *)(this + 0x70);
  TweenValue::setZero(this_01);
  iVar8 = *(int *)(this + 0xd8);
  if (iVar8 == 6) {
    if (*(int *)(this + 0x1b4) != 0) {
      uVar11 = TweenValue::getVec3((TweenValue *)(this + 0x28));
      local_78 = (GTweener *)CONCAT44(fVar14,uVar11);
      local_70 = fVar15;
LAB_00ac184c:
      TweenValue::setVec3(this_00,(Vec3 *)&local_78);
      lVar9 = *(long *)(this + 0x90);
      goto joined_r0x00ac19f8;
    }
                    /* catch() { ... } // from try @ 00ac1898 with catch @ 00ac18d8 */
    fVar10 = *(float *)(this + 0x34) * (1.0 - *(float *)(this + 0x1bc));
                    /* try { // try from 00ac18ec to 00bc195f has its CatchHandler @ 00ac18ec
                       catch() { ... } // from try @ 00ac18ec with catch @ 00ac18ec
                       catch() { ... } // from try @ 00ac196c with catch @ 00ac18ec */
    iVar8 = rand();
    iVar3 = rand();
    uVar13 = NEON_scvtf(CONCAT44(iVar3,iVar8),4);
    fVar14 = (float)uVar13 * 4.656613e-10;
    fVar15 = (float)((ulong)uVar13 >> 0x20) * 4.656613e-10;
    uVar13 = NEON_fmov(0xbf800000,4);
    fVar14 = (fVar14 + fVar14 + (float)uVar13) * fVar10;
    fVar10 = (fVar15 + fVar15 + (float)((ulong)uVar13 >> 0x20)) * fVar10;
    uVar17 = CONCAT44((int)fVar10,(int)fVar14) ^
             (CONCAT44((int)fVar10,(int)fVar14) ^ CONCAT44((int)fVar10,(int)fVar14)) &
             CONCAT44(-(uint)(0.0 < fVar10),-(uint)(0.0 < fVar14));
    *(ulong *)(this + 0x70) = uVar17;
    *(ulong *)(this + 0x58) =
         CONCAT44((float)((ulong)*(undefined8 *)(this + 0x28) >> 0x20) + (float)(uVar17 >> 0x20),
                  (float)*(undefined8 *)(this + 0x28) + (float)uVar17);
    lVar9 = *(long *)(this + 0x90);
    if (lVar9 != 0) goto LAB_00ac1860;
LAB_00ac19fc:
    plVar6 = *(long **)(this + 0x110);
  }
  else {
    if (iVar8 == 5) {
      dVar16 = *(double *)(this + 0x68);
      dVar12 = *(double *)(this + 0x38) +
               (*(double *)(this + 0x50) - *(double *)(this + 0x38)) *
               (double)*(float *)(this + 0x1bc);
      if (this[0xc4] != (GTweener)0x0) {
        dVar12 = (double)(long)dVar12;
      }
      *(double *)(this + 0x68) = dVar12;
      *(double *)(this + 0x80) = dVar12 - dVar16;
      *(float *)(this + 0x58) = (float)dVar12;
      lVar9 = *(long *)(this + 0x90);
    }
    else {
      if (*(long *)(this + 0xe0) != 0) {
        local_88 = (float)GPath::getPointAt(*(float *)(this + 0x1bc));
        local_78 = (GTweener *)CONCAT44(fVar14,local_88);
        fStack_84 = fVar14;
        local_80 = fVar15;
        if (this[0xc4] != (GTweener)0x0) {
          local_88 = (float)(int)local_88;
          fStack_84 = (float)(int)fVar14;
          local_80 = (float)(int)fVar15;
          local_78 = (GTweener *)CONCAT44(fStack_84,local_88);
        }
                    /* try { // try from 00ac1824 to 00bc1897 has its CatchHandler @ 00ac1824
                       catch() { ... } // from try @ 00ac1824 with catch @ 00ac1824
                       catch() { ... } // from try @ 00ac18a4 with catch @ 00ac1824 */
        local_70 = local_80;
        fVar10 = (float)TweenValue::getVec3(this_00);
        local_88 = local_88 - fVar10;
        fStack_84 = fStack_84 - fVar14;
        local_80 = local_80 - fVar15;
        TweenValue::setVec3(this_01,(Vec3 *)&local_88);
        goto LAB_00ac184c;
      }
      if (0 < iVar8) {
        iVar8 = 0;
                    /* try { // try from 00ac1960 to 00bc196b has its CatchHandler @ 00ac19a0 */
        do {
                    /* try { // try from 00ac196c to 00bc19b3 has its CatchHandler @ 00ac18ec */
          pfVar5 = (float *)TweenValue::operator[]((TweenValue *)(this + 0x28),iVar8);
          fVar10 = *pfVar5;
          pfVar5 = (float *)TweenValue::operator[]((TweenValue *)(this + 0x40),iVar8);
          fVar10 = fVar10 + (*pfVar5 - fVar10) * *(float *)(this + 0x1bc);
                    /* catch() { ... } // from try @ 00ac1960 with catch @ 00ac19a0 */
          if (this[0xc4] != (GTweener)0x0) {
            fVar10 = (float)(int)fVar10;
          }
          pfVar5 = (float *)TweenValue::operator[](this_00,iVar8);
          fVar14 = *pfVar5;
          pfVar5 = (float *)TweenValue::operator[](this_01,iVar8);
          *pfVar5 = fVar10 - fVar14;
          pfVar5 = (float *)TweenValue::operator[](this_00,iVar8);
          *pfVar5 = fVar10;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(this + 0xd8));
      }
      *(double *)(this + 0x68) = (double)*(float *)(this + 0x58);
      lVar9 = *(long *)(this + 0x90);
    }
joined_r0x00ac19f8:
    if (lVar9 == 0) goto LAB_00ac19fc;
LAB_00ac1860:
    iVar8 = *(int *)(this + 0x98);
    if (iVar8 == 0) goto LAB_00ac19fc;
    lVar4 = __dynamic_cast(lVar9,&cocos2d::Ref::typeinfo,&GObject::typeinfo,0);
    if (lVar4 == 0) {
                    /* try { // try from 00ac18a4 to 00bc18eb has its CatchHandler @ 00ac1824 */
      lVar9 = __dynamic_cast(lVar9,&cocos2d::Ref::typeinfo,&cocos2d::Node::typeinfo,0);
      if (lVar9 == 0) goto LAB_00ac19fc;
      TweenPropTypeUtils::setProps(lVar9,iVar8,this_00);
      plVar6 = *(long **)(this + 0x110);
    }
    else {
      TweenPropTypeUtils::setProps(lVar4,iVar8,this_00);
      plVar6 = *(long **)(this + 0x110);
                    /* try { // try from 00ac1898 to 00bc18a3 has its CatchHandler @ 00ac18d8 */
    }
  }
  if (plVar6 != (long *)0x0) {
    local_78 = this;
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
  }
LAB_00ac1a18:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

