
/* fairygui::GGroup::resizeChildren(float, float) */

void __thiscall fairygui::GGroup::resizeChildren(GGroup *this,float param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  GObject *pGVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (((*(int *)(this + 0x1dc) != 0) && ((*(uint *)(this + 0x1d8) >> 1 & 1) == 0)) &&
     (*(GComponent **)(this + 0xa0) != (GComponent *)0x0)) {
    *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) | 2;
    if ((this[0x1f5] != (GGroup)0x0) && (this[0x1f5] = (GGroup)0x0, this[0x1e9] == (GGroup)0x0)) {
      updateBounds(this);
      return;
    }
    iVar2 = GComponent::numChildren(*(GComponent **)(this + 0xa0));
    if (this[500] == (GGroup)0x0) {
      *(undefined4 *)(this + 0x200) = 0;
      this[500] = (GGroup)0x1;
      *(undefined8 *)(this + 0x1f8) = 0xffffffff;
      if (0 < iVar2) {
        iVar8 = 0;
        iVar7 = 0;
        do {
          pGVar5 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar7);
          if (*(GGroup **)(pGVar5 + 0x128) == this) {
            if ((this[0x1e8] == (GGroup)0x0) ||
               (uVar6 = GObject::internalVisible3(pGVar5), (uVar6 & 1) != 0)) {
              if (iVar8 == *(int *)(this + 0x1ec)) {
                *(int *)(this + 0x1f8) = iVar7;
              }
              *(int *)(this + 0x200) = *(int *)(this + 0x200) + 1;
              lVar4 = 200;
              if (*(int *)(this + 0x1dc) != 1) {
                lVar4 = 0xcc;
              }
              *(float *)(this + 0x1fc) = *(float *)(pGVar5 + lVar4) + *(float *)(this + 0x1fc);
            }
            iVar8 = iVar8 + 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar2 != iVar7);
        if (*(int *)(this + 0x1f8) != -1) {
          iVar8 = *(int *)(this + 0x1dc);
          lVar3 = GComponent::getChildAt(*(GComponent **)(this + 0xa0),*(int *)(this + 0x1f8));
          lVar4 = 200;
          if (iVar8 != 1) {
            lVar4 = 0xcc;
          }
          fVar10 = *(float *)(this + 0x1fc) +
                   ((float)*(int *)(this + 0x1f0) - *(float *)(lVar3 + lVar4));
          *(float *)(this + 0x1fc) = fVar10;
          *(float *)(lVar3 + 0x130) = (float)*(int *)(this + 0x1f0) / fVar10;
        }
        if (0 < iVar2) {
          iVar8 = 0;
          do {
            lVar4 = GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar8);
            if ((*(GGroup **)(lVar4 + 0x128) == this) && (iVar8 != *(int *)(this + 0x1f8))) {
              if (*(float *)(this + 0x1fc) <= 0.0) {
                *(undefined4 *)(lVar4 + 0x130) = 0;
              }
              else {
                    /* try { // try from 00a75bd4 to 00b75c13 has its CatchHandler @ 00a75bd4
                       catch() { ... } // from try @ 00a75bd4 with catch @ 00a75bd4
                       catch() { ... } // from try @ 00a75ca4 with catch @ 00a75bd4
                       catch() { ... } // from try @ 00a75d70 with catch @ 00a75bd4 */
                lVar3 = 200;
                if (*(int *)(this + 0x1dc) != 1) {
                  lVar3 = 0xcc;
                }
                *(float *)(lVar4 + 0x130) = *(float *)(lVar4 + lVar3) / *(float *)(this + 0x1fc);
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar2 != iVar8);
        }
      }
    }
    if (*(int *)(this + 0x1dc) == 1) {
      fVar10 = *(float *)(this + 200) -
               (float)((*(int *)(this + 0x200) + -1) * *(int *)(this + 0x1e4));
      fVar11 = 1.0;
      if ((*(int *)(this + 0x1f8) == -1) || (fVar10 < *(float *)(this + 0x1fc))) {
        bVar1 = false;
      }
      else {
        pGVar5 = (GObject *)
                 GComponent::getChildAt(*(GComponent **)(this + 0xa0),*(int *)(this + 0x1f8));
                    /* try { // try from 00a75c14 to 00b75c2b has its CatchHandler @ 00a75dbc */
        bVar1 = true;
        GObject::setSize(pGVar5,fVar10 - (*(float *)(this + 0x1fc) - (float)*(int *)(this + 0x1f0)),
                         *(float *)(pGVar5 + 0xd4) + param_2,true);
        fVar10 = fVar10 - *(float *)(pGVar5 + 200);
        fVar11 = 1.0 - *(float *)(pGVar5 + 0x130);
                    /* try { // try from 00a75c38 to 00b75c4f has its CatchHandler @ 00a75d8c */
      }
      if (0 < iVar2) {
        fVar9 = *(float *)(this + 0xc0);
        iVar8 = 0;
        do {
          pGVar5 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar8);
                    /* try { // try from 00a75c78 to 00b75ca3 has its CatchHandler @ 00a75d84 */
          if (*(GGroup **)(pGVar5 + 0x128) == this) {
            if ((this[0x1e8] == (GGroup)0x0) ||
               (uVar6 = GObject::internalVisible3(pGVar5), (uVar6 & 1) != 0)) {
                    /* try { // try from 00a75ca4 to 00b75d67 has its CatchHandler @ 00a75bd4 */
              if ((!bVar1) || (iVar8 != *(int *)(this + 0x1f8))) {
                GObject::setSize(pGVar5,(float)(int)(fVar10 * (*(float *)(pGVar5 + 0x130) / fVar11))
                                 ,*(float *)(pGVar5 + 0xd4) + param_2,true);
                fVar11 = fVar11 - *(float *)(pGVar5 + 0x130);
                fVar10 = fVar10 - *(float *)(pGVar5 + 200);
              }
              GObject::setXMin(pGVar5,fVar9);
              if (*(float *)(pGVar5 + 200) != 0.0) {
                fVar9 = fVar9 + *(float *)(pGVar5 + 200) + (float)*(int *)(this + 0x1e4);
              }
            }
            else {
                    /* try { // try from 00a75c54 to 00b75c6b has its CatchHandler @ 00a75d88 */
              GObject::setSize(pGVar5,*(float *)(pGVar5 + 0xd0),*(float *)(pGVar5 + 0xd4) + param_2,
                               true);
            }
          }
          iVar8 = iVar8 + 1;
        } while (iVar2 != iVar8);
      }
    }
    else {
      fVar10 = *(float *)(this + 0xcc) -
               (float)((*(int *)(this + 0x200) + -1) * *(int *)(this + 0x1e0));
      fVar11 = 1.0;
      if ((*(int *)(this + 0x1f8) == -1) || (fVar10 < *(float *)(this + 0x1fc))) {
        bVar1 = false;
      }
      else {
        pGVar5 = (GObject *)
                 GComponent::getChildAt(*(GComponent **)(this + 0xa0),*(int *)(this + 0x1f8));
        bVar1 = true;
        GObject::setSize(pGVar5,*(float *)(pGVar5 + 0xd0) + param_1,
                         fVar10 - (*(float *)(this + 0x1fc) - (float)*(int *)(this + 0x1f0)),true);
        fVar10 = fVar10 - *(float *)(pGVar5 + 0xcc);
        fVar11 = 1.0 - *(float *)(pGVar5 + 0x130);
      }
      if (0 < iVar2) {
        fVar9 = *(float *)(this + 0xc4);
        iVar8 = 0;
        do {
                    /* catch() { ... } // from try @ 00a75c54 with catch @ 00a75d88 */
                    /* catch() { ... } // from try @ 00a75c38 with catch @ 00a75d8c */
          pGVar5 = (GObject *)GComponent::getChildAt(*(GComponent **)(this + 0xa0),iVar8);
          if (*(GGroup **)(pGVar5 + 0x128) == this) {
            if ((this[0x1e8] == (GGroup)0x0) ||
               (uVar6 = GObject::internalVisible3(pGVar5), (uVar6 & 1) != 0)) {
                    /* catch() { ... } // from try @ 00a75c14 with catch @ 00a75dbc */
              if ((!bVar1) || (iVar8 != *(int *)(this + 0x1f8))) {
                GObject::setSize(pGVar5,*(float *)(pGVar5 + 0xd0) + param_1,
                                 (float)(int)(fVar10 * (*(float *)(pGVar5 + 0x130) / fVar11)),true);
                fVar11 = fVar11 - *(float *)(pGVar5 + 0x130);
                fVar10 = fVar10 - *(float *)(pGVar5 + 0xcc);
              }
              GObject::setYMin(pGVar5,fVar9);
              if (*(float *)(pGVar5 + 0xcc) != 0.0) {
                fVar9 = fVar9 + *(float *)(pGVar5 + 0xcc) + (float)*(int *)(this + 0x1e0);
              }
            }
            else {
                    /* try { // try from 00a75d68 to 00b75d6f has its CatchHandler @ 00a75d84 */
                    /* try { // try from 00a75d70 to 00b75dd7 has its CatchHandler @ 00a75bd4 */
              GObject::setSize(pGVar5,*(float *)(pGVar5 + 0xd0) + param_1,*(float *)(pGVar5 + 0xd4),
                               true);
            }
          }
          iVar8 = iVar8 + 1;
                    /* catch() { ... } // from try @ 00a75c78 with catch @ 00a75d84
                       catch() { ... } // from try @ 00a75d68 with catch @ 00a75d84 */
        } while (iVar2 != iVar8);
      }
    }
    *(uint *)(this + 0x1d8) = *(uint *)(this + 0x1d8) & 1;
  }
  return;
}

