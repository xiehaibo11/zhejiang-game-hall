
/* dtPathQueue::request(unsigned int, unsigned int, float const*, float const*, dtQueryFilter
   const*) */

int __thiscall
dtPathQueue::request
          (dtPathQueue *this,uint param_1,uint param_2,float *param_3,float *param_4,
          dtQueryFilter *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  long lVar4;
  dtPathQueue *pdVar5;
  
  if (*(int *)this == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(this + 0x48) == 0) {
    lVar4 = 1;
  }
  else if (*(int *)(this + 0x90) == 0) {
    lVar4 = 2;
  }
  else if (*(int *)(this + 0xd8) == 0) {
    lVar4 = 3;
  }
  else if (*(int *)(this + 0x120) == 0) {
    lVar4 = 4;
  }
  else if (*(int *)(this + 0x168) == 0) {
    lVar4 = 5;
  }
  else if (*(int *)(this + 0x1b0) == 0) {
    lVar4 = 6;
  }
  else {
    if (*(int *)(this + 0x1f8) != 0) {
      return 0;
    }
    lVar4 = 7;
  }
  iVar2 = *(int *)(this + 0x240);
  pdVar5 = this + lVar4 * 0x48;
  iVar1 = iVar2 + 1;
  if (iVar2 == -1) {
    iVar1 = 1;
  }
  *(int *)(this + 0x240) = iVar1;
  *(int *)pdVar5 = iVar2;
  *(float *)(pdVar5 + 4) = *param_3;
  *(float *)(pdVar5 + 8) = param_3[1];
  fVar3 = param_3[2];
  *(uint *)(pdVar5 + 0x1c) = param_1;
  *(float *)(pdVar5 + 0xc) = fVar3;
  *(float *)(pdVar5 + 0x10) = *param_4;
  *(float *)(pdVar5 + 0x14) = param_4[1];
  fVar3 = param_4[2];
  *(uint *)(pdVar5 + 0x20) = param_2;
  *(undefined8 *)(pdVar5 + 0x30) = 0;
  *(dtQueryFilter **)(pdVar5 + 0x40) = param_5;
  *(float *)(pdVar5 + 0x18) = fVar3;
  *(int *)(pdVar5 + 0x38) = 0;
  return iVar2;
}

