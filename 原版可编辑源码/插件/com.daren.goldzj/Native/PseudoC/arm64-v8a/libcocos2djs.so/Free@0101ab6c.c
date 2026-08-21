
/* v8::internal::FreeList::Free(unsigned long, unsigned long, v8::internal::FreeMode) */

ulong __thiscall
v8::internal::FreeList::Free(FreeList *this,ulong param_1,ulong param_2,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar5 = param_1 & 0xfffffffffffc0000;
  *(ulong *)(uVar5 + 0xc0) = *(long *)(uVar5 + 0xc0) - param_2;
  if (param_2 < *(ulong *)(this + 0x10)) {
    *(ulong *)(uVar5 + 0xd8) = *(long *)(uVar5 + 0xd8) + param_2;
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
    iVar3 = (**(code **)(*(long *)this + 0x48))(this,param_2);
    piVar4 = *(int **)(*(long *)(uVar5 + 0xf0) + (long)iVar3 * 8);
    *(int *)(param_1 + 8) = piVar4[2];
    *(ulong *)(piVar4 + 2) = param_1 + 1;
    piVar4[1] = piVar4[1] + (int)param_2;
    if (param_4 == 0) {
      if (((*(long *)(piVar4 + 4) != 0) || (*(long *)(piVar4 + 6) != 0)) ||
         (*(int **)(*(long *)(this + 0x20) + (long)*piVar4 * 8) == piVar4)) {
        *(ulong *)(this + 0x28) = *(long *)(this + 0x28) + param_2;
        return 0;
      }
      (**(code **)(*(long *)this + 0x38))(this);
    }
    param_2 = 0;
  }
  return param_2;
}

