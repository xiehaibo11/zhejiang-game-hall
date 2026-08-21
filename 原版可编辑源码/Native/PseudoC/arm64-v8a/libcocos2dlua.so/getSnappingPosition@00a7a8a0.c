
/* fairygui::GList::getSnappingPosition(cocos2d::Vec2 const&) */

float __thiscall fairygui::GList::getSnappingPosition(GList *this,Vec2 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined8 local_28;
  
  if (this[0x338] == (GList)0x0) {
    fVar7 = (float)GComponent::getSnappingPosition((GComponent *)this,param_1);
  }
  else {
    local_28 = *(ulong *)param_1;
    switch(*(undefined4 *)(this + 0x2e4)) {
    case 0:
    case 2:
      iVar3 = getIndexOnPos1(this,(float *)((ulong)&local_28 | 4),false);
      if (((iVar3 < (int)((ulong)(*(long *)(this + 0x370) - *(long *)(this + 0x368)) >> 3) *
                    -0x55555555) &&
          (*(float *)(*(long *)(this + 0x368) + (long)iVar3 * 0x18 + 4) * 0.5 <
           *(float *)(param_1 + 4) - local_28._4_4_)) && (iVar3 < *(int *)(this + 0x340))) {
        local_28 = local_28 & 0xffffffff;
      }
      goto LAB_00a7ab0c;
    case 1:
    case 3:
      iVar3 = getIndexOnPos2(this,(float *)&local_28,false);
      if ((int)((ulong)(*(long *)(this + 0x370) - *(long *)(this + 0x368)) >> 3) * -0x55555555 <=
          iVar3) goto LAB_00a7ab0c;
      fVar8 = *(float *)(*(long *)(this + 0x368) + (long)iVar3 * 0x18);
      if ((*(float *)param_1 - (float)local_28 <= fVar8 * 0.5) ||
         (fVar7 = (float)local_28, *(int *)(this + 0x340) <= iVar3)) goto LAB_00a7ab0c;
      break;
    default:
      if (*(int *)(this + 0x340) < *(int *)(this + 0x348)) {
        iVar5 = 0;
        local_28 = 0;
        fVar7 = 0.0;
      }
      else {
        fVar8 = (float)local_28;
        fVar7 = (float)GComponent::getViewWidth((GComponent *)this);
        uVar1 = *(uint *)(this + 0x348);
        uVar4 = (ulong)uVar1;
        iVar5 = (int)(fVar8 / fVar7);
        iVar3 = *(int *)(this + 0x34c) * uVar1 * iVar5;
        fVar7 = fVar7 * (float)iVar5;
        if (0 < (int)uVar1) {
          uVar2 = *(uint *)(this + 0x2f4);
          iVar5 = iVar5 * *(int *)(this + 0x34c) * uVar1;
          pfVar6 = (float *)(*(long *)(this + 0x368) + (long)iVar3 * 0x18);
          do {
            if (fVar8 < fVar7 + *pfVar6 + (float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)))
            goto LAB_00a7aaa0;
            fVar7 = fVar7 + *pfVar6 + (float)(int)uVar2;
            iVar5 = iVar5 + 1;
            uVar4 = uVar4 - 1;
            pfVar6 = pfVar6 + 6;
          } while (uVar4 != 0);
        }
        iVar5 = uVar1 + iVar3 + -1;
LAB_00a7aaa0:
        local_28 = (ulong)(uint)fVar7;
      }
      if ((((int)((ulong)(*(long *)(this + 0x370) - *(long *)(this + 0x368)) >> 3) * -0x55555555 <=
            iVar5) ||
          (fVar8 = *(float *)(*(long *)(this + 0x368) + (long)iVar5 * 0x18),
          *(float *)param_1 - fVar7 <= fVar8 * 0.5)) || (*(int *)(this + 0x340) <= iVar5))
      goto LAB_00a7ab0c;
    }
    fVar7 = fVar7 + fVar8 + (float)*(int *)(this + 0x2f4);
  }
  local_28 = (ulong)(uint)fVar7;
LAB_00a7ab0c:
  return (float)local_28;
}

