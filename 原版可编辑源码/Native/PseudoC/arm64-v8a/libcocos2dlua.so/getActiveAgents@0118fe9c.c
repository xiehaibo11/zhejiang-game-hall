
/* dtCrowd::getActiveAgents(dtCrowdAgent**, int) */

int __thiscall dtCrowd::getActiveAgents(dtCrowd *this,dtCrowdAgent **param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)this;
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar5 = 0;
    iVar2 = 0;
    iVar3 = 0;
    if (0 < param_2) goto LAB_0118fed4;
    while( true ) {
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x270;
      if (iVar1 <= lVar5) break;
      iVar3 = iVar2;
      if (iVar2 < param_2) {
LAB_0118fed4:
        iVar2 = iVar3;
        if (*(dtCrowdAgent *)(*(long *)(this + 8) + lVar4) != (dtCrowdAgent)0x0) {
          iVar2 = iVar3 + 1;
          param_1[iVar3] = (dtCrowdAgent *)(*(long *)(this + 8) + lVar4);
        }
      }
    }
  }
  return iVar2;
}

