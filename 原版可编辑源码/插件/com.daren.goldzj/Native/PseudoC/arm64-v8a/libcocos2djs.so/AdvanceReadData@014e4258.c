
/* v8::internal::RelocIterator::AdvanceReadData() */

void __thiscall v8::internal::RelocIterator::AdvanceReadData(RelocIterator *this)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  
  lVar8 = *(long *)this;
  *(long *)this = lVar8 + -1;
  uVar1 = *(undefined1 *)(lVar8 + -1);
  *(long *)this = lVar8 + -2;
  uVar2 = *(undefined1 *)(lVar8 + -2);
  *(long *)this = lVar8 + -3;
  uVar3 = *(undefined1 *)(lVar8 + -3);
  *(long *)this = lVar8 + -4;
  uVar4 = *(undefined1 *)(lVar8 + -4);
  *(long *)this = lVar8 + -5;
  uVar5 = *(undefined1 *)(lVar8 + -5);
  *(long *)this = lVar8 + -6;
  uVar6 = *(undefined1 *)(lVar8 + -6);
  *(long *)this = lVar8 + -7;
  uVar7 = *(undefined1 *)(lVar8 + -7);
  *(long *)this = lVar8 + -8;
  *(ulong *)(this + 0x20) =
       CONCAT17(*(undefined1 *)(lVar8 + -8),
                CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(
                                                  uVar2,uVar1)))))));
  return;
}

