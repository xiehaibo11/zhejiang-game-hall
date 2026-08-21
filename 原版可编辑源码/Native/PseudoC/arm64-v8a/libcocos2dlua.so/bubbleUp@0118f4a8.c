
/* dtNodeQueue::bubbleUp(int, dtNode*) */

void __thiscall dtNodeQueue::bubbleUp(dtNodeQueue *this,int param_1,dtNode *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  if (0 < param_1) {
    fVar4 = *(float *)(param_2 + 0x10);
    do {
      iVar2 = param_1 + -1;
      iVar1 = param_1;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar1 = iVar1 >> 1;
      lVar3 = *(long *)(*(long *)this + (long)iVar1 * 8);
    } while ((fVar4 < *(float *)(lVar3 + 0x10)) &&
            (*(long *)(*(long *)this + (long)param_1 * 8) = lVar3, param_1 = iVar1, 1 < iVar2));
  }
  *(dtNode **)(*(long *)this + (long)param_1 * 8) = param_2;
  return;
}

