
/* dtLocalBoundary::addSegment(float, float const*) */

void __thiscall dtLocalBoundary::addSegment(dtLocalBoundary *this,float param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  dtLocalBoundary *pdVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(uint *)(this + 0xec);
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)(int)uVar2;
    if (*(float *)(this + (long)(int)uVar2 * 0x1c + 8) <= param_1) {
      if (7 < (int)uVar2) {
        return;
      }
    }
    else {
      if ((int)uVar2 < 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        pdVar5 = this + 0x24;
        do {
          if (param_1 <= *(float *)pdVar5) break;
          uVar4 = uVar4 + 1;
          pdVar5 = pdVar5 + 0x1c;
        } while (uVar2 != uVar4);
      }
      iVar3 = (int)uVar4;
      iVar1 = uVar2 - iVar3;
      if (7 - iVar3 <= (int)(uVar2 - iVar3)) {
        iVar1 = 7 - iVar3;
      }
      if (iVar1 < 1) {
        uVar6 = uVar4 & 0xffffffff;
      }
      else {
        uVar6 = uVar4 & 0xffffffff;
        memmove(this + (ulong)(iVar3 + 1) * 0x1c + 0xc,this + (uVar4 & 0xffffffff) * 0x1c + 0xc,
                (long)iVar1 * 0x1c);
      }
    }
  }
  *(float *)(this + uVar6 * 0x1c + 0x24) = param_1;
  uVar8 = *(undefined8 *)(param_2 + 2);
  uVar7 = *(undefined8 *)param_2;
  *(undefined8 *)(this + uVar6 * 0x1c + 0x1c) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(this + uVar6 * 0x1c + 0x14) = uVar8;
  *(undefined8 *)(this + uVar6 * 0x1c + 0xc) = uVar7;
  if (*(int *)(this + 0xec) < 8) {
    *(int *)(this + 0xec) = *(int *)(this + 0xec) + 1;
  }
  return;
}

