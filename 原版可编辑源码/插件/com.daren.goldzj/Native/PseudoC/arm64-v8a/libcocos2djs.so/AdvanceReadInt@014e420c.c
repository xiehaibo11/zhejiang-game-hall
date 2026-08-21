
/* v8::internal::RelocIterator::AdvanceReadInt() */

void __thiscall v8::internal::RelocIterator::AdvanceReadInt(RelocIterator *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *(long *)this;
  *(long *)this = lVar4 + -1;
  uVar1 = *(undefined1 *)(lVar4 + -1);
  *(long *)this = lVar4 + -2;
  uVar2 = *(undefined1 *)(lVar4 + -2);
  *(long *)this = lVar4 + -3;
  uVar3 = *(undefined1 *)(lVar4 + -3);
  *(long *)this = lVar4 + -4;
  *(long *)(this + 0x20) =
       (long)CONCAT13(*(undefined1 *)(lVar4 + -4),CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
  return;
}

