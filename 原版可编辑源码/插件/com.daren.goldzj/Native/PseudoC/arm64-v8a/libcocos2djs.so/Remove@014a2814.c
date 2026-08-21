
/* v8::base::ThreadedListBase<v8::internal::VariableProxy, v8::base::EmptyBase,
   v8::internal::VariableProxy::UnresolvedNext>::Remove(v8::internal::VariableProxy*) */

undefined8 __thiscall
v8::base::
ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
::Remove(ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
         *this,VariableProxy *param_1)

{
  VariableProxy VVar1;
  VariableProxy *pVVar2;
  VariableProxy *pVVar3;
  long lVar4;
  long lVar5;
  VariableProxy *pVVar6;
  VariableProxy *pVVar7;
  VariableProxy *pVVar8;
  
  pVVar2 = *(VariableProxy **)this;
  if (*(VariableProxy **)this != param_1) {
    do {
      pVVar6 = pVVar2;
      if (pVVar6 == (VariableProxy *)0x0) {
        return 0;
      }
      pVVar7 = *(VariableProxy **)(pVVar6 + 0x10);
      if (pVVar7 == (VariableProxy *)0x0) {
        pVVar2 = (VariableProxy *)0x0;
      }
      else {
        VVar1 = pVVar7[5];
        pVVar2 = pVVar7;
        while ((((byte)VVar1 >> 1 & 1) != 0 &&
               (pVVar2 = *(VariableProxy **)(pVVar2 + 0x10), pVVar2 != (VariableProxy *)0x0))) {
          VVar1 = pVVar2[5];
        }
      }
    } while (pVVar2 != param_1);
    pVVar3 = param_1 + 0x10;
    lVar4 = *(long *)pVVar3;
    pVVar2 = pVVar3;
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0)) {
      do {
        lVar5 = lVar4;
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 == 0) break;
      } while ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0);
      pVVar2 = (VariableProxy *)(lVar5 + 0x10);
    }
    pVVar6 = pVVar6 + 0x10;
    pVVar8 = pVVar6;
    if ((pVVar7 != (VariableProxy *)0x0) && (((byte)pVVar7[5] >> 1 & 1) != 0)) {
      do {
        pVVar8 = pVVar7;
        pVVar7 = *(VariableProxy **)(pVVar8 + 0x10);
        if (pVVar7 == (VariableProxy *)0x0) break;
      } while (((byte)pVVar7[5] >> 1 & 1) != 0);
      pVVar8 = pVVar8 + 0x10;
    }
    *(undefined8 *)pVVar8 = *(undefined8 *)pVVar2;
    lVar4 = *(long *)pVVar3;
    pVVar2 = pVVar3;
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0)) {
      do {
        lVar5 = lVar4;
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 == 0) break;
      } while ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0);
      pVVar2 = (VariableProxy *)(lVar5 + 0x10);
    }
    *(undefined8 *)pVVar2 = 0;
    lVar4 = *(long *)pVVar3;
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0)) {
      do {
        lVar5 = lVar4;
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 == 0) break;
      } while ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0);
      pVVar3 = (VariableProxy *)(lVar5 + 0x10);
    }
    if (pVVar3 != *(VariableProxy **)(this + 8)) {
      return 1;
    }
    lVar4 = *(long *)pVVar6;
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0)) {
      do {
        lVar5 = lVar4;
        lVar4 = *(long *)(lVar5 + 0x10);
        if (lVar4 == 0) break;
      } while ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0);
      pVVar6 = (VariableProxy *)(lVar5 + 0x10);
    }
    *(VariableProxy **)(this + 8) = pVVar6;
    return 1;
  }
  pVVar2 = param_1 + 0x10;
  for (lVar4 = *(long *)pVVar2; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
    if ((*(byte *)(lVar4 + 5) >> 1 & 1) == 0) {
      *(long *)this = lVar4;
      lVar4 = *(long *)pVVar2;
      goto joined_r0x014a2990;
    }
  }
  *(undefined8 *)this = 0;
  *(ThreadedListBase<v8::internal::VariableProxy,v8::base::EmptyBase,v8::internal::VariableProxy::UnresolvedNext>
    **)(this + 8) = this;
  lVar4 = *(long *)pVVar2;
joined_r0x014a2990:
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0)) {
    do {
      lVar5 = lVar4;
      lVar4 = *(long *)(lVar5 + 0x10);
      if (lVar4 == 0) break;
    } while ((*(byte *)(lVar4 + 5) >> 1 & 1) != 0);
    pVVar2 = (VariableProxy *)(lVar5 + 0x10);
  }
  *(long *)pVVar2 = 0;
  return 1;
}

