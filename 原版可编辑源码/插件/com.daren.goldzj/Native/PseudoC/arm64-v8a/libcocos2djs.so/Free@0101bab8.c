
/* v8::internal::FreeListManyCached::Free(unsigned long, unsigned long, v8::internal::FreeMode) */

ulong __thiscall
v8::internal::FreeListManyCached::Free
          (FreeListManyCached *this,ulong param_1,ulong param_2,int param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  
  uVar6 = param_1 & 0xfffffffffffc0000;
  *(ulong *)(uVar6 + 0xc0) = *(long *)(uVar6 + 0xc0) - param_2;
  if (param_2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(uVar6 + 0xd8) = *(long *)(uVar6 + 0xd8) + param_2;
    this = this + 0x18;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(this,0x10);
      if (bVar2) {
        *(ulong *)this = *(long *)this + param_2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  else {
    uVar4 = (**(code **)(*(long *)this + 0x48))(this,param_2);
    piVar5 = *(int **)(*(long *)(uVar6 + 0xf0) + (long)(int)uVar4 * 8);
    *(int *)(param_1 + 8) = piVar5[2];
    *(ulong *)(piVar5 + 2) = param_1 + 1;
    piVar5[1] = piVar5[1] + (int)param_2;
    if (param_4 == 0) {
      if (((*(long *)(piVar5 + 4) == 0) && (*(long *)(piVar5 + 6) == 0)) &&
         (*(int **)(*(long *)(this + 0x20) + (long)*piVar5 * 8) != piVar5)) {
        (**(code **)(*(long *)this + 0x38))(this);
      }
      else {
        *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + param_2;
      }
      uVar3 = uVar4;
      if (-1 < (int)uVar4) {
        do {
          if ((int)*(uint *)(this + (ulong)uVar3 * 4 + 0x30) <= (int)uVar4) break;
          *(uint *)(this + (ulong)uVar3 * 4 + 0x30) = uVar4;
          bVar2 = 0 < (int)uVar3;
          uVar3 = uVar3 - 1;
        } while (bVar2);
      }
    }
    param_2 = 0;
  }
  return param_2;
}

