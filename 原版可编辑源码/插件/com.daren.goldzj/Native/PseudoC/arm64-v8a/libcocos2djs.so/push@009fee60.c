
/* universe::core::Computational::push(std::__ndk1::unique_ptr<universe::core::Provided,
   std::__ndk1::default_delete<universe::core::Provided> >) */

void __thiscall universe::core::Computational::push(Computational *this,long *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Computational *pCVar5;
  
                    /* try { // try from 009fee80 to 00afee83 has its CatchHandler @ 009fee94 */
  if (*param_2 == 0) {
    std::__ndk1::mutex::lock((mutex *)(this + 0x18));
    plVar2 = operator_new(0x18);
    lVar4 = *param_2;
    *param_2 = 0;
    plVar2[1] = (long)this;
    plVar2[2] = lVar4;
    lVar4 = *(long *)this;
    *plVar2 = lVar4;
    *(long **)(lVar4 + 8) = plVar2;
    *(long **)this = plVar2;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  else {
                    /* try { // try from 009fee84 to 00afeea7 has its CatchHandler @ 009fee4c */
    iVar1 = *(int *)(*param_2 + 0x18);
    std::__ndk1::mutex::lock((mutex *)(this + 0x18));
                    /* catch() { ... } // from try @ 009fee80 with catch @ 009fee94 */
    lVar4 = *(long *)(this + 0x10);
    if ((lVar4 == 0) || (iVar1 <= *(int *)(*(long *)(*(long *)this + 0x10) + 0x18))) {
      plVar2 = operator_new(0x18);
      lVar3 = *param_2;
      *param_2 = 0;
      plVar2[1] = (long)this;
      plVar2[2] = lVar3;
      lVar3 = *(long *)this;
      *plVar2 = lVar3;
      *(long **)(lVar3 + 8) = plVar2;
      *(long **)this = plVar2;
LAB_009fef38:
      *(long *)(this + 0x10) = lVar4 + 1;
    }
    else {
      for (pCVar5 = *(Computational **)(this + 8); this != pCVar5;
          pCVar5 = *(Computational **)(pCVar5 + 8)) {
        if (*(int *)(*(long *)(pCVar5 + 0x10) + 0x18) <= iVar1) {
          plVar2 = operator_new(0x18);
          *plVar2 = 0;
          lVar3 = *param_2;
          *param_2 = 0;
          plVar2[2] = lVar3;
          lVar3 = *(long *)pCVar5;
          *(long **)(lVar3 + 8) = plVar2;
          *plVar2 = lVar3;
          *(long **)pCVar5 = plVar2;
          plVar2[1] = (long)pCVar5;
          goto LAB_009fef38;
        }
      }
    }
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  std::__ndk1::condition_variable::notify_one((condition_variable *)(this + 0x40));
  return;
}

