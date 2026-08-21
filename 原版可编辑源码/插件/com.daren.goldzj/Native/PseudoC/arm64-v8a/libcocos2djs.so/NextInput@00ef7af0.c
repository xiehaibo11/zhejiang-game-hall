
/* v8::internal::OptimizingCompileDispatcher::NextInput(bool) */

undefined8 __thiscall
v8::internal::OptimizingCompileDispatcher::NextInput(OptimizingCompileDispatcher *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  base::Mutex::Lock((Mutex *)(this + 0x1c));
  if (*(int *)(this + 0x14) != 0) {
    iVar1 = *(int *)(this + 0x18);
    iVar2 = *(int *)(this + 0x10);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    uVar4 = *(undefined8 *)(*(long *)(this + 8) + (long)(iVar1 - iVar3 * iVar2) * 8);
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = (iVar1 + 1) / iVar2;
    }
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
    *(int *)(this + 0x18) = (iVar1 + 1) - iVar3 * iVar2;
    if ((!param_1) || (*(int *)(this + 0xa0) != 1)) goto LAB_00ef7b6c;
    FUN_00ef7b88(uVar4,1);
  }
  uVar4 = 0;
LAB_00ef7b6c:
  base::Mutex::Unlock((Mutex *)(this + 0x1c));
  return uVar4;
}

