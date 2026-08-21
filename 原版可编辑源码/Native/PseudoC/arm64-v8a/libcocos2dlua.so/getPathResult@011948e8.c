
/* dtPathQueue::getPathResult(unsigned int, unsigned int*, int*, int) */

uint __thiscall
dtPathQueue::getPathResult(dtPathQueue *this,uint param_1,uint *param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  dtPathQueue *pdVar3;
  long lVar4;
  
  if (*(uint *)this == param_1) {
    lVar4 = 0;
    pdVar3 = this;
  }
  else {
    pdVar3 = this + 0x48;
    if (*(uint *)pdVar3 == param_1) {
      lVar4 = 1;
    }
    else {
      pdVar3 = this + 0x90;
      if (*(uint *)pdVar3 == param_1) {
        lVar4 = 2;
      }
      else {
        pdVar3 = this + 0xd8;
        if (*(uint *)pdVar3 == param_1) {
          lVar4 = 3;
        }
        else if (*(uint *)(this + 0x120) == param_1) {
          pdVar3 = this + 0x120;
          lVar4 = 4;
        }
        else if (*(uint *)(this + 0x168) == param_1) {
          pdVar3 = this + 0x168;
          lVar4 = 5;
        }
        else if (*(uint *)(this + 0x1b0) == param_1) {
          pdVar3 = this + 0x1b0;
          lVar4 = 6;
        }
        else {
          if (*(uint *)(this + 0x1f8) != param_1) {
            return 0x80000000;
          }
          pdVar3 = this + 0x1f8;
          lVar4 = 7;
        }
      }
    }
  }
  *(int *)pdVar3 = 0;
  uVar2 = *(uint *)(this + lVar4 * 0x48 + 0x34);
  *(undefined4 *)(this + lVar4 * 0x48 + 0x34) = 0;
  uVar1 = *(uint *)(this + lVar4 * 0x48 + 0x30);
  if (param_4 <= (int)*(uint *)(this + lVar4 * 0x48 + 0x30)) {
    uVar1 = param_4;
  }
  memcpy(param_2,*(void **)(this + lVar4 * 0x48 + 0x28),
         -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  *param_3 = uVar1;
  return uVar2 & 0xffffff | 0x40000000;
}

