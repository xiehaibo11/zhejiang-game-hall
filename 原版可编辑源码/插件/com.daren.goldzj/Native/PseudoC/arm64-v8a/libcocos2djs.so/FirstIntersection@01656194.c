
/* v8::internal::compiler::LiveRange::FirstIntersection(v8::internal::compiler::LiveRange*) const */

int __thiscall
v8::internal::compiler::LiveRange::FirstIntersection(LiveRange *this,LiveRange *param_1)

{
  int iVar1;
  int iVar2;
  LiveRange *pLVar3;
  UseInterval *pUVar4;
  UseInterval *this_00;
  LiveRange *pLVar5;
  
  pUVar4 = *(UseInterval **)(param_1 + 0x10);
  if (pUVar4 == (UseInterval *)0x0) {
    return -1;
  }
  iVar1 = *(int *)pUVar4;
  pLVar5 = this + 0x30;
  if (*(int **)pLVar5 != (int *)0x0) {
    pLVar3 = pLVar5;
    if (**(int **)pLVar5 <= iVar1) goto LAB_016561e4;
    *(undefined8 *)(this + 0x30) = 0;
  }
  pLVar3 = this + 0x10;
LAB_016561e4:
  this_00 = *(UseInterval **)pLVar3;
  if (this_00 == (UseInterval *)0x0) {
    return -1;
  }
  do {
    if (*(int *)(*(long *)(param_1 + 8) + 4) < *(int *)this_00) {
      return -1;
    }
    if (*(int *)(*(long *)(this + 8) + 4) < *(int *)pUVar4) {
      return -1;
    }
    iVar2 = UseInterval::Intersect(this_00,pUVar4);
    if (iVar2 != -1) {
      return iVar2;
    }
    if (*(int *)this_00 < *(int *)pUVar4) {
      this_00 = *(UseInterval **)(this_00 + 8);
      if (this_00 == (UseInterval *)0x0) {
        return -1;
      }
      iVar2 = *(int *)this_00;
      if (*(int *)(*(long *)(param_1 + 8) + 4) < iVar2) {
        return -1;
      }
      if (iVar2 <= iVar1) {
        if (*(int **)pLVar5 == (int *)0x0) {
          if (-1 < iVar2) goto LAB_01656294;
        }
        else if (**(int **)pLVar5 < iVar2) {
LAB_01656294:
          *(UseInterval **)pLVar5 = this_00;
        }
      }
    }
    else {
      pUVar4 = *(UseInterval **)(pUVar4 + 8);
    }
    if (this_00 == (UseInterval *)0x0) {
      return -1;
    }
    if (pUVar4 == (UseInterval *)0x0) {
      return -1;
    }
  } while( true );
}

