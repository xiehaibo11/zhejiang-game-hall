
/* universe::core::Computational::eraseByOwner(void*) */

void __thiscall universe::core::Computational::eraseByOwner(Computational *this,void *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  Computational *pCVar4;
  Computational *pCVar5;
  
                    /* try { // try from 009ff308 to 00aff33b has its CatchHandler @ 009ff308
                       catch() { ... } // from try @ 009ff308 with catch @ 009ff308
                       catch() { ... } // from try @ 009ff340 with catch @ 009ff308 */
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  if (*(long *)(this + 0x10) != 0) {
    pCVar4 = *(Computational **)(this + 8);
    if (this == pCVar4) {
LAB_009ff348:
      if (pCVar4 != this) {
                    /* catch() { ... } // from try @ 009ff33c with catch @ 009ff350 */
        for (pCVar5 = *(Computational **)(pCVar4 + 8); this != pCVar5;
            pCVar5 = *(Computational **)(pCVar5 + 8)) {
          lVar2 = *(long *)(pCVar5 + 0x10);
          if ((lVar2 == 0) || (*(void **)(lVar2 + 0x10) != param_1)) {
            *(undefined8 *)(pCVar5 + 0x10) = 0;
            plVar1 = *(long **)(pCVar4 + 0x10);
            *(long *)(pCVar4 + 0x10) = lVar2;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            pCVar4 = *(Computational **)(pCVar4 + 8);
          }
        }
      }
    }
    else {
      do {
        if ((*(long *)(pCVar4 + 0x10) != 0) &&
           (*(void **)(*(long *)(pCVar4 + 0x10) + 0x10) == param_1)) goto LAB_009ff348;
        pCVar4 = *(Computational **)(pCVar4 + 8);
                    /* try { // try from 009ff33c to 00aff33f has its CatchHandler @ 009ff350 */
                    /* try { // try from 009ff340 to 00aff363 has its CatchHandler @ 009ff308 */
      } while (this != pCVar4);
    }
    if (this != pCVar4) {
      lVar2 = *(long *)this;
      lVar3 = *(long *)pCVar4;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
      **(long **)(lVar2 + 8) = lVar3;
      do {
        pCVar5 = *(Computational **)(pCVar4 + 8);
        *(long *)(this + 0x10) = *(long *)(this + 0x10) + -1;
        plVar1 = *(long **)(pCVar4 + 0x10);
        *(undefined8 *)(pCVar4 + 0x10) = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        operator_delete(pCVar4);
        pCVar4 = pCVar5;
      } while (this != pCVar5);
    }
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  return;
}

