
void FUN_011dc3d4(long param_1)

{
  ios_base *this;
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  lVar4 = *(long *)(*plVar3 + -0x18);
  if ((((*(long *)((long)plVar3 + lVar4 + 0x28) != 0) &&
       (*(int *)((long)plVar3 + lVar4 + 0x20) == 0)) &&
      ((*(byte *)((long)plVar3 + lVar4 + 9) >> 5 & 1) != 0)) &&
     ((uVar2 = std::uncaught_exception(), (uVar2 & 1) == 0 &&
      (iVar1 = (**(code **)(**(long **)((long)*(long **)(param_1 + 8) +
                                       *(long *)(**(long **)(param_1 + 8) + -0x18) + 0x28) + 0x30))
                         (), iVar1 == -1)))) {
    this = (ios_base *)((long)*(long **)(param_1 + 8) + *(long *)(**(long **)(param_1 + 8) + -0x18))
    ;
    std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 1);
  }
  return;
}

