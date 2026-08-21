
/* fairygui::GGroup::updateBounds() */

void __thiscall fairygui::GGroup::updateBounds(GGroup *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  GObject *this_00;
  ulong uVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar5 = GComponent::numChildren(*(GComponent **)(this + 0xa0));
  if (0 < iVar5) {
    fVar7 = 3.4028235e+38;
    fVar11 = 1.1754944e-38;
    iVar8 = 0;
    bVar3 = true;
    fVar13 = fVar7;
    fVar10 = fVar11;
    do {
      this_00 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar8);
      fVar4 = fVar11;
      if ((*(GGroup **)(this_00 + 0x128) == this) &&
         ((this[0x1e8] == (GGroup)0x0 ||
          (uVar6 = GObject::internalVisible3(this_00), (uVar6 & 1) != 0)))) {
        fVar9 = *(float *)(this_00 + 0xc0);
        fVar12 = *(float *)(this_00 + 0xc4);
        bVar3 = false;
        fVar4 = fVar9;
        if (fVar13 <= fVar9) {
          fVar4 = fVar13;
        }
        fVar13 = fVar4;
        fVar4 = fVar12;
        if (fVar7 <= fVar12) {
          fVar4 = fVar7;
        }
        fVar7 = fVar4;
        fVar4 = fVar9 + *(float *)(this_00 + 200);
        if (fVar9 + *(float *)(this_00 + 200) <= fVar10) {
          fVar4 = fVar10;
        }
        fVar10 = fVar4;
        fVar4 = fVar12 + *(float *)(this_00 + 0xcc);
        if (fVar12 + *(float *)(this_00 + 0xcc) <= fVar11) {
          fVar4 = fVar11;
        }
      }
      fVar11 = fVar4;
      iVar8 = iVar8 + 1;
    } while (iVar5 != iVar8);
    if (!bVar3) {
      *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) | 1;
      GObject::setPosition((GObject *)this,fVar13,fVar7);
      fVar10 = fVar10 - fVar13;
      fVar11 = fVar11 - fVar7;
      uVar2 = *(uint *)(this + 0x1d8) & 2;
      *(uint *)(this + 0x1d8) = uVar2;
      uVar1 = uVar2;
      goto joined_r0x00a76108;
    }
  }
  uVar2 = *(uint *)(this + 0x1d8);
  fVar10 = 0.0;
  fVar11 = 0.0;
  uVar1 = uVar2 >> 1 & 1;
joined_r0x00a76108:
  if (uVar1 == 0) {
    *(uint *)(this + 0x1d8) = uVar2 | 2;
    GObject::setSize((GObject *)this,fVar10,fVar11,false);
    *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) & 1;
    return;
  }
  *(uint *)(this + 0x1d8) = uVar2 & 1;
  resizeChildren(this,*(float *)(this + 200) - fVar10,*(float *)(this + 0xcc) - fVar11);
  return;
}

