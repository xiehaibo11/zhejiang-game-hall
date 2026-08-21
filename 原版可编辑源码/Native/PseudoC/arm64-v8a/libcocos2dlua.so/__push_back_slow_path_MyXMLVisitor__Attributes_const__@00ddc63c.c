
/* void std::__ndk1::vector<MyXMLVisitor::Attributes,
   std::__ndk1::allocator<MyXMLVisitor::Attributes>
   >::__push_back_slow_path<MyXMLVisitor::Attributes const&>(MyXMLVisitor::Attributes const&) */

void __thiscall
std::__ndk1::vector<MyXMLVisitor::Attributes,std::__ndk1::allocator<MyXMLVisitor::Attributes>>::
__push_back_slow_path<MyXMLVisitor::Attributes_const&>
          (vector<MyXMLVisitor::Attributes,std::__ndk1::allocator<MyXMLVisitor::Attributes>> *this,
          Attributes *param_1)

{
  ulong uVar1;
  Attributes *pAVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  Attributes *pAVar7;
  Attributes *pAVar8;
  Attributes *pAVar9;
  ulong uVar10;
  Attributes *pAVar11;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 5;
  uVar10 = 0x2aaaaaaaaaaaaaa;
  uVar1 = lVar4 * -0x5555555555555555 + 1;
  if (0x2aaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 5;
  if ((ulong)(lVar5 * -0x5555555555555555) < 0x155555555555555) {
    uVar6 = lVar5 * 0x5555555555555556;
    uVar10 = uVar1;
    if (uVar1 <= uVar6) {
      uVar10 = uVar6;
    }
    if (uVar10 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00ddc6d4;
    }
  }
  pvVar3 = operator_new(uVar10 * 0x60);
LAB_00ddc6d4:
  pAVar7 = (Attributes *)((long)pvVar3 + lVar4 * 0x20);
  allocator<MyXMLVisitor::Attributes>::
  construct<MyXMLVisitor::Attributes,MyXMLVisitor::Attributes_const&>
            ((allocator<MyXMLVisitor::Attributes> *)(this + 0x10),pAVar7,param_1);
  pAVar8 = *(Attributes **)this;
  pAVar9 = *(Attributes **)(this + 8);
  pAVar2 = pAVar7 + 0x60;
  pAVar11 = pAVar8;
  if (pAVar9 != pAVar8) {
    do {
      pAVar9 = pAVar9 + -0x60;
      allocator<MyXMLVisitor::Attributes>::
      construct<MyXMLVisitor::Attributes,MyXMLVisitor::Attributes_const&>
                ((allocator<MyXMLVisitor::Attributes> *)(this + 0x10),pAVar7 + -0x60,pAVar9);
      pAVar7 = pAVar7 + -0x60;
    } while (pAVar8 != pAVar9);
    pAVar8 = *(Attributes **)this;
    pAVar11 = *(Attributes **)(this + 8);
                    /* try { // try from 00ddc720 to 00edc72b has its CatchHandler @ 00ddd280 */
  }
                    /* try { // try from 00ddc730 to 00edc737 has its CatchHandler @ 00ddd27c */
  *(Attributes **)this = pAVar7;
  *(Attributes **)(this + 8) = pAVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar10 * 0x60);
                    /* try { // try from 00ddc738 to 00edc73f has its CatchHandler @ 00ddd278 */
  while (pAVar2 = pAVar11, pAVar2 != pAVar8) {
    if (((byte)pAVar2[-0x48] & 1) != 0) {
      operator_delete(*(void **)(pAVar2 + -0x38));
    }
    pAVar11 = pAVar2 + -0x60;
    if (((byte)pAVar2[-0x60] & 1) != 0) {
      operator_delete(*(void **)(pAVar2 + -0x50));
    }
  }
  if (pAVar8 != (Attributes *)0x0) {
                    /* try { // try from 00ddc740 to 00edc747 has its CatchHandler @ 00ddd274 */
    operator_delete(pAVar8);
    return;
  }
  return;
}

