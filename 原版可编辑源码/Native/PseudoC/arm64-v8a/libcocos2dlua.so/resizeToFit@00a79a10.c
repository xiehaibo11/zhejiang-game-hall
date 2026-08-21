
/* fairygui::GList::resizeToFit(int, int) */

void __thiscall fairygui::GList::resizeToFit(GList *this,int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  GComponent::ensureBoundsCorrect((GComponent *)this);
  if (this[0x338] == (GList)0x0) {
    iVar2 = (int)((ulong)(*(long *)(this + 0x1e8) - *(long *)(this + 0x1e0)) >> 3);
    if (param_1 <= iVar2) {
      iVar2 = param_1;
    }
    if (iVar2 == 0) {
LAB_00a79afc:
      fVar3 = (float)param_2;
      if ((*(uint *)(this + 0x2e4) | 2) != 2) {
LAB_00a79b64:
        GComponent::setViewWidth((GComponent *)this,fVar3);
        return;
      }
    }
    else {
      do {
        if (iVar2 < 1) goto LAB_00a79afc;
        lVar1 = GComponent::getChildAt((GComponent *)this,iVar2 + -1);
      } while ((this[0x2e1] != (GList)0x0) && (iVar2 = iVar2 + -1, *(char *)(lVar1 + 0xf4) == '\0'))
      ;
      if ((*(uint *)(this + 0x2e4) | 2) != 2) {
        fVar4 = *(float *)(lVar1 + 0xc0) + *(float *)(lVar1 + 200);
        fVar3 = (float)param_2;
        if ((float)param_2 <= fVar4) {
          fVar3 = fVar4;
        }
        goto LAB_00a79b64;
      }
      fVar4 = *(float *)(lVar1 + 0xc4) + *(float *)(lVar1 + 0xcc);
      fVar3 = (float)param_2;
      if ((float)param_2 <= fVar4) {
        fVar3 = fVar4;
      }
    }
  }
  else {
    iVar2 = *(int *)(this + 0x33c);
    if (param_1 <= *(int *)(this + 0x33c)) {
      iVar2 = param_1;
    }
    iVar2 = (int)((float)iVar2 / (float)*(int *)(this + 0x348));
    fVar3 = (float)iVar2;
    if ((*(uint *)(this + 0x2e4) | 2) != 2) {
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      fVar3 = *(float *)(this + 0x350) * fVar3 + (float)(*(int *)(this + 0x2f4) * (iVar2 + -1));
      goto LAB_00a79b64;
    }
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    fVar3 = *(float *)(this + 0x354) * fVar3 + (float)(*(int *)(this + 0x2f0) * (iVar2 + -1));
  }
  GComponent::setViewHeight((GComponent *)this,fVar3);
  return;
}

