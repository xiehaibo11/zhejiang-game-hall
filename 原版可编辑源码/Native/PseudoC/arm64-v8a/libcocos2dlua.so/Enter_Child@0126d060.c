
/* CProfileIterator::Enter_Child(int) */

void __thiscall CProfileIterator::Enter_Child(CProfileIterator *this,int param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *(long *)(*(long *)this + 0x28);
  bVar1 = lVar2 != 0;
  *(long *)(this + 8) = lVar2;
  if ((param_1 != 0) && (lVar2 != 0)) {
    iVar3 = -param_1;
    do {
      iVar3 = iVar3 + 1;
      lVar2 = *(long *)(lVar2 + 0x30);
      bVar1 = lVar2 != 0;
      *(long *)(this + 8) = lVar2;
      if (iVar3 == 0) break;
    } while (lVar2 != 0);
  }
  if (bVar1) {
    *(long *)this = lVar2;
    *(undefined8 *)(this + 8) = *(undefined8 *)(lVar2 + 0x28);
  }
  return;
}

