
/* std::__ndk1::vector<v8::internal::TranslatedFrame,
   std::__ndk1::allocator<v8::internal::TranslatedFrame> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>::reserve
          (vector<v8::internal::TranslatedFrame,std::__ndk1::allocator<v8::internal::TranslatedFrame>>
           *this,ulong param_1)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  TranslatedFrame *pTVar6;
  TranslatedFrame *this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  this_00 = *(TranslatedFrame **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)this_00 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    if (0x2e8ba2e8ba2e8ba < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pTVar6 = *(TranslatedFrame **)(this + 8);
    pvVar3 = operator_new(param_1 * 0x58);
    lVar1 = (long)pTVar6 - (long)this_00;
    lVar5 = (long)pvVar3 + lVar1;
    if (lVar1 != 0) {
      lVar5 = 0;
      do {
        uVar8 = *(undefined8 *)(pTVar6 + lVar5 + -0x40);
        uVar7 = *(undefined8 *)(pTVar6 + lVar5 + -0x48);
        uVar10 = *(undefined8 *)(pTVar6 + lVar5 + -0x50);
        uVar9 = *(undefined8 *)(pTVar6 + lVar5 + -0x58);
        lVar2 = lVar5 + (lVar1 >> 3) * 8;
        *(undefined4 *)((long)pvVar3 + lVar2 + -0x38) = *(undefined4 *)(pTVar6 + lVar5 + -0x38);
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x40) = uVar8;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x48) = uVar7;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x50) = uVar10;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x58) = uVar9;
        lVar4 = lVar5 + -0x58;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x30) = *(undefined8 *)(pTVar6 + lVar5 + -0x30);
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x28) = *(undefined8 *)(pTVar6 + lVar5 + -0x28);
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x20) = *(undefined8 *)(pTVar6 + lVar5 + -0x20);
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x18) = *(undefined8 *)(pTVar6 + lVar5 + -0x18);
        *(undefined8 *)(pTVar6 + lVar5 + -0x28) = 0;
        *(undefined8 *)(pTVar6 + lVar5 + -0x30) = 0;
        *(undefined8 *)(pTVar6 + lVar5 + -0x18) = 0;
        *(undefined8 *)(pTVar6 + lVar5 + -0x20) = 0;
        *(undefined8 *)((long)pvVar3 + lVar2 + -0x10) = *(undefined8 *)(pTVar6 + lVar5 + -0x10);
        *(undefined8 *)((long)pvVar3 + lVar2 + -8) = *(undefined8 *)(pTVar6 + lVar5 + -8);
        *(undefined8 *)(pTVar6 + lVar5 + -0x10) = 0;
        *(undefined8 *)(pTVar6 + lVar5 + -8) = 0;
        lVar5 = lVar4;
      } while ((long)this_00 - (long)pTVar6 != lVar4);
      pTVar6 = *(TranslatedFrame **)this;
      this_00 = *(TranslatedFrame **)(this + 8);
      lVar5 = (long)pvVar3 + lVar4 + (lVar1 >> 3) * 8;
    }
    *(long *)this = lVar5;
    *(long *)(this + 8) = (long)pvVar3 + lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + param_1 * 0x58);
    while (this_00 != pTVar6) {
      this_00 = this_00 + -0x58;
      v8::internal::TranslatedFrame::~TranslatedFrame(this_00);
    }
    if (pTVar6 != (TranslatedFrame *)0x0) {
      operator_delete(pTVar6);
      return;
    }
  }
  return;
}

