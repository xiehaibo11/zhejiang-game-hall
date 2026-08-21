
/* universe::core::Computational::eraseById(unsigned int) */

undefined4 __thiscall universe::core::Computational::eraseById(Computational *this,uint param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  Computational *pCVar5;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  lVar3 = *(long *)(this + 0x10);
  if (lVar3 != 0) {
    for (pCVar5 = *(Computational **)(this + 8); this != pCVar5;
        pCVar5 = *(Computational **)(pCVar5 + 8)) {
      if ((*(long *)(pCVar5 + 0x10) != 0) && (*(uint *)(*(long *)(pCVar5 + 0x10) + 8) == param_1)) {
        lVar1 = *(long *)pCVar5;
        *(long *)(lVar1 + 8) = *(long *)(pCVar5 + 8);
        **(long **)(pCVar5 + 8) = lVar1;
        *(long *)(this + 0x10) = lVar3 + -1;
        plVar2 = *(long **)(pCVar5 + 0x10);
        *(long *)(pCVar5 + 0x10) = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        operator_delete(pCVar5);
        uVar4 = 1;
        goto LAB_009ff2cc;
      }
    }
  }
  uVar4 = 0;
LAB_009ff2cc:
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  return uVar4;
}

