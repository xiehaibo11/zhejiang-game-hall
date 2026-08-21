
/* dtNodeQueue::trickleDown(int, dtNode*) */

void __thiscall dtNodeQueue::trickleDown(dtNodeQueue *this,int param_1,dtNode *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  iVar1 = *(int *)(this + 0xc);
  while (uVar3 = param_1 << 1 | 1, (int)uVar3 < iVar1) {
    lVar4 = *(long *)this;
    lVar5 = (long)(int)uVar3;
    lVar6 = lVar5 + 1;
    if (((int)(uint)lVar6 < iVar1) &&
       (*(float *)(*(long *)(lVar4 + lVar6 * 8) + 0x10) <
        *(float *)(*(long *)(lVar4 + lVar5 * 8) + 0x10))) {
      lVar5 = lVar6;
      uVar3 = (uint)lVar6;
    }
    *(undefined8 *)(lVar4 + (long)param_1 * 8) = *(undefined8 *)(lVar4 + lVar5 * 8);
    param_1 = uVar3;
  }
  if (0 < param_1) {
    fVar7 = *(float *)(param_2 + 0x10);
    do {
      uVar2 = param_1 - 1;
      uVar3 = param_1;
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      uVar3 = (int)uVar3 >> 1;
      lVar6 = *(long *)(*(long *)this + (long)(int)uVar3 * 8);
    } while ((fVar7 < *(float *)(lVar6 + 0x10)) &&
            (*(long *)(*(long *)this + (long)param_1 * 8) = lVar6, param_1 = uVar3, 1 < (int)uVar2))
    ;
  }
  *(dtNode **)(*(long *)this + (long)param_1 * 8) = param_2;
  return;
}

