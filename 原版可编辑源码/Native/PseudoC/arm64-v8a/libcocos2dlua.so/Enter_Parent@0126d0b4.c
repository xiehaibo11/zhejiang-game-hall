
/* CProfileIterator::Enter_Parent() */

void __thiscall CProfileIterator::Enter_Parent(CProfileIterator *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)this + 0x20);
  lVar1 = *(long *)this;
  if (lVar2 != 0) {
    *(long *)this = lVar2;
    lVar1 = lVar2;
  }
  *(undefined8 *)(this + 8) = *(undefined8 *)(lVar1 + 0x28);
  return;
}

