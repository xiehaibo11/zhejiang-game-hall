
/* v8::internal::Scope::FinalizeBlockScope() */

Scope * __thiscall v8::internal::Scope::FinalizeBlockScope(Scope *this)

{
  Scope *pSVar1;
  Scope *pSVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((*(int *)(this + 0x2c) == 0) && (((*(ushort *)(this + 0x81) ^ 0xffff) & 0x104) != 0)) {
    pSVar2 = (Scope *)(*(long *)(this + 8) + 0x10);
    pSVar1 = *(Scope **)pSVar2;
    if (*(Scope **)pSVar2 != this) {
      do {
        pSVar2 = pSVar1;
        if (pSVar2 == (Scope *)0x0) goto LAB_014a2090;
        pSVar1 = *(Scope **)(pSVar2 + 0x18);
      } while (*(Scope **)(pSVar2 + 0x18) != this);
      pSVar2 = pSVar2 + 0x18;
    }
    *(undefined8 *)pSVar2 = *(undefined8 *)(this + 0x18);
LAB_014a2090:
    lVar4 = *(long *)(this + 0x10);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(this + 8);
      lVar3 = *(long *)(this + 8);
      lVar4 = *plVar5;
      if (*plVar5 != 0) {
        do {
          lVar6 = lVar4;
          *(long *)(lVar6 + 8) = lVar3;
          lVar3 = *(long *)(this + 8);
          lVar4 = *(long *)(lVar6 + 0x18);
        } while (*(long *)(lVar6 + 0x18) != 0);
        plVar5 = (long *)(lVar6 + 0x18);
      }
      *plVar5 = *(long *)(lVar3 + 0x10);
      *(undefined8 *)(*(long *)(this + 8) + 0x10) = *(undefined8 *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
    }
    lVar4 = *(long *)(this + 0x48);
    if (lVar4 != 0) {
      lVar3 = *(long *)(this + 8);
      **(undefined8 **)(this + 0x50) = *(undefined8 *)(lVar3 + 0x48);
      if (*(long *)(lVar3 + 0x48) == 0) {
        *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(this + 0x50);
      }
      *(long *)(lVar3 + 0x48) = lVar4;
      *(undefined8 *)(this + 0x48) = 0;
      *(Scope **)(this + 0x50) = this + 0x48;
    }
    if (((byte)this[0x81] >> 6 & 1) != 0) {
      *(ushort *)(*(long *)(this + 8) + 0x81) = *(ushort *)(*(long *)(this + 8) + 0x81) | 0x40;
    }
    *(undefined4 *)(this + 0x7c) = 0;
    this = (Scope *)0x0;
  }
  return this;
}

